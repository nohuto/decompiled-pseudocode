/*
 * XREFs of NtUserPlayEventSound @ 0x14029A350
 * Callers:
 *     <none>
 * Callees:
 *     xxxPlayEventSound @ 0x1400A4F40 (xxxPlayEventSound.c)
 */

__int64 __fastcall NtUserPlayEventSound(unsigned int a1)
{
  __int64 v2; // rdx
  __int64 v3; // rbx
  __int64 v4; // rcx

  EnterCrit(0LL, 0LL);
  v3 = (int)xxxPlayEventSound(a1, v2);
  UserSessionSwitchLeaveCrit(v4);
  return v3;
}
