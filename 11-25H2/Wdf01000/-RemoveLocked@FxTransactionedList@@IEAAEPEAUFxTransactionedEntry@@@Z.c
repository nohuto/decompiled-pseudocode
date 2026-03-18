/*
 * XREFs of ?RemoveLocked@FxTransactionedList@@IEAAEPEAUFxTransactionedEntry@@@Z @ 0x140068A2C
 * Callers:
 *     ?SearchForAndRemove@FxTransactionedList@@IEAAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x14009AAE4 (-SearchForAndRemove@FxTransactionedList@@IEAAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 * Callees:
 *     ?AddRef@FxObject@@QEAAKPEAXJPEBD@Z @ 0x1400446E0 (-AddRef@FxObject@@QEAAKPEAXJPEBD@Z.c)
 *     _guard_dispatch_icall @ 0x1400AC680 (_guard_dispatch_icall.c)
 */

unsigned __int8 __fastcall FxTransactionedList::RemoveLocked(
        FxTransactionedList *this,
        FxTransactionedEntry *Entry,
        __int64 a3)
{
  char v3; // bl
  _LIST_ENTRY *v5; // rax
  _LIST_ENTRY *v6; // rdx
  _LIST_ENTRY *p_m_TransactionLink; // rax
  _LIST_ENTRY *Flink; // rdx
  _LIST_ENTRY *Blink; // rcx
  _LIST_ENTRY *v11; // rax
  _LIST_ENTRY *v12; // r8

  v3 = 0;
  if ( Entry->m_Transaction == FxTransactionActionAdd )
  {
    p_m_TransactionLink = &Entry->m_TransactionLink;
    v3 = 1;
    Flink = Entry->m_TransactionLink.Flink;
    if ( Flink->Blink == p_m_TransactionLink )
    {
      Blink = p_m_TransactionLink->Blink;
      if ( Blink->Flink == p_m_TransactionLink )
      {
        Blink->Flink = Flink;
        Flink->Blink = Blink;
        p_m_TransactionLink->Blink = p_m_TransactionLink;
        p_m_TransactionLink->Flink = p_m_TransactionLink;
        Entry->m_Transaction = FxTransactionActionNothing;
        return v3;
      }
    }
LABEL_10:
    __fastfail(3u);
  }
  if ( this->m_ListLockedRecursionCount )
  {
    Entry->m_Transaction = FxTransactionActionRemove;
    v11 = &Entry->m_TransactionLink;
    v12 = this->m_TransactionHead.Blink;
    if ( v12->Flink == &this->m_TransactionHead )
    {
      v11->Flink = &this->m_TransactionHead;
      Entry->m_TransactionLink.Blink = v12;
      v12->Flink = v11;
      this->m_TransactionHead.Blink = v11;
      FxObject::AddRef(
        Entry->m_TransactionedObject,
        Entry,
        423,
        "minkernel\\wdf\\framework\\shared\\support\\fxtransactionedlist.cpp");
      return v3;
    }
    goto LABEL_10;
  }
  v5 = Entry->m_ListLink.Flink;
  if ( (FxTransactionedEntry *)Entry->m_ListLink.Flink->Blink != Entry )
    goto LABEL_10;
  v6 = Entry->m_ListLink.Blink;
  if ( (FxTransactionedEntry *)v6->Flink != Entry )
    goto LABEL_10;
  v6->Flink = v5;
  v5->Blink = v6;
  Entry->m_ListLink.Blink = &Entry->m_ListLink;
  Entry->m_ListLink.Flink = &Entry->m_ListLink;
  ((void (__fastcall *)(FxTransactionedList *, FxTransactionedEntry *, __int64, __int64))this->EntryRemoved)(
    this,
    Entry,
    a3,
    3LL);
  return 1;
}
