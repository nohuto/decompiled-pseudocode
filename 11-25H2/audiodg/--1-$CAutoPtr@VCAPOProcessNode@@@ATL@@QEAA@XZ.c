/*
 * XREFs of ??1?$CAutoPtr@VCAPOProcessNode@@@ATL@@QEAA@XZ @ 0x140057700
 * Callers:
 *     _CPipeInstance::FixupStreamPipe_::_1_::dtor$0 @ 0x140092683 (_CPipeInstance--FixupStreamPipe_--_1_--dtor$0.c)
 *     _CPipeInstance::FixupStreamPipe_::_1_::dtor$3 @ 0x1400926B9 (_CPipeInstance--FixupStreamPipe_--_1_--dtor$3.c)
 *     _CPipeInstance::ResolveFormatConflictsLeftRight_::_1_::dtor$7 @ 0x1400927C3 (_CPipeInstance--ResolveFormatConflictsLeftRight_--_1_--dtor$7.c)
 *     _CPipeInstance::ResolveFormatConflictsRightLeft_::_1_::dtor$10 @ 0x14009298D (_CPipeInstance--ResolveFormatConflictsRightLeft_--_1_--dtor$10.c)
 *     _CPipeInstance::ResolveFormatConflictsRightLeft_::_1_::dtor$11 @ 0x14009299F (_CPipeInstance--ResolveFormatConflictsRightLeft_--_1_--dtor$11.c)
 *     _CPipeInstance::CreateStreamPipeInstance_::_1_::dtor$10 @ 0x140093282 (_CPipeInstance--CreateStreamPipeInstance_--_1_--dtor$10.c)
 *     _CPipeInstance::CreateStreamPipeInstance_::_1_::dtor$12 @ 0x140093294 (_CPipeInstance--CreateStreamPipeInstance_--_1_--dtor$12.c)
 *     _CPipeInstance::CreateSubmixPipeInstance_::_1_::dtor$3 @ 0x140093387 (_CPipeInstance--CreateSubmixPipeInstance_--_1_--dtor$3.c)
 *     _CPipeInstance::CreateSubmixPipeInstance_::_1_::dtor$8 @ 0x140093414 (_CPipeInstance--CreateSubmixPipeInstance_--_1_--dtor$8.c)
 *     _CPipeInstance::CreateFormatConverterPipeInstance_::_1_::dtor$1 @ 0x1400935F2 (_CPipeInstance--CreateFormatConverterPipeInstance_--_1_--dtor$1.c)
 *     _CPipeInstance::CreateFormatConverterPipeInstance_::_1_::dtor$3 @ 0x140093604 (_CPipeInstance--CreateFormatConverterPipeInstance_--_1_--dtor$3.c)
 *     _CPipeInstance::CreateFormatConverterPipeInstance_::_1_::dtor$4 @ 0x140093616 (_CPipeInstance--CreateFormatConverterPipeInstance_--_1_--dtor$4.c)
 *     _CPipeInstance::CreateBridgeStreamPipeInstanceToTargetApo_::_1_::dtor$1 @ 0x1400968FC (_CPipeInstance--CreateBridgeStreamPipeInstanceToTargetApo_--_1_--dtor$1.c)
 *     _CPipeInstance::CreateBridgeStreamPipeInstanceToTargetApo_::_1_::dtor$2 @ 0x14009690E (_CPipeInstance--CreateBridgeStreamPipeInstanceToTargetApo_--_1_--dtor$2.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall ATL::CAutoPtr<CAPOProcessNode>::~CAutoPtr<CAPOProcessNode>(
        __int64 (__fastcall ****a1)(_QWORD, __int64))
{
  __int64 (__fastcall ***v2)(_QWORD, __int64); // rcx
  __int64 result; // rax

  v2 = *a1;
  if ( v2 )
    result = (**v2)(v2, 1LL);
  *a1 = 0LL;
  return result;
}
