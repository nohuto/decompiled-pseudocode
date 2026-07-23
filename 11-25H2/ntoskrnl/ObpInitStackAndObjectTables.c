/*
 * XREFs of ObpInitStackAndObjectTables @ 0x140739038
 * Callers:
 *     ObpStartRuntimeStackTrace @ 0x140739474 (ObpStartRuntimeStackTrace.c)
 *     ObpInitStackTrace @ 0x140C1B5BC (ObpInitStackTrace.c)
 * Callees:
 *     RtlRaiseStatus @ 0x14025AB10 (RtlRaiseStatus.c)
 *     RtlpInterlockedPushEntrySList @ 0x1406A8600 (RtlpInterlockedPushEntrySList.c)
 *     RtlpInterlockedFlushSList @ 0x1406A8640 (RtlpInterlockedFlushSList.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

__int64 ObpInitStackAndObjectTables()
{
  __int64 Pool2; // rax
  __int64 v1; // rax
  _WORD *v2; // rcx
  unsigned int v3; // ebx
  _SLIST_ENTRY *v4; // rax
  PSLIST_ENTRY v5; // rbx
  PSLIST_ENTRY v6; // rcx
  void *v7; // rcx

  Pool2 = ExAllocatePool2(0x40uLL);
  ObpStackTable = (PVOID)Pool2;
  if ( Pool2 )
  {
    memset_0((void *)(Pool2 + 136), 255, 0x7FFAuLL);
    v1 = ExAllocatePool2(0x40uLL);
    v2 = ObpStackTable;
    *((_QWORD *)ObpStackTable + 1) = v1;
    if ( v1 )
    {
      v2[1] = 1024;
      ObpObjectTable = (PVOID)ExAllocatePool2(0x40uLL);
      if ( ObpObjectTable )
      {
        if ( ((unsigned __int8)&ObpWorkItemFreeList & 0xF) != 0 )
          RtlRaiseStatus(-2147483646);
        v3 = 0;
        ObpWorkItemFreeList = 0LL;
        while ( 1 )
        {
          if ( v3 >= 0x1F4 )
            return 0LL;
          v4 = (_SLIST_ENTRY *)ExAllocatePool2(0x40uLL);
          if ( !v4 )
            break;
          RtlpInterlockedPushEntrySList(&ObpWorkItemFreeList, v4);
          ++v3;
        }
        v5 = RtlpInterlockedFlushSList(&ObpWorkItemFreeList);
        while ( v5 )
        {
          v6 = v5;
          v5 = v5->Next;
          ExFreePoolWithTag(v6, 0x7452624Fu);
        }
      }
    }
    if ( ObpObjectTable )
      ExFreePoolWithTag(ObpObjectTable, 0x7452624Fu);
    v7 = (void *)*((_QWORD *)ObpStackTable + 1);
    if ( v7 )
      ExFreePoolWithTag(v7, 0x7452624Fu);
    ExFreePoolWithTag(ObpStackTable, 0x7452624Fu);
  }
  return 3221225495LL;
}
