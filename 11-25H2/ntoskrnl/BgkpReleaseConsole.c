/*
 * XREFs of BgkpReleaseConsole @ 0x14058CB34
 * Callers:
 *     BgkDisplayCharacter @ 0x140BA0240 (BgkDisplayCharacter.c)
 *     BgkGetConsoleState @ 0x140BA0370 (BgkGetConsoleState.c)
 *     BgkGetCursorState @ 0x140BA03C0 (BgkGetCursorState.c)
 *     BgkSetCursor @ 0x140BA0490 (BgkSetCursor.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x140324280 (ExReleaseRundownProtection_0.c)
 */

void BgkpReleaseConsole()
{
  ExReleaseRundownProtection_0(&stru_140E0A7E0);
}
