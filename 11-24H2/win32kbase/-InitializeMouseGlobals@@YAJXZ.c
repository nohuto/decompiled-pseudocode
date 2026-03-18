/*
 * XREFs of ?InitializeMouseGlobals@@YAJXZ @ 0x140157A9C
 * Callers:
 *     ?InitializeInputGlobals@@YAJXZ @ 0x14023D618 (-InitializeInputGlobals@@YAJXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall InitializeMouseGlobals(__int64 a1)
{
  __int64 UserSessionState; // rax

  UserSessionState = W32GetUserSessionState(a1);
  *(_DWORD *)(UserSessionState + 16324) = -1;
  UserSessionState += 14720LL;
  *(_DWORD *)UserSessionState = 500;
  *(_DWORD *)(UserSessionState + 4) = 1;
  *(_DWORD *)(UserSessionState + 1616) = 0;
  *(_OWORD *)(UserSessionState + 1640) = (unsigned __int64)CMouseAcceleration_CreateInstance;
  *(_QWORD *)(UserSessionState + 1656) = 0LL;
  *(_OWORD *)(UserSessionState + 1664) = (unsigned __int64)CTouchpadAcceleration_CreateInstance;
  *(_QWORD *)(UserSessionState + 1680) = 1LL;
  return 0LL;
}
