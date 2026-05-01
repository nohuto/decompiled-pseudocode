/*
 * XREFs of _CControlCenterExperienceManager::ShowRequested$_ResumeCoro$1_::_1_::dtor$13 @ 0x1801E0350
 * Callers:
 *     <none>
 * Callees:
 *     ??1LaunchControlCenterV1@ControlCenterTelemetry@ControlCenterUITelemetry@@QEAA@XZ @ 0x18041E0F0 (--1LaunchControlCenterV1@ControlCenterTelemetry@ControlCenterUITelemetry@@QEAA@XZ.c)
 */

void __fastcall CControlCenterExperienceManager::ShowRequested__ResumeCoro_1_::_1_::dtor_13(__int64 a1, __int64 a2)
{
  *(_QWORD *)(a2 + 192) = *(_QWORD *)(a2 + 88) + 256LL;
  ControlCenterUITelemetry::ControlCenterTelemetry::LaunchControlCenterV1::~LaunchControlCenterV1(*(ControlCenterUITelemetry::ControlCenterTelemetry::LaunchControlCenterV1 **)(a2 + 192));
}
