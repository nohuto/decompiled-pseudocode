/*
 * XREFs of ?GetProperty@CCompositionSpotLight@@UEAAJIPEAVCExpressionValue@@@Z @ 0x18000D110
 * Callers:
 *     <none>
 * Callees:
 *     ?GetPropertyImpl@CResource@@IEBAXPEBUAnimatedProperty@AnimationHelper@@PEAVCExpressionValue@@@Z @ 0x18000E4B0 (-GetPropertyImpl@CResource@@IEBAXPEBUAnimatedProperty@AnimationHelper@@PEAVCExpressionValue@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CCompositionSpotLight::GetProperty(CCompositionSpotLight *this, int a2, struct CExpressionValue *a3)
{
  unsigned int v3; // ebx
  const struct AnimationHelper::AnimatedProperty *const near *const *i; // rax
  const struct AnimationHelper::AnimatedProperty *const near *v6; // rdx
  float v8; // xmm0_4

  v3 = 0;
  if ( a2 == 9 )
  {
    v8 = *((float *)this + 95);
LABEL_12:
    *((_DWORD *)a3 + 18) = 18;
    *(float *)a3 = v8 * 57.295776;
    return v3;
  }
  if ( a2 == 14 )
  {
    v8 = *((float *)this + 96);
    goto LABEL_12;
  }
  for ( i = &CCompositionSpotLight::k_rgAnimDef; ; ++i )
  {
    if ( i == &CEllipseGeometry::k_rgAnimDef )
      goto LABEL_5;
    v6 = *i;
    if ( a2 == **(_DWORD **)i )
      break;
  }
  if ( !v6 )
  {
LABEL_5:
    v3 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024809, 0x9Du, 0LL);
    return v3;
  }
  CResource::GetPropertyImpl(this, (const struct AnimationHelper::AnimatedProperty *)v6, a3);
  return v3;
}
