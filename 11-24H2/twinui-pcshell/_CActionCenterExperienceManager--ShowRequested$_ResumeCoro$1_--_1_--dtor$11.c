/*
 * XREFs of _CActionCenterExperienceManager::ShowRequested$_ResumeCoro$1_::_1_::dtor$11 @ 0x1806E4DF2
 * Callers:
 *     <none>
 * Callees:
 *     ??1LaunchActionCenter@NotificationCenterTelemetry@NotificationCenterUITelemetry@@QEAA@XZ @ 0x18036C3D4 (--1LaunchActionCenter@NotificationCenterTelemetry@NotificationCenterUITelemetry@@QEAA@XZ.c)
 */

void __fastcall CActionCenterExperienceManager::ShowRequested__ResumeCoro_1_::_1_::dtor_11(__int64 a1, __int64 a2)
{
  *(_QWORD *)(a2 + 176) = *(_QWORD *)(a2 + 40) + 176LL;
  NotificationCenterUITelemetry::NotificationCenterTelemetry::LaunchActionCenter::~LaunchActionCenter(*(NotificationCenterUITelemetry::NotificationCenterTelemetry::LaunchActionCenter **)(a2 + 176));
}
