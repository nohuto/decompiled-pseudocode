/*
 * XREFs of ExWaitForCallBacks @ 0x140AB2E10
 * Callers:
 *     IoUnregisterPriorityCallback @ 0x1405935E0 (IoUnregisterPriorityCallback.c)
 *     KeDeregisterBoundCallback @ 0x1405ACD90 (KeDeregisterBoundCallback.c)
 *     ExpDeleteSiloState @ 0x1406497C4 (ExpDeleteSiloState.c)
 * Callees:
 *     ExWaitForRundownProtectionRelease @ 0x14036DCA0 (ExWaitForRundownProtectionRelease.c)
 */

void __fastcall ExWaitForCallBacks(struct _EX_RUNDOWN_REF *a1)
{
  ExWaitForRundownProtectionRelease(a1);
}
