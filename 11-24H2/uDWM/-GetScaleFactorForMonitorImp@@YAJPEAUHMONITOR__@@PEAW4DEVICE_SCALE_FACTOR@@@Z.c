/*
 * XREFs of ?GetScaleFactorForMonitorImp@@YAJPEAUHMONITOR__@@PEAW4DEVICE_SCALE_FACTOR@@@Z @ 0x18000438C
 * Callers:
 *     ?GetScalingFactorForCVI@CDesktopManager@@QEBAMAEBUtagRECT@@@Z @ 0x18000471C (-GetScalingFactorForCVI@CDesktopManager@@QEBAMAEBUtagRECT@@@Z.c)
 *     ?EnsureSecondaryWindowRepresentation@CThumbnailVisual@@QEAAJPEAPEAVCSecondaryWindowRepresentation@@@Z @ 0x18001F550 (-EnsureSecondaryWindowRepresentation@CThumbnailVisual@@QEAAJPEAPEAVCSecondaryWindowRepresentatio.c)
 *     ?EnsureSecondaryWindowRepresentation@CIconicAnimatedVisual@@QEAAJXZ @ 0x1800C4C7C (-EnsureSecondaryWindowRepresentation@CIconicAnimatedVisual@@QEAAJXZ.c)
 *     ?_UpdateFinalSize@CTouchPressHoldVisual@@IEAAXXZ @ 0x1800DC3D0 (-_UpdateFinalSize@CTouchPressHoldVisual@@IEAAXXZ.c)
 * Callees:
 *     ?Init@CImmersiveOrPrimaryMonitor@@AEAAJPEAUHMONITOR__@@@Z @ 0x180004998 (-Init@CImmersiveOrPrimaryMonitor@@AEAAJPEAUHMONITOR__@@@Z.c)
 *     __security_check_cookie @ 0x18009B5A0 (__security_check_cookie.c)
 */

__int64 __fastcall GetScaleFactorForMonitorImp(HMONITOR a1, enum DEVICE_SCALE_FACTOR *a2)
{
  __int64 result; // rax
  __int128 v4; // [rsp+20h] [rbp-68h]
  _OWORD v5[2]; // [rsp+48h] [rbp-40h] BYREF
  int v6; // [rsp+68h] [rbp-20h]

  v6 = 0;
  *(_QWORD *)&v4 = 100LL;
  *((_QWORD *)&v4 + 1) = 0x6000000064LL;
  v5[1] = 0LL;
  v5[0] = v4;
  result = CImmersiveOrPrimaryMonitor::Init((CImmersiveOrPrimaryMonitor *)v5, a1);
  *a2 = v5[0];
  return result;
}
