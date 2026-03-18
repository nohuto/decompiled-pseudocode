/*
 * XREFs of imp_WdfPdoClearEjectionRelationsDevices @ 0x14008B7A0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetNextEntryLocked@FxTransactionedList@@IEAAPEAUFxTransactionedEntry@@PEAU2@@Z @ 0x140019B9C (-GetNextEntryLocked@FxTransactionedList@@IEAAPEAUFxTransactionedEntry@@PEAU2@@Z.c)
 *     ?UnlockFromEnum@FxTransactionedList@@QEAAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x14001A2AC (-UnlockFromEnum@FxTransactionedList@@QEAAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?LockForEnum@FxTransactionedList@@QEAAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x14001A5C8 (-LockForEnum@FxTransactionedList@@QEAAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?GetPdoPackageFromDeviceHandle@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFDEVICE__@@PEADPEAPEAVFxPkgPdo@@PEAPEAU1@PEAPEAVFxDevice@@@Z @ 0x140037240 (-GetPdoPackageFromDeviceHandle@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFDEVICE__@@PEADPEAPEAVFxPkgPdo@.c)
 *     ?SearchForAndRemove@FxTransactionedList@@IEAAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x14009AAE4 (-SearchForAndRemove@FxTransactionedList@@IEAAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 */

void __fastcall imp_WdfPdoClearEjectionRelationsDevices(_WDF_DRIVER_GLOBALS *DriverGlobals, WDFDEVICE__ *Device)
{
  FxPkgPdo *v2; // rbx
  FxRelatedDeviceList *m_EjectionDeviceList; // rcx
  FxTransactionedEntry *NextEntryLocked; // rax
  FxTransactionedList *v5; // r9
  _FX_DRIVER_GLOBALS *m_Globals; // rdx
  FxPkgPdo *pPkgPdo; // [rsp+40h] [rbp+8h] BYREF
  _FX_DRIVER_GLOBALS *pFxDriverGlobals; // [rsp+50h] [rbp+18h] BYREF

  pFxDriverGlobals = 0LL;
  pPkgPdo = 0LL;
  if ( (int)GetPdoPackageFromDeviceHandle(
              (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8],
              (unsigned __int64)Device,
              "imp_WdfPdoClearEjectionRelationsDevices",
              &pPkgPdo,
              &pFxDriverGlobals,
              0LL) >= 0 )
  {
    v2 = pPkgPdo;
    m_EjectionDeviceList = pPkgPdo->m_EjectionDeviceList;
    if ( m_EjectionDeviceList )
    {
      FxTransactionedList::LockForEnum(m_EjectionDeviceList, pPkgPdo->m_Globals);
      while ( 1 )
      {
        NextEntryLocked = FxTransactionedList::GetNextEntryLocked(v2->m_EjectionDeviceList, 0LL);
        m_Globals = v2->m_Globals;
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
}
