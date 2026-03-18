/*
 * XREFs of InitializeTouchPadSysParams @ 0x1402ADE00
 * Callers:
 *     <none>
 * Callees:
 *     Feature_GestureOnlyTouchpadParam2__private_ReportDeviceUsage @ 0x1402ADD94 (Feature_GestureOnlyTouchpadParam2__private_ReportDeviceUsage.c)
 */

__int64 __fastcall InitializeTouchPadSysParams(__int64 a1, __int64 a2)
{
  _OWORD *UserSessionState; // rax
  _DWORD *v3; // rbx
  __int64 v4; // rdx
  __int64 v5; // rcx
  unsigned int v6; // eax

  UserSessionState = (_OWORD *)W32GetUserSessionState(a1, a2);
  v3 = UserSessionState + 1048;
  UserSessionState[1048] = 0LL;
  UserSessionState[1049] = 0LL;
  UserSessionState[1050] = 0LL;
  Feature_GestureOnlyTouchpadParam2__private_ReportDeviceUsage();
  v3[3] |= 0x10u;
  *v3 = 3;
  *(_DWORD *)(W32GetUserSessionState(v5, v4) + 352) = 1;
  v3[9] = 0;
  v3[10] = 0;
  v3[7] = 50;
  v3[8] = 50;
  v6 = v3[4] & 0xFFFFFDBF;
  v3[5] = 2;
  v3[6] = 10;
  v3[4] = v6 | 0x1BF;
  return CPTPProcessor::EnvironmentChanged();
}
