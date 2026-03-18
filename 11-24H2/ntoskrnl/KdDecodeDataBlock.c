/*
 * XREFs of KdDecodeDataBlock @ 0x1405AF5A8
 * Callers:
 *     IopLiveDumpCollectPages @ 0x14059A264 (IopLiveDumpCollectPages.c)
 *     KeBugCheck2 @ 0x1405B1780 (KeBugCheck2.c)
 * Callees:
 *     KdCopyDataBlock @ 0x1405AF4E4 (KdCopyDataBlock.c)
 */

unsigned __int64 KdDecodeDataBlock()
{
  unsigned __int64 result; // rax

  if ( KdpDataBlockEncoded )
  {
    result = KdCopyDataBlock(&KdDebuggerDataBlock);
    KdpDataBlockEncoded = 0;
  }
  return result;
}
