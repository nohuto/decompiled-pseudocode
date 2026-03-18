/*
 * XREFs of ?PowerDmaPowerDown@FxPkgPnp@@IEAAEXZ @ 0x14003317C
 * Callers:
 *     ?PowerGotoDxIoStoppedCommon@FxPkgPnp@@IEAAEE@Z @ 0x140032EB4 (-PowerGotoDxIoStoppedCommon@FxPkgPnp@@IEAAEE@Z.c)
 *     ?PowerGotoD3Stopped@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x14006B690 (-PowerGotoD3Stopped@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z.c)
 *     ?PowerInitialDmaEnableFailed@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x1400A5140 (-PowerInitialDmaEnableFailed@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z.c)
 *     ?PowerWakingDmaEnableFailed@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x1400A5880 (-PowerWakingDmaEnableFailed@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z.c)
 *     ?PowerWakingDmaEnableFailedNP@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x1400A5930 (-PowerWakingDmaEnableFailedNP@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z.c)
 * Callees:
 *     ?GetNextEntryLocked@FxTransactionedList@@IEAAPEAUFxTransactionedEntry@@PEAU2@@Z @ 0x1400314BC (-GetNextEntryLocked@FxTransactionedList@@IEAAPEAUFxTransactionedEntry@@PEAU2@@Z.c)
 *     ?UnlockFromEnum@FxTransactionedList@@QEAAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x140031BCC (-UnlockFromEnum@FxTransactionedList@@QEAAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?LockForEnum@FxTransactionedList@@QEAAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x140031EE8 (-LockForEnum@FxTransactionedList@@QEAAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?PowerDown@FxDmaEnabler@@QEAAJXZ @ 0x14006B4CC (-PowerDown@FxDmaEnabler@@QEAAJXZ.c)
 */

char __fastcall FxPkgPnp::PowerDmaPowerDown(FxPkgPnp *this)
{
  char v2; // bl
  FxSpinLockTransactionedList *m_DmaEnablerList; // rcx
  FxTransactionedEntry *i; // rdx
  int v6; // eax
  char v7; // dl
  FxTransactionedEntry *NextEntryLocked; // rax
  FxTransactionedList *v9; // r8
  FxTransactionedEntry *v10; // rsi

  v2 = 1;
  m_DmaEnablerList = this->m_DmaEnablerList;
  if ( m_DmaEnablerList )
  {
    FxTransactionedList::LockForEnum(m_DmaEnablerList, this->m_Globals);
    for ( i = 0LL; ; i = v10 )
    {
      NextEntryLocked = FxTransactionedList::GetNextEntryLocked(this->m_DmaEnablerList, i);
      v10 = NextEntryLocked;
      if ( !NextEntryLocked )
        break;
      v6 = FxDmaEnabler::PowerDown((FxDmaEnabler *)NextEntryLocked->m_TransactionedObject);
      v7 = 0;
      if ( v6 >= 0 )
        v7 = v2;
      v2 = v7;
    }
    FxTransactionedList::UnlockFromEnum(v9, this->m_Globals);
  }
  return v2;
}
