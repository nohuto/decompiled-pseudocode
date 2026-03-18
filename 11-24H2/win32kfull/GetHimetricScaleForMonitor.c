/*
 * XREFs of GetHimetricScaleForMonitor @ 0x1402818AC
 * Callers:
 *     NtUserGetHimetricScaleFactorFromPixelLocation @ 0x140207810 (NtUserGetHimetricScaleFactorFromPixelLocation.c)
 * Callees:
 *     GetCurrentThreadCompositedDpi @ 0x140026674 (GetCurrentThreadCompositedDpi.c)
 *     GetMonitorRect @ 0x140026800 (GetMonitorRect.c)
 *     ExpandedMonitorSpace @ 0x140098B24 (ExpandedMonitorSpace.c)
 *     GetPhysicalScreenRect @ 0x1401DA3D0 (GetPhysicalScreenRect.c)
 */

char __fastcall GetHimetricScaleForMonitor(__int64 a1, unsigned int *a2, unsigned int *a3)
{
  unsigned int j; // eax
  __m128i v7; // xmm6
  __m128i v8; // xmm7
  unsigned __int16 CurrentThreadCompositedDpi; // ax
  __m128i v10; // xmm8
  __int64 v11; // rdx
  __m128i *PhysicalScreenRect; // rax
  unsigned int v13; // r10d
  unsigned int v14; // r8d
  unsigned int v15; // r11d
  unsigned int i; // r9d
  unsigned int v17; // ecx
  unsigned int v18; // ecx
  __int128 v20; // [rsp+20h] [rbp-48h] BYREF

  LOBYTE(j) = W32GetCurrentThreadDpiAwarenessContext(a1) & 0xF;
  if ( (_BYTE)j == 2 )
  {
    *a3 = 1;
    *a2 = 1;
  }
  else
  {
    v7 = *(__m128i *)GetMonitorRect((__int64)&v20, a1);
    v8 = *(__m128i *)(*(_QWORD *)(a1 + 40) + 28LL);
    CurrentThreadCompositedDpi = GetCurrentThreadCompositedDpi();
    v10 = *(__m128i *)ExpandedMonitorSpace((__int64)&v20, CurrentThreadCompositedDpi);
    PhysicalScreenRect = (__m128i *)GetPhysicalScreenRect(&v20, v11);
    v13 = (_mm_cvtsi128_si32(_mm_srli_si128(*PhysicalScreenRect, 8)) - _mm_cvtsi128_si32(*PhysicalScreenRect))
        * (_mm_cvtsi128_si32(_mm_srli_si128(v7, 8)) - _mm_cvtsi128_si32(v7));
    v14 = v13;
    v15 = (_mm_cvtsi128_si32(_mm_srli_si128(v10, 8)) - _mm_cvtsi128_si32(v10))
        * (_mm_cvtsi128_si32(_mm_srli_si128(v8, 8)) - _mm_cvtsi128_si32(v8));
    for ( i = v15; v14; i = v17 )
    {
      v17 = v14;
      v14 = i % v14;
    }
    v18 = v13 / i;
    for ( j = v15 / i; v18 > 0x7FFFFFFF || j > 0x7FFFFFFF; j >>= 1 )
      v18 >>= 1;
    if ( !j || !v18 )
    {
      v18 = 1;
      j = 1;
    }
    *a2 = v18;
    *a3 = j;
  }
  return j;
}
