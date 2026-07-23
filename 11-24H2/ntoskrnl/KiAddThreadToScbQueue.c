/*
 * XREFs of KiAddThreadToScbQueue @ 0x1402D847C
 * Callers:
 *     KiQueueReadyThread @ 0x1402A4C20 (KiQueueReadyThread.c)
 *     KiSearchForNewThreadsForRescheduleContext @ 0x1402A71B0 (KiSearchForNewThreadsForRescheduleContext.c)
 *     KiDeferGroupSchedulingPreemption @ 0x1402D7384 (KiDeferGroupSchedulingPreemption.c)
 *     KiAttemptToScheduleThreadToBusyIsolationUnit @ 0x1403C9EC0 (KiAttemptToScheduleThreadToBusyIsolationUnit.c)
 *     KiAddThreadToReadyQueue @ 0x1403E7AA0 (KiAddThreadToReadyQueue.c)
 * Callees:
 *     KiUpdateVpBackingThreadPriorityOnReadyQueueInsertion @ 0x1402D8590 (KiUpdateVpBackingThreadPriorityOnReadyQueueInsertion.c)
 *     ?KiInsertNonMaxOverQuotaScb@@YAXPEAU_KSCB@@PEAU_KPRCB@@E@Z @ 0x1402D8810 (-KiInsertNonMaxOverQuotaScb@@YAXPEAU_KSCB@@PEAU_KPRCB@@E@Z.c)
 */

void __fastcall KiAddThreadToScbQueue(struct _KPRCB *a1, struct _KSCB *a2, __int64 a3, int a4)
{
  int v5; // ebp
  struct _LIST_ENTRY *v9; // rcx
  _LIST_ENTRY *v10; // rdx
  struct _LIST_ENTRY *Flink; // rax
  struct _LIST_ENTRY *Blink; // rax
  _KSCB *Parent; // rax

  v5 = *(char *)(a3 + 195);
  if ( (*(_DWORD *)(a3 + 120) & 0x400000) != 0 )
    _InterlockedOr(*(volatile signed __int32 **)(a3 + 968), 0x40000u);
  KiUpdateVpBackingThreadPriorityOnReadyQueueInsertion(a3);
  if ( !a2->Rank )
  {
    do
    {
      Parent = a2->Parent;
      if ( !Parent )
        break;
      a2 = a2->Parent;
    }
    while ( !Parent->Rank );
  }
  v9 = (struct _LIST_ENTRY *)(a3 + 216);
  v10 = &a2->ReadyListHead[v5];
  if ( a4 )
  {
    Flink = v10->Flink;
    if ( v10->Flink->Blink != v10 )
      goto LABEL_6;
    v9->Flink = Flink;
    *(_QWORD *)(a3 + 224) = v10;
    Flink->Blink = v9;
    v10->Flink = v9;
  }
  else
  {
    Blink = v10->Blink;
    if ( Blink->Flink != v10 )
LABEL_6:
      __fastfail(3u);
    v9->Flink = v10;
    *(_QWORD *)(a3 + 224) = Blink;
    Blink->Flink = v9;
    v10->Blink = v9;
  }
  *(_DWORD *)(a3 + 116) |= 0x2000u;
  *(_QWORD *)(a3 + 944) = a2;
  a2->ReadySummary |= 1 << v5;
  KiInsertNonMaxOverQuotaScb(a2, a1, 1u);
}
