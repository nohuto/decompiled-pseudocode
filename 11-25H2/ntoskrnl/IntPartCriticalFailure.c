/*
 * XREFs of IntPartCriticalFailure @ 0x1405BB518
 * Callers:
 *     IntPartCreate @ 0x140C4B918 (IntPartCreate.c)
 *     IntpAssignProcessorsToPartitions @ 0x140C4BAA4 (IntpAssignProcessorsToPartitions.c)
 *     IntpAddNextProcessorToPartition @ 0x140C4BB50 (IntpAddNextProcessorToPartition.c)
 *     IntpAllocateProcessorContext @ 0x140C4BB98 (IntpAllocateProcessorContext.c)
 * Callees:
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 */

void __fastcall __noreturn IntPartCriticalFailure(ULONG_PTR BugCheckParameter3, ULONG_PTR BugCheckParameter4)
{
  KeBugCheckEx(0xA0u, 0x4001uLL, 0x105uLL, BugCheckParameter3, BugCheckParameter4);
}
