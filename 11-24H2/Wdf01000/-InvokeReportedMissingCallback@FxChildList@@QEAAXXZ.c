/*
 * XREFs of ?InvokeReportedMissingCallback@FxChildList@@QEAAXXZ @ 0x140030634
 * Callers:
 *     ?HandleQueryBusRelations@FxPkgPnp@@IEAAJPEAVFxIrp@@@Z @ 0x140030750 (-HandleQueryBusRelations@FxPkgPnp@@IEAAJPEAVFxIrp@@@Z.c)
 * Callees:
 *     ?DrainFreeListHead@FxChildList@@IEAAXPEAU_LIST_ENTRY@@@Z @ 0x1400313F4 (-DrainFreeListHead@FxChildList@@IEAAXPEAU_LIST_ENTRY@@@Z.c)
 *     ?ProcessModificationsLocked@FxChildList@@IEAAXPEAU_LIST_ENTRY@@@Z @ 0x140035AD4 (-ProcessModificationsLocked@FxChildList@@IEAAXPEAU_LIST_ENTRY@@@Z.c)
 *     _guard_dispatch_icall @ 0x1400AC750 (_guard_dispatch_icall.c)
 */

void __fastcall FxChildList::InvokeReportedMissingCallback(FxChildList *this)
{
  unsigned __int64 *p_m_ListLock; // rbp
  KIRQL v3; // al
  _LIST_ENTRY *Flink; // rbx
  KIRQL v5; // al
  KIRQL v6; // bl
  FxChildList *v7; // rsi
  _LIST_ENTRY *v8; // rcx
  __int16 v9; // dx
  _LIST_ENTRY *v10; // rax
  unsigned __int64 v11; // rcx
  _LIST_ENTRY freeHead; // [rsp+20h] [rbp-28h] BYREF

  freeHead.Blink = &freeHead;
  p_m_ListLock = &this->m_ListLock;
  freeHead.Flink = &freeHead;
  v3 = KeAcquireSpinLockRaiseToDpc(&this->m_ListLock);
  this->m_State = ListLockedForEnum;
  KeReleaseSpinLock(p_m_ListLock, v3);
  Flink = this->m_DescriptionListHead.Flink;
  if ( Flink != &this->m_DescriptionListHead )
  {
    do
    {
      v7 = (FxChildList *)Flink->Flink;
      if ( BYTE3(Flink[5].Flink) == 1 )
      {
        v8 = Flink[4].Flink;
        v9 = WORD1(v8->Blink);
        v10 = v8[40].Blink[111].Flink;
        if ( v10 )
        {
          v11 = (unsigned __int64)v8 ^ 0xFFFFFFFFFFFFFFF8uLL;
          if ( !v9 )
            v11 = 0LL;
          ((void (__fastcall *)(unsigned __int64))v10)(v11);
        }
        BYTE3(Flink[5].Flink) = 2;
      }
      Flink = (_LIST_ENTRY *)v7;
    }
    while ( v7 != (FxChildList *)&this->m_DescriptionListHead );
  }
  v5 = KeAcquireSpinLockRaiseToDpc(p_m_ListLock);
  this->m_State = ListUnlocked;
  v6 = v5;
  FxChildList::ProcessModificationsLocked(this, &freeHead);
  KeReleaseSpinLock(p_m_ListLock, v6);
  FxChildList::DrainFreeListHead(this, &freeHead);
}
