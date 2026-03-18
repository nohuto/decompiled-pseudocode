/*
 * XREFs of MxInstallMoreMemory @ 0x14066C6F0
 * Callers:
 *     MiInitializeDebuggerSupport @ 0x14067FAEC (MiInitializeDebuggerSupport.c)
 *     MiInitSystem @ 0x140C4DC40 (MiInitSystem.c)
 *     MiAllocateDummyPage @ 0x140C4EBD8 (MiAllocateDummyPage.c)
 *     MiInitNucleus @ 0x140C4F298 (MiInitNucleus.c)
 *     MiInitializeKasan @ 0x140C4FA24 (MiInitializeKasan.c)
 *     MiInitializePhysicalMemoryBlocks @ 0x140C4FB34 (MiInitializePhysicalMemoryBlocks.c)
 *     MiMapDummyPages @ 0x140C4FC6C (MiMapDummyPages.c)
 *     MiProtectSharedUserPage @ 0x140C50154 (MiProtectSharedUserPage.c)
 *     MxMapVa @ 0x140C53144 (MxMapVa.c)
 *     MmInitializeImageViewExtension @ 0x140C541D0 (MmInitializeImageViewExtension.c)
 *     MmInitializeImageViewExtensionCfg @ 0x140C5428C (MmInitializeImageViewExtensionCfg.c)
 *     MiComputeMemoryNodeProcessorAssignments @ 0x140C584A0 (MiComputeMemoryNodeProcessorAssignments.c)
 *     MiInitializeKernelCfg @ 0x140C598DC (MiInitializeKernelCfg.c)
 *     MiInitializeLoadedModuleList @ 0x140C5B318 (MiInitializeLoadedModuleList.c)
 * Callees:
 *     KeBugCheckEx @ 0x1404FB990 (KeBugCheckEx.c)
 */

void __fastcall __noreturn MxInstallMoreMemory(int a1)
{
  KeBugCheckEx(0x7Du, qword_140E3D450, qword_140E3D440, BugCheckParameter3, a1);
}
