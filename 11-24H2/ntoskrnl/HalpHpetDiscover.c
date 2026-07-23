/*
 * XREFs of HalpHpetDiscover @ 0x14055E498
 * Callers:
 *     HalpTimerRegisterBuiltinPluginsCommon @ 0x1405461A4 (HalpTimerRegisterBuiltinPluginsCommon.c)
 * Callees:
 *     HalpUnmapVirtualAddress @ 0x1404605A0 (HalpUnmapVirtualAddress.c)
 *     HalMapIoSpace @ 0x14055DAB0 (HalMapIoSpace.c)
 *     HalRegisterPermanentAddressUsage @ 0x14055DB00 (HalRegisterPermanentAddressUsage.c)
 *     HalSocGetAcpiTable @ 0x14055DB80 (HalSocGetAcpiTable.c)
 *     HalpTimerRegister @ 0x14055DCBC (HalpTimerRegister.c)
 *     HalSocRequestConfigurationData @ 0x14055F0DC (HalSocRequestConfigurationData.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     RtlCompareMemory @ 0x1406B4930 (RtlCompareMemory.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

__int64 HalpHpetDiscover()
{
  __int64 AcpiTable; // rax
  __int64 v1; // rdx
  __int64 v2; // r14
  unsigned int *v3; // r15
  unsigned int v4; // esi
  unsigned int v5; // ebx
  unsigned __int64 v6; // rax
  int v7; // r12d
  int v8; // esi
  bool v9; // zf
  unsigned int v10; // esi
  unsigned int v11; // r13d
  __int64 v12; // rbx
  unsigned int *v13; // r15
  int v14; // eax
  unsigned int v15; // ebx
  int v16; // edi
  unsigned __int8 v17; // dl
  int v18; // eax
  char v19; // cl
  int v20; // r9d
  signed __int32 v22[8]; // [rsp+8h] [rbp-100h] BYREF
  int v23; // [rsp+28h] [rbp-E0h] BYREF
  unsigned int v24; // [rsp+30h] [rbp-D8h]
  __int64 v25; // [rsp+38h] [rbp-D0h] BYREF
  __int64 (__fastcall *v26)(); // [rsp+40h] [rbp-C8h]
  __int64 (*v27)(); // [rsp+48h] [rbp-C0h]
  __int64 (__fastcall *v28)(__int64); // [rsp+50h] [rbp-B8h]
  __int64 (__fastcall *v29)(__int64, int, unsigned __int64); // [rsp+58h] [rbp-B0h]
  __int64 (__fastcall *v30)(); // [rsp+60h] [rbp-A8h]
  _OWORD *v31; // [rsp+90h] [rbp-78h]
  int v32; // [rsp+98h] [rbp-70h]
  int v33; // [rsp+9Ch] [rbp-6Ch]
  __int64 v34; // [rsp+A0h] [rbp-68h]
  int v35; // [rsp+A8h] [rbp-60h]
  int v36; // [rsp+ACh] [rbp-5Ch]
  int v37; // [rsp+B0h] [rbp-58h]
  int v38; // [rsp+B4h] [rbp-54h]
  int v39; // [rsp+B8h] [rbp-50h]
  int v40; // [rsp+BCh] [rbp-4Ch]
  int v41; // [rsp+C0h] [rbp-48h]
  int v42; // [rsp+C4h] [rbp-44h]
  __int64 v43; // [rsp+C8h] [rbp-40h]
  unsigned int *v44; // [rsp+D0h] [rbp-38h]
  unsigned __int64 v45; // [rsp+D8h] [rbp-30h]
  _OWORD v46[2]; // [rsp+E0h] [rbp-28h] BYREF
  __int64 v47; // [rsp+100h] [rbp-8h]

  LOWORD(v23) = 0;
  memset(v46, 0, sizeof(v46));
  v47 = 0LL;
  AcpiTable = HalSocGetAcpiTable(1413828680);
  v2 = AcpiTable;
  if ( AcpiTable )
  {
    if ( !*(_BYTE *)(AcpiTable + 40) && (int)HalSocRequestConfigurationData(1LL, v1, (char *)&v23 + 1) >= 0 )
    {
      HalpHpetPhysicalAddress = *(LARGE_INTEGER *)(v2 + 44);
      if ( !HalpHpetPhysicalAddress.HighPart || BYTE1(v23) )
      {
        v44 = (unsigned int *)HalMapIoSpace(HalpHpetPhysicalAddress, 0x400uLL, MmNonCached);
        v3 = v44;
        if ( v44 )
        {
          if ( HalRegisterPermanentAddressUsage(HalpHpetPhysicalAddress, 0x400u) >= 0 )
          {
            v4 = *v3;
            v5 = HIWORD(*v3);
            if ( v5 )
            {
              if ( v5 != 0xFFFF )
              {
                HalpHpetComparatorLatchDelay = 2;
                if ( RtlCompareMemory((const void *)(v2 + 10), "VMWARE", 6uLL) == 6 )
                  HalpHpetComparatorLatchDelay = 1;
                if ( (v4 & 0x8000) != 0 )
                  HalpHpetLegacyInterrupts = 1;
                v6 = (((unsigned __int64)v3[1] >> 1) + 1000000000000000LL) / v3[1];
                v45 = v6;
                if ( v5 == 4318 )
                {
                  HalpHpetLegacyInterrupts = 0;
                  goto LABEL_43;
                }
                v7 = 1;
                v8 = (v4 >> 8) & 0x1F;
                v9 = v8 == -1;
                v10 = v8 + 1;
                v11 = 0;
                if ( !v9 )
                {
                  v12 = (unsigned int)v6;
                  v13 = v3 + 64;
                  v43 = (unsigned int)v6;
                  while ( 1 )
                  {
                    memset_0(&v25, 0, 0x90uLL);
                    v31 = v46;
                    v47 = 0LL;
                    v26 = HalpHpetInitialize;
                    v34 = v12;
                    v28 = HalpHpetAcknowledgeInterrupt;
                    memset((char *)v46 + 4, 0, 20);
                    v25 = 0x9000000001LL;
                    v29 = HalpHpetArmTimer;
                    v30 = HalpHpetStop;
                    v14 = (v11 + 1) | (*(unsigned __int8 *)(v2 + 52) << 16);
                    LODWORD(v46[0]) = v11;
                    v42 = v14;
                    *((LARGE_INTEGER *)&v46[1] + 1) = HalpHpetPhysicalAddress;
                    v15 = *v13 & 0xFFFFBFFB;
                    v33 = 31;
                    v32 = 40;
                    v40 = 1;
                    v39 = 1;
                    v41 = 3;
                    v35 = 1;
                    v36 = 48;
                    *v13 = v15;
                    v24 = v11 + 1;
                    _InterlockedOr(v22, 0);
                    if ( (v15 & 0x10) != 0 )
                    {
                      v16 = 112;
                      BYTE12(v46[0]) = 1;
                      v36 = 112;
                    }
                    else
                    {
                      v16 = v36;
                    }
                    if ( (v15 & 0x20) != 0 )
                    {
                      *v13 = v15 | 0x100;
                      _InterlockedOr(v22, 0);
                      v15 = *v13;
                      if ( (*v13 & 0x100) == 0 )
                        goto LABEL_41;
                      v16 = v36;
                    }
                    v17 = 0;
                    LODWORD(v47) = v15;
                    if ( HalpHpetLegacyInterrupts )
                    {
                      v18 = HalSocRequestConfigurationData(2LL, 0LL, &v23);
                      v19 = v23;
                      if ( v18 < 0 )
                        v19 = 0;
                      LOBYTE(v23) = v19;
                      if ( !v11 )
                      {
                        v16 |= 0x100u;
                        v36 = v16;
                        v37 = v19 == 0 ? 2 : 0;
                        v7 |= 4u;
                        goto LABEL_39;
                      }
                      if ( v11 == 1 )
                      {
                        v37 = 8;
                        v16 |= 0x100u;
                        v36 = v16;
                        v7 |= 0x100u;
LABEL_39:
                        if ( (v16 & 0xF00) != 0 )
                          HalpTimerRegister((__int64)&v25, 0LL);
                        goto LABEL_41;
                      }
                      if ( (v15 & 0x8000) != 0 )
                        goto LABEL_39;
                    }
                    else
                    {
                      v20 = ~v7 & v13[1];
                      if ( v20 )
                      {
                        while ( v17 < 0x20u )
                        {
                          if ( ((1 << v17) & v20) != 0 )
                          {
                            LOWORD(v16) = v36 | 0x200;
                            v36 |= 0x200u;
                            v38 = v17 + (unsigned __int16)HalpHpetGsiOffset;
                            v7 |= 1 << v17;
                            BYTE4(v46[0]) = v17;
                            goto LABEL_39;
                          }
                          ++v17;
                        }
                        LOWORD(v16) = v36;
                        goto LABEL_39;
                      }
                    }
LABEL_41:
                    v11 = v24;
                    v13 += 8;
                    v12 = v43;
                    if ( v24 >= v10 )
                    {
                      v3 = v44;
                      break;
                    }
                  }
                }
LABEL_43:
                memset_0(&v25, 0, 0x90uLL);
                v25 = 0x9000000001LL;
                v47 = 0LL;
                v34 = (unsigned int)v45;
                memset(v46, 0, sizeof(v46));
                LODWORD(v46[0]) = -1;
                v31 = v46;
                v26 = HalpHpetInitialize;
                v27 = HalpHpetQueryCounter;
                v28 = HalpHpetAcknowledgeInterrupt;
                v29 = HalpHpetArmTimer;
                v42 = *(unsigned __int8 *)(v2 + 52) << 16;
                v33 = 32;
                v32 = 40;
                v41 = 3;
                v35 = 1;
                v36 = 2;
                HalpTimerRegister((__int64)&v25, 0LL);
              }
            }
          }
          HalpUnmapVirtualAddress((unsigned __int64)v3, 1LL, 0LL);
        }
      }
    }
  }
  return 0LL;
}
