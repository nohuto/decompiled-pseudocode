/*
 * XREFs of VfUtilFreePoolCheckIRQL @ 0x1404B5DA0
 * Callers:
 *     VfAvlFreeNodeNoLock @ 0x14060EC88 (VfAvlFreeNodeNoLock.c)
 *     ViFreeMapRegisterFile @ 0x140B8AB9C (ViFreeMapRegisterFile.c)
 *     ViSpIoSetCompletionRoutineEx_Exit @ 0x140BA6A10 (ViSpIoSetCompletionRoutineEx_Exit.c)
 * Callees:
 *     VfPoolDelayFreeIfPossible @ 0x1404B5DC0 (VfPoolDelayFreeIfPossible.c)
 */

__int64 __fastcall VfUtilFreePoolCheckIRQL(_SLIST_ENTRY *a1)
{
  KeGetCurrentIrql();
  return VfPoolDelayFreeIfPossible(a1);
}
