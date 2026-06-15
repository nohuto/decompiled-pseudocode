/*
 * XREFs of ??1?$CAtlList@PEAVCProcessNode@@V?$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAA@XZ @ 0x14004AF70
 * Callers:
 *     _CPipeInstance::CreateStreamPipeInstance_::_1_::dtor$0 @ 0x140092CD0 (_CPipeInstance--CreateStreamPipeInstance_--_1_--dtor$0.c)
 *     _CPipeInstance::CreateSubmixPipeInstance_::_1_::dtor$0 @ 0x140092DD5 (_CPipeInstance--CreateSubmixPipeInstance_--_1_--dtor$0.c)
 *     _CPipeInstance::CreateDevicePipeInstance_::_1_::dtor$0 @ 0x140092EFE (_CPipeInstance--CreateDevicePipeInstance_--_1_--dtor$0.c)
 *     _CPipeInstance::CreateFormatConverterPipeInstance_::_1_::dtor$0 @ 0x140093040 (_CPipeInstance--CreateFormatConverterPipeInstance_--_1_--dtor$0.c)
 *     _CPipeInstance::CreateBridgeStreamPipeInstanceToTargetApo_::_1_::dtor$0 @ 0x14009636E (_CPipeInstance--CreateBridgeStreamPipeInstanceToTargetApo_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::~CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>(
        __int64 a1)
{
  ATL::CAtlList<CSubmixImpl *,ATL::CElementTraits<CSubmixImpl *>>::RemoveAll(a1);
}
