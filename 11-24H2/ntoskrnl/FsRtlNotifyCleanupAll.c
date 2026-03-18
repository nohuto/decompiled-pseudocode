/*
 * XREFs of FsRtlNotifyCleanupAll @ 0x14070DB00
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseFastMutexUnsafe @ 0x14031CF70 (ExReleaseFastMutexUnsafe.c)
 *     ExAcquireFastMutexUnsafe @ 0x1403DB130 (ExAcquireFastMutexUnsafe.c)
 *     SeReleaseSubjectContext @ 0x14084D7E0 (SeReleaseSubjectContext.c)
 *     FsRtlNotifyCleanupOneEntry @ 0x140A01FF8 (FsRtlNotifyCleanupOneEntry.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

void __stdcall FsRtlNotifyCleanupAll(PNOTIFY_SYNC NotifySync, PLIST_ENTRY NotifyList)
{
  struct _KTHREAD *CurrentThread; // rdi
  struct _LIST_ENTRY *Flink; // rdi
  struct _LIST_ENTRY *v6; // rcx

  CurrentThread = KeGetCurrentThread();
  if ( CurrentThread != *((struct _KTHREAD **)NotifySync + 7) )
  {
    ExAcquireFastMutexUnsafe((PFAST_MUTEX)NotifySync);
    *((_QWORD *)NotifySync + 7) = CurrentThread;
  }
  ++*((_DWORD *)NotifySync + 16);
  Flink = NotifyList->Flink;
  while ( Flink != NotifyList )
  {
    v6 = Flink - 2;
    Flink = Flink->Flink;
    FsRtlNotifyCleanupOneEntry(v6);
  }
  if ( (*((_DWORD *)NotifySync + 16))-- == 1 )
  {
    *((_QWORD *)NotifySync + 7) = 0LL;
    ExReleaseFastMutexUnsafe((PFAST_MUTEX)NotifySync);
  }
}
