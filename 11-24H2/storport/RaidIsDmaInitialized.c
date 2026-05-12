/*
 * XREFs of RaidIsDmaInitialized @ 0x1401840CC
 * Callers:
 *     RaidAdapterCompleteInitialization @ 0x140037B0C (RaidAdapterCompleteInitialization.c)
 *     RaidInitializePerfOpts @ 0x140041BFC (RaidInitializePerfOpts.c)
 *     NVMeGetUncachedExtensionEx @ 0x140072684 (NVMeGetUncachedExtensionEx.c)
 *     NvmeControllerAllocateInternalBufferAllocation @ 0x1400728A8 (NvmeControllerAllocateInternalBufferAllocation.c)
 *     StorPortGetUncachedExtension @ 0x140073D40 (StorPortGetUncachedExtension.c)
 *     NvmeAdapterCompleteInitialization @ 0x1400CD5A8 (NvmeAdapterCompleteInitialization.c)
 * Callees:
 *     <none>
 */

bool __fastcall RaidIsDmaInitialized(_QWORD *a1)
{
  return a1 && *a1 != 0LL;
}
