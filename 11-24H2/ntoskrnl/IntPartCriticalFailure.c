/*
 * XREFs of IntPartCriticalFailure @ 0x1405BC988
 * Callers:
 *     IntPartCreate @ 0x140C5EE28 (IntPartCreate.c)
 *     IntpAssignProcessorsToPartitions @ 0x140C5EFB4 (IntpAssignProcessorsToPartitions.c)
 *     IntpAddNextProcessorToPartition @ 0x140C5F060 (IntpAddNextProcessorToPartition.c)
 *     IntpAllocateProcessorContext @ 0x140C5F0A8 (IntpAllocateProcessorContext.c)
 * Callees:
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 */

void __fastcall __noreturn IntPartCriticalFailure(ULONG_PTR BugCheckParameter3, ULONG_PTR BugCheckParameter4)
{
  KeBugCheckEx(0xA0u, 0x4001uLL, 0x105uLL, BugCheckParameter3, BugCheckParameter4);
}
