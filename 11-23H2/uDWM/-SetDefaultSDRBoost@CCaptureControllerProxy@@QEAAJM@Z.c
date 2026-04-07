/*
 * XREFs of ?SetDefaultSDRBoost@CCaptureControllerProxy@@QEAAJM@Z @ 0x1800ACD34
 * Callers:
 *     ?OnWindowMonitorChanged@CProjectionBorderManager@@UEAAJPEAVCWindowData@@@Z @ 0x18001C3D0 (-OnWindowMonitorChanged@CProjectionBorderManager@@UEAAJPEAVCWindowData@@@Z.c)
 *     ?_UpdateCaptureControllerDefaultSDRBoost@CProjectionBorderManager@@AEAAJPEAUHWND__@@@Z @ 0x1800D4F90 (-_UpdateCaptureControllerDefaultSDRBoost@CProjectionBorderManager@@AEAAJPEAUHWND__@@@Z.c)
 *     ?_UpdateCaptureControllerDefaultSDRBoostFromDisplay@CProjectionBorderManager@@AEAAJPEAUHMONITOR__@@PEAVCCaptureControllerProxy@@@Z @ 0x1800D50C0 (-_UpdateCaptureControllerDefaultSDRBoostFromDisplay@CProjectionBorderManager@@AEAAJPEAUHMONITOR_.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CCaptureControllerProxy::SetDefaultSDRBoost(CCaptureControllerProxy *this, float a2)
{
  return (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(*((_QWORD *)this + 2) + 16LL) + 1032LL))(
           *(_QWORD *)(*((_QWORD *)this + 2) + 16LL),
           *(unsigned int *)(*((_QWORD *)this + 2) + 24LL));
}
