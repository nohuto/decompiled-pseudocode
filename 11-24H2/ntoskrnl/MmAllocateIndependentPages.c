/*
 * XREFs of MmAllocateIndependentPages @ 0x140A85350
 * Callers:
 *     KeAllocateInterrupt @ 0x140482F48 (KeAllocateInterrupt.c)
 *     IopLiveDumpAllocateDumpBuffers @ 0x1404952D4 (IopLiveDumpAllocateDumpBuffers.c)
 *     HvlStartBootLogicalProcessors @ 0x140580E58 (HvlStartBootLogicalProcessors.c)
 *     HvlpInitializeHvCrashdump @ 0x140587D1C (HvlpInitializeHvCrashdump.c)
 *     IopLiveDumpAllocateExtraBuffers @ 0x14059595C (IopLiveDumpAllocateExtraBuffers.c)
 *     IopLiveDumpAllocateIptBuffers @ 0x140596554 (IopLiveDumpAllocateIptBuffers.c)
 *     KeAllocateProcessorProfileStructures @ 0x1405AD3D0 (KeAllocateProcessorProfileStructures.c)
 *     KiAllocateProcessorStateInitializationParameters @ 0x1405B3178 (KiAllocateProcessorStateInitializationParameters.c)
 *     KiInitializePrcbContext @ 0x140B58980 (KiInitializePrcbContext.c)
 * Callees:
 *     MmAllocateIndependentPagesEx @ 0x140A8536C (MmAllocateIndependentPagesEx.c)
 */

__int64 __fastcall MmAllocateIndependentPages(__int64 a1, __int64 a2)
{
  return MmAllocateIndependentPagesEx(a1, a2, 0LL, 0LL);
}
