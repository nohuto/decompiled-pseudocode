/*
 * XREFs of NtUserLW_LoadFonts @ 0x1C001A510
 * Callers:
 *     <none>
 * Callees:
 *     xxxLW_LoadFonts @ 0x1C001A550 (xxxLW_LoadFonts.c)
 */

__int64 __fastcall NtUserLW_LoadFonts(unsigned int a1)
{
  __int64 Fonts; // rbx
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9

  EnterCrit(0LL, 0LL);
  Fonts = (int)xxxLW_LoadFonts(a1);
  UserSessionSwitchLeaveCrit(v4, v3, v5, v6);
  return Fonts;
}
