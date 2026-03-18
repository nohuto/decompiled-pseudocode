/*
 * XREFs of ?Interpolate@KeyframeInterpolation@@QEAAXNW4DCOMPOSITION_EXPRESSION_TYPE@@PEAVCExpressionValue@@11@Z @ 0x1800D2190
 * Callers:
 *     ?Calculate@KeyframeSequence@@QEAAXPEAVCExpressionValueStack@@@Z @ 0x1800D18A0 (-Calculate@KeyframeSequence@@QEAAXPEAVCExpressionValueStack@@@Z.c)
 *     ?Compute@XamlInterpolation@@UEAAXMW4DCOMPOSITION_EXPRESSION_TYPE@@PEAVCExpressionValue@@11@Z @ 0x180201AD0 (-Compute@XamlInterpolation@@UEAAXMW4DCOMPOSITION_EXPRESSION_TYPE@@PEAVCExpressionValue@@11@Z.c)
 * Callees:
 *     ModuleFailFastForHRESULT @ 0x18024A244 (ModuleFailFastForHRESULT.c)
 *     InterpolateInLinearGamma__lambda_3407e8815db8ff72220510f30343e01a___ @ 0x1802B5660 (InterpolateInLinearGamma__lambda_3407e8815db8ff72220510f30343e01a___.c)
 *     InterpolateInLinearGamma__lambda_d9ec8cec7b93f46268f106f2fd316fdd___ @ 0x1802B574C (InterpolateInLinearGamma__lambda_d9ec8cec7b93f46268f106f2fd316fdd___.c)
 *     ?InterpolateSpherical@KeyframeInterpolation@@KAXNW4DCOMPOSITION_EXPRESSION_TYPE@@PEAVCExpressionValue@@11@Z @ 0x1802B5D5C (-InterpolateSpherical@KeyframeInterpolation@@KAXNW4DCOMPOSITION_EXPRESSION_TYPE@@PEAVCExpression.c)
 */

void __fastcall KeyframeInterpolation::Interpolate(
        __int64 a1,
        double a2,
        unsigned int a3,
        struct _D3DCOLORVALUE *a4,
        struct _D3DCOLORVALUE *a5,
        struct _D3DCOLORVALUE *a6)
{
  int v6; // eax
  float v7; // xmm1_4
  struct _D3DCOLORVALUE *v8; // rax
  char r_low; // al
  void *retaddr; // [rsp+48h] [rbp+0h]

  v6 = *(_DWORD *)(a1 + 16);
  if ( v6 != 4 )
  {
    switch ( v6 )
    {
      case 0:
        break;
      case 1:
        KeyframeInterpolation::InterpolateSpherical(a1, a3, a4, a5, a6);
        return;
      case 2:
        KeyframeInterpolation::InterpolateHsl(a1, a3, a4, a5, a6);
        return;
      case 3:
        InterpolateInLinearGamma__lambda_3407e8815db8ff72220510f30343e01a_(a4, a5, a6);
        return;
      case 5:
        InterpolateInLinearGamma__lambda_d9ec8cec7b93f46268f106f2fd316fdd_(a4, a5, a6);
        return;
      case 6:
        v8 = a5;
        if ( a2 < 1.0 )
          v8 = a4;
        r_low = LOBYTE(v8->r);
        LODWORD(a6[4].b) = 17;
        LOBYTE(a6->r) = r_low;
        return;
      default:
        ModuleFailFastForHRESULT(-2147024809, retaddr);
    }
  }
  v7 = a2;
  KeyframeInterpolation::ExpressionValueLerp(a3, v7, (__int64)a4, (unsigned int *)a5, (__int64)a6);
}
