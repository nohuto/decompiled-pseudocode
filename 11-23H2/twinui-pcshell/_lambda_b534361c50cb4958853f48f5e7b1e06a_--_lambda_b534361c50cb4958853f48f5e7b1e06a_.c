/*
 * XREFs of _lambda_b534361c50cb4958853f48f5e7b1e06a_::_lambda_b534361c50cb4958853f48f5e7b1e06a_ @ 0x18001B278
 * Callers:
 *     ?RaiseReactivatedEvent@ExperienceManagerUtils@@YAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@KPEAUHSTRING__@@11PEAUIPropertySet@Collections@Foundation@6@2@Z @ 0x18001B048 (-RaiseReactivatedEvent@ExperienceManagerUtils@@YAJPEAUIViewWrapper@ViewManagerInterop@Shell@Inte.c)
 * Callees:
 *     ??0?$ActivityBase@VSingleViewExperienceLogging@@$0A@$0A@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@AEBV01@@Z @ 0x18001B4B4 (--0-$ActivityBase@VSingleViewExperienceLogging@@$0A@$0A@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsP.c)
 *     ??0CopyableHString@ExperienceManagerUtils@@QEAA@AEBV01@@Z @ 0x18001B6B8 (--0CopyableHString@ExperienceManagerUtils@@QEAA@AEBV01@@Z.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18001DEB0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 */

_QWORD *__fastcall lambda_b534361c50cb4958853f48f5e7b1e06a_::_lambda_b534361c50cb4958853f48f5e7b1e06a_(
        _QWORD *a1,
        _QWORD *a2,
        const struct ExperienceManagerUtils::CopyableHString *a3,
        _QWORD *a4,
        _QWORD *a5,
        __int64 a6)
{
  *a1 = *a2;
  ExperienceManagerUtils::CopyableHString::CopyableHString((ExperienceManagerUtils::CopyableHString *)(a1 + 1), a3);
  a1[3] = *a4;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(a1 + 3);
  a1[4] = *a5;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(a1 + 4);
  wil::ActivityBase<SingleViewExperienceLogging,0,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<SingleViewExperienceLogging,0,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>(
    a1 + 5,
    a6);
  a1[5] = &SingleViewExperienceTelemetry::Reactivate::`vftable';
  return a1;
}
