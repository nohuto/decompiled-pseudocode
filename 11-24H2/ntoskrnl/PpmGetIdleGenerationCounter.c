/*
 * XREFs of PpmGetIdleGenerationCounter @ 0x14036F500
 * Callers:
 *     PpmContinueTimeAccumulation @ 0x1402AD8FC (PpmContinueTimeAccumulation.c)
 *     PpmSnapPerformanceAccumulation @ 0x14036E610 (PpmSnapPerformanceAccumulation.c)
 * Callees:
 *     <none>
 */

signed __int64 __fastcall PpmGetIdleGenerationCounter(__int64 a1)
{
  signed __int64 result; // rax
  signed __int64 v2; // rtt
  unsigned __int64 v3; // rcx

  _m_prefetchw((const void *)(a1 + 34912));
  result = *(_QWORD *)(a1 + 34912);
  do
  {
    v2 = result;
    result = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 34912), result, result);
  }
  while ( v2 != result );
  if ( (result & 1) == 0 )
    return 0LL;
  if ( result && *(_DWORD *)(a1 + 35104) == 3 )
  {
    v3 = *(_QWORD *)(*(_QWORD *)(a1 + 35792) + 8LL * DWORD2(xmmword_140E3EE10));
    result = v3 >> 1;
    if ( (v3 & 1) == 0 )
      return 0LL;
  }
  return result;
}
