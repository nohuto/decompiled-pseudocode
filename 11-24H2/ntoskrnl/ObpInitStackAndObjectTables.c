/*
 * XREFs of ObpInitStackAndObjectTables @ 0x140743348
 * Callers:
 *     ObpStartRuntimeStackTrace @ 0x140743784 (ObpStartRuntimeStackTrace.c)
 *     ObpInitStackTrace @ 0x140C2E7DC (ObpInitStackTrace.c)
 * Callees:
 *     RtlRaiseStatus @ 0x1402360C0 (RtlRaiseStatus.c)
 *     RtlpInterlockedPushEntrySList @ 0x1406B4870 (RtlpInterlockedPushEntrySList.c)
 *     RtlpInterlockedFlushSList @ 0x1406B48B0 (RtlpInterlockedFlushSList.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
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

  Pool2 = ExAllocatePool2(0x40uLL, 0x8088uLL, 0x7452624Fu);
  ObpStackTable = (PVOID)Pool2;
  if ( Pool2 )
  {
    memset_0((void *)(Pool2 + 136), 255, 0x7FFAuLL);
    v1 = ExAllocatePool2(0x40uLL, 0x20000uLL, 0x7452624Fu);
    v2 = ObpStackTable;
    *((_QWORD *)ObpStackTable + 1) = v1;
    if ( v1 )
    {
      v2[1] = 1024;
      ObpObjectTable = (PVOID)ExAllocatePool2(0x40uLL, 0xC88uLL, 0x7452624Fu);
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
          v4 = (_SLIST_ENTRY *)ExAllocatePool2(0x40uLL, 0xB0uLL, 0x7452624Fu);
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
