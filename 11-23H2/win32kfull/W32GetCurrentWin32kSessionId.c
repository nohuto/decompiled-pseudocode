/*
 * XREFs of W32GetCurrentWin32kSessionId @ 0x1C024AEDC
 * Callers:
 *     bAddAllFlEntry @ 0x1C001ADEC (bAddAllFlEntry.c)
 * Callees:
 *     <none>
 */

__int64 W32GetCurrentWin32kSessionId()
{
  return GetCurrentWin32kSessionId();
}
