/*
 * XREFs of IntPartCriticalFailure @ 0x1405BF358
 * Callers:
 *     IntPartCreate @ 0x140C5CC98 (IntPartCreate.c)
 *     IntpAssignProcessorsToPartitions @ 0x140C5CE24 (IntpAssignProcessorsToPartitions.c)
 *     IntpAddNextProcessorToPartition @ 0x140C5CED0 (IntpAddNextProcessorToPartition.c)
 *     IntpAllocateProcessorContext @ 0x140C5CF18 (IntpAllocateProcessorContext.c)
 * Callees:
 *     KeBugCheckEx @ 0x1404FB990 (KeBugCheckEx.c)
 */

void __fastcall __noreturn IntPartCriticalFailure(ULONG_PTR BugCheckParameter3, ULONG_PTR BugCheckParameter4)
{
  KeBugCheckEx(0xA0u, 0x4001uLL, 0x105uLL, BugCheckParameter3, BugCheckParameter4);
}
