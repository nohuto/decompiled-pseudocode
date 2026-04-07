/*
 * XREFs of ?_EnsureCursorStateForCapture@CProjectionBorderManager@@AEAAXXZ @ 0x1800D3E5C
 * Callers:
 *     ?StopDisplayCapture@CProjectionBorderManager@@UEAAJAEBUDWM_CAPTURE_TOKEN@@@Z @ 0x1800D2600 (-StopDisplayCapture@CProjectionBorderManager@@UEAAJAEBUDWM_CAPTURE_TOKEN@@@Z.c)
 *     ?StopVirtualMonitorCapture@CProjectionBorderManager@@UEAAJAEBUDWM_CAPTURE_TOKEN@@@Z @ 0x1800D2790 (-StopVirtualMonitorCapture@CProjectionBorderManager@@UEAAJAEBUDWM_CAPTURE_TOKEN@@@Z.c)
 *     ?StopWindowCapture@CProjectionBorderManager@@UEAAJAEBUDWM_CAPTURE_TOKEN@@@Z @ 0x1800D2920 (-StopWindowCapture@CProjectionBorderManager@@UEAAJAEBUDWM_CAPTURE_TOKEN@@@Z.c)
 *     ?_AddDisplayCaptureEntry@CProjectionBorderManager@@AEAAJPEAUHMONITOR__@@PEAVCCaptureControllerProxy@@AEBUDWM_CAPTURE_TOKEN@@_N@Z @ 0x1800D3784 (-_AddDisplayCaptureEntry@CProjectionBorderManager@@AEAAJPEAUHMONITOR__@@PEAVCCaptureControllerPr.c)
 *     ?_AddTabGroupCaptureEntry@CProjectionBorderManager@@AEAAJPEAUHWND__@@PEAVCapturedWindowSWRVisual@@PEAVCCaptureControllerProxy@@AEBUDWM_CAPTURE_TOKEN@@@Z @ 0x1800D3CE8 (-_AddTabGroupCaptureEntry@CProjectionBorderManager@@AEAAJPEAUHWND__@@PEAVCapturedWindowSWRVisual.c)
 * Callees:
 *     <none>
 */

void __fastcall CProjectionBorderManager::_EnsureCursorStateForCapture(CProjectionBorderManager *this)
{
  if ( RtlIsGenericTableEmpty((PRTL_GENERIC_TABLE)this + 7) && RtlIsGenericTableEmpty((PRTL_GENERIC_TABLE)this + 6) )
  {
    if ( *((_BYTE *)this + 576) )
    {
      EnableSoftwareCursorForScreenCapture(0LL);
      *((_BYTE *)this + 576) = 0;
    }
  }
  else if ( !*((_BYTE *)this + 576) )
  {
    EnableSoftwareCursorForScreenCapture(1LL);
    *((_BYTE *)this + 576) = 1;
  }
}
