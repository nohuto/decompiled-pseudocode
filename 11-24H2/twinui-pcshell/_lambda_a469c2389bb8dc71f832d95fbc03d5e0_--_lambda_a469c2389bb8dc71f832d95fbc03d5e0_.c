/*
 * XREFs of _lambda_a469c2389bb8dc71f832d95fbc03d5e0_::_lambda_a469c2389bb8dc71f832d95fbc03d5e0_ @ 0x18046BBFC
 * Callers:
 *     ?OnViewCreated@TouchKeyboardExperienceManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@UEventRegistrationToken@@@Z @ 0x18009AC6C (-OnViewCreated@TouchKeyboardExperienceManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@In.c)
 * Callees:
 *     ??0?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0A@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@AEBV01@@Z @ 0x180085008 (--0-$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0A@$04$0BAAAAAA@U_TlgRe_ea_180085008.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall lambda_a469c2389bb8dc71f832d95fbc03d5e0_::_lambda_a469c2389bb8dc71f832d95fbc03d5e0_(
        _QWORD *a1,
        _QWORD *a2,
        __int64 *a3,
        _QWORD *a4,
        _QWORD *a5,
        _QWORD *a6)
{
  __int64 v8; // rcx
  __int64 v9; // rcx

  *a1 = *a2;
  v8 = *a3;
  a1[1] = *a3;
  if ( v8 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 8LL))(v8);
  a1[2] = *a4;
  a1[3] = 0LL;
  a1[4] = 0LL;
  v9 = a5[1];
  if ( v9 )
  {
    a1[3] = *a5;
    a1[4] = v9;
    _InterlockedIncrement((volatile signed __int32 *)(v9 + 12));
  }
  wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<TouchKeyboardExperienceTraceLogging,1,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>(
    (__int64)(a1 + 5),
    a6);
  a1[5] = &TouchKeyboardExperienceTelemetryLogger::OnViewCreated::`vftable';
  return a1;
}
