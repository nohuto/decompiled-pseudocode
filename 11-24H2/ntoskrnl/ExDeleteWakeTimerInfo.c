/*
 * XREFs of ExDeleteWakeTimerInfo @ 0x1406559B4
 * Callers:
 *     PopFreeWakeSource @ 0x140A9B76C (PopFreeWakeSource.c)
 *     PopTransitionSystemPowerStateEx @ 0x140B6891C (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

void __fastcall ExDeleteWakeTimerInfo(void *a1)
{
  ExFreePoolWithTag(a1, 0x53577254u);
}
