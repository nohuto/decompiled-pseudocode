/*
 * XREFs of ?Destroy@CEventPool@@SAXQEAV1@@Z @ 0x1402191AC
 * Callers:
 *     ?Destroy@CMultipleConsumerWorkQueue@@SAXQEAV1@@Z @ 0x140101FD0 (-Destroy@CMultipleConsumerWorkQueue@@SAXQEAV1@@Z.c)
 * Callees:
 *     ?Destroy@CEventPoolEntry@CEventPool@@SAXQEAV12@@Z @ 0x140100E24 (-Destroy@CEventPoolEntry@CEventPool@@SAXQEAV12@@Z.c)
 */

void __fastcall CEventPool::Destroy(union _SLIST_HEADER *pv)
{
  PSLIST_ENTRY v2; // rbx
  _QWORD *p_Next; // rcx

  v2 = ExpInterlockedFlushSList(pv + 1);
  while ( v2 )
  {
    p_Next = &v2->Next;
    v2 = v2->Next;
    CEventPool::CEventPoolEntry::Destroy(p_Next);
  }
  EngFreeMem(pv);
}
