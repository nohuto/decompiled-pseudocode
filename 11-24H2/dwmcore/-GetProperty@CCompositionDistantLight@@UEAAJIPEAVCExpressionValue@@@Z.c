/*
 * XREFs of ?GetProperty@CCompositionDistantLight@@UEAAJIPEAVCExpressionValue@@@Z @ 0x1802951B0
 * Callers:
 *     <none>
 * Callees:
 *     ?FindAnimatablePropertyInfo@AnimationHelper@@YAPEBUAnimatedProperty@1@AEBV?$span@QEBUAnimatedProperty@AnimationHelper@@$0?0@gsl@@IW4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x18000E0A0 (-FindAnimatablePropertyInfo@AnimationHelper@@YAPEBUAnimatedProperty@1@AEBV-$span@QEBUAnimatedPro.c)
 *     ?GetPropertyImpl@CResource@@IEBAXPEBUAnimatedProperty@AnimationHelper@@PEAVCExpressionValue@@@Z @ 0x18000E4B0 (-GetPropertyImpl@CResource@@IEBAXPEBUAnimatedProperty@AnimationHelper@@PEAVCExpressionValue@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CCompositionDistantLight::GetProperty(
        CCompositionDistantLight *this,
        int a2,
        struct CExpressionValue *a3)
{
  unsigned int v3; // ebx
  const struct AnimationHelper::AnimatedProperty *AnimatablePropertyInfo; // rax
  __int64 v5; // r8
  struct CExpressionValue *v6; // r10
  CResource *v7; // r11
  __int64 v9; // [rsp+28h] [rbp-20h]
  _QWORD v10[3]; // [rsp+30h] [rbp-18h] BYREF

  v10[0] = 3LL;
  v10[1] = &CCompositionDistantLight::k_rgAnimDef;
  v3 = 0;
  AnimatablePropertyInfo = (const struct AnimationHelper::AnimatedProperty *)AnimationHelper::FindAnimatablePropertyInfo(
                                                                               v10,
                                                                               a2,
                                                                               0);
  if ( AnimatablePropertyInfo )
  {
    CResource::GetPropertyImpl(v7, AnimatablePropertyInfo, v6);
  }
  else
  {
    v3 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, v5, -2147024809, 0x78u, (void *)(v5 & v9));
  }
  return v3;
}
