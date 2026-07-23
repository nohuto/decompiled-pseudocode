/*
 * XREFs of MiReleasePrefetchGapPages @ 0x14048C0E4
 * Callers:
 *     MiPfPutPagesInTransition @ 0x140347F6C (MiPfPutPagesInTransition.c)
 * Callees:
 *     MiReturnPfnReferenceCountAtDpc @ 0x140347E90 (MiReturnPfnReferenceCountAtDpc.c)
 *     MiUnlinkPageChainHead @ 0x140349AD0 (MiUnlinkPageChainHead.c)
 */

__int64 *__fastcall MiReleasePrefetchGapPages(__int64 a1)
{
  __int64 i; // rbx
  __int64 *result; // rax
  __int64 v3; // rdx
  __int64 v4; // r8
  __int64 v5; // r9

  for ( i = a1; ; a1 = i )
  {
    result = MiUnlinkPageChainHead(a1);
    if ( !result )
      break;
    MiReturnPfnReferenceCountAtDpc((__int64)result, v3, v4, v5);
  }
  return result;
}
