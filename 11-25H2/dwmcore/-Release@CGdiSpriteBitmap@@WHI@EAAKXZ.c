/*
 * XREFs of ?Release@CGdiSpriteBitmap@@WHI@EAAKXZ @ 0x18029C560
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CGdiSpriteBitmap::Release(__int64 a1)
{
  return CAtlasedRectsMesh::Release((CAtlasedRectsMesh *)(a1 - 120));
}
