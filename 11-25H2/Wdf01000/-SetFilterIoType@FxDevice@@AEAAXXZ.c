/*
 * XREFs of ?SetFilterIoType@FxDevice@@AEAAXXZ @ 0x14004161C
 * Callers:
 *     ?PnpMatchResources@FxPkgPnp@@IEAAJXZ @ 0x140040E00 (-PnpMatchResources@FxPkgPnp@@IEAAJXZ.c)
 *     ?FdoInitialize@FxDevice@@QEAAJPEAUWDFDEVICE_INIT@@@Z @ 0x1400427B8 (-FdoInitialize@FxDevice@@QEAAJPEAUWDFDEVICE_INIT@@@Z.c)
 * Callees:
 *     ?GetNextEntryLocked@FxTransactionedList@@IEAAPEAUFxTransactionedEntry@@PEAU2@@Z @ 0x140019B9C (-GetNextEntryLocked@FxTransactionedList@@IEAAPEAUFxTransactionedEntry@@PEAU2@@Z.c)
 *     ?UnlockFromEnum@FxTransactionedList@@QEAAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x14001A2AC (-UnlockFromEnum@FxTransactionedList@@QEAAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?LockForEnum@FxTransactionedList@@QEAAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x14001A5C8 (-LockForEnum@FxTransactionedList@@QEAAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?UpdateTargetIoType@FxIoTarget@@QEAAXXZ @ 0x140040140 (-UpdateTargetIoType@FxIoTarget@@QEAAXXZ.c)
 */

void __fastcall FxDevice::SetFilterIoType(FxDevice *this)
{
  _DEVICE_OBJECT *m_DeviceObject; // rax
  unsigned int Flags; // ecx
  FxTransactionedEntry *i; // rdx
  FxTransactionedEntry *NextEntryLocked; // rax
  FxTransactionedEntry *v6; // rdi
  FxIoTarget *m_TransactionedObject; // rcx

  this->m_DeviceObject.m_DeviceObject->Flags &= 0xFFFFFFEB;
  m_DeviceObject = this->m_AttachedDevice.FxDeviceBase::m_DeviceObject;
  if ( m_DeviceObject )
    this->m_DeviceObject.m_DeviceObject->Flags |= m_DeviceObject->Flags & 0x14;
  Flags = this->m_DeviceObject.m_DeviceObject->Flags;
  if ( (Flags & 4) != 0 )
    this->m_ReadWriteIoType = WdfDeviceIoBuffered;
  else
    this->m_ReadWriteIoType = (Flags & 0x10 | 8) >> 3;
  FxTransactionedList::LockForEnum(&this->m_IoTargetsList, this->m_Globals);
  for ( i = 0LL; ; i = v6 )
  {
    NextEntryLocked = FxTransactionedList::GetNextEntryLocked(&this->m_IoTargetsList, i);
    v6 = NextEntryLocked;
    if ( !NextEntryLocked )
      break;
    m_TransactionedObject = (FxIoTarget *)NextEntryLocked->m_TransactionedObject;
    if ( m_TransactionedObject->m_TargetPdo == this->m_PhysicalDevice.FxDeviceBase::m_DeviceObject )
      FxIoTarget::UpdateTargetIoType(m_TransactionedObject);
  }
  FxTransactionedList::UnlockFromEnum(&this->m_IoTargetsList, this->m_Globals);
}
