/*
 * XREFs of EmonPreOverflowHandler @ 0x140374310
 * Callers:
 *     <none>
 * Callees:
 *     HalpInterruptEnablePerformanceEvents @ 0x140373A20 (HalpInterruptEnablePerformanceEvents.c)
 */

__int64 __fastcall EmonPreOverflowHandler(__int64 a1, __int64 a2, __int64 a3)
{
  return HalpInterruptEnablePerformanceEvents(1LL, a2, a3);
}
