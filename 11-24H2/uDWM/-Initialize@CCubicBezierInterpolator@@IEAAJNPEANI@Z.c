/*
 * XREFs of ?Initialize@CCubicBezierInterpolator@@IEAAJNPEANI@Z @ 0x1800B7C4C
 * Callers:
 *     ?CreateTransition@CCubicBezierInterpolator@@SAJPEAUIUIAnimationTransitionFactory2@@NPEANIMMMMPEAPEAUIUIAnimationTransition2@@@Z @ 0x1800B7A80 (-CreateTransition@CCubicBezierInterpolator@@SAJPEAUIUIAnimationTransitionFactory2@@NPEANIMMMMPEA.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800270B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180095474 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?Cleanup@CCubicBezierInterpolator@@IEAAXXZ @ 0x1800B7A30 (-Cleanup@CCubicBezierInterpolator@@IEAAXXZ.c)
 */

__int64 __fastcall CCubicBezierInterpolator::Initialize(
        CCubicBezierInterpolator *this,
        double a2,
        double *a3,
        unsigned int a4)
{
  unsigned __int64 v7; // rbp
  unsigned __int128 v8; // rax
  unsigned int v9; // esi
  LPVOID v10; // rax
  unsigned int v11; // eax
  unsigned __int128 v12; // rax
  LPVOID v13; // rax
  const struct std::nothrow_t *v14; // rdx
  LPVOID v15; // rax
  const struct std::nothrow_t *v16; // rdx
  __int64 v17; // rdx
  unsigned int v18; // edx
  __int64 v19; // r8
  float v20; // xmm8_4
  float v21; // xmm9_4
  float v22; // xmm10_4
  float v23; // xmm11_4
  int v24; // eax
  float v25; // xmm0_4
  float v26; // xmm4_4
  float v27; // xmm5_4
  float v28; // xmm3_4

  v7 = a4;
  v8 = a4 * (unsigned __int128)8uLL;
  v9 = 0;
  if ( !is_mul_ok(a4, 8uLL) )
    *(_QWORD *)&v8 = -1LL;
  v10 = operator new[](v8, *((const struct std::nothrow_t **)&v8 + 1));
  *((_QWORD *)this + 2) = v10;
  if ( !v10 )
  {
    v11 = 219;
LABEL_11:
    v9 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024882, v11, 0LL);
    CCubicBezierInterpolator::Cleanup(this, v16);
    return v9;
  }
  v12 = v7 * (unsigned __int128)8uLL;
  if ( !is_mul_ok(v7, 8uLL) )
    *(_QWORD *)&v12 = -1LL;
  v13 = operator new[](v12, *((const struct std::nothrow_t **)&v12 + 1));
  *((_QWORD *)this + 3) = v13;
  if ( !v13 )
  {
    v11 = 222;
    goto LABEL_11;
  }
  v15 = operator new[](0x320uLL, v14);
  *((_QWORD *)this + 8) = v15;
  if ( !v15 )
  {
    v11 = 225;
    goto LABEL_11;
  }
  if ( a4 )
  {
    v17 = 0LL;
    do
    {
      *(double *)(v17 * 8 + *((_QWORD *)this + 3)) = a3[v17];
      ++v17;
      --v7;
    }
    while ( v7 );
  }
  v18 = 1;
  v19 = 8LL;
  **((_DWORD **)this + 8) = 0;
  *(_DWORD *)(*((_QWORD *)this + 8) + 4LL) = 0;
  *(_DWORD *)(*((_QWORD *)this + 8) + 792LL) = 1065353216;
  *(_DWORD *)(*((_QWORD *)this + 8) + 796LL) = 1065353216;
  v20 = *((double *)this + 4);
  v21 = *((double *)this + 5);
  v22 = *((double *)this + 6);
  v23 = *((double *)this + 7);
  do
  {
    v24 = v18++;
    v25 = (float)v24 / 99.0;
    v26 = (float)((float)(1.0 - v25) * 3.0) * (float)(v25 * v25);
    v27 = (float)(v25 * v25) * v25;
    v28 = (float)((float)((float)(1.0 - v25) * (float)(1.0 - v25)) * 3.0) * v25;
    *(float *)(v19 + *((_QWORD *)this + 8)) = (float)((float)(v22 * v26) + (float)(v20 * v28))
                                            + (float)(v27 * *(float *)(*((_QWORD *)this + 8) + 792LL));
    *(float *)(v19 + *((_QWORD *)this + 8) + 4) = (float)((float)(v23 * v26) + (float)(v21 * v28))
                                                + (float)(v27 * *(float *)(*((_QWORD *)this + 8) + 796LL));
    v19 += 8LL;
  }
  while ( v18 < 0x63 );
  *((double *)this + 1) = a2;
  *((_DWORD *)this + 18) = a4;
  return v9;
}
