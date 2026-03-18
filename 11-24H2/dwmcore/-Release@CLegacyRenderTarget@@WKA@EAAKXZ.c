/*
 * XREFs of ?Release@CLegacyRenderTarget@@WKA@EAAKXZ @ 0x180278150
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CLegacyRenderTarget::Release(__int64 a1, __int64 a2, __int64 a3)
{
  return CAtlasedRectsMesh::Release((CCachedVisualImage *)(a1 - 160), a2, a3);
}
