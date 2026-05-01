/*
 * XREFs of _lambda_0cfa17de80a192d7104afc8a843b7ae2_::_lambda_0cfa17de80a192d7104afc8a843b7ae2_ @ 0x1802062D8
 * Callers:
 *     ?OnViewCreated@TouchKeyboardExperienceManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@UEventRegistrationToken@@@Z @ 0x180515004 (-OnViewCreated@TouchKeyboardExperienceManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@In.c)
 * Callees:
 *     ??0?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@AEBV01@@Z @ 0x1800B382C (--0-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@AEBV01@@Z.c)
 *     ??0?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0A@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@AEBV01@@Z @ 0x1802DA4AE (--0-$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0A@$04$0BAAAAAA@U_TlgRe_ea_1802DA4AE.c)
 */

__int64 __fastcall lambda_0cfa17de80a192d7104afc8a843b7ae2_::_lambda_0cfa17de80a192d7104afc8a843b7ae2_(
        __int64 a1,
        _QWORD *a2,
        __int64 *a3,
        _QWORD *a4,
        _QWORD *a5,
        __int64 a6,
        _DWORD *a7)
{
  __int64 v9; // rcx
  __int64 result; // rax

  *(_QWORD *)a1 = *a2;
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::com_ptr_t<IDataObject,wil::err_exception_policy>(
    (__int64 *)(a1 + 8),
    a3);
  *(_QWORD *)(a1 + 16) = *a4;
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_QWORD *)(a1 + 32) = 0LL;
  v9 = a5[1];
  if ( v9 )
  {
    *(_QWORD *)(a1 + 24) = *a5;
    *(_QWORD *)(a1 + 32) = v9;
    _InterlockedIncrement((volatile signed __int32 *)(v9 + 12));
  }
  wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<TouchKeyboardExperienceTraceLogging,1,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>(
    a1 + 40,
    a6);
  *(_QWORD *)(a1 + 40) = &TouchKeyboardExperienceTelemetryLogger::OnViewCreated::`vftable';
  result = a1;
  *(_DWORD *)(a1 + 360) = *a7;
  return result;
}
