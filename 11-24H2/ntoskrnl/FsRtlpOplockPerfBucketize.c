/*
 * XREFs of FsRtlpOplockPerfBucketize @ 0x140709688
 * Callers:
 *     FsRtlpOplockPerfSendData @ 0x140709948 (FsRtlpOplockPerfSendData.c)
 * Callees:
 *     KeQueryPerformanceCounter @ 0x14036DEF0 (KeQueryPerformanceCounter.c)
 */

signed __int64 __fastcall FsRtlpOplockPerfBucketize(_QWORD *a1)
{
  LARGE_INTEGER PerformanceCounter; // rax
  unsigned __int16 v3; // dx
  LONGLONG v4; // r8
  unsigned __int16 i; // cx
  __m128i *v6; // rdx

  PerformanceCounter = KeQueryPerformanceCounter(0LL);
  v3 = word_140E65D58;
  v4 = PerformanceCounter.QuadPart - *a1;
  for ( i = 0; i < (unsigned __int16)word_140E65D58; ++i )
  {
    if ( v4 < g_OplockPerfLatencyLevels[i] )
    {
      v3 = i;
      break;
    }
  }
  v6 = (__m128i *)(**(_QWORD **)g_OplockPerfData + 16LL * v3);
  *v6 = _mm_add_epi64(_mm_unpacklo_epi64((__m128i)1uLL, (__m128i)(unsigned __int64)v4), _mm_loadu_si128(v6));
  if ( v4 > *(_QWORD *)(*(_QWORD *)g_OplockPerfData + 16LL) )
    *(_QWORD *)(*(_QWORD *)g_OplockPerfData + 16LL) = v4;
  return _InterlockedIncrement64((volatile signed __int64 *)(g_OplockPerfData + 16));
}
