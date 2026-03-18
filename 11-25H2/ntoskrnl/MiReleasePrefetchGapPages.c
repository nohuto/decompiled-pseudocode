/*
 * XREFs of MiReleasePrefetchGapPages @ 0x1404921E0
 * Callers:
 *     MiPfPutPagesInTransition @ 0x14033A50C (MiPfPutPagesInTransition.c)
 * Callees:
 *     MiUnlinkPageChainHead @ 0x14033BAF0 (MiUnlinkPageChainHead.c)
 *     MiReturnPfnReferenceCountAtDpc @ 0x14033BC20 (MiReturnPfnReferenceCountAtDpc.c)
 */

__int64 *__fastcall MiReleasePrefetchGapPages(__int64 a1)
{
  __int64 i; // rbx
  __int64 *result; // rax
  __int64 v3; // rdx
  __int64 v4; // r8
  unsigned __int64 v5; // r9

  for ( i = a1; ; a1 = i )
  {
    result = MiUnlinkPageChainHead(a1);
    if ( !result )
      break;
    MiReturnPfnReferenceCountAtDpc((ULONG_PTR)result, v3, v4, v5);
  }
  return result;
}
