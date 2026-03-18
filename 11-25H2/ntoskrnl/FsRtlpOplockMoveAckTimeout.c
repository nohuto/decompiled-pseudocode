/*
 * XREFs of FsRtlpOplockMoveAckTimeout @ 0x1406FFBFC
 * Callers:
 *     FsRtlpAcknowledgeOplockBreakByCacheFlags @ 0x1404E0B78 (FsRtlpAcknowledgeOplockBreakByCacheFlags.c)
 *     FsRtlpGrantAnyOplockFromExclusive @ 0x14057D990 (FsRtlpGrantAnyOplockFromExclusive.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall FsRtlpOplockMoveAckTimeout(__int64 *a1, _QWORD *a2)
{
  __int64 result; // rax

  result = *a1;
  if ( *a1 )
  {
    *a2 = result;
    *a1 = 0LL;
  }
  return result;
}
