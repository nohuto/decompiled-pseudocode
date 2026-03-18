/*
 * XREFs of ?DuplicateId@FxChildList@@IEAAJPEAU_WDF_CHILD_IDENTIFICATION_DESCRIPTION_HEADER@@0@Z @ 0x14007B0B8
 * Callers:
 *     ?Add@FxChildList@@QEAAJPEAU_WDF_CHILD_IDENTIFICATION_DESCRIPTION_HEADER@@PEAU_WDF_CHILD_ADDRESS_DESCRIPTION_HEADER@@PEAK@Z @ 0x14002FADC (-Add@FxChildList@@QEAAJPEAU_WDF_CHILD_IDENTIFICATION_DESCRIPTION_HEADER@@PEAU_WDF_CHILD_ADDRESS_.c)
 *     ?Clone@FxDeviceDescriptionEntry@@QEAAPEAU1@PEAU_LIST_ENTRY@@@Z @ 0x14008C24C (-Clone@FxDeviceDescriptionEntry@@QEAAPEAU1@PEAU_LIST_ENTRY@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1400AC750 (_guard_dispatch_icall.c)
 *     memmove @ 0x1400ACD40 (memmove.c)
 */

__int64 __fastcall FxChildList::DuplicateId(
        FxChildList *this,
        _WDF_CHILD_IDENTIFICATION_DESCRIPTION_HEADER *Dest,
        _WDF_CHILD_IDENTIFICATION_DESCRIPTION_HEADER *Source)
{
  int (__fastcall *m_EvtIdentificationDescriptionDuplicate)(WDFCHILDLIST__ *, _WDF_CHILD_IDENTIFICATION_DESCRIPTION_HEADER *, _WDF_CHILD_IDENTIFICATION_DESCRIPTION_HEADER *); // rax
  unsigned __int16 m_ObjectSize; // r9
  unsigned __int64 v6; // rcx

  m_EvtIdentificationDescriptionDuplicate = this->m_EvtIdentificationDescriptionDuplicate;
  if ( m_EvtIdentificationDescriptionDuplicate )
  {
    m_ObjectSize = this->m_ObjectSize;
    v6 = (unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL;
    if ( !m_ObjectSize )
      v6 = 0LL;
    return ((__int64 (__fastcall *)(unsigned __int64, _WDF_CHILD_IDENTIFICATION_DESCRIPTION_HEADER *, _WDF_CHILD_IDENTIFICATION_DESCRIPTION_HEADER *))m_EvtIdentificationDescriptionDuplicate)(
             v6,
             Source,
             Dest);
  }
  else
  {
    memmove(Dest, Source, this->m_IdentificationDescriptionSize);
    return 0LL;
  }
}
