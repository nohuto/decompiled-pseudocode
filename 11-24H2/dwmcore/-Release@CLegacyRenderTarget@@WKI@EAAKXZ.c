/*
 * XREFs of ?Release@CLegacyRenderTarget@@WKI@EAAKXZ @ 0x180278170
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CLegacyRenderTarget::Release(__int64 a1, __int64 a2, __int64 a3)
{
  return CAtlasedRectsMesh::Release((CCachedVisualImage *)(a1 - 168), a2, a3);
}
