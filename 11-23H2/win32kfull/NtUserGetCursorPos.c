/*
 * XREFs of NtUserGetCursorPos @ 0x1C003FEC0
 * Callers:
 *     <none>
 * Callees:
 *     ?xxxGetCursorPos@@YAHPEAUtagPOINT@@K@Z @ 0x1C003FF0C (-xxxGetCursorPos@@YAHPEAUtagPOINT@@K@Z.c)
 */

__int64 __fastcall NtUserGetCursorPos(struct tagPOINT *a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // ebx
  __int64 CursorPos; // rbx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9

  v3 = a2;
  EnterSharedCrit(a1, a2, a3);
  CursorPos = (int)xxxGetCursorPos(a1, v3);
  UserSessionSwitchLeaveCrit(v7, v6, v8, v9);
  return CursorPos;
}
