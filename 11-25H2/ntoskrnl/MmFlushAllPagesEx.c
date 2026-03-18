/*
 * XREFs of MmFlushAllPagesEx @ 0x14066EAF4
 * Callers:
 *     PopTransitionToSleep @ 0x140B55320 (PopTransitionToSleep.c)
 * Callees:
 *     PsGetNextPartition @ 0x1403BE1E8 (PsGetNextPartition.c)
 *     MiFlushAllPages @ 0x1404C7844 (MiFlushAllPages.c)
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
