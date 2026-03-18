/*
 * XREFs of ?InitializeDCEGlobals@@YAJXZ @ 0x14015BC68
 * Callers:
 *     Win32kBaseDriverEntry @ 0x1402E25E0 (Win32kBaseDriverEntry.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall InitializeDCEGlobals(__int64 a1)
{
  __int64 UserSessionState; // rax
  _QWORD *v2; // rcx
  __int64 result; // rax

  UserSessionState = W32GetUserSessionState(a1);
  v2 = (_QWORD *)(UserSessionState + 19728);
  *(_DWORD *)(UserSessionState + 19704) = 1000;
  *(_QWORD *)(UserSessionState + 19736) = UserSessionState + 19728;
  *(_DWORD *)(UserSessionState + 19708) = 100;
  *(_QWORD *)(UserSessionState + 19696) = 10LL;
  result = 0LL;
  *v2 = v2;
  return result;
}
