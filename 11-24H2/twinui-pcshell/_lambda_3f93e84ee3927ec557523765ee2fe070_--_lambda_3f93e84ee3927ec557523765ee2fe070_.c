/*
 * XREFs of _lambda_3f93e84ee3927ec557523765ee2fe070_::_lambda_3f93e84ee3927ec557523765ee2fe070_ @ 0x18046BA94
 * Callers:
 *     ?OnInputAppRequestedResize@TouchKeyboardExperienceManager@@AEAAJIUtagRECT@@@Z @ 0x180472FC0 (-OnInputAppRequestedResize@TouchKeyboardExperienceManager@@AEAAJIUtagRECT@@@Z.c)
 * Callees:
 *     ??0?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0A@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@AEBV01@@Z @ 0x180085008 (--0-$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0A@$04$0BAAAAAA@U_TlgRe_ea_180085008.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall lambda_3f93e84ee3927ec557523765ee2fe070_::_lambda_3f93e84ee3927ec557523765ee2fe070_(
        __int64 a1,
        _DWORD *a2,
        _OWORD *a3,
        __int64 *a4,
        _QWORD *a5,
        _QWORD *a6)
{
  __int64 v7; // rcx

  *(_DWORD *)a1 = *a2;
  *(_OWORD *)(a1 + 4) = *a3;
  v7 = *a4;
  *(_QWORD *)(a1 + 24) = *a4;
  if ( v7 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 8LL))(v7);
  *(_QWORD *)(a1 + 32) = *a5;
  wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<TouchKeyboardExperienceTraceLogging,1,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>(
    a1 + 40,
    a6);
  *(_QWORD *)(a1 + 40) = &TouchKeyboardExperienceTelemetryLogger::OnInputAppRequestedResizeActivity_Queued::`vftable';
  return a1;
}
