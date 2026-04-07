/*
 * XREFs of ?Initialize@CCubicBezierInterpolator@@IEAAJNPEANI@Z @ 0x1800B2EBC
 * Callers:
 *     ?CreateTransition@CCubicBezierInterpolator@@SAJPEAUIUIAnimationTransitionFactory2@@NPEANIMMMMPEAPEAUIUIAnimationTransition2@@@Z @ 0x1800B2CF0 (-CreateTransition@CCubicBezierInterpolator@@SAJPEAUIUIAnimationTransitionFactory2@@NPEANIMMMMPEA.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180065FCC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180066260 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Cleanup@CCubicBezierInterpolator@@IEAAXXZ @ 0x1800B2C54 (-Cleanup@CCubicBezierInterpolator@@IEAAXXZ.c)
 */

__int64 __fastcall CCubicBezierInterpolator::Initialize(
        CCubicBezierInterpolator *this,
        double a2,
        double *a3,
        unsigned int a4)
{
  unsigned int v6; // esi
  unsigned __int64 v8; // rbp
  __int64 v9; // rax
  __int64 v10; // rax
  unsigned int v11; // eax
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rdx
  unsigned int v16; // edx
  __int64 v17; // r8
  float v18; // xmm8_4
  float v19; // xmm9_4
  float v20; // xmm10_4
  float v21; // xmm11_4
  int v22; // eax
  float v23; // xmm0_4
  float v24; // xmm4_4
  float v25; // xmm5_4
  float v26; // xmm3_4

  v6 = 0;
  v8 = a4;
  v9 = 8LL * a4;
  if ( !is_mul_ok(a4, 8uLL) )
    v9 = -1LL;
  v10 = (*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
          WPF::g_pProcessHeap,
          v9);
  *((_QWORD *)this + 2) = v10;
  if ( !v10 )
  {
    v11 = 219;
LABEL_11:
    v6 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024882, v11);
    CCubicBezierInterpolator::Cleanup(this);
    return v6;
  }
  v12 = 8 * v8;
  if ( !is_mul_ok(v8, 8uLL) )
    v12 = -1LL;
  v13 = (*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
          WPF::g_pProcessHeap,
          v12);
  *((_QWORD *)this + 3) = v13;
  if ( !v13 )
  {
    v11 = 222;
    goto LABEL_11;
  }
  v14 = (*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
          WPF::g_pProcessHeap,
          800LL);
  *((_QWORD *)this + 8) = v14;
  if ( !v14 )
  {
    v11 = 225;
    goto LABEL_11;
  }
  if ( a4 )
  {
    v15 = 0LL;
    do
    {
      *(double *)(v15 * 8 + *((_QWORD *)this + 3)) = a3[v15];
      ++v15;
      --v8;
    }
    while ( v8 );
  }
  v16 = 1;
  v17 = 8LL;
  **((_DWORD **)this + 8) = 0;
  *(_DWORD *)(*((_QWORD *)this + 8) + 4LL) = 0;
  *(_DWORD *)(*((_QWORD *)this + 8) + 792LL) = 1065353216;
  *(_DWORD *)(*((_QWORD *)this + 8) + 796LL) = 1065353216;
  v18 = *((double *)this + 4);
  v19 = *((double *)this + 5);
  v20 = *((double *)this + 6);
  v21 = *((double *)this + 7);
  do
  {
    v22 = v16++;
    v23 = (float)v22 / 99.0;
    v24 = (float)((float)(1.0 - v23) * 3.0) * (float)(v23 * v23);
    v25 = (float)(v23 * v23) * v23;
    v26 = (float)((float)((float)(1.0 - v23) * (float)(1.0 - v23)) * 3.0) * v23;
    *(float *)(v17 + *((_QWORD *)this + 8)) = (float)((float)(v20 * v24) + (float)(v18 * v26))
                                            + (float)(v25 * *(float *)(*((_QWORD *)this + 8) + 792LL));
    *(float *)(v17 + *((_QWORD *)this + 8) + 4) = (float)((float)(v21 * v24) + (float)(v19 * v26))
                                                + (float)(v25 * *(float *)(*((_QWORD *)this + 8) + 796LL));
    v17 += 8LL;
  }
  while ( v16 < 0x63 );
  *((double *)this + 1) = a2;
  *((_DWORD *)this + 18) = a4;
  return v6;
}
