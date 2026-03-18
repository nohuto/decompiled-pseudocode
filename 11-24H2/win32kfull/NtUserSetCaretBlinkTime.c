/*
 * XREFs of NtUserSetCaretBlinkTime @ 0x140092580
 * Callers:
 *     <none>
 * Callees:
 *     _SetCaretBlinkTime @ 0x1400925C0 (_SetCaretBlinkTime.c)
 */

__int64 __fastcall NtUserSetCaretBlinkTime(unsigned int a1)
{
  __int64 v2; // rbx

  EnterCrit(0LL, 0LL);
  v2 = (int)SetCaretBlinkTime(a1);
  UserSessionSwitchLeaveCrit();
  return v2;
}
