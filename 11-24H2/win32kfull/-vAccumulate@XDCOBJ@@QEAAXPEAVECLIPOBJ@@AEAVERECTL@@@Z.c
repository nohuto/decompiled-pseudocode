/*
 * XREFs of ?vAccumulate@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z @ 0x1400D3E50
 * Callers:
 *     NtGdiFastPolyPolyline @ 0x1400C7B70 (NtGdiFastPolyPolyline.c)
 *     GreGradientFill @ 0x1400C87D4 (GreGradientFill.c)
 *     ?GrepLineTo@@YAHAEAVXDCOBJ@@HH@Z @ 0x1400D2E9C (-GrepLineTo@@YAHAEAVXDCOBJ@@HH@Z.c)
 *     NtGdiExtFloodFill @ 0x14015AE80 (NtGdiExtFloodFill.c)
 * Callees:
 *     <none>
 */

void __fastcall XDCOBJ::vAccumulate(XDCOBJ *this, struct ECLIPOBJ *a2, __m128i *a3)
{
  __m128i v3; // xmm0
  _DWORD *v4; // r8
  __int64 v5; // rdx
  int v6; // eax
  int v7; // r10d
  int v8; // r9d
  int v9; // eax
  int v10; // r11d
  int v11; // edx
  _DWORD *v12; // rcx

  v3 = *a3;
  v4 = *(_DWORD **)this;
  v5 = *(_DWORD *)(*(_QWORD *)this + 40LL) & 1;
  v6 = *(_DWORD *)(*(_QWORD *)this + 8 * v5 + 1016);
  v7 = _mm_cvtsi128_si32(v3) - v6;
  v8 = v3.m128i_i32[2] - v6;
  v9 = *(_DWORD *)(*(_QWORD *)this + 8 * v5 + 1020);
  v10 = v3.m128i_i32[1] - v9;
  v11 = v3.m128i_i32[3] - v9;
  if ( (*(_DWORD *)(*(_QWORD *)this + 36LL) & 0x20) != 0 )
  {
    if ( v7 < v4[266] )
      v4[266] = v7;
    if ( v10 < v4[267] )
      v4[267] = v10;
    if ( v8 > v4[268] )
      v4[268] = v8;
    if ( v11 > v4[269] )
      v4[269] = v11;
  }
  v12 = *(_DWORD **)this;
  if ( (v12[9] & 0x80u) != 0 )
  {
    if ( v7 < v12[274] )
      v12[274] = v7;
    if ( v10 < v12[275] )
      v12[275] = v10;
    if ( v8 > v12[276] )
      v12[276] = v8;
    if ( v11 > v12[277] )
      v12[277] = v11;
  }
}
