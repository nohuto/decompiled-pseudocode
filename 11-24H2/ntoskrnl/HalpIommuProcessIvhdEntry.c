/*
 * XREFs of HalpIommuProcessIvhdEntry @ 0x14056F048
 * Callers:
 *     HalpIommuHsaDiscover @ 0x140C17508 (HalpIommuHsaDiscover.c)
 * Callees:
 *     RtlClearBits @ 0x1402EA360 (RtlClearBits.c)
 *     ExtEnvAllocateMemory @ 0x14055D660 (ExtEnvAllocateMemory.c)
 *     HalRegisterPermanentAddressUsage @ 0x14055DB00 (HalRegisterPermanentAddressUsage.c)
 *     HalpIommuProcessDeviceEntries @ 0x14056ED68 (HalpIommuProcessDeviceEntries.c)
 *     HsaProcessIvmd @ 0x140570A10 (HsaProcessIvmd.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     ExtEnvRegisterIommu @ 0x140C12D0C (ExtEnvRegisterIommu.c)
 */

int __fastcall HalpIommuProcessIvhdEntry(__int64 a1, __int64 a2, char *a3)
{
  char v6; // si
  bool v7; // cf
  __int64 *i; // rcx
  unsigned __int64 v9; // rdi
  __int16 v10; // r8
  __int64 v11; // r9
  __int16 v12; // r8
  __int16 v13; // r8
  __int16 v14; // bx
  int result; // eax
  __int64 v16; // rcx
  __int64 v17; // r14
  _QWORD *v18; // rax
  __int64 v19; // rcx
  unsigned int v20; // r8d
  int v21; // edx
  unsigned __int64 v22; // rdi
  __int64 v23; // rcx
  unsigned int *v24; // r13
  unsigned int **v25; // r12
  unsigned int v26; // ebx
  int v27; // edi
  unsigned int v28; // edx
  __int64 v29; // rdx
  __int64 v30; // r8
  unsigned int v31; // ecx
  __int64 v32; // rcx
  _QWORD *v33; // rdx
  _QWORD *v34; // rax
  __int64 v35; // [rsp+20h] [rbp-E0h] BYREF
  __int64 v36; // [rsp+28h] [rbp-D8h] BYREF
  unsigned int *v37; // [rsp+30h] [rbp-D0h] BYREF
  _QWORD *v38; // [rsp+38h] [rbp-C8h] BYREF
  _DWORD v39[2]; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v40; // [rsp+48h] [rbp-B8h]
  int v41; // [rsp+50h] [rbp-B0h]
  int v42; // [rsp+54h] [rbp-ACh]
  _QWORD *v43; // [rsp+78h] [rbp-88h]
  _QWORD *v44; // [rsp+80h] [rbp-80h]
  int v45; // [rsp+88h] [rbp-78h]
  int v46; // [rsp+8Ch] [rbp-74h]
  int v47; // [rsp+90h] [rbp-70h]
  int v48; // [rsp+94h] [rbp-6Ch]
  int v49; // [rsp+98h] [rbp-68h]
  int v50; // [rsp+9Ch] [rbp-64h]
  _QWORD v51[24]; // [rsp+B0h] [rbp-50h] BYREF
  _QWORD v52[26]; // [rsp+170h] [rbp+70h] BYREF
  char v53; // [rsp+258h] [rbp+158h] BYREF
  char *v54; // [rsp+260h] [rbp+160h]
  char v55; // [rsp+268h] [rbp+168h] BYREF

  v54 = a3;
  v6 = 0;
  v36 = 0LL;
  memset_0(v52, 0, 0x98uLL);
  memset_0(v51, 0, 0xB8uLL);
  v7 = *(_WORD *)(a2 + 2) < 0x28u;
  v38 = 0LL;
  v35 = 0LL;
  v37 = 0LL;
  *a3 = 0;
  v55 = 0;
  v53 = 0;
  if ( v7 || *(_BYTE *)a2 != 17 && *(_BYTE *)a2 != 64 )
    return -1073741811;
  for ( i = (__int64 *)HsaIvhdList; i != &HsaIvhdList; i = (__int64 *)*i )
  {
    if ( i[2] == *(_QWORD *)(a2 + 8) )
      return 0;
  }
  v9 = *(_QWORD *)(a2 + 24);
  v10 = (4 * v9) & 8 | (16 * ((v9 >> 45) & 1));
  if ( ((*(_BYTE *)(a2 + 1) >> 4) & ((v9 & 0x600000000008LL) == 0x600000000008LL)) != 0 )
    v10 |= 1u;
  v11 = HIDWORD(*(_QWORD *)(a2 + 24));
  v12 = (((*(_BYTE *)(a2 + 1) & 0x10) != 0) << 6) | v10 | 4;
  if ( ((unsigned __int8)-((v9 & 0xC000) != 0) & ((v12 & 1) != 0 && (v9 & 0x20000000012LL) == 0x20000000012LL)) == 0
    || ((unsigned __int8)v11 & 0x1Fu) < 8 )
  {
    v12 &= ~4u;
  }
  v13 = v12 | 0x20;
  if ( ((unsigned __int8)-((v9 & 0xC000) != 0) & ((v13 & 1) != 0 && (v9 & 0x1000000000010LL) == 0x1000000000010LL)) == 0
    || ((unsigned __int8)v11 & 0x1Fu) < 8 )
  {
    v13 &= ~0x20u;
  }
  v14 = v13 | 2;
  if ( (v9 & 0x84) != 0x84 )
    v14 = v13;
  if ( (v14 & 3) == 0 )
    return 0;
  result = HsaProcessIvmd(a2, a1 + *(unsigned int *)(a1 + 4), &v53, &v37);
  if ( result >= 0 )
  {
    result = ExtEnvAllocateMemory(v16, 0x100u, &v35);
    if ( result >= 0 )
    {
      v17 = v35;
      v18 = (_QWORD *)(v35 + 224);
      *(_QWORD *)(v35 + 232) = v35 + 224;
      *v18 = v18;
      *(_BYTE *)(v17 + 16) = *(_BYTE *)(a2 + 1);
      *(_WORD *)(v17 + 18) = v14;
      *(_QWORD *)(v17 + 8) = *(_QWORD *)(a2 + 8);
      *(_DWORD *)(v17 + 160) = *(unsigned __int16 *)(a2 + 16);
      *(_DWORD *)(v17 + 164) = *(unsigned __int8 *)(a2 + 5);
      v19 = *(_DWORD *)(v17 + 168) ^ ((unsigned __int8)*(_DWORD *)(v17 + 168) ^ (unsigned __int8)(*(unsigned __int16 *)(a2 + 4) >> 3)) & 0x1Fu;
      *(_DWORD *)(v17 + 168) = v19;
      *(_DWORD *)(v17 + 168) = v19 ^ ((unsigned __int8)v19 ^ (unsigned __int8)(32 * *(_WORD *)(a2 + 4))) & 0xE0;
      result = ExtEnvAllocateMemory(v19, 0x2000u, &v36);
      if ( result >= 0 )
      {
        *(_QWORD *)(v17 + 192) = v36;
        *(_DWORD *)(v17 + 184) = 0x10000;
        RtlClearBits((PRTL_BITMAP)(v17 + 184), 0, 0x10000u);
        *(_QWORD *)(v17 + 152) = 0LL;
        *(_QWORD *)(v17 + 248) = v17 + 240;
        *(_QWORD *)(v17 + 240) = v17 + 240;
        result = HalpIommuProcessDeviceEntries(v17, a2, &v55);
        if ( result >= 0 )
        {
          result = HalRegisterPermanentAddressUsage(*(LARGE_INTEGER *)(v17 + 8), 0x2040u);
          if ( result >= 0 )
          {
            memset_0(v39, 0, 0x68uLL);
            v20 = 2076;
            v46 = *(_DWORD *)(v17 + 160);
            v47 = *(_DWORD *)(v17 + 164);
            v48 = *(_DWORD *)(v17 + 168);
            v43 = v52;
            v44 = v51;
            v52[0] = HsaConfigureSettings;
            v52[1] = HsaInitializeIommu;
            v39[0] = 1;
            v39[1] = 104;
            v40 = v17;
            v41 = 0;
            v45 = 1;
            v42 = 2076;
            if ( (v14 & 1) != 0 )
            {
              v52[4] = HsaCreateDevice;
              v52[5] = HsaDeleteDevice;
              v51[0] = HsaFindDevice;
              v51[5] = HsaFlushTb;
              v51[6] = HsaFlushDeviceTbOnly;
              v51[19] = HsaQueryAcpiDeviceMapping;
              v51[20] = HsaGetRidAcpiMapCount;
              if ( !v53 )
              {
                v51[17] = HsaEnumerateIvmdDevices;
                v20 = 2332;
                v51[18] = HsaProcessReservedDomains;
                v52[8] = HsaAttachDeviceDomain;
                v52[9] = HsaDetachDeviceDomain;
                if ( (v14 & 0x20) != 0 )
                  v20 = 2460;
              }
              v20 |= 0x6000u;
              v52[10] = HsaFlushDomainTb;
              v52[11] = xHalTimerWatchdogStop;
              v52[12] = xHalTimerWatchdogStop;
              v42 = v20;
            }
            if ( (v20 & 0x80u) == 0 )
              LOBYTE(v14) = v14 & 0xDF;
            v22 = HIDWORD(v9);
            v21 = 0x40000;
            LOBYTE(v22) = v22 & 0x1F;
            v23 = (unsigned int)(v22 + 1);
            if ( (unsigned int)((1 << (v22 + 1)) - 1) < 0x40000 )
              v21 = (1 << (v22 + 1)) - 1;
            v49 = v21;
            if ( (v14 & 4) != 0 )
            {
              v20 |= 0x20020u;
              v42 = v20;
            }
            if ( (v14 & 0x24) != 0 )
            {
              v51[1] = HsaSetDeviceSvmCapabilities;
              v51[22] = HsaLegacySetDeviceSvmCapabilities;
              v51[2] = HsaSetDevicePasidTable;
              v51[3] = HsaGrowPasidTable;
              v51[4] = HsaSetPasidAddressSpace;
              v23 = (__int64)HsaMarkHiberRegions;
              v51[14] = HsaMarkHiberRegions;
            }
            if ( (v14 & 2) != 0 )
            {
              v52[15] = &HsaUpdateRemappingTableEntry;
              v20 = v20 & 0xFFFFFFAF | 0x40;
              v42 = v20;
              v52[16] = HsaInvalidateRemappingTableEntry;
              v52[17] = HsaUpdateRemappingDestination;
              v52[13] = HsaAllocateRemappingTableEntry;
              v23 = (__int64)HsaFreeRemappingTableEntry;
              v52[14] = HsaFreeRemappingTableEntry;
            }
            if ( (v14 & 4) != 0 )
            {
              v51[9] = HsaSetMessageInterruptRouting;
              v51[10] = HsaEnableInterrupt;
              v51[11] = HsaDisableInterrupt;
              v51[12] = HsaHandleInterrupt;
              v51[7] = HsaDismissPageFault;
              v51[8] = HsaGetPageFault;
              v42 = v20 | 2;
            }
            v24 = v37;
            v25 = (unsigned int **)(v17 + 216);
            v26 = *v37;
            v27 = 65534 - *v37;
            v28 = 16 * *v37 + 8;
            v50 = v27;
            result = ExtEnvAllocateMemory(v23, v28, (_QWORD *)(v17 + 216));
            if ( result >= 0 )
            {
              v29 = 0LL;
              **v25 = v26;
              if ( v26 )
              {
                v30 = 0LL;
                do
                {
                  v31 = v27 + v29;
                  v29 = (unsigned int)(v29 + 1);
                  v30 += 4LL;
                  (*v25)[v30 - 2] = v31;
                }
                while ( (unsigned int)v29 < v26 );
              }
              *(_DWORD *)(v17 + 200) = 65534;
              *(_QWORD *)(v17 + 208) = v24;
              result = ExtEnvRegisterIommu(v39, v29, 0LL);
              if ( result >= 0 )
              {
                result = ExtEnvAllocateMemory(v32, 0x18u, &v38);
                if ( result >= 0 )
                {
                  v33 = v38;
                  v38[2] = *(_QWORD *)(a2 + 8);
                  v34 = (_QWORD *)qword_140F8EAC8;
                  if ( *(__int64 **)qword_140F8EAC8 != &HsaIvhdList )
                    __fastfail(3u);
                  *v33 = &HsaIvhdList;
                  v33[1] = v34;
                  *v34 = v33;
                  qword_140F8EAC8 = (__int64)v33;
                  if ( v53 || v55 )
                    v6 = 1;
                  *v54 = v6;
                  return 0;
                }
              }
            }
          }
        }
      }
    }
  }
  return result;
}
