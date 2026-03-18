/*
 * XREFs of NtUserZapActiveAndFocus @ 0x14021A9F0
 * Callers:
 *     <none>
 * Callees:
 *     ZapActiveAndFocus @ 0x14021AA2C (ZapActiveAndFocus.c)
 */

__int64 NtUserZapActiveAndFocus()
{
  __int64 v0; // rbx
  __int64 v1; // rcx

  EnterCrit(0LL, 0LL);
  v0 = (int)ZapActiveAndFocus();
  UserSessionSwitchLeaveCrit(v1);
  return v0;
}
