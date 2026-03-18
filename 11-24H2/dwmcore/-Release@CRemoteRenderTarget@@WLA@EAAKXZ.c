/*
 * XREFs of ?Release@CRemoteRenderTarget@@WLA@EAAKXZ @ 0x180278190
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CRemoteRenderTarget::Release(__int64 a1, __int64 a2, __int64 a3)
{
  return CAtlasedRectsMesh::Release((CCachedVisualImage *)(a1 - 176), a2, a3);
}
