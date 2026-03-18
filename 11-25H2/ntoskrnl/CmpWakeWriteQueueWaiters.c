/*
 * XREFs of CmpWakeWriteQueueWaiters @ 0x140A4F73C
 * Callers:
 *     CmpFinishBeingActiveFlusherAndReconciler @ 0x1407C87E4 (CmpFinishBeingActiveFlusherAndReconciler.c)
 *     CmpFlushHive @ 0x140883A5C (CmpFlushHive.c)
 * Callees:
 *     KeSetEvent @ 0x140250100 (KeSetEvent.c)
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 */

__int64 __fastcall CmpWakeWriteQueueWaiters(ULONG_PTR BugCheckParameter2, PRKEVENT Event, LONG a3)
{
  PRKEVENT v4; // rax
  struct _LIST_ENTRY *Flink; // rbx

  v4 = Event;
  if ( Event )
  {
    do
    {
      Flink = v4[1].Header.WaitListHead.Flink;
      v4[1].Header.LockNV = a3;
      KeSetEvent(v4, 0, 0);
      v4 = (PRKEVENT)Flink;
    }
    while ( Flink );
  }
  return KeAbPostRelease(BugCheckParameter2);
}
