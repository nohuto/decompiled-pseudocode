/*
 * XREFs of ?CopyAddress@FxChildList@@IEAAXPEAU_WDF_CHILD_ADDRESS_DESCRIPTION_HEADER@@0@Z @ 0x14008C4B8
 * Callers:
 *     ?GetDeviceFromId@FxChildList@@QEAAPEAVFxDevice@@PEAU_WDF_CHILD_RETRIEVE_INFO@@@Z @ 0x140017F3C (-GetDeviceFromId@FxChildList@@QEAAPEAVFxDevice@@PEAU_WDF_CHILD_RETRIEVE_INFO@@@Z.c)
 *     ?Add@FxChildList@@QEAAJPEAU_WDF_CHILD_IDENTIFICATION_DESCRIPTION_HEADER@@PEAU_WDF_CHILD_ADDRESS_DESCRIPTION_HEADER@@PEAK@Z @ 0x1400181BC (-Add@FxChildList@@QEAAJPEAU_WDF_CHILD_IDENTIFICATION_DESCRIPTION_HEADER@@PEAU_WDF_CHILD_ADDRESS_.c)
 *     ?GetNextDevice@FxChildList@@QEAAJPEAPEAUWDFDEVICE__@@PEAU_WDF_CHILD_LIST_ITERATOR@@PEAU_WDF_CHILD_RETRIEVE_INFO@@@Z @ 0x140055650 (-GetNextDevice@FxChildList@@QEAAJPEAPEAUWDFDEVICE__@@PEAU_WDF_CHILD_LIST_ITERATOR@@PEAU_WDF_CHIL.c)
 *     imp_WdfPdoRetrieveAddressDescription @ 0x14008B990 (imp_WdfPdoRetrieveAddressDescription.c)
 *     imp_WdfPdoUpdateAddressDescription @ 0x14008BA70 (imp_WdfPdoUpdateAddressDescription.c)
 *     ?GetAddressDescription@FxChildList@@QEAAJPEAU_WDF_CHILD_IDENTIFICATION_DESCRIPTION_HEADER@@PEAU_WDF_CHILD_ADDRESS_DESCRIPTION_HEADER@@@Z @ 0x14008C56C (-GetAddressDescription@FxChildList@@QEAAJPEAU_WDF_CHILD_IDENTIFICATION_DESCRIPTION_HEADER@@PEAU_.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1400AC680 (_guard_dispatch_icall.c)
 *     memmove @ 0x1400ACC80 (memmove.c)
 */

void __fastcall FxChildList::CopyAddress(
        FxChildList *this,
        _WDF_CHILD_ADDRESS_DESCRIPTION_HEADER *Dest,
        _WDF_CHILD_ADDRESS_DESCRIPTION_HEADER *Source)
{
  void (__fastcall *m_EvtAddressDescriptionCopy)(WDFCHILDLIST__ *, _WDF_CHILD_ADDRESS_DESCRIPTION_HEADER *, _WDF_CHILD_ADDRESS_DESCRIPTION_HEADER *); // rax
  unsigned __int16 m_ObjectSize; // r9
  unsigned __int64 v5; // rcx

  if ( Source )
  {
    m_EvtAddressDescriptionCopy = this->m_EvtAddressDescriptionCopy;
    if ( m_EvtAddressDescriptionCopy )
    {
      m_ObjectSize = this->m_ObjectSize;
      v5 = (unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL;
      if ( !m_ObjectSize )
        v5 = 0LL;
      m_EvtAddressDescriptionCopy((WDFCHILDLIST__ *)v5, Source, Dest);
    }
    else
    {
      memmove(Dest, Source, this->m_AddressDescriptionSize);
    }
  }
}
