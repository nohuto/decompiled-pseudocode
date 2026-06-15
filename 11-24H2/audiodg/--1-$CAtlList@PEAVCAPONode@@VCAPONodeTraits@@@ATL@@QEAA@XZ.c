/*
 * XREFs of ??1?$CAtlList@PEAVCAPONode@@VCAPONodeTraits@@@ATL@@QEAA@XZ @ 0x14004AF64
 * Callers:
 *     _CAudioProcessor::CAudioProcessor_::_1_::dtor$2 @ 0x140093ED2 (_CAudioProcessor--CAudioProcessor_--_1_--dtor$2.c)
 *     _CAudioProcessor::CAudioProcessor_::_1_::dtor$3 @ 0x140093EEB (_CAudioProcessor--CAudioProcessor_--_1_--dtor$3.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall ATL::CAtlList<CAPONode *,CAPONodeTraits>::~CAtlList<CAPONode *,CAPONodeTraits>(__int64 a1)
{
  ATL::CAtlList<CPipeInstance *,ATL::CElementTraits<CPipeInstance *>>::RemoveAll(a1);
}
