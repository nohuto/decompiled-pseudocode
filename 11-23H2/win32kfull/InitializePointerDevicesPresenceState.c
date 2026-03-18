/*
 * XREFs of InitializePointerDevicesPresenceState @ 0x1C00723B0
 * Callers:
 *     ?InitiateWin32kCleanup@@YAHXZ @ 0x1C0071B3C (-InitiateWin32kCleanup@@YAHXZ.c)
 * Callees:
 *     FreePointerDeviceClientList @ 0x1C0072414 (FreePointerDeviceClientList.c)
 *     ClosePointerDeviceProcessEvents @ 0x1C007364C (ClosePointerDeviceProcessEvents.c)
 */

_QWORD *__fastcall InitializePointerDevicesPresenceState(__int64 a1)
{
  _QWORD *result; // rax

  if ( (_DWORD)a1 )
  {
    result = (_QWORD *)(SGDGetUserSessionState(a1) + 16352);
    result[1] = result;
    *result = result;
  }
  else
  {
    FreePointerDeviceClientList();
    return (_QWORD *)ClosePointerDeviceProcessEvents();
  }
  return result;
}
