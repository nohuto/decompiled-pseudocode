/*
 * XREFs of HvlDummyInterruptCallback @ 0x1405827B0
 * Callers:
 *     <none>
 * Callees:
 *     HvlPerformEndOfInterrupt @ 0x14047A2D0 (HvlPerformEndOfInterrupt.c)
 */

__int64 __fastcall HvlDummyInterruptCallback(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  return HvlPerformEndOfInterrupt(a1, a2, a3, a4);
}
