/*
 * XREFs of NtUserDestroyCaret @ 0x1C0005F10
 * Callers:
 *     <none>
 * Callees:
 *     zzzDestroyCaret @ 0x1C0005F9C (zzzDestroyCaret.c)
 */

__int64 NtUserDestroyCaret()
{
  __int64 v0; // rbx

  EnterCrit(0LL, 0LL);
  v0 = (int)zzzDestroyCaret();
  UserSessionSwitchLeaveCrit();
  return v0;
}
