/*
 * XREFs of HalpApicTimerDiscover @ 0x140560DA0
 * Callers:
 *     HalpTimerRegisterBuiltinPluginsCommon @ 0x1405488E4 (HalpTimerRegisterBuiltinPluginsCommon.c)
 * Callees:
 *     HalSocRequestApi @ 0x1404AE160 (HalSocRequestApi.c)
 *     HalSocGetAcpiTable @ 0x14055FF50 (HalSocGetAcpiTable.c)
 *     HalpTimerRegister @ 0x14056008C (HalpTimerRegister.c)
 *     HalpApicTimerIsInvariant @ 0x140560FAC (HalpApicTimerIsInvariant.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 */

__int64 HalpApicTimerDiscover()
{
  __int64 v0; // rcx
  unsigned __int64 v1; // rdi
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r9
  unsigned __int64 v6; // rbx
  int v7; // eax
  int v8; // eax
  int v9; // eax
  int v10; // eax
  int v11; // eax
  int v12; // eax
  __int128 v14; // [rsp+30h] [rbp-49h] BYREF
  _DWORD v15[2]; // [rsp+40h] [rbp-39h] BYREF
  __int64 (__fastcall *v16)(); // [rsp+48h] [rbp-31h]
  __int64 (__fastcall *v17)(); // [rsp+50h] [rbp-29h]
  void (*v18)(); // [rsp+58h] [rbp-21h]
  __int64 (__fastcall *v19)(unsigned __int8 *, unsigned int, __int64); // [rsp+60h] [rbp-19h]
  __int64 (__fastcall *v20)(); // [rsp+68h] [rbp-11h]
  __int64 (__fastcall *v21)(); // [rsp+88h] [rbp+Fh]
  __int64 *v22; // [rsp+98h] [rbp+1Fh]
  int v23; // [rsp+A0h] [rbp+27h]
  int v24; // [rsp+A4h] [rbp+2Bh]
  unsigned __int64 v25; // [rsp+A8h] [rbp+2Fh]
  int v26; // [rsp+B4h] [rbp+3Bh]
  int v27; // [rsp+C0h] [rbp+47h]
  int v28; // [rsp+C4h] [rbp+4Bh]
  int v29; // [rsp+C8h] [rbp+4Fh]
  __int64 v30; // [rsp+E0h] [rbp+67h] BYREF

  *(_WORD *)((char *)&v30 + 1) = 0;
  v14 = 0LL;
  BYTE3(v30) = 0;
  if ( HalSocGetAcpiTable(1128878145) )
  {
    v1 = 0LL;
    if ( (int)HalSocRequestApi(v0, 0LL, 6, 16LL, &v14) >= 0 )
      v1 = guard_dispatch_icall_no_overrides(v3, v2, v4, v5);
    memset_0(v15, 0, 0x90uLL);
    v30 = 0LL;
    v15[1] = 144;
    v6 = 32LL;
    v24 = 32;
    v22 = &v30;
    v15[0] = 1;
    v29 = 7;
    v23 = 8;
    v26 = 2147;
    if ( (unsigned __int8)HalpApicTimerIsInvariant() )
    {
      v7 = 10;
    }
    else
    {
      v26 = 26723;
      v7 = 11;
    }
    HIDWORD(v30) = v7;
    v8 = v7 - 1;
    if ( v8 )
    {
      v9 = v8 - 1;
      if ( v9 )
      {
        v10 = v9 - 1;
        if ( v10 )
        {
          v11 = v10 - 5;
          if ( v11 )
          {
            v12 = v11 - 1;
            if ( v12 )
            {
              if ( v12 == 1 )
                v6 = 128LL;
              else
                v6 = 1LL;
            }
            else
            {
              v6 = 64LL;
            }
          }
        }
        else
        {
          v6 = 16LL;
        }
      }
      else
      {
        v6 = 8LL;
      }
    }
    else
    {
      v6 = 4LL;
    }
    v28 = 1;
    v27 = 1;
    LOBYTE(v30) = -1;
    v25 = v1 / v6;
    v16 = HalpApicTimerInitialize;
    v17 = HalpApicTimerQueryCounter;
    v18 = xHalTimerWatchdogStop;
    v19 = HalpApicTimerArm;
    v21 = HalpApicTimerSetInterruptVector;
    v20 = HalpApicTimerStop;
    HalpTimerRegister((__int64)v15, 0LL);
  }
  return 0LL;
}
