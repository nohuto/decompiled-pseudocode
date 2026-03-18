/*
 * XREFs of NtUserDestroyCaret @ 0x140094F50
 * Callers:
 *     <none>
 * Callees:
 *     zzzDestroyCaret @ 0x140094F8C (zzzDestroyCaret.c)
 */

__int64 NtUserDestroyCaret()
{
  __int64 v0; // rbx

  EnterCrit(0LL, 0LL);
  v0 = (int)zzzDestroyCaret();
  UserSessionSwitchLeaveCrit();
  return v0;
}
