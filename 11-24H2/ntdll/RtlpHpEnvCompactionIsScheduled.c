/*
 * XREFs of RtlpHpEnvCompactionIsScheduled @ 0x1801426C4
 * Callers:
 *     RtlpHpTagFreeHeap @ 0x1800274C0 (RtlpHpTagFreeHeap.c)
 *     RtlpHpFreeHeap @ 0x18002B020 (RtlpHpFreeHeap.c)
 *     RtlpHpLfhSlotAllocateSlow @ 0x18004B690 (RtlpHpLfhSlotAllocateSlow.c)
 *     RtlpHpLfhContextFree @ 0x18004F530 (RtlpHpLfhContextFree.c)
 *     RtlpHpLfhContextCompact @ 0x1800503D0 (RtlpHpLfhContextCompact.c)
 * Callees:
 *     <none>
 */

_BOOL8 RtlpHpEnvCompactionIsScheduled()
{
  return (_DWORD)qword_1801CE278 != 0;
}
