/*
 * XREFs of ?SetProperty@CLineGeometry@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x18029F6D0
 * Callers:
 *     <none>
 * Callees:
 *     ?SetPropertyImpl@CResource@@IEAAJPEBUAnimatedProperty@AnimationHelper@@PEBX@Z @ 0x18000DF90 (-SetPropertyImpl@CResource@@IEAAJPEBUAnimatedProperty@AnimationHelper@@PEBX@Z.c)
 *     ?FindAnimatablePropertyInfo@AnimationHelper@@YAPEBUAnimatedProperty@1@AEBV?$span@QEBUAnimatedProperty@AnimationHelper@@$0?0@gsl@@IW4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x18000E0A0 (-FindAnimatablePropertyInfo@AnimationHelper@@YAPEBUAnimatedProperty@1@AEBV-$span@QEBUAnimatedPro.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?SetProperty@CGeometry@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x180134A10 (-SetProperty@CGeometry@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z.c)
 */

__int64 __fastcall CLineGeometry::SetProperty(__int64 a1, int a2, int a3)
{
  const struct AnimationHelper::AnimatedProperty *AnimatablePropertyInfo; // rax
  int v4; // edx
  int v5; // r8d
  void *v6; // r10
  CResource *v7; // r11
  int v8; // eax
  unsigned int v9; // ebx
  int v10; // eax
  _QWORD v12[3]; // [rsp+30h] [rbp-18h] BYREF

  v12[0] = 2LL;
  v12[1] = &CLineGeometry::k_rgAnimDef;
  AnimatablePropertyInfo = (const struct AnimationHelper::AnimatedProperty *)AnimationHelper::FindAnimatablePropertyInfo(
                                                                               v12,
                                                                               a2,
                                                                               a3);
  if ( AnimatablePropertyInfo )
  {
    v8 = CResource::SetPropertyImpl(v7, AnimatablePropertyInfo, v6);
    v9 = v8;
    if ( v8 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v8, 0x20u, 0LL);
  }
  else
  {
    v10 = CGeometry::SetProperty(v7, v4, v5, v6);
    v9 = v10;
    if ( v10 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v10, 0x24u, 0LL);
  }
  return v9;
}
