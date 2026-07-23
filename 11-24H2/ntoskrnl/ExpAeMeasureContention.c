/*
 * XREFs of ExpAeMeasureContention @ 0x14065988C
 * Callers:
 *     ExpAeThresholdInitWorker @ 0x1406598D0 (ExpAeThresholdInitWorker.c)
 *     ExpAeThresholdInitialization @ 0x140C45FE4 (ExpAeThresholdInitialization.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall ExpAeMeasureContention(signed __int64 *a1)
{
  unsigned __int64 v1; // r8
  signed __int64 v2; // rax
  signed __int64 i; // rdx
  signed __int64 v4; // rtt

  v1 = __rdtsc();
  _m_prefetchw(a1);
  v2 = *a1;
  for ( i = *a1 + 1; ; i = v2 + 1 )
  {
    v4 = v2;
    v2 = _InterlockedCompareExchange64(a1, i, v2);
    if ( v4 == v2 )
      break;
  }
  return __rdtsc() - v1;
}
