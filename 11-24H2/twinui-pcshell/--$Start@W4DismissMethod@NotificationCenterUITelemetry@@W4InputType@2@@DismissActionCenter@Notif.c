/*
 * XREFs of ??$Start@W4DismissMethod@NotificationCenterUITelemetry@@W4InputType@2@@DismissActionCenter@NotificationCenterTelemetry@NotificationCenterUITelemetry@@SA?AV012@$$QEAW4DismissMethod@2@$$QEAW4InputType@2@@Z @ 0x18036BA2C
 * Callers:
 *     ?OnDismiss@CActionCenterExperienceManager@@UEAAJXZ @ 0x18036EE30 (-OnDismiss@CActionCenterExperienceManager@@UEAAJXZ.c)
 *     ?StartSwipe@CActionCenterExperienceManager@@UEAAJIUtagPOINT@@@Z @ 0x180370C80 (-StartSwipe@CActionCenterExperienceManager@@UEAAJIUtagPOINT@@@Z.c)
 * Callees:
 *     ??0?$ActivityBase@VNotificationCenterLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x18036BBEC (--0-$ActivityBase@VNotificationCenterLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0I.c)
 *     ?StartActivity@DismissActionCenter@NotificationCenterTelemetry@NotificationCenterUITelemetry@@QEAAXW4DismissMethod@3@W4InputType@3@@Z @ 0x180370844 (-StartActivity@DismissActionCenter@NotificationCenterTelemetry@NotificationCenterUITelemetry@@QE.c)
 */

// Hidden C++ exception states: #wind=1
struct wil::details::IFailureCallback *__fastcall NotificationCenterUITelemetry::NotificationCenterTelemetry::DismissActionCenter::Start<enum NotificationCenterUITelemetry::DismissMethod,enum NotificationCenterUITelemetry::InputType>(
        struct wil::details::IFailureCallback *a1,
        unsigned int *a2,
        unsigned int *a3)
{
  wil::ActivityBase<NotificationCenterLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<NotificationCenterLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>(a1);
  *(_QWORD *)a1 = &NotificationCenterUITelemetry::NotificationCenterTelemetry::DismissActionCenter::`vftable';
  NotificationCenterUITelemetry::NotificationCenterTelemetry::DismissActionCenter::StartActivity(a1, *a2, *a3);
  return a1;
}
