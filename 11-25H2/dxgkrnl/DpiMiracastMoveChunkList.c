/*
 * XREFs of DpiMiracastMoveChunkList @ 0x14007F200
 * Callers:
 *     <none>
 * Callees:
 *     ?AddChunkListToTail@MIRACAST_CHUNK_LIST@@QEAAXPEAV1@@Z @ 0x140064674 (-AddChunkListToTail@MIRACAST_CHUNK_LIST@@QEAAXPEAV1@@Z.c)
 */

char __fastcall DpiMiracastMoveChunkList(struct MIRACAST_CHUNK_LIST **a1)
{
  MIRACAST_CHUNK_LIST::AddChunkListToTail(a1[1], *a1);
  return 1;
}
