/*
 * XREFs of UserNotifyExternalMonitorConnectedStatus @ 0x1401AEEE4
 * Callers:
 *     DrvSetDisplayConfig @ 0x140137640 (DrvSetDisplayConfig.c)
 * Callees:
 *     __security_check_cookie @ 0x14023F3B0 (__security_check_cookie.c)
 */

int __fastcall UserNotifyExternalMonitorConnectedStatus(__int64 a1, unsigned __int8 a2)
{
  int v3; // ebx
  __int64 UserSessionState; // rax
  __int64 InputBuffer; // [rsp+30h] [rbp-28h] BYREF
  int v7; // [rsp+38h] [rbp-20h]

  InputBuffer = 0LL;
  v3 = a2;
  v7 = 0;
  if ( (_BYTE)a1 || (UserSessionState = W32GetUserSessionState(a1), *(_DWORD *)(UserSessionState + 600) != v3) )
  {
    *(_DWORD *)(W32GetUserSessionState(a1) + 600) = v3;
    LODWORD(InputBuffer) = 23;
    LOBYTE(v7) = a2;
    LODWORD(UserSessionState) = ZwPowerInformation(SystemPowerStateLogging|0x40, &InputBuffer, 0xCu, 0LL, 0);
  }
  return UserSessionState;
}
