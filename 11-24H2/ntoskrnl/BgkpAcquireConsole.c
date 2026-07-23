/*
 * XREFs of BgkpAcquireConsole @ 0x14058D2E8
 * Callers:
 *     BgkDisplayStringEx @ 0x14058CD24 (BgkDisplayStringEx.c)
 *     BgkSetTextColor @ 0x14058D020 (BgkSetTextColor.c)
 *     BgkSolidColorFill @ 0x14058D270 (BgkSolidColorFill.c)
 *     BgkDisplayCharacter @ 0x140BB2240 (BgkDisplayCharacter.c)
 *     BgkGetConsoleState @ 0x140BB2370 (BgkGetConsoleState.c)
 *     BgkGetCursorState @ 0x140BB23C0 (BgkGetCursorState.c)
 *     BgkSetCursor @ 0x140BB2490 (BgkSetCursor.c)
 * Callees:
 *     ExAcquireRundownProtection_0 @ 0x14022E830 (ExAcquireRundownProtection_0.c)
 */

bool BgkpAcquireConsole()
{
  return ExAcquireRundownProtection_0(&stru_140E0A9A0) != 0;
}
