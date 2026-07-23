/*
 * XREFs of MxInstallMoreMemory @ 0x14066D8C0
 * Callers:
 *     MiInitializeDebuggerSupport @ 0x140680CEC (MiInitializeDebuggerSupport.c)
 *     MiInitSystem @ 0x140C4FDD0 (MiInitSystem.c)
 *     MiAllocateDummyPage @ 0x140C50D68 (MiAllocateDummyPage.c)
 *     MiInitNucleus @ 0x140C51428 (MiInitNucleus.c)
 *     MiInitializeKasan @ 0x140C51BB4 (MiInitializeKasan.c)
 *     MiInitializePhysicalMemoryBlocks @ 0x140C51CC4 (MiInitializePhysicalMemoryBlocks.c)
 *     MiMapDummyPages @ 0x140C51DFC (MiMapDummyPages.c)
 *     MiProtectSharedUserPage @ 0x140C522E4 (MiProtectSharedUserPage.c)
 *     MxMapVa @ 0x140C552D4 (MxMapVa.c)
 *     MmInitializeImageViewExtension @ 0x140C56360 (MmInitializeImageViewExtension.c)
 *     MmInitializeImageViewExtensionCfg @ 0x140C5641C (MmInitializeImageViewExtensionCfg.c)
 *     MiComputeMemoryNodeProcessorAssignments @ 0x140C5A630 (MiComputeMemoryNodeProcessorAssignments.c)
 *     MiInitializeKernelCfg @ 0x140C5BA6C (MiInitializeKernelCfg.c)
 *     MiInitializeLoadedModuleList @ 0x140C5D4A8 (MiInitializeLoadedModuleList.c)
 * Callees:
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 */

void __fastcall __noreturn MxInstallMoreMemory(int a1)
{
  KeBugCheckEx(0x7Du, qword_140E3D590, qword_140E3D580, qword_140E3D588, a1);
}
