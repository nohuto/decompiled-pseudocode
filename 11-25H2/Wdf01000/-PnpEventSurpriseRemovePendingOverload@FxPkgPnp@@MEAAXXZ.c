/*
 * XREFs of ?PnpEventSurpriseRemovePendingOverload@FxPkgPnp@@MEAAXXZ @ 0x14003FDE0
 * Callers:
 *     ?PnpEventSurpriseRemovePendingOverload@FxPkgPdo@@EEAAXXZ @ 0x14003FDA0 (-PnpEventSurpriseRemovePendingOverload@FxPkgPdo@@EEAAXXZ.c)
 * Callees:
 *     ?GetNextEntryLocked@FxTransactionedList@@IEAAPEAUFxTransactionedEntry@@PEAU2@@Z @ 0x140019B9C (-GetNextEntryLocked@FxTransactionedList@@IEAAPEAUFxTransactionedEntry@@PEAU2@@Z.c)
 *     ?UnlockFromEnum@FxTransactionedList@@QEAAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x14001A2AC (-UnlockFromEnum@FxTransactionedList@@QEAAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?LockForEnum@FxTransactionedList@@QEAAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x14001A5C8 (-LockForEnum@FxTransactionedList@@QEAAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?NotifyDeviceSurpriseRemove@FxChildList@@QEAAXXZ @ 0x140072D30 (-NotifyDeviceSurpriseRemove@FxChildList@@QEAAXXZ.c)
 */

void __fastcall FxPkgPnp::PnpEventSurpriseRemovePendingOverload(FxPkgPnp *this)
{
  FxEnumerationInfo *m_EnumInfo; // rcx
  FxTransactionedEntry *i; // rdx
  FxTransactionedEntry *NextEntryLocked; // rax
  __int64 v5; // r8
  FxTransactionedEntry *v6; // rdi

  m_EnumInfo = this->m_EnumInfo;
  if ( m_EnumInfo )
  {
    FxTransactionedList::LockForEnum(&m_EnumInfo->m_ChildListList, this->m_Globals);
    for ( i = 0LL; ; i = v6 )
    {
      NextEntryLocked = FxTransactionedList::GetNextEntryLocked(&this->m_EnumInfo->m_ChildListList, i);
      v6 = NextEntryLocked;
      if ( !NextEntryLocked )
        break;
      FxChildList::NotifyDeviceSurpriseRemove((FxChildList *)&NextEntryLocked[-3].m_TransactionLink.Blink);
    }
    FxTransactionedList::UnlockFromEnum((FxTransactionedList *)(v5 + 40), this->m_Globals);
  }
}
