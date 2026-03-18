/*
 * XREFs of UpdateExternalMonitorConnectedStatus @ 0x1400C6C58
 * Callers:
 *     xxxVideoPortCalloutThread @ 0x1401B08D4 (xxxVideoPortCalloutThread.c)
 *     InitVideo @ 0x1401B2E18 (InitVideo.c)
 * Callees:
 *     DrvIsExternalMonitorActive @ 0x1400C6D18 (DrvIsExternalMonitorActive.c)
 *     __security_check_cookie @ 0x14023F3B0 (__security_check_cookie.c)
 */

int __fastcall UpdateExternalMonitorConnectedStatus(char a1)
{
  __int64 UserSessionState; // rax
  __int64 v3; // rcx
  int v4; // ebx
  __int64 v5; // rcx
  _BYTE v7[8]; // [rsp+30h] [rbp-28h] BYREF
  __int64 InputBuffer; // [rsp+38h] [rbp-20h] BYREF
  int v9; // [rsp+40h] [rbp-18h]

  InputBuffer = 0LL;
  v9 = 0;
  v7[0] = 0;
  LODWORD(UserSessionState) = DrvIsExternalMonitorActive(v7);
  if ( (int)UserSessionState >= 0 )
  {
    v4 = v7[0];
    UserSessionState = W32GetUserSessionState(v3);
    if ( *(_DWORD *)(UserSessionState + 600) != v4 || a1 )
    {
      *(_DWORD *)(W32GetUserSessionState(v5) + 600) = v4;
      LODWORD(InputBuffer) = 23;
      LOBYTE(v9) = v4;
      LODWORD(UserSessionState) = ZwPowerInformation(SystemPowerStateLogging|0x40, &InputBuffer, 0xCu, 0LL, 0);
    }
  }
  return UserSessionState;
}
