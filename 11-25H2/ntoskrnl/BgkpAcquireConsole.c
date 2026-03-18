/*
 * XREFs of BgkpAcquireConsole @ 0x14058CAE8
 * Callers:
 *     BgkDisplayStringEx @ 0x14058C524 (BgkDisplayStringEx.c)
 *     BgkSetTextColor @ 0x14058C820 (BgkSetTextColor.c)
 *     BgkSolidColorFill @ 0x14058CA70 (BgkSolidColorFill.c)
 *     BgkDisplayCharacter @ 0x140BA0240 (BgkDisplayCharacter.c)
 *     BgkGetConsoleState @ 0x140BA0370 (BgkGetConsoleState.c)
 *     BgkGetCursorState @ 0x140BA03C0 (BgkGetCursorState.c)
 *     BgkSetCursor @ 0x140BA0490 (BgkSetCursor.c)
 * Callees:
 *     ExAcquireRundownProtection_0 @ 0x140326750 (ExAcquireRundownProtection_0.c)
 */

bool BgkpAcquireConsole()
{
  return ExAcquireRundownProtection_0(&stru_140E0A7E0) != 0;
}
