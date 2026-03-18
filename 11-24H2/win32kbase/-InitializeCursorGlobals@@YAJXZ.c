/*
 * XREFs of ?InitializeCursorGlobals@@YAJXZ @ 0x1401517D8
 * Callers:
 *     Win32kBaseDriverEntry @ 0x1402E25E0 (Win32kBaseDriverEntry.c)
 * Callees:
 *     memmove @ 0x14023FA40 (memmove.c)
 */

__int64 __fastcall InitializeCursorGlobals(__int64 a1)
{
  _DWORD *UserSessionState; // rbx
  __int64 result; // rax

  UserSessionState = (_DWORD *)W32GetUserSessionState(a1);
  memmove(UserSessionState + 5482, &unk_140266C70, 0x28F8uLL);
  memmove(UserSessionState + 8104, &unk_140265D50, 0xF18uLL);
  result = 0LL;
  UserSessionState[9099] = 9;
  return result;
}
