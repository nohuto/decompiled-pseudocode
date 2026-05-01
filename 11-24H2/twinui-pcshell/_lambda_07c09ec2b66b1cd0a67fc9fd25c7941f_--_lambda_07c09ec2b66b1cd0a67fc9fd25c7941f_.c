/*
 * XREFs of _lambda_07c09ec2b66b1cd0a67fc9fd25c7941f_::_lambda_07c09ec2b66b1cd0a67fc9fd25c7941f_ @ 0x18046B9B4
 * Callers:
 *     ?PreloadInputApp@TouchKeyboardExperienceManager@@QEAAXXZ @ 0x180473474 (-PreloadInputApp@TouchKeyboardExperienceManager@@QEAAXXZ.c)
 * Callees:
 *     ??0?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0A@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@AEBV01@@Z @ 0x180085008 (--0-$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0A@$04$0BAAAAAA@U_TlgRe_ea_180085008.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall lambda_07c09ec2b66b1cd0a67fc9fd25c7941f_::_lambda_07c09ec2b66b1cd0a67fc9fd25c7941f_(
        __int64 *a1,
        __int64 *a2,
        __int64 *a3,
        _QWORD *a4)
{
  __int64 v7; // rcx

  v7 = *a2;
  *a1 = *a2;
  if ( v7 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 8LL))(v7);
  a1[1] = *a3;
  wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<TouchKeyboardExperienceTraceLogging,1,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>(
    (__int64)(a1 + 2),
    a4);
  a1[2] = (__int64)&TouchKeyboardExperienceTelemetryLogger::OnPreloadInputAppActivity::`vftable';
  return a1;
}
