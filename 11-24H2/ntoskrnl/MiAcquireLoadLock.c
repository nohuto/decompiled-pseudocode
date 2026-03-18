/*
 * XREFs of MiAcquireLoadLock @ 0x1402C6F98
 * Callers:
 *     MmAcquireLoadLockShared @ 0x1402C6EE4 (MmAcquireLoadLockShared.c)
 *     MiLockLoadedDataTableEntry @ 0x1402C6F3C (MiLockLoadedDataTableEntry.c)
 *     MiEnumerateSystemImages @ 0x1402C7380 (MiEnumerateSystemImages.c)
 *     MmAcquireLoadLock @ 0x1404D2990 (MmAcquireLoadLock.c)
 *     ViAddVerifierSpecialThunks @ 0x14061032C (ViAddVerifierSpecialThunks.c)
 *     ViAddVerifierThunks @ 0x14061044C (ViAddVerifierThunks.c)
 *     VfDriverRemoveAllDifVerification @ 0x1406110D4 (VfDriverRemoveAllDifVerification.c)
 *     MiProtectDriverSectionPte @ 0x14066B400 (MiProtectDriverSectionPte.c)
 *     MiUnloadSystemImage @ 0x140A8AD84 (MiUnloadSystemImage.c)
 *     MiProcessKernelCfgAddressTakenImports @ 0x140ABB69C (MiProcessKernelCfgAddressTakenImports.c)
 *     MiFlushStrongCodeDriverLoadFailures @ 0x140C50900 (MiFlushStrongCodeDriverLoadFailures.c)
 *     MmReapplyBootPatchImports @ 0x140C56B08 (MmReapplyBootPatchImports.c)
 *     MmRegisterHotPatches @ 0x140C56C7C (MmRegisterHotPatches.c)
 *     MiBuildImportsForBootDrivers @ 0x140C5A924 (MiBuildImportsForBootDrivers.c)
 *     MiInitializeLoadedModuleList @ 0x140C5B318 (MiInitializeLoadedModuleList.c)
 *     MiReloadBootLoadedDrivers @ 0x140C5BA34 (MiReloadBootLoadedDrivers.c)
 *     PipInitializeCoreDriversAndElam @ 0x140C633C4 (PipInitializeCoreDriversAndElam.c)
 *     PipInitializeDriverDependentDLLs @ 0x140C637D8 (PipInitializeDriverDependentDLLs.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x1402769C0 (ExAcquireResourceExclusiveLite.c)
 *     KiCheckForKernelApcDelivery @ 0x1402BB4D0 (KiCheckForKernelApcDelivery.c)
 *     ExAcquireResourceSharedLite @ 0x140341E80 (ExAcquireResourceSharedLite.c)
 */

struct _KTHREAD *__fastcall MiAcquireLoadLock(int a1)
{
  struct _KTHREAD *CurrentThread; // rbx
  __int64 v2; // rdx
  $81B80DCEA5A02D890AB7B2872B48AC01 *v4; // rcx

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  --CurrentThread->KernelApcDisable;
  if ( a1 )
  {
    ExAcquireResourceExclusiveLite(&PsLoadedModuleResource, 1u);
    if ( !dword_140E2D818 )
      qword_140E2D810 = (__int64)CurrentThread;
    ++dword_140E2D818;
  }
  else
  {
    ExAcquireResourceSharedLite(&PsLoadedModuleResource, 1u);
    ++LODWORD(CurrentThread[1].Teb);
  }
  if ( CurrentThread->SpecialApcDisable++ == -1 )
  {
    v4 = &CurrentThread->152;
    if ( ($81B80DCEA5A02D890AB7B2872B48AC01 *)v4->ApcState.ApcListHead[0].Flink != v4 )
      KiCheckForKernelApcDelivery((__int64)v4, v2);
  }
  return CurrentThread;
}
