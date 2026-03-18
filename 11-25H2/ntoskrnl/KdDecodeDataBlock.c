/*
 * XREFs of KdDecodeDataBlock @ 0x1405ABC18
 * Callers:
 *     IopLiveDumpCollectPages @ 0x140596B54 (IopLiveDumpCollectPages.c)
 *     KeBugCheck2 @ 0x1405ADDF0 (KeBugCheck2.c)
 * Callees:
 *     KdCopyDataBlock @ 0x1405ABB54 (KdCopyDataBlock.c)
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
