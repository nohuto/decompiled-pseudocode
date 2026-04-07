/*
 * XREFs of ?zInternalRelatedId@?$ActivityBase@VAnimationClockLogging@@$0A@$0A@$03$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEBAPEBU_GUID@@XZ @ 0x18005EE0C
 * Callers:
 *     ?StartActivity@CloneWindow@WindowFrameLoggingTelemetry@@QEAAXXZ @ 0x180010D34 (-StartActivity@CloneWindow@WindowFrameLoggingTelemetry@@QEAAXXZ.c)
 *     ?StartActivity@AnimationClockStateChange@AnimationClockLoggingTelemetry@@QEAAXU_GUID@@HH@Z @ 0x180011450 (-StartActivity@AnimationClockStateChange@AnimationClockLoggingTelemetry@@QEAAXU_GUID@@HH@Z.c)
 *     ?StartActivity@TriggerClock@AnimationClockLoggingTelemetry@@QEAAXU_GUID@@@Z @ 0x1800129F8 (-StartActivity@TriggerClock@AnimationClockLoggingTelemetry@@QEAAXU_GUID@@@Z.c)
 *     ?StartActivity@BeginAnimationClock@AnimationClockLoggingTelemetry@@QEAAXU_GUID@@J@Z @ 0x180012AA4 (-StartActivity@BeginAnimationClock@AnimationClockLoggingTelemetry@@QEAAXU_GUID@@J@Z.c)
 *     ?StartActivity@EndAnimationClock@AnimationClockLoggingTelemetry@@QEAAXU_GUID@@J@Z @ 0x180012B6C (-StartActivity@EndAnimationClock@AnimationClockLoggingTelemetry@@QEAAXU_GUID@@J@Z.c)
 *     ?StartActivity@CreateAnimationClock@AnimationClockLoggingTelemetry@@QEAAXU_GUID@@@Z @ 0x180012C34 (-StartActivity@CreateAnimationClock@AnimationClockLoggingTelemetry@@QEAAXU_GUID@@@Z.c)
 *     ?StartActivity@GetCommitHandle@AnimationClockLoggingTelemetry@@QEAAXU_GUID@@@Z @ 0x1800A9D6C (-StartActivity@GetCommitHandle@AnimationClockLoggingTelemetry@@QEAAXU_GUID@@@Z.c)
 *     ?StartActivity@StartDisplayCapture@WindowFrameLoggingTelemetry@@QEAAXPEAUHMONITOR__@@II@Z @ 0x1800D0CDC (-StartActivity@StartDisplayCapture@WindowFrameLoggingTelemetry@@QEAAXPEAUHMONITOR__@@II@Z.c)
 *     ?StartActivity@StartWindowCapture@WindowFrameLoggingTelemetry@@QEAAXPEAUHWND__@@II@Z @ 0x1800D0DD8 (-StartActivity@StartWindowCapture@WindowFrameLoggingTelemetry@@QEAAXPEAUHWND__@@II@Z.c)
 *     ?StartActivity@StopDisplayCapture@WindowFrameLoggingTelemetry@@QEAAXII@Z @ 0x1800D0ED4 (-StartActivity@StopDisplayCapture@WindowFrameLoggingTelemetry@@QEAAXII@Z.c)
 *     ?StartActivity@StopWindowCapture@WindowFrameLoggingTelemetry@@QEAAXII@Z @ 0x1800D0FAC (-StartActivity@StopWindowCapture@WindowFrameLoggingTelemetry@@QEAAXII@Z.c)
 *     ?StartActivity@UpdateWindowCapture@WindowFrameLoggingTelemetry@@QEAAXPEAUHWND__@@II@Z @ 0x1800D1084 (-StartActivity@UpdateWindowCapture@WindowFrameLoggingTelemetry@@QEAAXPEAUHWND__@@II@Z.c)
 * Callees:
 *     ?_tlgGuidIsZero@@YA_NAEBU_GUID@@@Z @ 0x1800AA07C (-_tlgGuidIsZero@@YA_NAEBU_GUID@@@Z.c)
 */

__int64 __fastcall wil::ActivityBase<AnimationClockLogging,0,0,4,0,_TlgReflectorTag_Param0IsProviderType>::zInternalRelatedId(
        __int64 a1)
{
  __int64 v1; // rcx
  __int64 v2; // rcx

  v1 = *(_QWORD *)(a1 + 48);
  if ( !*(_BYTE *)(v1 + 4) || _tlgGuidIsZero((const struct _GUID *)(v1 + 24)) )
    return 0LL;
  return v2;
}
