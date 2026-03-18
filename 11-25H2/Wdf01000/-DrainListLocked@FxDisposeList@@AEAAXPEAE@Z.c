/*
 * XREFs of ?DrainListLocked@FxDisposeList@@AEAAXPEAE@Z @ 0x140044E14
 * Callers:
 *     ?_WorkItemThunk@FxDisposeList@@CAXPEAX@Z @ 0x140044DB0 (-_WorkItemThunk@FxDisposeList@@CAXPEAX@Z.c)
 *     ?WaitForEmpty@FxDisposeList@@QEAAXXZ @ 0x140046A6C (-WaitForEmpty@FxDisposeList@@QEAAXXZ.c)
 * Callees:
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1400135F0 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x140022C80 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     ?DeferredDisposeWorkItem@FxObject@@AEAAXXZ @ 0x140044E90 (-DeferredDisposeWorkItem@FxObject@@AEAAXXZ.c)
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
