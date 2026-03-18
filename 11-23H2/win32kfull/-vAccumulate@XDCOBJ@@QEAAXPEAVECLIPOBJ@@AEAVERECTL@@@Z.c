/*
 * XREFs of ?vAccumulate@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z @ 0x1C008C210
 * Callers:
 *     GreGradientFill @ 0x1C0001610 (GreGradientFill.c)
 *     NtGdiFastPolyPolyline @ 0x1C000C9F0 (NtGdiFastPolyPolyline.c)
 *     ?GreExtTextOutWLocked@@YAHAEAVXDCOBJ@@HHIPEAUtagRECT@@PEAGHPEAHKPEAXKAEBUTag@RFONTOBJ@@@Z @ 0x1C010C7E0 (-GreExtTextOutWLocked@@YAHAEAVXDCOBJ@@HHIPEAUtagRECT@@PEAGHPEAHKPEAXKAEBUTag@RFONTOBJ@@@Z.c)
 *     ?GreLineTo@@YAHPEAUHDC__@@HH@Z @ 0x1C02AA0E8 (-GreLineTo@@YAHPEAUHDC__@@HH@Z.c)
 *     NtGdiExtFloodFill @ 0x1C02D3A10 (NtGdiExtFloodFill.c)
 * Callees:
 *     ??_5ERECTL@@QEAAXAEBU_RECTL@@@Z @ 0x1C00C3C10 (--_5ERECTL@@QEAAXAEBU_RECTL@@@Z.c)
 */

void __fastcall XDCOBJ::vAccumulate(XDCOBJ *this, struct ECLIPOBJ *a2, __m128i *a3)
{
  __m128i v3; // xmm0
  XDCOBJ *v4; // r9
  __int64 v5; // rcx
  __int64 v6; // r8
  int v7; // edx
  int v8; // eax
  __m128i v9; // [rsp+20h] [rbp-18h] BYREF

  v3 = *a3;
  v4 = this;
  v5 = *(_QWORD *)this;
  v9 = v3;
  v6 = *(_DWORD *)(v5 + 40) & 1;
  v7 = *(_DWORD *)(v5 + 8 * v6 + 1016);
  v9.m128i_i32[2] = v3.m128i_i32[2] - v7;
  v9.m128i_i32[0] = _mm_cvtsi128_si32(v3) - v7;
  v8 = *(_DWORD *)(v5 + 8 * v6 + 1020);
  v9.m128i_i32[1] = v3.m128i_i32[1] - v8;
  v9.m128i_i32[3] = v3.m128i_i32[3] - v8;
  if ( (*(_DWORD *)(v5 + 36) & 0x20) != 0 )
    ERECTL::operator|=(v5 + 1064, &v9);
  if ( (*(_DWORD *)(*(_QWORD *)v4 + 36LL) & 0x80u) != 0 )
    ERECTL::operator|=(*(_QWORD *)v4 + 1096LL, &v9);
}
