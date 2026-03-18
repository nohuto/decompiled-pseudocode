/*
 * XREFs of ?CompareId@FxChildList@@IEAAEPEAU_WDF_CHILD_IDENTIFICATION_DESCRIPTION_HEADER@@0@Z @ 0x1400180F4
 * Callers:
 *     ?SearchBackwardsForMatchingModificationLocked@FxChildList@@IEAAPEAUFxDeviceDescriptionEntry@@PEAU_WDF_CHILD_IDENTIFICATION_DESCRIPTION_HEADER@@@Z @ 0x140018010 (-SearchBackwardsForMatchingModificationLocked@FxChildList@@IEAAPEAUFxDeviceDescriptionEntry@@PEA.c)
 *     ?SearchBackwardsForMatchingDescriptionLocked@FxChildList@@IEAAPEAUFxDeviceDescriptionEntry@@PEAU_WDF_CHILD_IDENTIFICATION_DESCRIPTION_HEADER@@@Z @ 0x140018088 (-SearchBackwardsForMatchingDescriptionLocked@FxChildList@@IEAAPEAUFxDeviceDescriptionEntry@@PEAU.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1400AC680 (_guard_dispatch_icall.c)
 */

unsigned __int8 __fastcall FxChildList::CompareId(
        FxChildList *this,
        _WDF_CHILD_IDENTIFICATION_DESCRIPTION_HEADER *Lhs,
        _WDF_CHILD_IDENTIFICATION_DESCRIPTION_HEADER *Rhs)
{
  unsigned __int8 (__fastcall *m_EvtIdentificationDescriptionCompare)(WDFCHILDLIST__ *, _WDF_CHILD_IDENTIFICATION_DESCRIPTION_HEADER *, _WDF_CHILD_IDENTIFICATION_DESCRIPTION_HEADER *); // rax
  unsigned __int64 v4; // rbx

  m_EvtIdentificationDescriptionCompare = this->m_EvtIdentificationDescriptionCompare;
  if ( !m_EvtIdentificationDescriptionCompare )
    return this->m_IdentificationDescriptionSize == RtlCompareMemory(Lhs, Rhs, this->m_IdentificationDescriptionSize);
  v4 = (unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL;
  if ( !this->m_ObjectSize )
    v4 = 0LL;
  return ((__int64 (__fastcall *)(unsigned __int64))m_EvtIdentificationDescriptionCompare)(v4);
}
