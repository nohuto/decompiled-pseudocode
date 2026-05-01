/*
 * XREFs of _lambda_6df05c95eefd3a852cd1630e41907728_::_lambda_6df05c95eefd3a852cd1630e41907728_ @ 0x1803095D0
 * Callers:
 *     CFrameApplicationPresentation::_AddTaskToQueue__lambda_ffa95d5ea910b6ca98d895ec7ec1025e___ @ 0x1803094E0 (CFrameApplicationPresentation--_AddTaskToQueue__lambda_ffa95d5ea910b6ca98d895ec7ec1025e___.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180016C0C (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??0?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@AEBV01@@Z @ 0x180087AC8 (--0-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsPro_ea_180087AC8.c)
 */

__int64 *__fastcall lambda_6df05c95eefd3a852cd1630e41907728_::_lambda_6df05c95eefd3a852cd1630e41907728_(
        __int64 *a1,
        __int64 *a2,
        __int64 a3,
        __int64 *a4)
{
  *a1 = *a2;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(a1);
  a1[2] = *a4;
  a1[1] = a3;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(a1 + 2);
  a1[3] = a4[1];
  wil::ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>(
    (__int64)(a1 + 4),
    (__int64)(a4 + 2));
  a1[4] = (__int64)&CFramePresentationTelemetry::PresentWindow::`vftable';
  return a1;
}
