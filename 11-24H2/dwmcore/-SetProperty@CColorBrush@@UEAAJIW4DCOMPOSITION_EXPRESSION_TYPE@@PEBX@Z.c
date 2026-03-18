/*
 * XREFs of ?SetProperty@CColorBrush@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x180134660
 * Callers:
 *     <none>
 * Callees:
 *     ?SetRotationAngle@CComponentTransform2D@@AEAAJPEBUAnimatedProperty@AnimationHelper@@PEBX@Z @ 0x180080250 (-SetRotationAngle@CComponentTransform2D@@AEAAJPEBUAnimatedProperty@AnimationHelper@@PEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?SetTrimInvalidatingAnimatedProperty@CGeometry@@AEAAJPEBUAnimatedProperty@AnimationHelper@@PEBX@Z @ 0x180134C70 (-SetTrimInvalidatingAnimatedProperty@CGeometry@@AEAAJPEBUAnimatedProperty@AnimationHelper@@PEBX@.c)
 *     ?SetAnimatedProperty@CBrush@@IEAAJPEBUAnimatedProperty@AnimationHelper@@PEBX@Z @ 0x180134F50 (-SetAnimatedProperty@CBrush@@IEAAJPEBUAnimatedProperty@AnimationHelper@@PEBX@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CColorBrush::SetProperty(CGeometry *a1, int a2, int a3, void *a4)
{
  const struct AnimationHelper::AnimatedProperty *const near *const *i; // rax
  unsigned int v6; // ebx
  int v7; // eax
  const struct AnimationHelper::AnimatedProperty *const near *v9; // rdx
  __int64 (__fastcall *v10)(CComponentTransform2D *, const struct AnimationHelper::AnimatedProperty *, float *); // rax

  for ( i = &CColorBrush::k_rgAnimDef; ; ++i )
  {
    if ( i == &CComponentTransform2D::k_rgAnimDef )
      goto LABEL_3;
    v9 = *i;
    if ( a2 == **(_DWORD **)i && (a3 == *((_DWORD *)v9 + 1) || !a3) )
      break;
  }
  if ( !v9 )
  {
LABEL_3:
    v6 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024809, 0x3Bu, 0LL);
    return v6;
  }
  v10 = (__int64 (__fastcall *)(CComponentTransform2D *, const struct AnimationHelper::AnimatedProperty *, float *))*((_QWORD *)v9 + 3);
  if ( (char *)v10 == (char *)CGeometry::SetTrimInvalidatingAnimatedProperty )
  {
    v7 = CGeometry::SetTrimInvalidatingAnimatedProperty(a1, (const struct AnimationHelper::AnimatedProperty *)v9, a4);
  }
  else if ( v10 == CComponentTransform2D::SetRotationAngle )
  {
    v7 = CComponentTransform2D::SetRotationAngle(a1, (const struct AnimationHelper::AnimatedProperty *)v9, (float *)a4);
  }
  else if ( (char *)v10 == (char *)CBrush::SetAnimatedProperty )
  {
    v7 = CBrush::SetAnimatedProperty(a1, (const struct AnimationHelper::AnimatedProperty *)v9, a4);
  }
  else
  {
    v7 = v10(a1, (const struct AnimationHelper::AnimatedProperty *)v9, (float *)a4);
  }
  v6 = v7;
  if ( v7 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v7, 0x37u, 0LL);
  return v6;
}
