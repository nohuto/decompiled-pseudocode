/*
 * XREFs of ?ndisInsertInWorkQueue@@YAXPEAU_NDIS_WORK_QUEUE@@PEAU_WORK_QUEUE_ITEM@@E@Z @ 0x140060A20
 * Callers:
 *     ndisReceiveWorkerThread @ 0x140060670 (ndisReceiveWorkerThread.c)
 *     ndisKillReceiveWorkerThreadPool @ 0x1400C9040 (ndisKillReceiveWorkerThreadPool.c)
 * Callees:
 *     <none>
 */

void __fastcall ndisInsertInWorkQueue(struct _KSEMAPHORE *a1, struct _WORK_QUEUE_ITEM *a2, char a3)
{
  KSPIN_LOCK *p_Blink; // rcx
  KIRQL v7; // r14
  _LIST_ENTRY *Flink; // rcx
  KSPIN_LOCK *v9; // rcx

  p_Blink = (KSPIN_LOCK *)&a1->Header.WaitListHead.Blink;
  v7 = 2;
  if ( a3 )
    KeAcquireSpinLockAtDpcLevel(p_Blink);
  else
    v7 = KeAcquireSpinLockRaiseToDpc(p_Blink);
  Flink = a1->Header.WaitListHead.Flink;
  if ( (struct _KSEMAPHORE *)Flink->Flink != a1 )
    __fastfail(3u);
  a2->List.Blink = Flink;
  a2->List.Flink = (_LIST_ENTRY *)a1;
  Flink->Flink = &a2->List;
  v9 = (KSPIN_LOCK *)&a1->Header.WaitListHead.Blink;
  a1->Header.WaitListHead.Flink = &a2->List;
  ++a1->Limit;
  if ( a3 )
    KeReleaseSpinLockFromDpcLevel(v9);
  else
    KeReleaseSpinLock(v9, v7);
  KeReleaseSemaphore(a1 + 1, 0, 1, 0);
}
