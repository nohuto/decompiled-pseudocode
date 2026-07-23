/*
 * XREFs of MiRemovePendingBadPageNode @ 0x1406753AC
 * Callers:
 *     MiSetPfnRemovalRequested @ 0x1406757A0 (MiSetPfnRemovalRequested.c)
 * Callees:
 *     RtlAvlRemoveNode @ 0x1402911D0 (RtlAvlRemoveNode.c)
 *     ExQueueWorkItem @ 0x1402CE3E0 (ExQueueWorkItem.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140338DA0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1403394D0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 */

void __fastcall MiRemovePendingBadPageNode(unsigned __int64 a1)
{
  _QWORD *v2; // rbx
  _QWORD *v3; // rax

  ExAcquireSpinLockExclusiveAtDpcLevel(&dword_140E30010);
  v2 = (_QWORD *)qword_140E30000;
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
    RtlAvlRemoveNode((unsigned __int64 *)&qword_140E30000, (__int64)v2);
    v3 = (_QWORD *)qword_140E30028;
    if ( *(PVOID **)qword_140E30028 != &qword_140E30020 )
      __fastfail(3u);
    v2[1] = qword_140E30028;
    *v2 = &qword_140E30020;
    *v3 = v2;
    qword_140E30028 = (__int64)v2;
    if ( (unsigned __int64)++qword_140E30030 >= 0x20 && !byte_140E30038 )
    {
      stru_140E30040.Parameter = 0LL;
      stru_140E30040.List.Flink = 0LL;
      stru_140E30040.WorkerRoutine = (void (__fastcall *)(void *))MiDeletePendingBadPageNodesAwaitingDeleteList;
      ExQueueWorkItem(&stru_140E30040, DelayedWorkQueue);
      byte_140E30038 = 1;
    }
  }
  else
  {
    --qword_140E30018;
  }
  --qword_140E30008;
  ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140E30010);
}
