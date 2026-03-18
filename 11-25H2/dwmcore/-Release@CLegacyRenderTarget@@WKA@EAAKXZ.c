/*
 * XREFs of ?Release@CLegacyRenderTarget@@WKA@EAAKXZ @ 0x180282CE0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CLegacyRenderTarget::Release(__int64 a1)
{
  return CAtlasedRectsMesh::Release((CAtlasedRectsMesh *)(a1 - 160));
}
