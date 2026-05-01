/*
 * XREFs of ?OnViewShown@CToastCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x180384CC0
 * Callers:
 *     <none>
 * Callees:
 *     ?Stop@?$ActivityBase@VToastCenterLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1800250C8 (-Stop@-$ActivityBase@VToastCenterLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@.c)
 *     ??0?$ActivityBase@VToastCenterLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x180025384 (--0-$ActivityBase@VToastCenterLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@w.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAU_TP_TIMER@@P6AXPEAU1@@Z$1?Destroy@?$DestroyThreadPoolTimer@USystemThreadPoolMethods@details@wil@@$0A@@details@wil@@SAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAU_TP_TIMER@@@Z @ 0x1800B3FB8 (-reset@-$unique_storage@U-$resource_policy@PEAU_TP_TIMER@@P6AXPEAU1@@Z$1-Destroy@-$DestroyThread.c)
 *     ?OnVisibilityChanged@CToastCenterExperienceManager@@AEAAXXZ @ 0x1800B452C (-OnVisibilityChanged@CToastCenterExperienceManager@@AEAAXXZ.c)
 *     ?StartActivity@EM_ViewShownActivity@ToastCenterTelemetry@@QEAAXXZ @ 0x1801F54CC (-StartActivity@EM_ViewShownActivity@ToastCenterTelemetry@@QEAAXXZ.c)
 *     ??1EM_ViewShownActivity@ToastCenterTelemetry@@QEAA@XZ @ 0x18021CD98 (--1EM_ViewShownActivity@ToastCenterTelemetry@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CToastCenterExperienceManager::OnViewShown(
        struct _TP_TIMER **this,
        struct CSingleViewShellExperience *a2)
{
  volatile signed __int32 *v4[42]; // [rsp+20h] [rbp-168h] BYREF

  wil::ActivityBase<ToastCenterLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<ToastCenterLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>(
    (__int64)v4,
    (__int64)"EM_ViewShownActivity");
  v4[0] = (volatile signed __int32 *)&ToastCenterTelemetry::EM_ViewShownActivity::`vftable';
  ToastCenterTelemetry::EM_ViewShownActivity::StartActivity((ToastCenterTelemetry::EM_ViewShownActivity *)v4);
  wil::details::unique_storage<wil::details::resource_policy<_TP_TIMER *,void (*)(_TP_TIMER *),&public: static void wil::details::DestroyThreadPoolTimer<wil::details::SystemThreadPoolMethods,0>::Destroy(_TP_TIMER *),wistd::integral_constant<unsigned __int64,0>,_TP_TIMER *,_TP_TIMER *,0,std::nullptr_t>>::reset(
    this + 69,
    0LL);
  CToastCenterExperienceManager::OnVisibilityChanged((CToastCenterExperienceManager *)(this - 11));
  wil::ActivityBase<ToastCenterLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop((__int64)v4, 0);
  ToastCenterTelemetry::EM_ViewShownActivity::~EM_ViewShownActivity(v4);
  return 0LL;
}
