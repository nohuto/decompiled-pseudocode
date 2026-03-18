/*
 * XREFs of MmAllocateIndependentPages @ 0x140A88F50
 * Callers:
 *     KeAllocateInterrupt @ 0x140487ED8 (KeAllocateInterrupt.c)
 *     IopLiveDumpAllocateDumpBuffers @ 0x14049A8E4 (IopLiveDumpAllocateDumpBuffers.c)
 *     HvlStartBootLogicalProcessors @ 0x140583AD8 (HvlStartBootLogicalProcessors.c)
 *     HvlpInitializeHvCrashdump @ 0x14058AA2C (HvlpInitializeHvCrashdump.c)
 *     IopLiveDumpAllocateExtraBuffers @ 0x1405989DC (IopLiveDumpAllocateExtraBuffers.c)
 *     IopLiveDumpAllocateIptBuffers @ 0x1405995D4 (IopLiveDumpAllocateIptBuffers.c)
 *     KeAllocateProcessorProfileStructures @ 0x1405B0460 (KeAllocateProcessorProfileStructures.c)
 *     KiAllocateProcessorStateInitializationParameters @ 0x1405B5EB0 (KiAllocateProcessorStateInitializationParameters.c)
 *     KiInitializePrcbContext @ 0x140B56930 (KiInitializePrcbContext.c)
 * Callees:
 *     MmAllocateIndependentPagesEx @ 0x140A88F6C (MmAllocateIndependentPagesEx.c)
 */

__int64 __fastcall MmAllocateIndependentPages(__int64 a1, __int64 a2)
{
  return MmAllocateIndependentPagesEx(a1, a2, 0LL, 0LL);
}
