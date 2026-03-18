/*
 * XREFs of ?Release@COffScreenRenderTarget@@WFA@EAAKXZ @ 0x180278120
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall COffScreenRenderTarget::Release(__int64 a1, __int64 a2, __int64 a3)
{
  return CAtlasedRectsMesh::Release((CCachedVisualImage *)(a1 - 80), a2, a3);
}
