/*
 * XREFs of ?SetProperty@CColorGradientStop@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x18020D000
 * Callers:
 *     <none>
 * Callees:
 *     ?SetPropertyImpl@CResource@@IEAAJPEBUAnimatedProperty@AnimationHelper@@PEBX@Z @ 0x180033D10 (-SetPropertyImpl@CResource@@IEAAJPEBUAnimatedProperty@AnimationHelper@@PEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CColorGradientStop::SetProperty(CResource *a1, int a2, int a3, const void *a4)
{
  const struct AnimationHelper::AnimatedProperty *const near *const *i; // rax
  unsigned int v6; // ebx
  const struct AnimationHelper::AnimatedProperty *const near *v7; // rdx
  int v8; // eax

  for ( i = &CColorGradientStop::k_rgAnimDef; ; ++i )
  {
    if ( i == &CSpriteVectorShape::k_rgAnimDef )
      goto LABEL_3;
    v7 = *i;
    if ( a2 == **(_DWORD **)i && (a3 == *((_DWORD *)v7 + 1) || !a3) )
      break;
  }
  if ( !v7 )
  {
LABEL_3:
    v6 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024809, 0x4Au, 0LL);
    return v6;
  }
  v8 = CResource::SetPropertyImpl(a1, (const struct AnimationHelper::AnimatedProperty *)v7, a4);
  v6 = v8;
  if ( v8 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v8, 0x46u, 0LL);
  return v6;
}
