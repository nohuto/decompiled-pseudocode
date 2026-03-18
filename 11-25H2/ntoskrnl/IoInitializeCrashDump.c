/*
 * XREFs of IoInitializeCrashDump @ 0x140704968
 * Callers:
 *     MiCreatePagingFile @ 0x1407DE4C4 (MiCreatePagingFile.c)
 *     IopInitCrashDumpDuringSysInit @ 0x140C0B6E0 (IopInitCrashDumpDuringSysInit.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x14028A9E0 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x140296E10 (ExReleaseResourceLite.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x14029B9E0 (KiLeaveCriticalRegionUnsafe.c)
 *     IopInitDumpCapsuleSupport @ 0x140591038 (IopInitDumpCapsuleSupport.c)
 *     IopRemoveDumpCapsuleSupport @ 0x140591718 (IopRemoveDumpCapsuleSupport.c)
 *     IopInitializeCrashDump @ 0x140704E50 (IopInitializeCrashDump.c)
 */

char __fastcall IoInitializeCrashDump(HANDLE Handle)
{
  struct _KTHREAD *CurrentThread; // rbx
  char v3; // di
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // r9

  if ( ForceDumpDisabled || !AllowCrashDump )
    return 0;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceExclusiveLite(&IopCrashDumpLock, 1u);
  v3 = IopInitializeCrashDump(Handle);
  if ( v3 )
  {
    IopRemoveDumpCapsuleSupport();
  }
  else if ( CapsuleDumpAllowed )
  {
    IopInitDumpCapsuleSupport();
  }
  ExReleaseResourceLite(&IopCrashDumpLock);
  KiLeaveCriticalRegionUnsafe((__int64)CurrentThread, v4, v5, v6);
  return v3;
}
