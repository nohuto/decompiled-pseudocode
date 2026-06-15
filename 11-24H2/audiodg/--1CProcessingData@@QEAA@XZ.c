/*
 * XREFs of ??1CProcessingData@@QEAA@XZ @ 0x140042F40
 * Callers:
 *     ?NonRTCancelSafePointer@?$CRealTimeSafeStruct@VCProcessingData@@$00@@QEAAXXZ @ 0x14007F790 (-NonRTCancelSafePointer@-$CRealTimeSafeStruct@VCProcessingData@@$00@@QEAAXXZ.c)
 *     _CRealTimeSafeStruct_CProcessingData_1_::SwapRTPointer_::_1_::dtor$3 @ 0x140093DAA (_CRealTimeSafeStruct_CProcessingData_1_--SwapRTPointer_--_1_--dtor$3.c)
 * Callees:
 *     ?RemoveAll@?$CAtlList@PEAVCConnectionNode@@VCConnectionNodeTraits@@@ATLRT@@QEAAXXZ @ 0x14000CCF0 (-RemoveAll@-$CAtlList@PEAVCConnectionNode@@VCConnectionNodeTraits@@@ATLRT@@QEAAXXZ.c)
 */

void __fastcall CProcessingData::~CProcessingData(CProcessingData *this)
{
  ATLRT::CAtlList<CConnectionNode *,CConnectionNodeTraits>::RemoveAll((__int64 *)this + 12);
  ATLRT::CAtlList<CConnectionNode *,CConnectionNodeTraits>::RemoveAll((__int64 *)this + 6);
  ATL::CAtlList<CPipeInstance *,ATL::CElementTraits<CPipeInstance *>>::RemoveAll((__int64)this);
}
