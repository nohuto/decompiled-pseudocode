/*
 * XREFs of ?GetDeviceFromId@FxChildList@@QEAAPEAVFxDevice@@PEAU_WDF_CHILD_RETRIEVE_INFO@@@Z @ 0x140017F3C
 * Callers:
 *     imp_WdfChildListRetrievePdo @ 0x140017D50 (imp_WdfChildListRetrievePdo.c)
 *     imp_WdfChildListRequestChildEject @ 0x14008B360 (imp_WdfChildListRequestChildEject.c)
 * Callees:
 *     ?SearchBackwardsForMatchingModificationLocked@FxChildList@@IEAAPEAUFxDeviceDescriptionEntry@@PEAU_WDF_CHILD_IDENTIFICATION_DESCRIPTION_HEADER@@@Z @ 0x140018010 (-SearchBackwardsForMatchingModificationLocked@FxChildList@@IEAAPEAUFxDeviceDescriptionEntry@@PEA.c)
 *     ?SearchBackwardsForMatchingDescriptionLocked@FxChildList@@IEAAPEAUFxDeviceDescriptionEntry@@PEAU_WDF_CHILD_IDENTIFICATION_DESCRIPTION_HEADER@@@Z @ 0x140018088 (-SearchBackwardsForMatchingDescriptionLocked@FxChildList@@IEAAPEAUFxDeviceDescriptionEntry@@PEAU.c)
 *     ?CopyAddress@FxChildList@@IEAAXPEAU_WDF_CHILD_ADDRESS_DESCRIPTION_HEADER@@0@Z @ 0x14008C4B8 (-CopyAddress@FxChildList@@IEAAXPEAU_WDF_CHILD_ADDRESS_DESCRIPTION_HEADER@@0@Z.c)
 */

FxDevice *__fastcall FxChildList::GetDeviceFromId(FxChildList *this, _WDF_CHILD_RETRIEVE_INFO *Info)
{
  unsigned __int64 *p_m_ListLock; // r14
  FxDevice *m_Pdo; // rbp
  KIRQL v6; // r15
  FxDeviceDescriptionEntry *v7; // rax
  FxChildListDescriptionState m_DescriptionState; // ecx
  _WDF_CHILD_LIST_RETRIEVE_DEVICE_STATUS v9; // ebx
  _WDF_CHILD_ADDRESS_DESCRIPTION_HEADER *AddressDescription; // rdx
  FxDevice *result; // rax

  p_m_ListLock = &this->m_ListLock;
  m_Pdo = 0LL;
  v6 = KeAcquireSpinLockRaiseToDpc(&this->m_ListLock);
  v7 = FxChildList::SearchBackwardsForMatchingModificationLocked(this, Info->IdentificationDescription);
  if ( v7 && v7->m_ModificationState == ModificationInsert )
  {
    v9 = WdfChildListRetrieveDeviceNotYetCreated;
  }
  else
  {
    v7 = FxChildList::SearchBackwardsForMatchingDescriptionLocked(this, Info->IdentificationDescription);
    if ( !v7 )
    {
      v9 = WdfChildListRetrieveDeviceNoSuchDevice;
      goto LABEL_8;
    }
    m_DescriptionState = v7->m_DescriptionState;
    if ( m_DescriptionState != DescriptionPresentNeedsInstantiation )
      m_Pdo = v7->m_Pdo;
    v9 = (m_DescriptionState == DescriptionPresentNeedsInstantiation) + 1;
  }
  AddressDescription = Info->AddressDescription;
  if ( AddressDescription )
    FxChildList::CopyAddress(this, AddressDescription, v7->m_AddressDescription);
LABEL_8:
  KeReleaseSpinLock(p_m_ListLock, v6);
  result = m_Pdo;
  Info->Status = v9;
  return result;
}
