/*
 * XREFs of ?Release@COffScreenRenderTarget@@WGA@EAAKXZ @ 0x180282CD0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall COffScreenRenderTarget::Release(__int64 a1)
{
  return CAtlasedRectsMesh::Release((CAtlasedRectsMesh *)(a1 - 96));
}
