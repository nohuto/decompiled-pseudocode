/*
 * XREFs of MiAcquireLoadLock @ 0x1402BBB18
 * Callers:
 *     MmAcquireLoadLockShared @ 0x1402BBA64 (MmAcquireLoadLockShared.c)
 *     MiLockLoadedDataTableEntry @ 0x1402BBABC (MiLockLoadedDataTableEntry.c)
 *     MiEnumerateSystemImages @ 0x1402BBF00 (MiEnumerateSystemImages.c)
 *     MmAcquireLoadLock @ 0x1404CBB50 (MmAcquireLoadLock.c)
 *     ViAddVerifierSpecialThunks @ 0x14060E8EC (ViAddVerifierSpecialThunks.c)
 *     ViAddVerifierThunks @ 0x14060EA0C (ViAddVerifierThunks.c)
 *     VfDriverRemoveAllDifVerification @ 0x14060F694 (VfDriverRemoveAllDifVerification.c)
 *     MiProtectDriverSectionPte @ 0x14066C5D0 (MiProtectDriverSectionPte.c)
 *     MiUnloadSystemImage @ 0x140A870C4 (MiUnloadSystemImage.c)
 *     MiProcessKernelCfgAddressTakenImports @ 0x140AB66BC (MiProcessKernelCfgAddressTakenImports.c)
 *     MiFlushStrongCodeDriverLoadFailures @ 0x140C52A90 (MiFlushStrongCodeDriverLoadFailures.c)
 *     MmReapplyBootPatchImports @ 0x140C58C98 (MmReapplyBootPatchImports.c)
 *     MmRegisterHotPatches @ 0x140C58E0C (MmRegisterHotPatches.c)
 *     MiBuildImportsForBootDrivers @ 0x140C5CAB4 (MiBuildImportsForBootDrivers.c)
 *     MiInitializeLoadedModuleList @ 0x140C5D4A8 (MiInitializeLoadedModuleList.c)
 *     MiReloadBootLoadedDrivers @ 0x140C5DBC4 (MiReloadBootLoadedDrivers.c)
 *     PipInitializeCoreDriversAndElam @ 0x140C65540 (PipInitializeCoreDriversAndElam.c)
 *     PipInitializeDriverDependentDLLs @ 0x140C65954 (PipInitializeDriverDependentDLLs.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x14022BF50 (ExAcquireResourceExclusiveLite.c)
 *     ExAcquireResourceSharedLite @ 0x140321360 (ExAcquireResourceSharedLite.c)
 *     KiCheckForKernelApcDelivery @ 0x140362C10 (KiCheckForKernelApcDelivery.c)
 */

struct _KTHREAD *__fastcall MiAcquireLoadLock(int a1)
{
  struct _KTHREAD *CurrentThread; // rbx
  bool v2; // zf

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  --CurrentThread->KernelApcDisable;
  if ( a1 )
  {
    ExAcquireResourceExclusiveLite(&PsLoadedModuleResource, 1u);
    if ( !dword_140E2D958 )
      qword_140E2D950 = (__int64)CurrentThread;
    ++dword_140E2D958;
  }
  else
  {
    ExAcquireResourceSharedLite(&PsLoadedModuleResource, 1u);
    ++LODWORD(CurrentThread[1].Teb);
  }
  v2 = CurrentThread->SpecialApcDisable++ == -1;
  if ( v2 && ($727077A9B6E167EAE1398C74674DC5A5 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery();
  return CurrentThread;
}
