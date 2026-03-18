/*
 * XREFs of VfUtilFreePoolCheckIRQL @ 0x1404BAF00
 * Callers:
 *     VfAvlFreeNodeNoLock @ 0x1406106C8 (VfAvlFreeNodeNoLock.c)
 *     ViFreeMapRegisterFile @ 0x140B88B9C (ViFreeMapRegisterFile.c)
 *     ViSpIoSetCompletionRoutineEx_Exit @ 0x140BA4A10 (ViSpIoSetCompletionRoutineEx_Exit.c)
 * Callees:
 *     VfPoolDelayFreeIfPossible @ 0x1404BAF20 (VfPoolDelayFreeIfPossible.c)
 */

__int64 __fastcall VfUtilFreePoolCheckIRQL(struct _SLIST_ENTRY *a1)
{
  KeGetCurrentIrql();
  return VfPoolDelayFreeIfPossible(a1);
}
