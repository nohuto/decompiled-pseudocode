/*
 * XREFs of ?Release@CGdiSpriteBitmap@@WHI@EAAKXZ @ 0x180291240
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CGdiSpriteBitmap::Release(__int64 a1, __int64 a2, __int64 a3)
{
  return CAtlasedRectsMesh::Release((CCachedVisualImage *)(a1 - 120), a2, a3);
}
