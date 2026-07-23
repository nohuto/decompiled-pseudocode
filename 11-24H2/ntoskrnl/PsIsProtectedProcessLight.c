/*
 * XREFs of PsIsProtectedProcessLight @ 0x140469B00
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall PsIsProtectedProcessLight(__int64 a1)
{
  return (*(_BYTE *)(a1 + 1530) & 7) == 1;
}
