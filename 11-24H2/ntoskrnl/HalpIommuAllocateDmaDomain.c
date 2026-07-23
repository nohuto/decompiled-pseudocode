/*
 * XREFs of HalpIommuAllocateDmaDomain @ 0x140550E04
 * Callers:
 *     HalpIommuInitializeDmar @ 0x14055191C (HalpIommuInitializeDmar.c)
 *     IommuDomainCreate @ 0x140701830 (IommuDomainCreate.c)
 *     IommuDomainCreateEx @ 0x140701860 (IommuDomainCreateEx.c)
 * Callees:
 *     HalpMmAllocCtxAlloc @ 0x14027C378 (HalpMmAllocCtxAlloc.c)
 *     HalpIommuDomainUnmapLogicalRange @ 0x14039C068 (HalpIommuDomainUnmapLogicalRange.c)
 *     HalpGetCpuInfo @ 0x140487890 (HalpGetCpuInfo.c)
 *     Feature_Test57481295__private_IsEnabledDeviceUsageNoInline @ 0x140539A0C (Feature_Test57481295__private_IsEnabledDeviceUsageNoInline.c)
 *     HalpIommuDomainMapLogicalRange @ 0x140551564 (HalpIommuDomainMapLogicalRange.c)
 *     HalpIommuFreeDmaDomain @ 0x1405515F8 (HalpIommuFreeDmaDomain.c)
 *     HalpIommuGetPageTableType @ 0x140551720 (HalpIommuGetPageTableType.c)
 *     HalpIommuCreateDmarPageTable @ 0x14056537C (HalpIommuCreateDmarPageTable.c)
 *     HalpBuddyAllocatorCreateAllocator @ 0x140571CEC (HalpBuddyAllocatorCreateAllocator.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

__int64 __fastcall HalpIommuAllocateDmaDomain(__int64 a1, __int64 a2, _DWORD *a3, __int64 *a4, ULONG_PTR *a5)
{
  int PageTableType; // edi
  void *v8; // rax
  ULONG_PTR v9; // rsi
  __int64 v10; // rdx
  unsigned __int64 v11; // rcx
  _BYTE *v12; // r13
  char v13; // r15
  char v14; // r14
  int v15; // eax
  bool v16; // zf
  unsigned __int32 v17; // eax
  _DWORD *v18; // r8
  __int64 *v19; // rbx
  __int64 v20; // rcx
  unsigned __int64 v21; // r14
  unsigned __int64 v23; // rdx
  unsigned __int8 v24[2]; // [rsp+42h] [rbp-3Eh] BYREF
  unsigned int v25; // [rsp+44h] [rbp-3Ch]
  int v26; // [rsp+48h] [rbp-38h] BYREF
  int v27; // [rsp+4Ch] [rbp-34h]
  int v28; // [rsp+50h] [rbp-30h]
  _DWORD *v29; // [rsp+58h] [rbp-28h] BYREF
  ULONG_PTR *v30; // [rsp+60h] [rbp-20h]
  __int64 v31; // [rsp+68h] [rbp-18h] BYREF
  bool v32; // [rsp+70h] [rbp-10h]
  __int16 v33; // [rsp+71h] [rbp-Fh]
  char v34; // [rsp+73h] [rbp-Dh]

  v26 = 0;
  PageTableType = 0;
  v29 = a3;
  v25 = a1;
  v30 = a5;
  v24[0] = 0;
  v8 = (void *)HalpMmAllocCtxAlloc(a1, 112LL);
  v9 = (ULONG_PTR)v8;
  if ( v8 )
  {
    memset_0(v8, 0, 0x70uLL);
    v10 = v25;
    *(_DWORD *)(v9 + 56) = -1;
    v11 = (unsigned int)v10;
    *(_DWORD *)(v9 + 8) = 4;
    if ( (_DWORD)v10 )
    {
      v11 = (unsigned int)(v10 - 1);
      if ( (_DWORD)v10 == 1 )
      {
        v13 = 0;
        v12 = (_BYTE *)(v9 + 52);
        v15 = 0;
        v14 = 0;
        goto LABEL_14;
      }
      v11 = (unsigned int)(v10 - 2);
      if ( (_DWORD)v10 == 2 )
      {
        v13 = 0;
        *(_BYTE *)(v9 + 52) = 1;
        v14 = 0;
        v12 = (_BYTE *)(v9 + 52);
LABEL_13:
        v15 = 2;
LABEL_14:
        *(_DWORD *)(v9 + 12) = v15;
        *(_QWORD *)(v9 + 80) = v9 + 72;
        *(_QWORD *)(v9 + 72) = v9 + 72;
        v16 = HalpHvIommu == 0;
        *(_DWORD *)(v9 + 8) = v10;
        *(_DWORD *)(v9 + 88) = 0;
        if ( !v16 )
          *(_QWORD *)(v9 + 104) = 0LL;
        if ( (_DWORD)v10 == 2 )
          goto LABEL_17;
        v27 = HalpIommuMaxPageTableDepth;
        v28 = HalpIommuMinPageTableDepth;
        if ( *v12 )
        {
          v27 = 4;
          v28 = 4;
          if ( (unsigned int)Feature_Test57481295__private_IsEnabledDeviceUsageNoInline()
            && HalpGetCpuInfo(0LL, 0LL, 0LL, v24) )
          {
            v10 = v25;
            v11 = (unsigned __int64)v12;
            if ( v24[0] == 2 )
            {
              v27 = 4;
              v28 = 4;
            }
          }
          else
          {
            v10 = v25;
          }
        }
        if ( HalpHvIommu )
        {
          if ( (_DWORD)v10 == 1 )
          {
            *(_DWORD *)(v9 + 48) = 0;
            goto LABEL_40;
          }
          if ( *v12 )
            v16 = HalpHvParaVirtIommuDomain == 0;
          else
            v16 = HalpHvIommuDeviceDomain == 0;
          if ( !v16 )
          {
            if ( (_DWORD)v10 != 3 )
            {
              v17 = _InterlockedIncrement(&HalpIommuDomainId);
              *(_DWORD *)(v9 + 48) = v17;
              if ( !(_DWORD)v10 )
              {
                v31 = v17;
                BYTE4(v31) = *(_BYTE *)(v9 + 52);
                v34 = 0;
                v32 = (a2 & 0x4000000000000000LL) != 0;
                v33 = a2 < 0;
                PageTableType = guard_dispatch_icall_no_overrides(&v31, v10);
                if ( PageTableType < 0 )
                  goto LABEL_64;
                LODWORD(v10) = v25;
              }
              v14 = v13;
              if ( !(_DWORD)v10 )
                v14 = 0;
LABEL_40:
              if ( v14 )
              {
                LOBYTE(v11) = *(_BYTE *)(v9 + 52);
                PageTableType = HalpIommuGetPageTableType(v11, &v26);
                if ( PageTableType < 0 )
                  goto LABEL_64;
                PageTableType = HalpIommuCreateDmarPageTable(v26, v28, v27);
                if ( PageTableType < 0 )
                  goto LABEL_64;
              }
              v18 = v29;
              if ( v29 )
              {
                if ( !v13 && *v29 )
                {
                  PageTableType = -1073741811;
                  goto LABEL_64;
                }
                *(_QWORD *)(v9 + 64) = 0LL;
                if ( *v18 )
                {
                  if ( *v18 != 1 )
                    goto LABEL_7;
                  PageTableType = HalpBuddyAllocatorCreateAllocator((unsigned int)v18[1]);
                  if ( PageTableType < 0 )
                    goto LABEL_64;
                }
                else
                {
                  PageTableType = 0;
                }
              }
              v19 = a4;
              if ( !a4 )
              {
LABEL_58:
                *v30 = v9;
                return (unsigned int)PageTableType;
              }
              while ( 1 )
              {
                v20 = *(_QWORD *)(v9 + 64);
                v21 = v19[1] & 0xFFFFFFFFFFFFF000uLL;
                if ( v20 )
                {
                  PageTableType = guard_dispatch_icall_no_overrides(v20, v19[1] & 0xFFFFFFFFFFFFF000uLL);
                  if ( PageTableType < 0 )
                    break;
                }
                if ( *((_BYTE *)v19 + 24) )
                {
                  PageTableType = HalpIommuDomainMapLogicalRange(v9, 3, v21, (unsigned int)v19[2] << 12, v21);
                  if ( PageTableType < 0 )
                    break;
                }
                v19 = (__int64 *)*v19;
                if ( !v19 )
                  goto LABEL_58;
              }
              while ( a4 != v19 )
              {
                if ( *((_BYTE *)a4 + 24) )
                {
                  v23 = a4[1] & 0xFFFFFFFFFFFFF000uLL;
                  v29 = (_DWORD *)(a4[2] << 12);
                  HalpIommuDomainUnmapLogicalRange(v9, v23, (unsigned __int64 *)&v29, 0);
                }
                a4 = (__int64 *)*a4;
              }
LABEL_64:
              HalpIommuFreeDmaDomain(v9);
              return (unsigned int)PageTableType;
            }
LABEL_39:
            v14 = v13;
            goto LABEL_40;
          }
        }
        else if ( (a2 & 0x4000000000000000LL) == 0 )
        {
          *(_QWORD *)(v9 + 32) = 0LL;
          *(_QWORD *)(v9 + 24) = v9 + 16;
          *(_QWORD *)(v9 + 16) = v9 + 16;
          goto LABEL_39;
        }
LABEL_17:
        PageTableType = -1073741637;
        goto LABEL_64;
      }
      if ( (_DWORD)v10 != 3 )
      {
LABEL_7:
        PageTableType = -1073741585;
        goto LABEL_64;
      }
      v12 = (_BYTE *)(v9 + 52);
      *(_BYTE *)(v9 + 52) = 1;
    }
    else
    {
      v12 = (_BYTE *)(v9 + 52);
    }
    v13 = 1;
    v14 = 1;
    goto LABEL_13;
  }
  return (unsigned int)-1073741670;
}
