/*
 * XREFs of HvlDummyInterruptCallback @ 0x14057FB30
 * Callers:
 *     <none>
 * Callees:
 *     HvlPerformEndOfInterrupt @ 0x140475A40 (HvlPerformEndOfInterrupt.c)
 */

__int64 __fastcall HvlDummyInterruptCallback(__int64 a1, __int64 a2)
{
  return HvlPerformEndOfInterrupt(a1, a2);
}
