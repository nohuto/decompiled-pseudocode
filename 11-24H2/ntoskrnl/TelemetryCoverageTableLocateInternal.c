/*
 * XREFs of TelemetryCoverageTableLocateInternal @ 0x1404AE9A8
 * Callers:
 *     EtwpCoverageCheckCP @ 0x1407AAF5C (EtwpCoverageCheckCP.c)
 *     EtwpCoverageResetCP @ 0x1407AB4F4 (EtwpCoverageResetCP.c)
 *     EtwpCoverageRecord @ 0x1408DC9D4 (EtwpCoverageRecord.c)
 * Callees:
 *     <none>
 */

unsigned int *__fastcall TelemetryCoverageTableLocateInternal(unsigned int *a1, int a2)
{
  __int64 v2; // rax
  unsigned int v3; // r8d
  unsigned __int64 v4; // r10
  unsigned int *v5; // r8
  unsigned int *result; // rax

  v2 = a1[1];
  v3 = a2 & a1[2];
  v4 = (unsigned __int64)&a1[v2 + 13];
  if ( v3 >= (unsigned int)v2 )
    v3 = v3 - (unsigned int)v2 < (unsigned int)v2 ? v3 - v2 : 0;
  v5 = &a1[v3 + 13];
  for ( result = v5; (unsigned __int64)result < v4; ++result )
  {
    if ( !*result || *result == a2 )
      return result;
  }
  for ( result = a1 + 13; result < v5; ++result )
  {
    if ( !*result || *result == a2 )
      return result;
  }
  return 0LL;
}
