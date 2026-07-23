/*
 * XREFs of HalpTscQueryCounter @ 0x14055F0B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned __int64 HalpTscQueryCounter()
{
  if ( HalpTscFenceRequired == 1 )
  {
    _mm_lfence();
  }
  else if ( HalpTscFenceRequired == 2 )
  {
    _mm_mfence();
  }
  return __rdtsc();
}
