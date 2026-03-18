/*
 * XREFs of SymCryptFdefModElementGetValue @ 0x140535C4C
 * Callers:
 *     SymCryptModElementGetValue @ 0x140523BF0 (SymCryptModElementGetValue.c)
 * Callees:
 *     xHalTimerWatchdogStop @ 0x140493990 (xHalTimerWatchdogStop.c)
 *     SymCryptFdefRawGetValue @ 0x14053751C (SymCryptFdefRawGetValue.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall SymCryptFdefModElementGetValue(
        __int64 a1,
        __int64 a2,
        int a3,
        int a4,
        int a5,
        __int64 a6,
        __int64 a7)
{
  int v7; // esi
  int v12; // eax

  v7 = *(_DWORD *)(a1 + 4);
  xHalTimerWatchdogStop();
  v12 = guard_dispatch_icall_no_overrides(a1, a2, a6, a7);
  return SymCryptFdefRawGetValue(v12, v7, a3, a4, a5);
}
