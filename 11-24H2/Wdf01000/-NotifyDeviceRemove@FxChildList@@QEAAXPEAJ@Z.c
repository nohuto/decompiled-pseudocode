/*
 * XREFs of ?NotifyDeviceRemove@FxChildList@@QEAAXPEAJ@Z @ 0x140071F08
 * Callers:
 *     ?ChildListNotifyRemove@FxPkgPnp@@QEAAXPEAJ@Z @ 0x140071E88 (-ChildListNotifyRemove@FxPkgPnp@@QEAAXPEAJ@Z.c)
 * Callees:
 *     ?PnpProcessEvent@FxPkgPnp@@QEAAXW4FxPnpEvent@@E@Z @ 0x140005FE4 (-PnpProcessEvent@FxPkgPnp@@QEAAXW4FxPnpEvent@@E@Z.c)
 *     ?FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z @ 0x14001F580 (-FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z.c)
 *     ?DrainFreeListHead@FxChildList@@IEAAXPEAU_LIST_ENTRY@@@Z @ 0x1400313F4 (-DrainFreeListHead@FxChildList@@IEAAXPEAU_LIST_ENTRY@@@Z.c)
 *     ?ProcessModificationsLocked@FxChildList@@IEAAXPEAU_LIST_ENTRY@@@Z @ 0x140035AD4 (-ProcessModificationsLocked@FxChildList@@IEAAXPEAU_LIST_ENTRY@@@Z.c)
 *     WPP_IFR_SF_q @ 0x140037258 (WPP_IFR_SF_q.c)
 *     WPP_IFR_SF_qqq @ 0x140041538 (WPP_IFR_SF_qqq.c)
 *     ?NotifyDeviceSurpriseRemove@FxChildList@@QEAAXXZ @ 0x1400720F0 (-NotifyDeviceSurpriseRemove@FxChildList@@QEAAXXZ.c)
 */

void __fastcall FxChildList::NotifyDeviceRemove(FxChildList *this, int *ChildCount)
{
  const void *_a1; // r8
  bool v5; // zf
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  _FX_DRIVER_GLOBALS *v7; // rcx
  KIRQL v8; // r14
  _LIST_ENTRY *p_m_DescriptionListHead; // rsi
  _LIST_ENTRY *i; // rbx
  unsigned __int8 v11; // r8
  _LIST_ENTRY *Flink; // rdx
  const void *_a2; // rcx
  _LIST_ENTRY *v14; // rcx
  _LIST_ENTRY *Blink; // rax
  unsigned __int8 v16; // r8
  _LIST_ENTRY freeHead; // [rsp+40h] [rbp-28h] BYREF

  _a1 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
  v5 = this->m_ObjectSize == 0;
  m_Globals = this->m_Globals;
  if ( v5 )
    _a1 = 0LL;
  WPP_IFR_SF_q(m_Globals, 4u, 0xCu, 0x32u, WPP_FxChildList_cpp_Traceguids, _a1);
  v7 = this->m_Globals;
  freeHead.Blink = &freeHead;
  freeHead.Flink = &freeHead;
  FxVerifierCheckIrqlLevel(v7, 0);
  FxChildList::NotifyDeviceSurpriseRemove(this);
  v8 = KeAcquireSpinLockRaiseToDpc(&this->m_ListLock);
  FxChildList::ProcessModificationsLocked(this, &freeHead);
  this->m_State = ListLockedForParentRemove;
  p_m_DescriptionListHead = &this->m_DescriptionListHead;
LABEL_4:
  for ( i = p_m_DescriptionListHead->Flink; i != p_m_DescriptionListHead; i = i->Flink )
  {
    if ( !BYTE1(i[5].Flink) )
    {
      Flink = i[4].Flink;
      _a2 = (const void *)((unsigned __int64)Flink ^ 0xFFFFFFFFFFFFFFF8uLL);
      if ( !WORD1(Flink->Blink) )
        _a2 = 0LL;
      WPP_IFR_SF_qqq(this->m_Globals, 4u, 0xCu, 0x33u, WPP_FxChildList_cpp_Traceguids, i, _a2, Flink[10].Flink);
      v14 = i->Flink;
      if ( i->Flink->Blink != i || (Blink = i->Blink, Blink->Flink != i) )
        __fastfail(3u);
      Blink->Flink = v14;
      v14->Blink = Blink;
      i->Blink = i;
      i->Flink = i;
      KeReleaseSpinLock(&this->m_ListLock, v8);
      BYTE3(i[4].Flink[13].Blink) = 1;
      _InterlockedIncrement(ChildCount);
      FxPkgPnp::PnpProcessEvent((FxPkgPnp *)i[4].Flink[40].Blink, PnpEventParentRemoved, v16);
      v8 = KeAcquireSpinLockRaiseToDpc(&this->m_ListLock);
      goto LABEL_4;
    }
  }
  this->m_State = ListUnlocked;
  FxChildList::ProcessModificationsLocked(this, &freeHead);
  KeReleaseSpinLock(&this->m_ListLock, v8);
  FxChildList::DrainFreeListHead(this, &freeHead, v11);
}
