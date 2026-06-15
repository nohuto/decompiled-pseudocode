/*
 * XREFs of ??1?$ComPtr@V?$CCPAudioHistoryControl@UStaticControlData_V1@@UVolatileControlData_V0@@UControlData_V1@@@@@WRL@Microsoft@@QEAA@XZ @ 0x14007FC50
 * Callers:
 *     _Microsoft::WRL::Details::MakeAndInitialize_CCPAudioHistoryControl_StaticControlData_V1_VolatileControlData_V0_ControlData_V1__ICPAudioHistoryControl_ICrossProcessMemory___&__::_1_::dtor$1 @ 0x140096C45 (_Microsoft--WRL--Details--MakeAndInitialize_CCPAudioHistoryControl_StaticControlDat_ea_140096C45.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall Microsoft::WRL::ComPtr<CCPAudioHistoryControl<StaticControlData_V1,VolatileControlData_V0,ControlData_V1>>::~ComPtr<CCPAudioHistoryControl<StaticControlData_V1,VolatileControlData_V0,ControlData_V1>>(
        _QWORD *a1)
{
  _QWORD *result; // rax
  __int64 v2; // rcx

  result = a1;
  v2 = *a1;
  if ( v2 )
  {
    *result = 0LL;
    return (_QWORD *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  }
  return result;
}
