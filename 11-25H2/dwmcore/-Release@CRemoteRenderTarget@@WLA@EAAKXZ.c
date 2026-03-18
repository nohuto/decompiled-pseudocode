/*
 * XREFs of ?Release@CRemoteRenderTarget@@WLA@EAAKXZ @ 0x180282D20
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CRemoteRenderTarget::Release(__int64 a1)
{
  return CAtlasedRectsMesh::Release((CAtlasedRectsMesh *)(a1 - 176));
}
