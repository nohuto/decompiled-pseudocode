/*
 * XREFs of NtUserShowCursor @ 0x1400926F0
 * Callers:
 *     <none>
 * Callees:
 *     ?zzzShowCursor@@YAH_N@Z @ 0x140092F08 (-zzzShowCursor@@YAH_N@Z.c)
 */

__int64 __fastcall NtUserShowCursor(int a1)
{
  unsigned int v2; // ebx

  EnterCrit(0LL, 0LL);
  v2 = zzzShowCursor(a1 != 0);
  UserSessionSwitchLeaveCrit();
  return v2;
}
