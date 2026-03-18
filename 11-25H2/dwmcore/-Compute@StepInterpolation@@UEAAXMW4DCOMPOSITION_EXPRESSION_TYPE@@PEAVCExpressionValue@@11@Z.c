/*
 * XREFs of ?Compute@StepInterpolation@@UEAAXMW4DCOMPOSITION_EXPRESSION_TYPE@@PEAVCExpressionValue@@11@Z @ 0x1801C5050
 * Callers:
 *     <none>
 * Callees:
 *     ModuleFailFastForHRESULT @ 0x18024A244 (ModuleFailFastForHRESULT.c)
 *     InterpolateInLinearGamma__lambda_3407e8815db8ff72220510f30343e01a___ @ 0x1802B5660 (InterpolateInLinearGamma__lambda_3407e8815db8ff72220510f30343e01a___.c)
 *     InterpolateInLinearGamma__lambda_d9ec8cec7b93f46268f106f2fd316fdd___ @ 0x1802B574C (InterpolateInLinearGamma__lambda_d9ec8cec7b93f46268f106f2fd316fdd___.c)
 *     ?InterpolateSpherical@KeyframeInterpolation@@KAXNW4DCOMPOSITION_EXPRESSION_TYPE@@PEAVCExpressionValue@@11@Z @ 0x1802B5D5C (-InterpolateSpherical@KeyframeInterpolation@@KAXNW4DCOMPOSITION_EXPRESSION_TYPE@@PEAVCExpression.c)
 */

void __fastcall StepInterpolation::Compute(
        __int64 a1,
        float a2,
        unsigned int a3,
        struct _D3DCOLORVALUE *a4,
        struct _D3DCOLORVALUE *a5,
        struct _D3DCOLORVALUE *a6)
{
  __m128 v6; // xmm3
  __m128 v8; // xmm2
  int v9; // r8d
  int v10; // edx
  int v11; // eax
  double v12; // xmm1_8
  struct _D3DCOLORVALUE *v13; // rax
  char r_low; // al
  void *retaddr; // [rsp+48h] [rbp+0h]

  v6 = 0LL;
  v8 = 0LL;
  v6.m128_f32[0] = a2 / *(float *)(a1 + 44);
  v8.m128_f32[0] = (float)(int)v6.m128_f32[0];
  v8.m128_f32[0] = _mm_cmplt_ss(v6, v8).m128_f32[0];
  v9 = (int)v6.m128_f32[0] + _mm_cvtsi128_si32((__m128i)v8);
  if ( a2 == 1.0 )
    --v9;
  v10 = v9 + *(_DWORD *)(a1 + 28);
  if ( a2 == 0.0 && *(_DWORD *)(a1 + 36) )
  {
    --v10;
  }
  else if ( a2 == 1.0 && *(_DWORD *)(a1 + 40) )
  {
    ++v10;
  }
  v11 = *(_DWORD *)(a1 + 16);
  v12 = (double)v10 / (double)*(int *)(a1 + 24);
  if ( v11 != 4 )
  {
    switch ( v11 )
    {
      case 0:
        break;
      case 1:
        KeyframeInterpolation::InterpolateSpherical(a1, a3, a4, a5, a6);
        return;
      case 2:
        KeyframeInterpolation::InterpolateHsl(a1, &_ImageBase, a4, a5, a6);
        return;
      case 3:
        InterpolateInLinearGamma__lambda_3407e8815db8ff72220510f30343e01a_(a4, a5, a6);
        return;
      case 5:
        InterpolateInLinearGamma__lambda_d9ec8cec7b93f46268f106f2fd316fdd_(a4, a5, a6);
        return;
      case 6:
        v13 = a5;
        if ( v12 < 1.0 )
          v13 = a4;
        r_low = LOBYTE(v13->r);
        LODWORD(a6[4].b) = 17;
        LOBYTE(a6->r) = r_low;
        return;
      default:
        ModuleFailFastForHRESULT(-2147024809, retaddr);
    }
  }
  KeyframeInterpolation::ExpressionValueLerp(a3, v12, (__int64)a4, (unsigned int *)a5, (__int64)a6);
}
