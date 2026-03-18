/*
 * XREFs of ?Release@CDDisplayRenderTarget@@WFI@EAAKXZ @ 0x180278130
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CDDisplayRenderTarget::Release(__int64 a1, __int64 a2, __int64 a3)
{
  return CAtlasedRectsMesh::Release((CCachedVisualImage *)(a1 - 88), a2, a3);
}
