/*
 * XREFs of IsDesktopApp @ 0x140113520
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall IsDesktopApp(__int64 a1)
{
  return (*(_BYTE *)(a1 + 816) & 0x30) == 0;
}
