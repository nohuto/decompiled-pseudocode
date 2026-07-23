/*
 * XREFs of KdDecodeDataBlock @ 0x1405AC518
 * Callers:
 *     IopLiveDumpCollectPages @ 0x1405971E8 (IopLiveDumpCollectPages.c)
 *     KeBugCheck2 @ 0x1405AE6F0 (KeBugCheck2.c)
 * Callees:
 *     KdCopyDataBlock @ 0x1405AC454 (KdCopyDataBlock.c)
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
