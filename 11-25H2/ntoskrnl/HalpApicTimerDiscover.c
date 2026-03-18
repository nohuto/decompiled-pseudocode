/*
 * XREFs of HalpApicTimerDiscover @ 0x14055E4A0
 * Callers:
 *     HalpTimerRegisterBuiltinPluginsCommon @ 0x140545FF4 (HalpTimerRegisterBuiltinPluginsCommon.c)
 * Callees:
 *     HalSocRequestApi @ 0x1404AD34C (HalSocRequestApi.c)
 *     HalSocGetAcpiTable @ 0x14055D650 (HalSocGetAcpiTable.c)
 *     HalpTimerRegister @ 0x14055D78C (HalpTimerRegister.c)
 *     HalpApicTimerIsInvariant @ 0x14055E6AC (HalpApicTimerIsInvariant.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 */

__int64 HalpApicTimerDiscover()
{
  __int64 v0; // rcx
  unsigned __int64 v1; // rdi
  __int64 v2; // rcx
  unsigned __int64 v3; // rbx
  int v4; // eax
  int v5; // eax
  int v6; // eax
  int v7; // eax
  int v8; // eax
  int v9; // eax
  __int128 v11; // [rsp+30h] [rbp-49h] BYREF
  _DWORD v12[2]; // [rsp+40h] [rbp-39h] BYREF
  __int64 (__fastcall *v13)(); // [rsp+48h] [rbp-31h]
  __int64 (__fastcall *v14)(); // [rsp+50h] [rbp-29h]
  void (*v15)(); // [rsp+58h] [rbp-21h]
  __int64 (__fastcall *v16)(unsigned __int8 *, int, unsigned int); // [rsp+60h] [rbp-19h]
  __int64 (__fastcall *v17)(); // [rsp+68h] [rbp-11h]
  __int64 (__fastcall *v18)(); // [rsp+88h] [rbp+Fh]
  __int64 *v19; // [rsp+98h] [rbp+1Fh]
  int v20; // [rsp+A0h] [rbp+27h]
  int v21; // [rsp+A4h] [rbp+2Bh]
  unsigned __int64 v22; // [rsp+A8h] [rbp+2Fh]
  int v23; // [rsp+B4h] [rbp+3Bh]
  int v24; // [rsp+C0h] [rbp+47h]
  int v25; // [rsp+C4h] [rbp+4Bh]
  int v26; // [rsp+C8h] [rbp+4Fh]
  __int64 v27; // [rsp+E0h] [rbp+67h] BYREF

  *(_WORD *)((char *)&v27 + 1) = 0;
  v11 = 0LL;
  BYTE3(v27) = 0;
  if ( HalSocGetAcpiTable(1128878145) )
  {
    v1 = 0LL;
    if ( (int)HalSocRequestApi(v0, 0LL, 6, 16LL, &v11) >= 0 )
      v1 = guard_dispatch_icall_no_overrides(v2);
    memset_0(v12, 0, 0x90uLL);
    v27 = 0LL;
    v12[1] = 144;
    v3 = 32LL;
    v21 = 32;
    v19 = &v27;
    v12[0] = 1;
    v26 = 7;
    v20 = 8;
    v23 = 2147;
    if ( (unsigned __int8)HalpApicTimerIsInvariant() )
    {
      v4 = 10;
    }
    else
    {
      v23 = 26723;
      v4 = 11;
    }
    HIDWORD(v27) = v4;
    v5 = v4 - 1;
    if ( v5 )
    {
      v6 = v5 - 1;
      if ( v6 )
      {
        v7 = v6 - 1;
        if ( v7 )
        {
          v8 = v7 - 5;
          if ( v8 )
          {
            v9 = v8 - 1;
            if ( v9 )
            {
              if ( v9 == 1 )
                v3 = 128LL;
              else
                v3 = 1LL;
            }
            else
            {
              v3 = 64LL;
            }
          }
        }
        else
        {
          v3 = 16LL;
        }
      }
      else
      {
        v3 = 8LL;
      }
    }
    else
    {
      v3 = 4LL;
    }
    v25 = 1;
    v24 = 1;
    LOBYTE(v27) = -1;
    v22 = v1 / v3;
    v13 = HalpApicTimerInitialize;
    v14 = HalpApicTimerQueryCounter;
    v15 = xHalTimerWatchdogStop;
    v16 = HalpApicTimerArm;
    v18 = HalpApicTimerSetInterruptVector;
    v17 = HalpApicTimerStop;
    HalpTimerRegister((__int64)v12, 0LL);
  }
  return 0LL;
}
