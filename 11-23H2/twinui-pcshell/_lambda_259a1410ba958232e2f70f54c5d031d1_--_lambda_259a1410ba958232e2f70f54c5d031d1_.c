/*
 * XREFs of _lambda_259a1410ba958232e2f70f54c5d031d1_::_lambda_259a1410ba958232e2f70f54c5d031d1_ @ 0x1802063D0
 * Callers:
 *     ?OnCommand@TouchKeyboardExperienceManager@@UEAAJPEAUIApplicationFrame@@PEBU_GUID@@K@Z @ 0x180514450 (-OnCommand@TouchKeyboardExperienceManager@@UEAAJPEAUIApplicationFrame@@PEBU_GUID@@K@Z.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18001DEB0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??0?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@AEBV01@@Z @ 0x1800B382C (--0-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@AEBV01@@Z.c)
 *     ??0?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0A@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@AEBV01@@Z @ 0x1802DA4AE (--0-$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0A@$04$0BAAAAAA@U_TlgRe_ea_1802DA4AE.c)
 */

__int64 __fastcall lambda_259a1410ba958232e2f70f54c5d031d1_::_lambda_259a1410ba958232e2f70f54c5d031d1_(
        __int64 a1,
        _QWORD *a2,
        _OWORD *a3,
        __int64 *a4,
        _QWORD *a5,
        __int64 a6)
{
  *(_QWORD *)a1 = *a2;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)a1);
  *(_OWORD *)(a1 + 8) = *a3;
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::com_ptr_t<IDataObject,wil::err_exception_policy>(
    (__int64 *)(a1 + 24),
    a4);
  *(_QWORD *)(a1 + 32) = *a5;
  wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<TouchKeyboardExperienceTraceLogging,1,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>(
    a1 + 40,
    a6);
  *(_QWORD *)(a1 + 40) = &TouchKeyboardExperienceTelemetryLogger::OnApplicationFrameCommand::`vftable';
  return a1;
}
