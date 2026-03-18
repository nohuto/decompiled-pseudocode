/*
 * XREFs of ExDeleteWakeTimerInfo @ 0x14064B3B4
 * Callers:
 *     PopFreeWakeSource @ 0x140A9A66C (PopFreeWakeSource.c)
 *     PopTransitionSystemPowerStateEx @ 0x140B569AC (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

void __fastcall ExDeleteWakeTimerInfo(void *a1)
{
  ExFreePoolWithTag(a1, 0x53577254u);
}
