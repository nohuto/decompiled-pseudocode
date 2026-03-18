/*
 * XREFs of MiRemovePendingBadPageNode @ 0x1406741DC
 * Callers:
 *     MiSetPfnRemovalRequested @ 0x1406745D0 (MiSetPfnRemovalRequested.c)
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14020FA40 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x140210170 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     RtlAvlRemoveNode @ 0x140260BC0 (RtlAvlRemoveNode.c)
 *     ExQueueWorkItem @ 0x140325850 (ExQueueWorkItem.c)
 */

void __fastcall MiRemovePendingBadPageNode(unsigned __int64 a1)
{
  _QWORD *v2; // rbx
  _QWORD *v3; // rax

  ExAcquireSpinLockExclusiveAtDpcLevel(&dword_140E2FED0);
  v2 = (_QWORD *)qword_140E2FEC0;
  while ( v2 )
  {
    if ( a1 <= v2[3] )
    {
      if ( a1 >= v2[3] )
        break;
      v2 = (_QWORD *)*v2;
    }
    else
    {
      v2 = (_QWORD *)v2[1];
    }
  }
  if ( v2 )
  {
    RtlAvlRemoveNode((unsigned __int64 *)&qword_140E2FEC0, (__int64)v2);
    v3 = (_QWORD *)qword_140E2FEE8;
    if ( *(PVOID **)qword_140E2FEE8 != &qword_140E2FEE0 )
      __fastfail(3u);
    v2[1] = qword_140E2FEE8;
    *v2 = &qword_140E2FEE0;
    *v3 = v2;
    qword_140E2FEE8 = (__int64)v2;
    if ( (unsigned __int64)++qword_140E2FEF0 >= 0x20 && !byte_140E2FEF8 )
    {
      stru_140E2FF00.Parameter = 0LL;
      stru_140E2FF00.List.Flink = 0LL;
      stru_140E2FF00.WorkerRoutine = (void (__fastcall *)(void *))MiDeletePendingBadPageNodesAwaitingDeleteList;
      ExQueueWorkItem(&stru_140E2FF00, DelayedWorkQueue);
      byte_140E2FEF8 = 1;
    }
  }
  else
  {
    --qword_140E2FED8;
  }
  --qword_140E2FEC8;
  ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140E2FED0);
}
