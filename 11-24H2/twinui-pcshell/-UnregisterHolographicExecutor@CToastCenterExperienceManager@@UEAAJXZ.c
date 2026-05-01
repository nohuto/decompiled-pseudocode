/*
 * XREFs of ?UnregisterHolographicExecutor@CToastCenterExperienceManager@@UEAAJXZ @ 0x180386E80
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     ??0?$ActivityBase@VToastCenterLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x180382F6C (--0-$ActivityBase@VToastCenterLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProvid.c)
 *     ??1EM_UnregisterHolographicExecutor@ToastCenterTelemetry@@QEAA@XZ @ 0x1803836A0 (--1EM_UnregisterHolographicExecutor@ToastCenterTelemetry@@QEAA@XZ.c)
 *     ?ChangeDisplayContext@CToastCenterExperienceManager@@AEAAJW4UserDisplayContext@Holographic@Shell@Internal@Windows@@@Z @ 0x1803839CC (-ChangeDisplayContext@CToastCenterExperienceManager@@AEAAJW4UserDisplayContext@Holographic@Shell.c)
 *     ?StartActivity@EM_UnregisterHolographicExecutor@ToastCenterTelemetry@@QEAAXXZ @ 0x1803859C0 (-StartActivity@EM_UnregisterHolographicExecutor@ToastCenterTelemetry@@QEAAXXZ.c)
 *     ?Stop@?$ActivityBase@VToastCenterLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180385A60 (-Stop@-$ActivityBase@VToastCenterLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsPro.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CToastCenterExperienceManager::UnregisterHolographicExecutor(CToastCenterExperienceManager *this)
{
  int v2; // eax
  unsigned int v3; // ebx
  int v5[2]; // [rsp+20h] [rbp-168h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+188h] [rbp+0h]

  wil::ActivityBase<ToastCenterLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<ToastCenterLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)v5,
    (__int64)"EM_UnregisterHolographicExecutor");
  *(_QWORD *)v5 = &ToastCenterTelemetry::EM_UnregisterHolographicExecutor::`vftable';
  ToastCenterTelemetry::EM_UnregisterHolographicExecutor::StartActivity((ToastCenterTelemetry::EM_UnregisterHolographicExecutor *)v5);
  if ( !*((_QWORD *)this + 85) )
    goto LABEL_5;
  RtlUnsubscribeWnfNotificationWaitForCompletion(*((_QWORD *)this + 39));
  *((_QWORD *)this + 39) = 0LL;
  v2 = CToastCenterExperienceManager::ChangeDisplayContext((__int64)this - 56, 0);
  v3 = v2;
  if ( v2 >= 0 )
  {
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 85);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 87);
LABEL_5:
    wil::ActivityBase<ToastCenterLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop((__int64 *)v5);
    v3 = 0;
    goto LABEL_6;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x73B,
    (int)"pcshell\\twinui\\experiencemanagers\\lib\\toastcenterexperiencemanager.cpp",
    (const char *)(unsigned int)v2);
LABEL_6:
  ToastCenterTelemetry::EM_UnregisterHolographicExecutor::~EM_UnregisterHolographicExecutor((ToastCenterTelemetry::EM_UnregisterHolographicExecutor *)v5);
  return v3;
}
