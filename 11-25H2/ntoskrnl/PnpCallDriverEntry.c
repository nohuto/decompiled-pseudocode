/*
 * XREFs of PnpCallDriverEntry @ 0x1409AF444
 * Callers:
 *     IopLoadDriver @ 0x1409B0D50 (IopLoadDriver.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     PnpEnableWatchdog @ 0x140833C84 (PnpEnableWatchdog.c)
 *     PnpDisableWatchdog @ 0x14096E4C0 (PnpDisableWatchdog.c)
 */

__int64 __fastcall PnpCallDriverEntry(__int64 a1)
{
  __int64 v2; // r8
  __int64 v3; // rsi
  __int64 v4; // rdx
  unsigned int v5; // ebx
  _QWORD v7[5]; // [rsp+20h] [rbp-28h] BYREF

  v7[0] = 0LL;
  v7[1] = a1;
  v2 = *(_QWORD *)(a1 + 48);
  v7[2] = KeGetCurrentThread();
  v3 = PnpEnableWatchdog(5, (__int64)v7, (const UNICODE_STRING *)(v2 + 24));
  v5 = guard_dispatch_icall_no_overrides(a1);
  if ( v3 )
    PnpDisableWatchdog(v3, v4);
  return v5;
}
