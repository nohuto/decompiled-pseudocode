/*
 * XREFs of NtUserIsMouseInputEnabled @ 0x1C01D5390
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall NtUserIsMouseInputEnabled(__int64 a1, __int64 a2, __int64 a3)
{
  _BOOL8 v3; // rbx
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9

  EnterSharedCrit(a1, a2, a3);
  v3 = ((gCursorSuppressionState - 1) & 0xFFFFFFFB) != 0;
  UserSessionSwitchLeaveCrit(v5, v4, v6, v7);
  return v3;
}
