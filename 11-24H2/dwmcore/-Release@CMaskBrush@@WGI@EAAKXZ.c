/*
 * XREFs of ?Release@CMaskBrush@@WGI@EAAKXZ @ 0x180291230
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CMaskBrush::Release(__int64 a1, __int64 a2, __int64 a3)
{
  return CAtlasedRectsMesh::Release((CCachedVisualImage *)(a1 - 104), a2, a3);
}
