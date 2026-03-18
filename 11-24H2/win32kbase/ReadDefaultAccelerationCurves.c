/*
 * XREFs of ReadDefaultAccelerationCurves @ 0x14009E8F0
 * Callers:
 *     <none>
 * Callees:
 *     ?CreateDefaultAcceleratorCurve@CDeviceAcceleration@@QEAAXPEAU_UNICODE_STRING@@@Z @ 0x14009EA00 (-CreateDefaultAcceleratorCurve@CDeviceAcceleration@@QEAAXPEAU_UNICODE_STRING@@@Z.c)
 */

void __fastcall ReadDefaultAccelerationCurves(__int64 a1, struct _UNICODE_STRING *a2)
{
  __int64 v3; // rbx
  __int64 UserSessionState; // rax

  v3 = (int)a1;
  UserSessionState = W32GetUserSessionState(a1);
  CDeviceAcceleration::CreateDefaultAcceleratorCurve(*(CDeviceAcceleration **)(UserSessionState + 24 * (v3 + 682)), a2);
}
