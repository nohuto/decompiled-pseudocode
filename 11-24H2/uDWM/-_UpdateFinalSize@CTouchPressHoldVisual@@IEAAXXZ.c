/*
 * XREFs of ?_UpdateFinalSize@CTouchPressHoldVisual@@IEAAXXZ @ 0x1800DC3D0
 * Callers:
 *     ?StartAbort@CTouchPressHoldVisual@@QEAAJPEBUtagPOINT@@@Z @ 0x1800DBE14 (-StartAbort@CTouchPressHoldVisual@@QEAAJPEBUtagPOINT@@@Z.c)
 *     ?StartHold@CTouchPressHoldVisual@@QEAAJPEBUtagPOINT@@@Z @ 0x1800DBF7C (-StartHold@CTouchPressHoldVisual@@QEAAJPEBUtagPOINT@@@Z.c)
 *     ?StartRightTap@CTouchPressHoldVisual@@QEAAJPEBUtagPOINT@@@Z @ 0x1800DC0D8 (-StartRightTap@CTouchPressHoldVisual@@QEAAJPEBUtagPOINT@@@Z.c)
 * Callees:
 *     ?GetScaleFactorForMonitorImp@@YAJPEAUHMONITOR__@@PEAW4DEVICE_SCALE_FACTOR@@@Z @ 0x18000438C (-GetScaleFactorForMonitorImp@@YAJPEAUHMONITOR__@@PEAW4DEVICE_SCALE_FACTOR@@@Z.c)
 */

void __fastcall CTouchPressHoldVisual::_UpdateFinalSize(CTouchPressHoldVisual *this)
{
  HMONITOR v2; // rax
  int v3; // edx
  int v4; // eax
  int v5; // edx
  int nNumerator; // [rsp+30h] [rbp+8h] BYREF

  nNumerator = 100;
  v2 = MonitorFromPoint(*(POINT *)((char *)this + 260), 2u);
  GetScaleFactorForMonitorImp(v2, (enum DEVICE_SCALE_FACTOR *)&nNumerator);
  v3 = nNumerator;
  *((_DWORD *)this + 73) = nNumerator;
  v4 = MulDiv(90, v3, 100);
  v5 = *((_DWORD *)this + 73);
  *((_DWORD *)this + 68) = v4;
  *((_DWORD *)this + 67) = MulDiv(90, v5, 100);
}
