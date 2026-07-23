/*
 * XREFs of SymCryptFdefModElementGetValue @ 0x1405300EC
 * Callers:
 *     SymCryptModElementGetValue @ 0x140521508 (SymCryptModElementGetValue.c)
 * Callees:
 *     xHalTimerWatchdogStop @ 0x14048E2E0 (xHalTimerWatchdogStop.c)
 *     SymCryptFdefRawGetValue @ 0x1405319BC (SymCryptFdefRawGetValue.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall SymCryptFdefModElementGetValue(__int64 a1, __int64 a2, int a3, int a4, int a5)
{
  int v5; // esi
  int v10; // eax

  v5 = *(_DWORD *)(a1 + 4);
  xHalTimerWatchdogStop();
  v10 = guard_dispatch_icall_no_overrides(a1, a2);
  return SymCryptFdefRawGetValue(v10, v5, a3, a4, a5);
}
