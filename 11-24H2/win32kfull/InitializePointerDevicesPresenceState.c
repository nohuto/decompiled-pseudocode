/*
 * XREFs of InitializePointerDevicesPresenceState @ 0x140219210
 * Callers:
 *     ?InitiateWin32kCleanup@@YAXXZ @ 0x140272F14 (-InitiateWin32kCleanup@@YAXXZ.c)
 * Callees:
 *     FreePointerDeviceClientList @ 0x14021924C (FreePointerDeviceClientList.c)
 *     ClosePointerDeviceProcessEvents @ 0x1402192E4 (ClosePointerDeviceProcessEvents.c)
 */

_QWORD *__fastcall InitializePointerDevicesPresenceState(__int64 a1, __int64 a2)
{
  _QWORD *result; // rax

  if ( (_DWORD)a1 )
  {
    result = (_QWORD *)(W32GetUserSessionState(a1, a2) + 16712);
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
