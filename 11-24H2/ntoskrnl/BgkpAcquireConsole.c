/*
 * XREFs of BgkpAcquireConsole @ 0x1405902C8
 * Callers:
 *     BgkDisplayStringEx @ 0x14058FD04 (BgkDisplayStringEx.c)
 *     BgkSetTextColor @ 0x140590000 (BgkSetTextColor.c)
 *     BgkSolidColorFill @ 0x140590250 (BgkSolidColorFill.c)
 *     BgkDisplayCharacter @ 0x140BB0240 (BgkDisplayCharacter.c)
 *     BgkGetConsoleState @ 0x140BB0370 (BgkGetConsoleState.c)
 *     BgkGetCursorState @ 0x140BB03C0 (BgkGetCursorState.c)
 *     BgkSetCursor @ 0x140BB0490 (BgkSetCursor.c)
 * Callees:
 *     ExAcquireRundownProtection @ 0x1402792A0 (ExAcquireRundownProtection.c)
 */

bool BgkpAcquireConsole()
{
  return ExAcquireRundownProtection(&stru_140E0A920) != 0;
}
