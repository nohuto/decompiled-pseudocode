/*
 * XREFs of PpReleaseBootDDB @ 0x140722A54
 * Callers:
 *     PnpCompleteSystemStartProcess @ 0x1405A2DCC (PnpCompleteSystemStartProcess.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x14022BF50 (ExAcquireResourceExclusiveLite.c)
 *     KeLeaveCriticalRegion @ 0x140288450 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x14028AA60 (ExReleaseResourceLite.c)
 *     SdbReleaseDatabase @ 0x1409446EC (SdbReleaseDatabase.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 PpReleaseBootDDB()
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v1; // ebx

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceExclusiveLite(&PiDDBLock, 1u);
  if ( PpDDBHandle )
  {
    SdbReleaseDatabase();
    PpDDBHandle = 0LL;
    ExFreePoolWithTag(PpBootDDB, 0);
    PpBootDDB = 0LL;
    v1 = 0;
  }
  else
  {
    v1 = -1073741823;
  }
  if ( PpDDBPatchHandle )
  {
    SdbReleaseDatabase();
    PpDDBPatchHandle = 0LL;
    ExFreePoolWithTag(PpBootDDBPatch, 0);
    PpBootDDBPatch = 0LL;
  }
  ExReleaseResourceLite(&PiDDBLock);
  KeLeaveCriticalRegion();
  return v1;
}
