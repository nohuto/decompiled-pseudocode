/*
 * XREFs of MmFlushAllPagesEx @ 0x14067B574
 * Callers:
 *     PopTransitionToSleep @ 0x140B67570 (PopTransitionToSleep.c)
 * Callees:
 *     PsGetNextPartition @ 0x14026227C (PsGetNextPartition.c)
 *     MiFlushAllPages @ 0x1402653D4 (MiFlushAllPages.c)
 */

__int64 *__fastcall MmFlushAllPagesEx(char a1, unsigned int a2)
{
  __int64 *i; // rcx
  __int64 *result; // rax
  __int64 *v6; // rbx

  for ( i = 0LL; ; i = v6 )
  {
    result = PsGetNextPartition(i);
    v6 = result;
    if ( !result )
      break;
    MiFlushAllPages(*result, a1, a2);
  }
  return result;
}
