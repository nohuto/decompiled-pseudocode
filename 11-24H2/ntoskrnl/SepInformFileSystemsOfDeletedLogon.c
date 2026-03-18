/*
 * XREFs of SepInformFileSystemsOfDeletedLogon @ 0x140793780
 * Callers:
 *     SepDeReferenceLogonSession @ 0x140AD8BA4 (SepDeReferenceLogonSession.c)
 * Callees:
 *     ExQueueWorkItem @ 0x140325850 (ExQueueWorkItem.c)
 *     ObfReferenceObjectWithTag @ 0x1403403E0 (ObfReferenceObjectWithTag.c)
 *     ExAllocatePool2 @ 0x140B720F0 (ExAllocatePool2.c)
 */

void __fastcall SepInformFileSystemsOfDeletedLogon(_QWORD *a1, void *a2)
{
  __int64 Pool2; // rax
  struct _WORK_QUEUE_ITEM *v5; // rbx

  Pool2 = ExAllocatePool2(0x40uLL);
  v5 = (struct _WORK_QUEUE_ITEM *)Pool2;
  if ( Pool2 )
  {
    *(_QWORD *)(Pool2 + 32) = *a1;
    *(_QWORD *)(Pool2 + 40) = a2;
    if ( a2 )
      ObfReferenceObjectWithTag(a2, 0x53466553u);
    v5->List.Flink = 0LL;
    v5->WorkerRoutine = (void (__fastcall *)(void *))SepNotifyFileSystems;
    v5->Parameter = v5;
    ExQueueWorkItem(v5, DelayedWorkQueue);
  }
}
