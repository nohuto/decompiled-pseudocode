/*
 * XREFs of ?ReturnFocus@CActionCenterExperienceManager@@AEAAJXZ @ 0x18036FC24
 * Callers:
 *     ?CompleteHide@CActionCenterExperienceManager@@AEAAJXZ @ 0x18036CE58 (-CompleteHide@CActionCenterExperienceManager@@AEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0?$ActivityBase@VNotificationCenterLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x18003E80C (--0-$ActivityBase@VNotificationCenterLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderT.c)
 *     ?WindowFromViewWrapper@ExperienceManagerUtils@@YAPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x18003ED20 (-WindowFromViewWrapper@ExperienceManagerUtils@@YAPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop.c)
 *     ?Stop@?$ActivityBase@VNotificationCenterLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1800E7768 (-Stop@-$ActivityBase@VNotificationCenterLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProvid.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     ??1EM_ReturnFocusActivity@NotificationCenterTelemetry@NotificationCenterUITelemetry@@QEAA@XZ @ 0x18036C324 (--1EM_ReturnFocusActivity@NotificationCenterTelemetry@NotificationCenterUITelemetry@@QEAA@XZ.c)
 *     ?ReturnedToActiveApp@EM_ReturnFocusActivity@NotificationCenterTelemetry@NotificationCenterUITelemetry@@QEAAXXZ @ 0x18036FD20 (-ReturnedToActiveApp@EM_ReturnFocusActivity@NotificationCenterTelemetry@NotificationCenterUITele.c)
 *     ?StartActivity@EM_ReturnFocusActivity@NotificationCenterTelemetry@NotificationCenterUITelemetry@@QEAAXXZ @ 0x1803709E8 (-StartActivity@EM_ReturnFocusActivity@NotificationCenterTelemetry@NotificationCenterUITelemetry@.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CActionCenterExperienceManager::ReturnFocus(ExperienceManagerUtils **this)
{
  struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *v2; // rdx
  HWND v3; // rbx
  int v4; // eax
  unsigned int v5; // ebx
  int v6; // edx
  int v8[2]; // [rsp+20h] [rbp-168h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+188h] [rbp+0h]

  wil::ActivityBase<NotificationCenterLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<NotificationCenterLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)v8,
    (__int64)"EM_ReturnFocusActivity");
  *(_QWORD *)v8 = &NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_ReturnFocusActivity::`vftable';
  NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_ReturnFocusActivity::StartActivity((NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_ReturnFocusActivity *)v8);
  v3 = (HWND)ExperienceManagerUtils::WindowFromViewWrapper(this[19], v2);
  if ( GetForegroundWindow() != v3 )
  {
    v6 = -2147418113;
    goto LABEL_6;
  }
  v4 = (*(__int64 (__fastcall **)(ExperienceManagerUtils *, __int64))(*(_QWORD *)this[76] + 24LL))(this[76], 0xFFFFLL);
  v5 = v4;
  if ( v4 >= 0 )
  {
    NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_ReturnFocusActivity::ReturnedToActiveApp((NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_ReturnFocusActivity *)v8);
    v6 = 0;
LABEL_6:
    wil::ActivityBase<NotificationCenterLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop(v8, v6);
    v5 = 0;
    goto LABEL_7;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x446,
    (int)"pcshell\\twinui\\experiencemanagers\\lib\\actioncenterexperiencemanager.cpp",
    (const char *)(unsigned int)v4);
LABEL_7:
  NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_ReturnFocusActivity::~EM_ReturnFocusActivity((NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_ReturnFocusActivity *)v8);
  return v5;
}
