/*
 * XREFs of ?SetProperty@CVisualSurface@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x18029AED0
 * Callers:
 *     <none>
 * Callees:
 *     ?SetPropertyImpl@CResource@@IEAAJPEBUAnimatedProperty@AnimationHelper@@PEBX@Z @ 0x180033D10 (-SetPropertyImpl@CResource@@IEAAJPEBUAnimatedProperty@AnimationHelper@@PEBX@Z.c)
 *     ?FindAnimatablePropertyInfo@AnimationHelper@@YAPEBUAnimatedProperty@1@AEBV?$span@QEBUAnimatedProperty@AnimationHelper@@$0?0@gsl@@IW4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x180033E20 (-FindAnimatablePropertyInfo@AnimationHelper@@YAPEBUAnimatedProperty@1@AEBV-$span@QEBUAnimatedPro.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CVisualSurface::SetProperty(__int64 a1, int a2, int a3)
{
  const struct AnimationHelper::AnimatedProperty *AnimatablePropertyInfo; // rax
  const void *v4; // r10
  CResource *v5; // r11
  int v6; // eax
  unsigned int v7; // ebx
  _QWORD v9[3]; // [rsp+30h] [rbp-18h] BYREF

  v9[0] = 2LL;
  v9[1] = &CVisualSurface::k_rgAnimDef;
  AnimatablePropertyInfo = (const struct AnimationHelper::AnimatedProperty *)AnimationHelper::FindAnimatablePropertyInfo(
                                                                               v9,
                                                                               a2,
                                                                               a3);
  if ( AnimatablePropertyInfo )
  {
    v6 = CResource::SetPropertyImpl(v5, AnimatablePropertyInfo, v4);
    v7 = v6;
    if ( v6 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v6, 0x49u, 0LL);
  }
  else
  {
    v7 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024809, 0x4Du, 0LL);
  }
  return v7;
}
