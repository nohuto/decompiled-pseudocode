/*
 * XREFs of VirtualizeMultiMonDigitizerSize @ 0x1400266E0
 * Callers:
 *     ?MiPConvertPoint@@YA?AUtagPOINT@@PEAUtagWND@@AEBU1@@Z @ 0x140026108 (-MiPConvertPoint@@YA-AUtagPOINT@@PEAUtagWND@@AEBU1@@Z.c)
 *     _GetPointerDeviceRects @ 0x1400264A4 (_GetPointerDeviceRects.c)
 *     RemapHimetricPointsForMultiMonDigitizers @ 0x140267394 (RemapHimetricPointsForMultiMonDigitizers.c)
 * Callees:
 *     GetScreenRectForDpi @ 0x14002622C (GetScreenRectForDpi.c)
 *     ExpandedMonitorSpace @ 0x140098B24 (ExpandedMonitorSpace.c)
 */

void __fastcall VirtualizeMultiMonDigitizerSize(__int64 a1, unsigned __int16 a2)
{
  __m128i v4; // xmm6
  __m128i *ScreenRectForDpi; // rax
  __m128i v6; // xmm7
  INT v7; // eax
  INT v8; // ecx
  __m128i v9; // [rsp+20h] [rbp-38h] BYREF

  if ( a2 )
  {
    v4 = *(__m128i *)ExpandedMonitorSpace(&v9);
    ScreenRectForDpi = GetScreenRectForDpi(&v9, a2);
    v6 = *ScreenRectForDpi;
    v7 = EngMulDiv(
           *(_DWORD *)(a1 + 8),
           _mm_cvtsi128_si32(_mm_srli_si128(*ScreenRectForDpi, 8)) - _mm_cvtsi128_si32(*ScreenRectForDpi),
           _mm_cvtsi128_si32(_mm_srli_si128(v4, 8)) - _mm_cvtsi128_si32(v4));
    v8 = *(_DWORD *)(a1 + 12);
    *(_DWORD *)(a1 + 8) = v7;
    *(_DWORD *)(a1 + 12) = EngMulDiv(
                             v8,
                             _mm_cvtsi128_si32(_mm_srli_si128(v6, 12)) - _mm_cvtsi128_si32(_mm_srli_si128(v6, 4)),
                             _mm_cvtsi128_si32(_mm_srli_si128(v4, 12)) - _mm_cvtsi128_si32(_mm_srli_si128(v4, 4)));
  }
}
