/*
 * XREFs of ?FlattenStops@CGradientBrush@@AEAAXXZ @ 0x180132010
 * Callers:
 *     ?SetStops@CGradientBrush@@QEAAXAEBV?$span@PEAVCColorGradientStop@@$0?0@gsl@@_N@Z @ 0x180131878 (-SetStops@CGradientBrush@@QEAAXAEBV-$span@PEAVCColorGradientStop@@$0-0@gsl@@_N@Z.c)
 * Callees:
 *     ?reserve@?$vector@UD2D1_GRADIENT_STOP@@V?$allocator@UD2D1_GRADIENT_STOP@@@std@@@std@@QEAAX_K@Z @ 0x1801320E4 (-reserve@-$vector@UD2D1_GRADIENT_STOP@@V-$allocator@UD2D1_GRADIENT_STOP@@@std@@@std@@QEAAX_K@Z.c)
 *     __security_check_cookie @ 0x18025BF00 (__security_check_cookie.c)
 *     ??$_Emplace_reallocate@AEBUD2D1_GRADIENT_STOP@@@?$vector@UD2D1_GRADIENT_STOP@@V?$allocator@UD2D1_GRADIENT_STOP@@@std@@@std@@AEAAPEAUD2D1_GRADIENT_STOP@@QEAU2@AEBU2@@Z @ 0x1802AC3BC (--$_Emplace_reallocate@AEBUD2D1_GRADIENT_STOP@@@-$vector@UD2D1_GRADIENT_STOP@@V-$allocator@UD2D1.c)
 */

void __fastcall CGradientBrush::FlattenStops(CGradientBrush *this)
{
  char *v1; // rbx
  __int64 v3; // rax
  __int64 v4; // rsi
  __int64 i; // rdi
  __int64 v6; // rdx
  __m128i v7; // xmm1
  int v8; // xmm0_4
  _BYTE v9[20]; // [rsp+20h] [rbp-28h] BYREF

  v1 = (char *)this + 192;
  v3 = *((_QWORD *)this + 24);
  if ( v3 != *((_QWORD *)this + 25) )
    *((_QWORD *)this + 25) = v3;
  std::vector<D2D1_GRADIENT_STOP>::reserve(
    (char *)this + 192,
    (__int64)(*((_QWORD *)this + 22) - *((_QWORD *)this + 21)) >> 3);
  v4 = *((_QWORD *)this + 22);
  for ( i = *((_QWORD *)this + 21); i != v4; i += 8LL )
  {
    v6 = *((_QWORD *)v1 + 1);
    v7 = _mm_loadu_si128((const __m128i *)(*(_QWORD *)i + 76LL));
    v8 = *(_DWORD *)(*(_QWORD *)i + 72LL);
    *(__m128i *)&v9[4] = v7;
    *(_DWORD *)v9 = v8;
    if ( v6 == *((_QWORD *)v1 + 2) )
    {
      std::vector<D2D1_GRADIENT_STOP>::_Emplace_reallocate<D2D1_GRADIENT_STOP const &>(v1, v6, v9);
    }
    else
    {
      *(_OWORD *)v6 = *(_OWORD *)v9;
      *(_DWORD *)(v6 + 16) = _mm_cvtsi128_si32(_mm_srli_si128(v7, 12));
      *((_QWORD *)v1 + 1) += 20LL;
    }
  }
}
