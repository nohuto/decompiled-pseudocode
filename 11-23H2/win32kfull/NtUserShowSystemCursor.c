/*
 * XREFs of NtUserShowSystemCursor @ 0x1C01DE460
 * Callers:
 *     <none>
 * Callees:
 *     CheckWinstaAttributeAccess @ 0x1C0041160 (CheckWinstaAttributeAccess.c)
 *     EditionShowSystemCursor @ 0x1C00C29E0 (EditionShowSystemCursor.c)
 *     UserSetLastError @ 0x1C00EDA4C (UserSetLastError.c)
 */

_BOOL8 __fastcall NtUserShowSystemCursor(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // edi
  BOOL v4; // ebx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9

  v3 = a1;
  EnterSharedCrit(a1, a2, a3);
  v4 = 0;
  if ( (unsigned int)CheckWinstaAttributeAccess(16LL) )
    v4 = EditionShowSystemCursor((CursorApiRouter *)v3);
  else
    UserSetLastError(5);
  UserSessionSwitchLeaveCrit(v6, v5, v7, v8);
  return v4;
}
