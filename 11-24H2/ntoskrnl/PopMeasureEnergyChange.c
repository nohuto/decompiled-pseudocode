/*
 * XREFs of PopMeasureEnergyChange @ 0x140A81364
 * Callers:
 *     PopCalculateCsSummary @ 0x1402B5524 (PopCalculateCsSummary.c)
 *     PopTransitionTelemetryOsState @ 0x140A80E74 (PopTransitionTelemetryOsState.c)
 * Callees:
 *     PopReleaseRwLock @ 0x1402AE8FC (PopReleaseRwLock.c)
 *     PopAcquireRwLockShared @ 0x1402AE968 (PopAcquireRwLockShared.c)
 */

unsigned __int64 __fastcall PopMeasureEnergyChange(__int64 a1, __int64 a2)
{
  __m128i v4; // xmm6
  unsigned __int64 result; // rax

  PopAcquireRwLockShared((volatile signed __int64 *)&xmmword_140F0BE90);
  v4 = (__m128i)xmmword_140F0BF08;
  PopReleaseRwLock((signed __int64 *)&xmmword_140F0BE90);
  result = 0LL;
  if ( *(_QWORD *)(a2 + 8) )
  {
    *(_DWORD *)a1 = *(_DWORD *)a2 | _mm_cvtsi128_si32(v4);
    result = _mm_srli_si128(v4, 8).m128i_u64[0] - *(_QWORD *)(a2 + 8);
  }
  else
  {
    *(_DWORD *)a1 = 1;
  }
  *(_QWORD *)(a1 + 8) = result;
  *(__m128i *)a2 = v4;
  return result;
}
