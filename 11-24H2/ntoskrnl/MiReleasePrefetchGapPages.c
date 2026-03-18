/*
 * XREFs of MiReleasePrefetchGapPages @ 0x1404915EC
 * Callers:
 *     MiPfPutPagesInTransition @ 0x1402E692C (MiPfPutPagesInTransition.c)
 * Callees:
 *     MiReturnPfnReferenceCountAtDpc @ 0x1402E6850 (MiReturnPfnReferenceCountAtDpc.c)
 *     MiUnlinkPageChainHead @ 0x1402E8490 (MiUnlinkPageChainHead.c)
 */

__int64 *__fastcall MiReleasePrefetchGapPages(__int64 a1)
{
  __int64 i; // rbx
  __int64 *result; // rax
  __int64 v3; // rdx
  __int64 v4; // r8

  for ( i = a1; ; a1 = i )
  {
    result = MiUnlinkPageChainHead(a1);
    if ( !result )
      break;
    MiReturnPfnReferenceCountAtDpc((ULONG_PTR)result, v3, v4);
  }
  return result;
}
