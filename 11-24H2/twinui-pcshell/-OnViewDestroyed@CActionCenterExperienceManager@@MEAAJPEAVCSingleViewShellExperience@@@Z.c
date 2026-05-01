/*
 * XREFs of ?OnViewDestroyed@CActionCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x18036F090
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$ActivityBase@VNotificationCenterLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x18003E80C (--0-$ActivityBase@VNotificationCenterLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderT.c)
 *     ?Stop@?$ActivityBase@VNotificationCenterLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1800E7768 (-Stop@-$ActivityBase@VNotificationCenterLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProvid.c)
 *     ?OnVisibilityChanged@CActionCenterExperienceManager@@AEAAXXZ @ 0x18024078C (-OnVisibilityChanged@CActionCenterExperienceManager@@AEAAXXZ.c)
 *     ?RevokeProcessesForAnimation@?$consume_Windows_UI_Internal_Input_IInputGestureManager@UIInputGestureManager@Input@Internal@UI@Windows@winrt@@@impl@winrt@@QEBA@U?$array_view@$$CBI@3@@Z @ 0x180240AC4 (-RevokeProcessesForAnimation@-$consume_Windows_UI_Internal_Input_IInputGestureManager@UIInputGes.c)
 *     ?StartActivity@EM_ViewDestroyedActivity@NotificationCenterTelemetry@NotificationCenterUITelemetry@@QEAAXXZ @ 0x1802BA0F0 (-StartActivity@EM_ViewDestroyedActivity@NotificationCenterTelemetry@NotificationCenterUITelemetr.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     ??1EM_ViewDestroyedActivity@NotificationCenterTelemetry@NotificationCenterUITelemetry@@QEAA@XZ @ 0x18036C350 (--1EM_ViewDestroyedActivity@NotificationCenterTelemetry@NotificationCenterUITelemetry@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CActionCenterExperienceManager::OnViewDestroyed(
        CActionCenterExperienceManager *this,
        struct CSingleViewShellExperience *a2)
{
  int v4; // [rsp+20h] [rbp-188h] BYREF
  __int128 v5; // [rsp+30h] [rbp-178h] BYREF
  _QWORD v6[42]; // [rsp+40h] [rbp-168h] BYREF

  *((_QWORD *)this + 78) = 0LL;
  *((_QWORD *)this + 79) = 0LL;
  *((_QWORD *)this + 80) = 0LL;
  if ( *((_DWORD *)this + 162) )
  {
    v4 = *((_DWORD *)this + 162);
    *(_QWORD *)&v5 = &v4;
    DWORD2(v5) = 1;
    winrt::impl::consume_Windows_UI_Internal_Input_IInputGestureManager<winrt::Windows::UI::Internal::Input::IInputGestureManager>::RevokeProcessesForAnimation(
      (__int64)this + 656,
      &v5);
    *((_DWORD *)this + 162) = 0;
  }
  wil::ActivityBase<NotificationCenterLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<NotificationCenterLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)v6,
    (__int64)"EM_ViewDestroyedActivity");
  v6[0] = &NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_ViewDestroyedActivity::`vftable';
  NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_ViewDestroyedActivity::StartActivity((NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_ViewDestroyedActivity *)v6);
  CActionCenterExperienceManager::OnVisibilityChanged((ExperienceManagerUtils **)this - 14);
  wil::ActivityBase<NotificationCenterLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop(v6, 0);
  NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_ViewDestroyedActivity::~EM_ViewDestroyedActivity((NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_ViewDestroyedActivity *)v6);
  return 0LL;
}
