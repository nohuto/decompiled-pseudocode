/*
 * XREFs of imp_WdfDeviceClearRemovalRelationsDevices @ 0x140092380
 * Callers:
 *     <none>
 * Callees:
 *     ?GetNextEntryLocked@FxTransactionedList@@IEAAPEAUFxTransactionedEntry@@PEAU2@@Z @ 0x140019B9C (-GetNextEntryLocked@FxTransactionedList@@IEAAPEAUFxTransactionedEntry@@PEAU2@@Z.c)
 *     ?UnlockFromEnum@FxTransactionedList@@QEAAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x14001A2AC (-UnlockFromEnum@FxTransactionedList@@QEAAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?LockForEnum@FxTransactionedList@@QEAAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x14001A5C8 (-LockForEnum@FxTransactionedList@@QEAAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x140026620 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     ?SearchForAndRemove@FxTransactionedList@@IEAAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x14009AAE4 (-SearchForAndRemove@FxTransactionedList@@IEAAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 */

void __fastcall imp_WdfDeviceClearRemovalRelationsDevices(_WDF_DRIVER_GLOBALS *DriverGlobals, WDFDEVICE__ *Device)
{
  FxPkgPnp *m_PkgPnp; // rbx
  FxTransactionedList *m_RemovalDeviceList; // rcx
  FxTransactionedEntry *NextEntryLocked; // rax
  FxTransactionedList *v5; // r9
  _FX_DRIVER_GLOBALS *m_Globals; // rdx
  FxDevice *pDevice; // [rsp+30h] [rbp+8h] BYREF

  pDevice = 0LL;
  FxObjectHandleGetPtr((_FX_DRIVER_GLOBALS *)&DriverGlobals[-8], (unsigned __int64)Device, 0x1002u, (void **)&pDevice);
  m_PkgPnp = pDevice->m_PkgPnp;
  m_RemovalDeviceList = m_PkgPnp->m_RemovalDeviceList;
  if ( m_RemovalDeviceList )
  {
    FxTransactionedList::LockForEnum(m_RemovalDeviceList, m_PkgPnp->m_Globals);
    while ( 1 )
    {
      NextEntryLocked = FxTransactionedList::GetNextEntryLocked(m_PkgPnp->m_RemovalDeviceList, 0LL);
      m_Globals = m_PkgPnp->m_Globals;
      if ( ((unsigned __int64)&NextEntryLocked[-3].m_TransactionedObject & -(__int64)(NextEntryLocked != 0LL)) == 0 )
        break;
      FxTransactionedList::SearchForAndRemove(
        v5,
        m_Globals,
        *(void **)(((unsigned __int64)&NextEntryLocked[-3].m_TransactionedObject & -(__int64)(NextEntryLocked != 0LL))
                 + 0x98));
    }
    FxTransactionedList::UnlockFromEnum(v5, m_Globals);
  }
}
