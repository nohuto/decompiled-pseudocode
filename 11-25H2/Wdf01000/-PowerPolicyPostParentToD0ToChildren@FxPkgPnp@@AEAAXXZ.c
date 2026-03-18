/*
 * XREFs of ?PowerPolicyPostParentToD0ToChildren@FxPkgPnp@@AEAAXXZ @ 0x14001A1F8
 * Callers:
 *     ?PowerPolicyChildrenCanPowerUp@FxPkgPnp@@AEAAXXZ @ 0x140019EE0 (-PowerPolicyChildrenCanPowerUp@FxPkgPnp@@AEAAXXZ.c)
 * Callees:
 *     ?UnlockFromEnum@FxTransactionedList@@QEAAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x14001A2AC (-UnlockFromEnum@FxTransactionedList@@QEAAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?PostParentToD0@FxChildList@@QEAAXXZ @ 0x14001A4AC (-PostParentToD0@FxChildList@@QEAAXXZ.c)
 *     _guard_dispatch_icall @ 0x1400AC680 (_guard_dispatch_icall.c)
 */

void __fastcall FxPkgPnp::PowerPolicyPostParentToD0ToChildren(FxPkgPnp *this)
{
  FxEnumerationInfo *m_EnumInfo; // rdi
  _FX_DRIVER_GLOBALS *m_Globals; // rbx
  FxWaitLockTransactionedList_vtbl *v4; // rax
  FxWaitLockTransactionedList_vtbl *v5; // rax
  __int64 v6; // r8
  _LIST_ENTRY *Flink; // rbx
  _LIST_ENTRY *p_m_ListHead; // rax
  char v9; // [rsp+30h] [rbp+8h] BYREF

  m_EnumInfo = this->m_EnumInfo;
  if ( m_EnumInfo )
  {
    m_Globals = this->m_Globals;
    v4 = m_EnumInfo->m_ChildListList.__vftable;
    v9 = 0;
    v4->AcquireLock(&m_EnumInfo->m_ChildListList, m_Globals, (unsigned __int8 *)&v9);
    v5 = m_EnumInfo->m_ChildListList.__vftable;
    LOBYTE(v6) = v9;
    ++m_EnumInfo->m_ChildListList.m_ListLockedRecursionCount;
    v5->ReleaseLock(&m_EnumInfo->m_ChildListList, m_Globals, v6);
    Flink = 0LL;
LABEL_3:
    p_m_ListHead = &this->m_EnumInfo->m_ChildListList.m_ListHead;
    if ( !Flink )
    {
      Flink = p_m_ListHead->Flink;
      goto LABEL_5;
    }
    while ( 1 )
    {
      Flink = Flink->Flink;
LABEL_5:
      if ( Flink == p_m_ListHead )
        break;
      if ( LODWORD(Flink[2].Flink) == 1 )
      {
        if ( !Flink )
          break;
        FxChildList::PostParentToD0((FxChildList *)Flink[2].Blink);
        goto LABEL_3;
      }
    }
    FxTransactionedList::UnlockFromEnum(&this->m_EnumInfo->m_ChildListList, this->m_Globals);
  }
}
