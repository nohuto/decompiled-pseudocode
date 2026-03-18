/*
 * XREFs of MmAllocateIndependentPages @ 0x140A85070
 * Callers:
 *     KeAllocateInterrupt @ 0x1404881F8 (KeAllocateInterrupt.c)
 *     IopLiveDumpAllocateDumpBuffers @ 0x14049A634 (IopLiveDumpAllocateDumpBuffers.c)
 *     HvlStartBootLogicalProcessors @ 0x140580328 (HvlStartBootLogicalProcessors.c)
 *     HvlpInitializeHvCrashdump @ 0x1405873BC (HvlpInitializeHvCrashdump.c)
 *     IopLiveDumpAllocateExtraBuffers @ 0x1405952CC (IopLiveDumpAllocateExtraBuffers.c)
 *     IopLiveDumpAllocateIptBuffers @ 0x140595EC4 (IopLiveDumpAllocateIptBuffers.c)
 *     KeAllocateProcessorProfileStructures @ 0x1405ACAD0 (KeAllocateProcessorProfileStructures.c)
 *     KiAllocateProcessorStateInitializationParameters @ 0x1405B1FE4 (KiAllocateProcessorStateInitializationParameters.c)
 *     KiInitializePrcbContext @ 0x140B4698C (KiInitializePrcbContext.c)
 * Callees:
 *     MmAllocateIndependentPagesEx @ 0x140A8508C (MmAllocateIndependentPagesEx.c)
 */

__int64 __fastcall MmAllocateIndependentPages(__int64 a1, __int64 a2)
{
  return MmAllocateIndependentPagesEx(a1, a2, 0LL, 0LL);
}
