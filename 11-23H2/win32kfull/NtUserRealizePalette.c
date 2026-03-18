/*
 * XREFs of NtUserRealizePalette @ 0x1C01546E0
 * Callers:
 *     <none>
 * Callees:
 *     xxxRealizePalette @ 0x1C02145A8 (xxxRealizePalette.c)
 */

__int64 __fastcall NtUserRealizePalette(HDC a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r9

  EnterCrit(0LL, 0LL);
  LODWORD(a1) = xxxRealizePalette(a1);
  UserSessionSwitchLeaveCrit(v3, v2, v4, v5);
  return (unsigned int)a1;
}
