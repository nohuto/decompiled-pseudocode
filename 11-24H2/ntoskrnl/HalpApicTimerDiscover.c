/*
 * XREFs of HalpApicTimerDiscover @ 0x14055E9D0
 * Callers:
 *     HalpTimerRegisterBuiltinPluginsCommon @ 0x1405461A4 (HalpTimerRegisterBuiltinPluginsCommon.c)
 * Callees:
 *     HalSocRequestApi @ 0x1404A8A70 (HalSocRequestApi.c)
 *     HalSocGetAcpiTable @ 0x14055DB80 (HalSocGetAcpiTable.c)
 *     HalpTimerRegister @ 0x14055DCBC (HalpTimerRegister.c)
 *     HalpApicTimerIsInvariant @ 0x14055EBDC (HalpApicTimerIsInvariant.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

__int64 HalpApicTimerDiscover()
{
  __int64 v0; // rcx
  unsigned __int64 v1; // rdi
  __int64 v2; // rdx
  __int64 v3; // rcx
  unsigned __int64 v4; // rbx
  int v5; // eax
  int v6; // eax
  int v7; // eax
  int v8; // eax
  int v9; // eax
  int v10; // eax
  __int128 v12; // [rsp+30h] [rbp-49h] BYREF
  _DWORD v13[2]; // [rsp+40h] [rbp-39h] BYREF
  __int64 (__fastcall *v14)(); // [rsp+48h] [rbp-31h]
  __int64 (__fastcall *v15)(); // [rsp+50h] [rbp-29h]
  void (*v16)(); // [rsp+58h] [rbp-21h]
  __int64 (__fastcall *v17)(unsigned __int8 *, int, unsigned int); // [rsp+60h] [rbp-19h]
  __int64 (__fastcall *v18)(); // [rsp+68h] [rbp-11h]
  __int64 (__fastcall *v19)(); // [rsp+88h] [rbp+Fh]
  __int64 *v20; // [rsp+98h] [rbp+1Fh]
  int v21; // [rsp+A0h] [rbp+27h]
  int v22; // [rsp+A4h] [rbp+2Bh]
  unsigned __int64 v23; // [rsp+A8h] [rbp+2Fh]
  int v24; // [rsp+B4h] [rbp+3Bh]
  int v25; // [rsp+C0h] [rbp+47h]
  int v26; // [rsp+C4h] [rbp+4Bh]
  int v27; // [rsp+C8h] [rbp+4Fh]
  __int64 v28; // [rsp+E0h] [rbp+67h] BYREF

  *(_WORD *)((char *)&v28 + 1) = 0;
  v12 = 0LL;
  BYTE3(v28) = 0;
  if ( HalSocGetAcpiTable(1128878145) )
  {
    v1 = 0LL;
    if ( (int)HalSocRequestApi(v0, 0LL, 6, 16LL, &v12) >= 0 )
      v1 = guard_dispatch_icall_no_overrides(v3, v2);
    memset_0(v13, 0, 0x90uLL);
    v28 = 0LL;
    v13[1] = 144;
    v4 = 32LL;
    v22 = 32;
    v20 = &v28;
    v13[0] = 1;
    v27 = 7;
    v21 = 8;
    v24 = 2147;
    if ( (unsigned __int8)HalpApicTimerIsInvariant() )
    {
      v5 = 10;
    }
    else
    {
      v24 = 26723;
      v5 = 11;
    }
    HIDWORD(v28) = v5;
    v6 = v5 - 1;
    if ( v6 )
    {
      v7 = v6 - 1;
      if ( v7 )
      {
        v8 = v7 - 1;
        if ( v8 )
        {
          v9 = v8 - 5;
          if ( v9 )
          {
            v10 = v9 - 1;
            if ( v10 )
            {
              if ( v10 == 1 )
                v4 = 128LL;
              else
                v4 = 1LL;
            }
            else
            {
              v4 = 64LL;
            }
          }
        }
        else
        {
          v4 = 16LL;
        }
      }
      else
      {
        v4 = 8LL;
      }
    }
    else
    {
      v4 = 4LL;
    }
    v26 = 1;
    v25 = 1;
    LOBYTE(v28) = -1;
    v23 = v1 / v4;
    v14 = HalpApicTimerInitialize;
    v15 = HalpApicTimerQueryCounter;
    v16 = xHalTimerWatchdogStop;
    v17 = HalpApicTimerArm;
    v19 = HalpApicTimerSetInterruptVector;
    v18 = HalpApicTimerStop;
    HalpTimerRegister((__int64)v13, 0LL);
  }
  return 0LL;
}
