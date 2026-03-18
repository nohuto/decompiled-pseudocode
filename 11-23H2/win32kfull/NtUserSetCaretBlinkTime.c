/*
 * XREFs of NtUserSetCaretBlinkTime @ 0x1C00D55E0
 * Callers:
 *     <none>
 * Callees:
 *     _SetCaretBlinkTime @ 0x1C00D5620 (_SetCaretBlinkTime.c)
 */

__int64 __fastcall NtUserSetCaretBlinkTime(unsigned int a1)
{
  __int64 v2; // rbx
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9

  EnterCrit(0LL, 0LL);
  v2 = (int)SetCaretBlinkTime(a1);
  UserSessionSwitchLeaveCrit(v4, v3, v5, v6);
  return v2;
}
