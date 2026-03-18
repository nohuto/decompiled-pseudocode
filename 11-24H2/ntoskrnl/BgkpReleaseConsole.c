/*
 * XREFs of BgkpReleaseConsole @ 0x140590314
 * Callers:
 *     BgkDisplayCharacter @ 0x140BB0240 (BgkDisplayCharacter.c)
 *     BgkGetConsoleState @ 0x140BB0370 (BgkGetConsoleState.c)
 *     BgkGetCursorState @ 0x140BB03C0 (BgkGetCursorState.c)
 *     BgkSetCursor @ 0x140BB0490 (BgkSetCursor.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x140245670 (ExReleaseRundownProtection_0.c)
 */

void BgkpReleaseConsole()
{
  ExReleaseRundownProtection_0(&stru_140E0A920);
}
