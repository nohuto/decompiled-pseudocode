/*
 * XREFs of ExWaitForCallBacks @ 0x140AB1CEC
 * Callers:
 *     IoUnregisterPriorityCallback @ 0x140593C70 (IoUnregisterPriorityCallback.c)
 *     KeDeregisterBoundCallback @ 0x1405AD690 (KeDeregisterBoundCallback.c)
 *     ExpDeleteSiloState @ 0x140653DC4 (ExpDeleteSiloState.c)
 * Callees:
 *     ExWaitForRundownProtectionRelease @ 0x1402BB610 (ExWaitForRundownProtectionRelease.c)
 */

void __fastcall ExWaitForCallBacks(struct _EX_RUNDOWN_REF *a1)
{
  ExWaitForRundownProtectionRelease(a1);
}
