/*
 * XREFs of ?GetProperty@CCompositionPointLight@@UEAAJIPEAVCExpressionValue@@@Z @ 0x18022A5F0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetPropertyImpl@CResource@@IEBAXPEBUAnimatedProperty@AnimationHelper@@PEAVCExpressionValue@@@Z @ 0x180034230 (-GetPropertyImpl@CResource@@IEBAXPEBUAnimatedProperty@AnimationHelper@@PEAVCExpressionValue@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CCompositionPointLight::GetProperty(
        CCompositionPointLight *this,
        int a2,
        struct CExpressionValue *a3)
{
  const struct AnimationHelper::AnimatedProperty *const near *const *v4; // rax
  unsigned int v5; // ebx
  const struct AnimationHelper::AnimatedProperty *v6; // rdx

  v4 = &CCompositionPointLight::k_rgAnimDef;
  v5 = 0;
  while ( 1 )
  {
    if ( v4 == (const struct AnimationHelper::AnimatedProperty *const near *const *)&IDataSourceProxy_Receive<BamoImpl::BamoDataSourceProxyImpl>::Type )
      goto LABEL_3;
    v6 = (const struct AnimationHelper::AnimatedProperty *)*v4;
    if ( a2 == **(_DWORD **)v4 )
      break;
    ++v4;
  }
  if ( !v6 )
  {
LABEL_3:
    v5 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024809, 0x8Au, 0LL);
    return v5;
  }
  CResource::GetPropertyImpl(this, v6, a3);
  return v5;
}
