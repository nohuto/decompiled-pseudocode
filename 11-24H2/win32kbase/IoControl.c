/*
 * XREFs of IoControl @ 0x140212EF0
 * Callers:
 *     ?xxxUserPowerStateCalloutWorker@@YAJXZ @ 0x1400EAC08 (-xxxUserPowerStateCalloutWorker@@YAJXZ.c)
 *     NlsKbdSendIMENotification @ 0x1401298F0 (NlsKbdSendIMENotification.c)
 *     UserPowerInfoCallout @ 0x1401AEF84 (UserPowerInfoCallout.c)
 *     UpdateToggleKeyAndLights @ 0x140214380 (UpdateToggleKeyAndLights.c)
 * Callees:
 *     ?KeyboardIoControl@CKeyboardSensor@@QEAAXW4KeyboardControlCodes@@@Z @ 0x1402102D8 (-KeyboardIoControl@CKeyboardSensor@@QEAAXW4KeyboardControlCodes@@@Z.c)
 */

void __fastcall IoControl(__int64 a1)
{
  int v1; // ebx
  __int64 UserSessionState; // rax

  v1 = a1;
  UserSessionState = W32GetUserSessionState(a1);
  CKeyboardSensor::KeyboardIoControl(*(_QWORD *)(UserSessionState + 3192), v1);
}
