/*
 * XREFs of ?Release@COffScreenRenderTarget@@WGA@EAAKXZ @ 0x180278140
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall COffScreenRenderTarget::Release(__int64 a1, __int64 a2, __int64 a3)
{
  return CAtlasedRectsMesh::Release((CCachedVisualImage *)(a1 - 96), a2, a3);
}
