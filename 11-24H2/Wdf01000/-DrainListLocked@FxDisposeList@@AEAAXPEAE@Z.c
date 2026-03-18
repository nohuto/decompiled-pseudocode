/*
 * XREFs of ?DrainListLocked@FxDisposeList@@AEAAXPEAE@Z @ 0x14004A6B4
 * Callers:
 *     ?_WorkItemThunk@FxDisposeList@@CAXPEAX@Z @ 0x14004A650 (-_WorkItemThunk@FxDisposeList@@CAXPEAX@Z.c)
 *     ?WaitForEmpty@FxDisposeList@@QEAAXXZ @ 0x14004C30C (-WaitForEmpty@FxDisposeList@@QEAAXXZ.c)
 * Callees:
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x14002BD60 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x14002C4B0 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?DeferredDisposeWorkItem@FxObject@@AEAAXXZ @ 0x14004A730 (-DeferredDisposeWorkItem@FxObject@@AEAAXXZ.c)
 */

void __fastcall FxDisposeList::DrainListLocked(FxDisposeList *this, unsigned __int8 *PreviousIrql)
{
  _SINGLE_LIST_ENTRY *p_m_List; // rbx
  _SINGLE_LIST_ENTRY *Next; // r8
  FxObject *v6; // rbp
  unsigned __int8 v7; // r8

  p_m_List = &this->m_List;
  while ( 1 )
  {
    Next = p_m_List->Next;
    if ( !p_m_List->Next )
      break;
    v6 = (FxObject *)&Next[-11];
    p_m_List->Next = Next->Next;
    Next->Next = 0LL;
    if ( !p_m_List->Next )
      this->m_ListEnd = &p_m_List->Next;
    FxNonPagedObject::Unlock(this, *PreviousIrql, (unsigned __int8)Next);
    FxObject::DeferredDisposeWorkItem(v6);
    FxNonPagedObject::Lock(this, PreviousIrql, v7);
  }
}
