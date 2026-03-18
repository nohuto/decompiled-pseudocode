/*
 * XREFs of ExDeleteWakeTimerInfo @ 0x1406572B4
 * Callers:
 *     PopFreeWakeSource @ 0x140AA03DC (PopFreeWakeSource.c)
 *     PopTransitionSystemPowerStateEx @ 0x140B667DC (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

void __fastcall ExDeleteWakeTimerInfo(void *a1)
{
  ExFreePoolWithTag(a1, 0x53577254u);
}
