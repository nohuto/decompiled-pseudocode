/*
 * XREFs of ?DeferredWorkQueueCallback@DXG_DEFERRED_WORK_QUEUE@@SAXPEAX@Z @ 0x14004C240
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x14001D2D0 (--3@YAXPEAX@Z.c)
 *     _guard_dispatch_icall @ 0x140055E60 (_guard_dispatch_icall.c)
 */

void __fastcall DXG_DEFERRED_WORK_QUEUE::DeferredWorkQueueCallback(struct _KEVENT *a1)
{
  struct _KEVENT *v2; // rsi
  struct _LIST_ENTRY *Flink; // rax
  struct _KEVENT *v4; // rdi
  __int64 v5; // rax

  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(a1, 0LL);
  v2 = a1 + 1;
  a1->Header.WaitListHead.Flink = (struct _LIST_ENTRY *)KeGetCurrentThread();
  while ( 1 )
  {
    v4 = *(struct _KEVENT **)&v2->Header.Lock;
    v5 = **(_QWORD **)&v2->Header.Lock;
    if ( *(struct _KEVENT **)(*(_QWORD *)&v2->Header.Lock + 8LL) != v2 || *(struct _KEVENT **)(v5 + 8) != v4 )
      __fastfail(3u);
    *(_QWORD *)&v2->Header.Lock = v5;
    *(_QWORD *)(v5 + 8) = v2;
    if ( v4 == v2 )
      break;
    a1->Header.WaitListHead.Flink = 0LL;
    ExReleasePushLockExclusiveEx(a1, 0LL);
    KeLeaveCriticalRegion();
    ((void (__fastcall *)(_QWORD))v4->Header.WaitListHead.Blink)(*(_QWORD *)&v4[1].Header.Lock);
    Flink = v4[1].Header.WaitListHead.Flink;
    if ( Flink )
      ((void (__fastcall *)(_QWORD))Flink)(*(_QWORD *)&v4[1].Header.Lock);
    operator delete(v4);
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx(a1, 0LL);
    a1->Header.WaitListHead.Flink = (struct _LIST_ENTRY *)KeGetCurrentThread();
    --LODWORD(a1[1].Header.WaitListHead.Blink);
  }
  KeSetEvent(a1 + 2, 0, 0);
  a1->Header.WaitListHead.Flink = 0LL;
  ExReleasePushLockExclusiveEx(a1, 0LL);
  KeLeaveCriticalRegion();
}
