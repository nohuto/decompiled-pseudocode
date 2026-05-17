/*
 * XREFs of RtlBeginReadTickLock @ 0x1800B66C0
 * Callers:
 *     RtlGetMultiTimePrecise @ 0x1800B64E0 (RtlGetMultiTimePrecise.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlBeginReadTickLock(__int64 *a1)
{
  __int64 result; // rax

  for ( result = *a1; (*a1 & 1) != 0; result = *a1 )
    _mm_pause();
  return result;
}
