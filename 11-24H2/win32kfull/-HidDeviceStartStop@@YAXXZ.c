/*
 * XREFs of ?HidDeviceStartStop@@YAXXZ @ 0x140130500
 * Callers:
 *     _RegisterRawInputDevices @ 0x14012FA44 (_RegisterRawInputDevices.c)
 *     FreeProcessHidTable @ 0x1401F4078 (FreeProcessHidTable.c)
 * Callees:
 *     <none>
 */

void __fastcall HidDeviceStartStop(__int64 a1, __int64 a2)
{
  __int64 UserSessionState; // rax

  UserSessionState = W32GetUserSessionState(a1, a2);
  CHidInput::HandleDirectStartStopDeviceReadRequest(*(CHidInput **)(UserSessionState + 16840));
}
