/*
 * XREFs of MiRemovePendingBadPageNode @ 0x14066877C
 * Callers:
 *     MiSetPfnRemovalRequested @ 0x140668B70 (MiSetPfnRemovalRequested.c)
 * Callees:
 *     RtlAvlRemoveNode @ 0x1402A8F20 (RtlAvlRemoveNode.c)
 *     ExQueueWorkItem @ 0x140309660 (ExQueueWorkItem.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x14031F3B0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14031F890 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 */

void __fastcall MiRemovePendingBadPageNode(unsigned __int64 a1)
{
  _QWORD *v2; // rbx
  _QWORD *v3; // rax

  ExAcquireSpinLockExclusiveAtDpcLevel(&dword_140E2FC90);
  v2 = (_QWORD *)qword_140E2FC80;
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
    RtlAvlRemoveNode((unsigned __int64 *)&qword_140E2FC80, (__int64)v2);
    v3 = (_QWORD *)qword_140E2FCA8;
    if ( *(PVOID **)qword_140E2FCA8 != &qword_140E2FCA0 )
      __fastfail(3u);
    v2[1] = qword_140E2FCA8;
    *v2 = &qword_140E2FCA0;
    *v3 = v2;
    qword_140E2FCA8 = (__int64)v2;
    if ( (unsigned __int64)++qword_140E2FCB0 >= 0x20 && !byte_140E2FCB8 )
    {
      stru_140E2FCC0.Parameter = 0LL;
      stru_140E2FCC0.List.Flink = 0LL;
      stru_140E2FCC0.WorkerRoutine = (void (__fastcall *)(void *))MiDeletePendingBadPageNodesAwaitingDeleteList;
      ExQueueWorkItem(&stru_140E2FCC0, DelayedWorkQueue);
      byte_140E2FCB8 = 1;
    }
  }
  else
  {
    --qword_140E2FC98;
  }
  --qword_140E2FC88;
  ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140E2FC90);
}
