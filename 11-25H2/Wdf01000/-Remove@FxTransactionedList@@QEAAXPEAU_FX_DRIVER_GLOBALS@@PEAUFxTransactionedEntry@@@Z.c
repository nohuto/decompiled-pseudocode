/*
 * XREFs of ?Remove@FxTransactionedList@@QEAAXPEAU_FX_DRIVER_GLOBALS@@PEAUFxTransactionedEntry@@@Z @ 0x140064F28
 * Callers:
 *     ?RemoveChildList@FxPkgPnp@@QEAAXPEAVFxChildList@@@Z @ 0x140064E44 (-RemoveChildList@FxPkgPnp@@QEAAXPEAVFxChildList@@@Z.c)
 *     ?RemoveIoTarget@FxDevice@@UEAAXPEAVFxIoTarget@@@Z @ 0x140064ED0 (-RemoveIoTarget@FxDevice@@UEAAXPEAVFxIoTarget@@@Z.c)
 *     ?RemoveDmaEnabler@FxDevice@@UEAAXPEAVFxDmaEnabler@@@Z @ 0x140095100 (-RemoveDmaEnabler@FxDevice@@UEAAXPEAVFxDmaEnabler@@@Z.c)
 * Callees:
 *     ?AddRef@FxObject@@QEAAKPEAXJPEBD@Z @ 0x1400446E0 (-AddRef@FxObject@@QEAAKPEAXJPEBD@Z.c)
 *     _guard_dispatch_icall @ 0x1400AC680 (_guard_dispatch_icall.c)
 */

void __fastcall FxTransactionedList::Remove(
        FxTransactionedList *this,
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        FxTransactionedEntry *Entry)
{
  __int64 v6; // r8
  char v7; // si
  _LIST_ENTRY *v8; // rax
  _LIST_ENTRY *v9; // rcx
  _LIST_ENTRY *p_m_TransactionLink; // rax
  _LIST_ENTRY *Flink; // rcx
  _LIST_ENTRY *Blink; // rdx
  _LIST_ENTRY *v13; // r8
  _LIST_ENTRY *v14; // rdx
  unsigned __int8 irql; // [rsp+30h] [rbp+8h] BYREF

  irql = 0;
  this->AcquireLock(this, FxDriverGlobals, &irql);
  v7 = 0;
  if ( Entry->m_Transaction == FxTransactionActionAdd )
  {
    p_m_TransactionLink = &Entry->m_TransactionLink;
    v7 = 1;
    Flink = Entry->m_TransactionLink.Flink;
    if ( Flink->Blink != &Entry->m_TransactionLink )
      goto LABEL_12;
    Blink = Entry->m_TransactionLink.Blink;
    if ( Blink->Flink != p_m_TransactionLink )
      goto LABEL_12;
    Blink->Flink = Flink;
    Flink->Blink = Blink;
    Entry->m_TransactionLink.Blink = &Entry->m_TransactionLink;
    p_m_TransactionLink->Flink = p_m_TransactionLink;
    Entry->m_Transaction = FxTransactionActionNothing;
  }
  else
  {
    if ( !this->m_ListLockedRecursionCount )
    {
      v8 = Entry->m_ListLink.Flink;
      if ( (FxTransactionedEntry *)Entry->m_ListLink.Flink->Blink == Entry )
      {
        v9 = Entry->m_ListLink.Blink;
        if ( (FxTransactionedEntry *)v9->Flink == Entry )
        {
          v9->Flink = v8;
          v8->Blink = v9;
          Entry->m_ListLink.Blink = &Entry->m_ListLink;
          Entry->m_ListLink.Flink = &Entry->m_ListLink;
          ((void (__fastcall *)(FxTransactionedList *, FxTransactionedEntry *, __int64, __int64))this->EntryRemoved)(
            this,
            Entry,
            v6,
            3LL);
          v7 = 1;
          goto LABEL_6;
        }
      }
LABEL_12:
      __fastfail(3u);
    }
    Entry->m_Transaction = FxTransactionActionRemove;
    v13 = this->m_TransactionHead.Blink;
    v14 = &Entry->m_TransactionLink;
    if ( v13->Flink != &this->m_TransactionHead )
      goto LABEL_12;
    Entry->m_TransactionLink.Blink = v13;
    v14->Flink = &this->m_TransactionHead;
    v13->Flink = v14;
    this->m_TransactionHead.Blink = v14;
    FxObject::AddRef(
      Entry->m_TransactionedObject,
      Entry,
      423,
      "minkernel\\wdf\\framework\\shared\\support\\fxtransactionedlist.cpp");
  }
LABEL_6:
  LOBYTE(v6) = irql;
  this->ReleaseLock(this, FxDriverGlobals, v6);
  if ( v7 )
  {
    if ( this->m_DeleteOnRemove )
      Entry->m_TransactionedObject->DeleteObject(Entry->m_TransactionedObject);
  }
}
