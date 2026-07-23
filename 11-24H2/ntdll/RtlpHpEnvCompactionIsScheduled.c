/*
 * XREFs of RtlpHpEnvCompactionIsScheduled @ 0x180140874
 * Callers:
 *     RtlpHpTagFreeHeap @ 0x180053EC0 (RtlpHpTagFreeHeap.c)
 *     RtlpHpFreeHeap @ 0x180057A20 (RtlpHpFreeHeap.c)
 *     RtlpHpLfhSlotAllocateSlow @ 0x180061270 (RtlpHpLfhSlotAllocateSlow.c)
 *     RtlpHpLfhContextFree @ 0x180065110 (RtlpHpLfhContextFree.c)
 *     RtlpHpLfhContextCompact @ 0x180065FB0 (RtlpHpLfhContextCompact.c)
 * Callees:
 *     <none>
 */

_BOOL8 RtlpHpEnvCompactionIsScheduled()
{
  return (_DWORD)qword_1801CD278 != 0;
}
