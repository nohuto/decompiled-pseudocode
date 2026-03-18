/*
 * XREFs of ?SetProperty@CCompositionSpotLight@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x1801F8C00
 * Callers:
 *     <none>
 * Callees:
 *     ?SetPropertyImpl@CResource@@IEAAJPEBUAnimatedProperty@AnimationHelper@@PEBX@Z @ 0x18000DF90 (-SetPropertyImpl@CResource@@IEAAJPEBUAnimatedProperty@AnimationHelper@@PEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CCompositionSpotLight::SetProperty(CResource *a1, int a2, int a3, float *a4)
{
  const struct AnimationHelper::AnimatedProperty *v5; // rdx
  const struct AnimationHelper::AnimatedProperty *const near *const *i; // rax
  int v7; // eax
  unsigned int v8; // ebx
  float v10; // xmm0_4
  float v11; // [rsp+50h] [rbp+18h] BYREF

  v11 = 0.0;
  if ( a3 != 18 )
    goto LABEL_2;
  if ( a2 == 9 )
  {
    v5 = (const struct AnimationHelper::AnimatedProperty *)&CCompositionSpotLight::sc_InnerConeAngle;
    goto LABEL_11;
  }
  if ( a2 == 14 )
  {
    v5 = (const struct AnimationHelper::AnimatedProperty *)&CCompositionSpotLight::sc_OuterConeAngle;
LABEL_11:
    v10 = *a4;
    a4 = &v11;
    v11 = v10 * 0.017453292;
    goto LABEL_5;
  }
LABEL_2:
  v5 = 0LL;
  for ( i = &CCompositionSpotLight::k_rgAnimDef; i != &CEllipseGeometry::k_rgAnimDef; ++i )
  {
    if ( a2 == **(_DWORD **)i && (a3 == *((_DWORD *)*i + 1) || !a3) )
    {
      v5 = (const struct AnimationHelper::AnimatedProperty *)*i;
      break;
    }
  }
  if ( !v5 )
  {
    v8 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024809, 0xDAu, 0LL);
    return v8;
  }
LABEL_5:
  v7 = CResource::SetPropertyImpl(a1, v5, a4);
  v8 = v7;
  if ( v7 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v7, 0xD6u, 0LL);
  return v8;
}
