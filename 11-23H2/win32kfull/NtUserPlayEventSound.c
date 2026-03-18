/*
 * XREFs of NtUserPlayEventSound @ 0x1C01D7FB0
 * Callers:
 *     <none>
 * Callees:
 *     xxxPlayEventSound @ 0x1C0085A20 (xxxPlayEventSound.c)
 */

__int64 __fastcall NtUserPlayEventSound(unsigned int a1)
{
  __int64 v2; // rdx
  __int64 v3; // r8
  __int64 v4; // r9
  __int64 v5; // rbx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9

  EnterCrit(0LL, 0LL);
  v5 = (int)xxxPlayEventSound(a1, v2, v3, v4);
  UserSessionSwitchLeaveCrit(v7, v6, v8, v9);
  return v5;
}
