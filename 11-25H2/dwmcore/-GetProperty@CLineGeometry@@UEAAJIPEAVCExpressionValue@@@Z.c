/*
 * XREFs of ?GetProperty@CLineGeometry@@UEAAJIPEAVCExpressionValue@@@Z @ 0x18020EC30
 * Callers:
 *     <none>
 * Callees:
 *     ?GetPropertyImpl@CResource@@IEBAXPEBUAnimatedProperty@AnimationHelper@@PEAVCExpressionValue@@@Z @ 0x180034230 (-GetPropertyImpl@CResource@@IEBAXPEBUAnimatedProperty@AnimationHelper@@PEAVCExpressionValue@@@Z.c)
 *     ?GetProperty@CGeometry@@UEAAJIPEAVCExpressionValue@@@Z @ 0x1800E5FD0 (-GetProperty@CGeometry@@UEAAJIPEAVCExpressionValue@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CLineGeometry::GetProperty(CLineGeometry *this, int a2, struct CExpressionValue *a3)
{
  void **v4; // rax
  unsigned int v5; // ebx
  int Property; // eax
  const struct AnimationHelper::AnimatedProperty *v7; // rdx

  v4 = (void **)&CLineGeometry::k_rgAnimDef;
  v5 = 0;
  while ( v4 != &CAtlasedRectsGroup::`vftable' )
  {
    v7 = (const struct AnimationHelper::AnimatedProperty *)*v4;
    if ( a2 == *(_DWORD *)*v4 )
    {
      if ( v7 )
      {
        CResource::GetPropertyImpl(this, v7, a3);
        return v5;
      }
      break;
    }
    ++v4;
  }
  Property = CGeometry::GetProperty(this, a2, a3);
  v5 = Property;
  if ( Property < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, Property, 0x3Eu, 0LL);
  return v5;
}
