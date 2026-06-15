/*
 * XREFs of ??1?$CAutoPtr@VCPipeInstance@@@ATL@@QEAA@XZ @ 0x14004AF7C
 * Callers:
 *     _CPipeInstance::CreateStreamPipeInstance_::_1_::dtor$14 @ 0x140092D63 (_CPipeInstance--CreateStreamPipeInstance_--_1_--dtor$14.c)
 *     _CPipeInstance::CreateSubmixPipeInstance_::_1_::dtor$10 @ 0x140092E86 (_CPipeInstance--CreateSubmixPipeInstance_--_1_--dtor$10.c)
 *     _CPipeInstance::CreateFormatConverterPipeInstance_::_1_::dtor$6 @ 0x140093088 (_CPipeInstance--CreateFormatConverterPipeInstance_--_1_--dtor$6.c)
 *     _CFormatConverterPipe::Initialize_::_1_::dtor$0 @ 0x140094469 (_CFormatConverterPipe--Initialize_--_1_--dtor$0.c)
 *     _CPipeInstance::CreateBridgeStreamPipeInstanceToTargetApo_::_1_::dtor$4 @ 0x1400963A4 (_CPipeInstance--CreateBridgeStreamPipeInstanceToTargetApo_--_1_--dtor$4.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void *__fastcall ATL::CAutoPtr<CPipeInstance>::~CAutoPtr<CPipeInstance>(CPipeInstance **a1, unsigned int a2)
{
  return ATL::CAutoPtr<CPipeInstance>::Free(a1, a2);
}
