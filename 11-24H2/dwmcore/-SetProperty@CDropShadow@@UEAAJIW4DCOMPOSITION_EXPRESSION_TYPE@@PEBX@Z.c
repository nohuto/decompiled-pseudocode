/*
 * XREFs of ?SetProperty@CDropShadow@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x180203A80
 * Callers:
 *     <none>
 * Callees:
 *     ?SetPropertyImpl@CResource@@IEAAJPEBUAnimatedProperty@AnimationHelper@@PEBX@Z @ 0x18000DF90 (-SetPropertyImpl@CResource@@IEAAJPEBUAnimatedProperty@AnimationHelper@@PEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CDropShadow::SetProperty(CResource *a1, int a2, int a3, const void *a4)
{
  void **i; // rax
  unsigned int v6; // ebx
  const struct AnimationHelper::AnimatedProperty *v7; // rdx
  int v8; // eax

  for ( i = (void **)&CDropShadow::k_rgAnimDef; ; ++i )
  {
    if ( i == &CAnimationController::`vftable'{for `IBatchProcessingCompleteListener'} )
      goto LABEL_3;
    v7 = (const struct AnimationHelper::AnimatedProperty *)*i;
    if ( a2 == *(_DWORD *)*i && (a3 == *((_DWORD *)v7 + 1) || !a3) )
      break;
  }
  if ( !v7 )
  {
LABEL_3:
    v6 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024809, 0x78u, 0LL);
    return v6;
  }
  v8 = CResource::SetPropertyImpl(a1, v7, a4);
  v6 = v8;
  if ( v8 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v8, 0x74u, 0LL);
  return v6;
}
