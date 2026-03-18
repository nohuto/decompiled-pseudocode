/*
 * XREFs of IsDesktopApp @ 0x1C00A0BC0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall IsDesktopApp(__int64 a1)
{
  return (*(_DWORD *)(a1 + 824) & 0x30) == 0;
}
