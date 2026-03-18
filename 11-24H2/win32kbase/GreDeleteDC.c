/*
 * XREFs of GreDeleteDC @ 0x14010F4C0
 * Callers:
 *     <none>
 * Callees:
 *     GrepDeleteDC @ 0x140034C20 (GrepDeleteDC.c)
 */

__int64 __fastcall GreDeleteDC(HDC a1)
{
  return GrepDeleteDC(a1, 0x400000u);
}
