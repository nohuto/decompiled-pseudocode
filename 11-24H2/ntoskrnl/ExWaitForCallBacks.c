/*
 * XREFs of ExWaitForCallBacks @ 0x140AB7938
 * Callers:
 *     IoUnregisterPriorityCallback @ 0x140596C90 (IoUnregisterPriorityCallback.c)
 *     KeDeregisterBoundCallback @ 0x1405B0720 (KeDeregisterBoundCallback.c)
 *     ExpDeleteSiloState @ 0x1406556C4 (ExpDeleteSiloState.c)
 * Callees:
 *     ExWaitForRundownProtectionRelease @ 0x1402C6A90 (ExWaitForRundownProtectionRelease.c)
 */

void __fastcall ExWaitForCallBacks(struct _EX_RUNDOWN_REF *a1)
{
  ExWaitForRundownProtectionRelease(a1);
}
