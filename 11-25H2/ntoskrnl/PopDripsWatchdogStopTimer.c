/*
 * XREFs of PopDripsWatchdogStopTimer @ 0x140753590
 * Callers:
 *     PopDripsWatchdogStopWatchdog @ 0x140A1EDA8 (PopDripsWatchdogStopWatchdog.c)
 * Callees:
 *     KeCancelTimer2 @ 0x14036FE50 (KeCancelTimer2.c)
 */

char __fastcall PopDripsWatchdogStopTimer(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  char result; // al

  result = KeCancelTimer2(a1, 0LL, a3, a4);
  if ( result )
    *(_DWORD *)(a1 + 180) &= ~2u;
  return result;
}
