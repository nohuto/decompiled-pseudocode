/*
 * XREFs of ResetAccelerationCurves @ 0x1401289C0
 * Callers:
 *     _SetPrecisionTouchPadConfiguration @ 0x1401B1850 (_SetPrecisionTouchPadConfiguration.c)
 *     ?_zzzNotifyExternalComponents@CInputConfig@@AEAAXXZ @ 0x1401F4E58 (-_zzzNotifyExternalComponents@CInputConfig@@AEAAXXZ.c)
 *     UnpackMouseSettings @ 0x140213D04 (UnpackMouseSettings.c)
 * Callees:
 *     ?ResetAccelerationCurves@CDeviceAcceleration@@QEAAXXZ @ 0x1401289F8 (-ResetAccelerationCurves@CDeviceAcceleration@@QEAAXXZ.c)
 */

void __fastcall ResetAccelerationCurves(__int64 a1)
{
  __int64 v1; // rbx
  __int64 UserSessionState; // rax

  v1 = (int)a1;
  UserSessionState = W32GetUserSessionState(a1);
  CDeviceAcceleration::ResetAccelerationCurves(*(CDeviceAcceleration **)(UserSessionState + 24 * (v1 + 682)));
}
