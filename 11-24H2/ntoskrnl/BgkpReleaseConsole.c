/*
 * XREFs of BgkpReleaseConsole @ 0x14058D334
 * Callers:
 *     BgkDisplayCharacter @ 0x140BB2240 (BgkDisplayCharacter.c)
 *     BgkGetConsoleState @ 0x140BB2370 (BgkGetConsoleState.c)
 *     BgkGetCursorState @ 0x140BB23C0 (BgkGetCursorState.c)
 *     BgkSetCursor @ 0x140BB2490 (BgkSetCursor.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x14020DE50 (ExReleaseRundownProtection_0.c)
 */

void BgkpReleaseConsole()
{
  ExReleaseRundownProtection_0(&stru_140E0A9A0);
}
