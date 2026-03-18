/*
 * XREFs of MmSetTrimWhileAgingState @ 0x14066D5A8
 * Callers:
 *     PfSetSuperfetchInformation @ 0x1408E9C54 (PfSetSuperfetchInformation.c)
 * Callees:
 *     PsGetNextPartition @ 0x1403BE1E8 (PsGetNextPartition.c)
 *     MiSetTrimWhileAgingState @ 0x14066D36C (MiSetTrimWhileAgingState.c)
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
