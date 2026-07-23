/*
 * XREFs of PsIsProtectedProcess @ 0x14044F820
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall PsIsProtectedProcess(__int64 a1)
{
  return (*(_BYTE *)(a1 + 1530) & 7) != 0;
}
