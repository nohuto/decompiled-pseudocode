/*
 * XREFs of MxInstallMoreMemory @ 0x140660BB0
 * Callers:
 *     MiInitializeDebuggerSupport @ 0x1406742CC (MiInitializeDebuggerSupport.c)
 *     MiInitSystem @ 0x140C3C930 (MiInitSystem.c)
 *     MiAllocateDummyPage @ 0x140C3D9A8 (MiAllocateDummyPage.c)
 *     MiInitNucleus @ 0x140C3E068 (MiInitNucleus.c)
 *     MiInitializeKasan @ 0x140C3E7F4 (MiInitializeKasan.c)
 *     MiInitializePhysicalMemoryBlocks @ 0x140C3E904 (MiInitializePhysicalMemoryBlocks.c)
 *     MiMapDummyPages @ 0x140C3EA3C (MiMapDummyPages.c)
 *     MiProtectSharedUserPage @ 0x140C3EF24 (MiProtectSharedUserPage.c)
 *     MxMapVa @ 0x140C41F14 (MxMapVa.c)
 *     MmInitializeImageViewExtension @ 0x140C42F58 (MmInitializeImageViewExtension.c)
 *     MmInitializeImageViewExtensionCfg @ 0x140C43014 (MmInitializeImageViewExtensionCfg.c)
 *     MiComputeMemoryNodeProcessorAssignments @ 0x140C471C0 (MiComputeMemoryNodeProcessorAssignments.c)
 *     MiInitializeKernelCfg @ 0x140C485AC (MiInitializeKernelCfg.c)
 *     MiInitializeLoadedModuleList @ 0x140C49F8C (MiInitializeLoadedModuleList.c)
 * Callees:
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 */

void __fastcall __noreturn MxInstallMoreMemory(int a1)
{
  KeBugCheckEx(0x7Du, qword_140E3D210, qword_140E3D200, BugCheckParameter3, a1);
}
