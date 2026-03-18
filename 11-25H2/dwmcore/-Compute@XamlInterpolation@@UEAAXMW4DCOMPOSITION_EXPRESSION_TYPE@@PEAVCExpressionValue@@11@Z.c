/*
 * XREFs of ?Compute@XamlInterpolation@@UEAAXMW4DCOMPOSITION_EXPRESSION_TYPE@@PEAVCExpressionValue@@11@Z @ 0x180201AD0
 * Callers:
 *     <none>
 * Callees:
 *     ?EvaluateCurve@XamlPowerInterpolation@@MEAANN@Z @ 0x180201BD0 (-EvaluateCurve@XamlPowerInterpolation@@MEAANN@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall XamlInterpolation::Compute(
        XamlPowerInterpolation *a1,
        float a2,
        unsigned int a3,
        struct _D3DCOLORVALUE *a4,
        struct _D3DCOLORVALUE *a5,
        struct _D3DCOLORVALUE *a6)
{
  double v9; // xmm0_8
  void (*v10)(void); // rax
  double v11; // xmm6_8

  v9 = a2;
  v10 = *(void (**)(void))(*(_QWORD *)a1 + 40LL);
  if ( *((_DWORD *)a1 + 6) )
  {
    if ( *((_DWORD *)a1 + 6) == 1 )
    {
      if ( (char *)v10 == (char *)XamlPowerInterpolation::EvaluateCurve )
        v9 = XamlPowerInterpolation::EvaluateCurve(a1, 1.0 - v9);
      else
        v10();
      v11 = 1.0 - v9;
    }
    else if ( v9 < 0.5 )
    {
      v11 = ((double (*)(void))v10)() * 0.5;
    }
    else
    {
      v11 = (1.0 - ((double (*)(void))v10)()) * 0.5 + 0.5;
    }
  }
  else
  {
    v11 = ((double (*)(void))v10)();
  }
  KeyframeInterpolation::Interpolate((__int64)a1, v11, a3, a4, a5, a6);
}
