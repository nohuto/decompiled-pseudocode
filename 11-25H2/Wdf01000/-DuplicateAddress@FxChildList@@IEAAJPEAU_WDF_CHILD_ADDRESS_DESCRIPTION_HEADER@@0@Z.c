/*
 * XREFs of ?DuplicateAddress@FxChildList@@IEAAJPEAU_WDF_CHILD_ADDRESS_DESCRIPTION_HEADER@@0@Z @ 0x14008C514
 * Callers:
 *     ?Add@FxChildList@@QEAAJPEAU_WDF_CHILD_IDENTIFICATION_DESCRIPTION_HEADER@@PEAU_WDF_CHILD_ADDRESS_DESCRIPTION_HEADER@@PEAK@Z @ 0x1400181BC (-Add@FxChildList@@QEAAJPEAU_WDF_CHILD_IDENTIFICATION_DESCRIPTION_HEADER@@PEAU_WDF_CHILD_ADDRESS_.c)
 *     ?Clone@FxDeviceDescriptionEntry@@QEAAPEAU1@PEAU_LIST_ENTRY@@@Z @ 0x14008C1EC (-Clone@FxDeviceDescriptionEntry@@QEAAPEAU1@PEAU_LIST_ENTRY@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1400AC680 (_guard_dispatch_icall.c)
 *     memmove @ 0x1400ACC80 (memmove.c)
 */

__int64 __fastcall FxChildList::DuplicateAddress(
        FxChildList *this,
        _WDF_CHILD_ADDRESS_DESCRIPTION_HEADER *Dest,
        _WDF_CHILD_ADDRESS_DESCRIPTION_HEADER *Source)
{
  int (__fastcall *m_EvtAddressDescriptionDuplicate)(WDFCHILDLIST__ *, _WDF_CHILD_ADDRESS_DESCRIPTION_HEADER *, _WDF_CHILD_ADDRESS_DESCRIPTION_HEADER *); // rax
  unsigned __int16 m_ObjectSize; // r9
  unsigned __int64 v5; // rcx

  m_EvtAddressDescriptionDuplicate = this->m_EvtAddressDescriptionDuplicate;
  if ( m_EvtAddressDescriptionDuplicate )
  {
    m_ObjectSize = this->m_ObjectSize;
    v5 = (unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL;
    if ( !m_ObjectSize )
      v5 = 0LL;
    return ((__int64 (__fastcall *)(unsigned __int64, _WDF_CHILD_ADDRESS_DESCRIPTION_HEADER *, _WDF_CHILD_ADDRESS_DESCRIPTION_HEADER *))m_EvtAddressDescriptionDuplicate)(
             v5,
             Source,
             Dest);
  }
  else
  {
    memmove(Dest, Source, this->m_AddressDescriptionSize);
    return 0LL;
  }
}
