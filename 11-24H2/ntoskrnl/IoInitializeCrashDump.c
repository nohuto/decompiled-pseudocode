/*
 * XREFs of IoInitializeCrashDump @ 0x140710A68
 * Callers:
 *     MiCreatePagingFile @ 0x1407EE364 (MiCreatePagingFile.c)
 *     IopInitCrashDumpDuringSysInit @ 0x140C1C8B4 (IopInitCrashDumpDuringSysInit.c)
 * Callees:
 *     KiLeaveCriticalRegionUnsafe @ 0x1402595C0 (KiLeaveCriticalRegionUnsafe.c)
 *     ExReleaseResourceLite @ 0x14025A450 (ExReleaseResourceLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x1402769C0 (ExAcquireResourceExclusiveLite.c)
 *     IopInitDumpCapsuleSupport @ 0x140594838 (IopInitDumpCapsuleSupport.c)
 *     IopRemoveDumpCapsuleSupport @ 0x140594F18 (IopRemoveDumpCapsuleSupport.c)
 *     IopInitializeCrashDump @ 0x140710F50 (IopInitializeCrashDump.c)
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
