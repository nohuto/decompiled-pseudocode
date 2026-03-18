/*
 * XREFs of MiAcquireLoadLock @ 0x14036DF38
 * Callers:
 *     MmAcquireLoadLock @ 0x14036CED0 (MmAcquireLoadLock.c)
 *     MmAcquireLoadLockShared @ 0x14036DE84 (MmAcquireLoadLockShared.c)
 *     MiLockLoadedDataTableEntry @ 0x14036DEDC (MiLockLoadedDataTableEntry.c)
 *     MiEnumerateSystemImages @ 0x14036E320 (MiEnumerateSystemImages.c)
 *     ViAddVerifierSpecialThunks @ 0x14060436C (ViAddVerifierSpecialThunks.c)
 *     ViAddVerifierThunks @ 0x14060448C (ViAddVerifierThunks.c)
 *     VfDriverRemoveAllDifVerification @ 0x140605114 (VfDriverRemoveAllDifVerification.c)
 *     MiProtectDriverSectionPte @ 0x14065F8C0 (MiProtectDriverSectionPte.c)
 *     MiUnloadSystemImage @ 0x140A862D4 (MiUnloadSystemImage.c)
 *     MiProcessKernelCfgAddressTakenImports @ 0x140AB735C (MiProcessKernelCfgAddressTakenImports.c)
 *     MiFlushStrongCodeDriverLoadFailures @ 0x140C3F6D0 (MiFlushStrongCodeDriverLoadFailures.c)
 *     MmReapplyBootPatchImports @ 0x140C45828 (MmReapplyBootPatchImports.c)
 *     MmRegisterHotPatches @ 0x140C4599C (MmRegisterHotPatches.c)
 *     MiBuildImportsForBootDrivers @ 0x140C49598 (MiBuildImportsForBootDrivers.c)
 *     MiInitializeLoadedModuleList @ 0x140C49F8C (MiInitializeLoadedModuleList.c)
 *     MiReloadBootLoadedDrivers @ 0x140C4A6A8 (MiReloadBootLoadedDrivers.c)
 *     PipInitializeCoreDriversAndElam @ 0x140C520B0 (PipInitializeCoreDriversAndElam.c)
 *     PipInitializeDriverDependentDLLs @ 0x140C524C4 (PipInitializeDriverDependentDLLs.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x14028A9E0 (ExAcquireResourceExclusiveLite.c)
 *     ExAcquireResourceSharedLite @ 0x140295130 (ExAcquireResourceSharedLite.c)
 *     KiCheckForKernelApcDelivery @ 0x140320950 (KiCheckForKernelApcDelivery.c)
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
    if ( !dword_140E2D5D8 )
      qword_140E2D5D0 = (__int64)CurrentThread;
    ++dword_140E2D5D8;
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
