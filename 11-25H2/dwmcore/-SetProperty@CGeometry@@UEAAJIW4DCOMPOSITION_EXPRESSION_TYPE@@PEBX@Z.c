/*
 * XREFs of ?SetProperty@CGeometry@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x180023690
 * Callers:
 *     ?SetProperty@CPathGeometry@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x1801A6F20 (-SetProperty@CPathGeometry@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z.c)
 *     ?SetProperty@CRectangleGeometry@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x1801FBBF0 (-SetProperty@CRectangleGeometry@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z.c)
 *     ?SetProperty@CLineGeometry@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x1802A94A0 (-SetProperty@CLineGeometry@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z.c)
 * Callees:
 *     ?SetAnimatedProperty@CBrush@@IEAAJPEBUAnimatedProperty@AnimationHelper@@PEBX@Z @ 0x180021B30 (-SetAnimatedProperty@CBrush@@IEAAJPEBUAnimatedProperty@AnimationHelper@@PEBX@Z.c)
 *     ?SetTrimInvalidatingAnimatedProperty@CGeometry@@AEAAJPEBUAnimatedProperty@AnimationHelper@@PEBX@Z @ 0x180022C70 (-SetTrimInvalidatingAnimatedProperty@CGeometry@@AEAAJPEBUAnimatedProperty@AnimationHelper@@PEBX@.c)
 *     ?SetRotationAngle@CComponentTransform2D@@AEAAJPEBUAnimatedProperty@AnimationHelper@@PEBX@Z @ 0x1800E5700 (-SetRotationAngle@CComponentTransform2D@@AEAAJPEBUAnimatedProperty@AnimationHelper@@PEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CGeometry::SetProperty(CGeometry *a1, int a2, int a3, const void *a4)
{
  const struct AnimationHelper::AnimatedProperty *const near *const *i; // rax
  unsigned int v6; // ebx
  int v7; // eax
  const struct AnimationHelper::AnimatedProperty *const near *v9; // rdx
  __int64 (__fastcall *v10)(CBrush *, const struct AnimationHelper::AnimatedProperty *, const void *); // rax

  for ( i = &CGeometry::k_rgAnimDef; ; ++i )
  {
    if ( i == &CColorBrush::k_rgAnimDef )
      goto LABEL_3;
    v9 = *i;
    if ( a2 == **(_DWORD **)i && (a3 == *((_DWORD *)v9 + 1) || !a3) )
      break;
  }
  if ( !v9 )
  {
LABEL_3:
    v6 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024809, 0x32u, 0LL);
    return v6;
  }
  v10 = (__int64 (__fastcall *)(CBrush *, const struct AnimationHelper::AnimatedProperty *, const void *))*((_QWORD *)v9 + 3);
  if ( v10 == CGeometry::SetTrimInvalidatingAnimatedProperty )
  {
    v7 = CGeometry::SetTrimInvalidatingAnimatedProperty(a1, (const struct AnimationHelper::AnimatedProperty *)v9, a4);
  }
  else if ( v10 == CComponentTransform2D::SetRotationAngle )
  {
    v7 = CComponentTransform2D::SetRotationAngle(a1, (const struct AnimationHelper::AnimatedProperty *)v9, a4);
  }
  else if ( v10 == CBrush::SetAnimatedProperty )
  {
    v7 = CBrush::SetAnimatedProperty(a1, (const struct AnimationHelper::AnimatedProperty *)v9, a4);
  }
  else
  {
    v7 = v10(a1, (const struct AnimationHelper::AnimatedProperty *)v9, a4);
  }
  v6 = v7;
  if ( v7 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v7, 0x2Eu, 0LL);
  return v6;
}
