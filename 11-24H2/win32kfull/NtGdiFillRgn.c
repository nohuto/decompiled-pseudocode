/*
 * XREFs of NtGdiFillRgn @ 0x1400E0910
 * Callers:
 *     <none>
 * Callees:
 *     GreFillRgn @ 0x1400E2680 (GreFillRgn.c)
 */

__int64 __fastcall NtGdiFillRgn(HDC a1)
{
  return GreFillRgn(a1);
}
