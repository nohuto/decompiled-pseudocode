/*
 * XREFs of StorPortStallExecution @ 0x1400330D0
 * Callers:
 *     StorPortStallExecutionVrfy @ 0x1401C17A0 (StorPortStallExecutionVrfy.c)
 * Callees:
 *     <none>
 */

void __fastcall StorPortStallExecution(ULONG a1)
{
  KeStallExecutionProcessor(a1);
}
