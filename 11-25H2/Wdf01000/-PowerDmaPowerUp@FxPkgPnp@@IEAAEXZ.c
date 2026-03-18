/*
 * XREFs of ?PowerDmaPowerUp@FxPkgPnp@@IEAAEXZ @ 0x14001A548
 * Callers:
 *     ?PowerDmaEnableAndScan@FxPkgPnp@@IEAAEXZ @ 0x140019DB4 (-PowerDmaEnableAndScan@FxPkgPnp@@IEAAEXZ.c)
 * Callees:
 *     ?GetNextEntryLocked@FxTransactionedList@@IEAAPEAUFxTransactionedEntry@@PEAU2@@Z @ 0x140019B9C (-GetNextEntryLocked@FxTransactionedList@@IEAAPEAUFxTransactionedEntry@@PEAU2@@Z.c)
 *     ?UnlockFromEnum@FxTransactionedList@@QEAAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x14001A2AC (-UnlockFromEnum@FxTransactionedList@@QEAAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?LockForEnum@FxTransactionedList@@QEAAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x14001A5C8 (-LockForEnum@FxTransactionedList@@QEAAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?PowerUp@FxDmaEnabler@@QEAAJXZ @ 0x14006F3A0 (-PowerUp@FxDmaEnabler@@QEAAJXZ.c)
 */

char __fastcall FxPkgPnp::PowerDmaPowerUp(FxPkgPnp *this)
{
  char v2; // di
  FxSpinLockTransactionedList *m_DmaEnablerList; // rcx
  FxTransactionedEntry *v4; // rsi
  FxTransactionedEntry *NextEntryLocked; // rax

  v2 = 1;
  m_DmaEnablerList = this->m_DmaEnablerList;
  if ( m_DmaEnablerList )
  {
    FxTransactionedList::LockForEnum(m_DmaEnablerList, this->m_Globals);
    v4 = 0LL;
    while ( 1 )
    {
      NextEntryLocked = FxTransactionedList::GetNextEntryLocked(this->m_DmaEnablerList, v4);
      v4 = NextEntryLocked;
      if ( !NextEntryLocked )
        break;
      if ( FxDmaEnabler::PowerUp((FxDmaEnabler *)NextEntryLocked->m_TransactionedObject) < 0 )
      {
        v2 = 0;
        break;
      }
    }
    FxTransactionedList::UnlockFromEnum(this->m_DmaEnablerList, this->m_Globals);
  }
  return v2;
}
