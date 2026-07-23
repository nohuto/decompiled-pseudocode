/*
 * XREFs of MmSetTrimWhileAgingState @ 0x14067A094
 * Callers:
 *     PfSetSuperfetchInformation @ 0x1408F573C (PfSetSuperfetchInformation.c)
 * Callees:
 *     PsGetNextPartition @ 0x14026227C (PsGetNextPartition.c)
 *     MiSetTrimWhileAgingState @ 0x140679E58 (MiSetTrimWhileAgingState.c)
 */

__int64 *__fastcall MmSetTrimWhileAgingState(int a1)
{
  __int64 *i; // rcx
  __int64 *result; // rax
  __int64 *v4; // rdi

  for ( i = 0LL; ; i = v4 )
  {
    result = PsGetNextPartition(i);
    v4 = result;
    if ( !result )
      break;
    MiSetTrimWhileAgingState(*result, a1);
  }
  return result;
}
