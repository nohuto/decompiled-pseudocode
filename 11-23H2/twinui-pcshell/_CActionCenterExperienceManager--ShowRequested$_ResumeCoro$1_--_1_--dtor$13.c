/*
 * XREFs of _CActionCenterExperienceManager::ShowRequested$_ResumeCoro$1_::_1_::dtor$13 @ 0x1801DD070
 * Callers:
 *     <none>
 * Callees:
 *     ??1LaunchActionCenter@NotificationCenterTelemetry@NotificationCenterUITelemetry@@QEAA@XZ @ 0x18001AA20 (--1LaunchActionCenter@NotificationCenterTelemetry@NotificationCenterUITelemetry@@QEAA@XZ.c)
 */

void __fastcall CActionCenterExperienceManager::ShowRequested__ResumeCoro_1_::_1_::dtor_13(__int64 a1, __int64 a2)
{
  *(_QWORD *)(a2 + 144) = *(_QWORD *)(a2 + 40) + 256LL;
  NotificationCenterUITelemetry::NotificationCenterTelemetry::LaunchActionCenter::~LaunchActionCenter(*(NotificationCenterUITelemetry::NotificationCenterTelemetry::LaunchActionCenter **)(a2 + 144));
}
