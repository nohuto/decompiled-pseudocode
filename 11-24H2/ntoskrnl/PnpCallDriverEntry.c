/*
 * XREFs of PnpCallDriverEntry @ 0x1409C7678
 * Callers:
 *     IopLoadDriver @ 0x1409C90C0 (IopLoadDriver.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     PnpEnableWatchdog @ 0x1409C74F8 (PnpEnableWatchdog.c)
 *     PnpDisableWatchdog @ 0x1409EFFB0 (PnpDisableWatchdog.c)
 */

__int64 __fastcall PnpCallDriverEntry(__int64 a1, __int64 a2)
{
  __int64 v4; // r8
  __int64 v5; // rsi
  __int64 v6; // r8
  __int64 v7; // r9
  unsigned int v8; // ebx
  _QWORD v10[5]; // [rsp+20h] [rbp-28h] BYREF

  v10[0] = 0LL;
  v10[1] = a1;
  v4 = *(_QWORD *)(a1 + 48);
  v10[2] = KeGetCurrentThread();
  v5 = PnpEnableWatchdog(5, (__int64)v10, (const UNICODE_STRING *)(v4 + 24));
  v8 = guard_dispatch_icall_no_overrides(a1, a2, v6, v7);
  if ( v5 )
    PnpDisableWatchdog(v5);
  return v8;
}
