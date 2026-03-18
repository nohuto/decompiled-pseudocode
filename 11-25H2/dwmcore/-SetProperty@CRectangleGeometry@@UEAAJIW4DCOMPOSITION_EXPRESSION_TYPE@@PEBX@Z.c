/*
 * XREFs of ?SetProperty@CRectangleGeometry@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x1801FBBF0
 * Callers:
 *     <none>
 * Callees:
 *     ?SetProperty@CGeometry@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x180023690 (-SetProperty@CGeometry@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z.c)
 *     ?SetPropertyImpl@CResource@@IEAAJPEBUAnimatedProperty@AnimationHelper@@PEBX@Z @ 0x180033D10 (-SetPropertyImpl@CResource@@IEAAJPEBUAnimatedProperty@AnimationHelper@@PEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CRectangleGeometry::SetProperty(CResource *a1, int a2, int a3, const void *a4)
{
  void **i; // rax
  const struct AnimationHelper::AnimatedProperty *v6; // rdx
  int v7; // eax
  unsigned int v8; // ebx
  int v10; // eax

  for ( i = (void **)&CRectangleGeometry::k_rgAnimDef; i != &CSurfaceDrawListBrush::`vftable'; ++i )
  {
    v6 = (const struct AnimationHelper::AnimatedProperty *)*i;
    if ( a2 == *(_DWORD *)*i && (a3 == *((_DWORD *)v6 + 1) || !a3) )
    {
      if ( v6 )
      {
        v7 = CResource::SetPropertyImpl(a1, v6, a4);
        v8 = v7;
        if ( v7 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v7, 0xD2u, 0LL);
        return v8;
      }
      break;
    }
  }
  v10 = CGeometry::SetProperty(a1, a2, a3, a4);
  v8 = v10;
  if ( v10 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v10, 0xD6u, 0LL);
  return v8;
}
