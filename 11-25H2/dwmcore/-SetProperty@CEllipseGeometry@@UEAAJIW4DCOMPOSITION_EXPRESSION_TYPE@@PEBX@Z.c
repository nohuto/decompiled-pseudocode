/*
 * XREFs of ?SetProperty@CEllipseGeometry@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x180023510
 * Callers:
 *     <none>
 * Callees:
 *     ?SetAnimatedProperty@CBrush@@IEAAJPEBUAnimatedProperty@AnimationHelper@@PEBX@Z @ 0x180021B30 (-SetAnimatedProperty@CBrush@@IEAAJPEBUAnimatedProperty@AnimationHelper@@PEBX@Z.c)
 *     ?SetTrimInvalidatingAnimatedProperty@CGeometry@@AEAAJPEBUAnimatedProperty@AnimationHelper@@PEBX@Z @ 0x180022C70 (-SetTrimInvalidatingAnimatedProperty@CGeometry@@AEAAJPEBUAnimatedProperty@AnimationHelper@@PEBX@.c)
 *     ?SetPropertyImpl@CResource@@IEAAJPEBUAnimatedProperty@AnimationHelper@@PEBX@Z @ 0x180033D10 (-SetPropertyImpl@CResource@@IEAAJPEBUAnimatedProperty@AnimationHelper@@PEBX@Z.c)
 *     ?SetRotationAngle@CComponentTransform2D@@AEAAJPEBUAnimatedProperty@AnimationHelper@@PEBX@Z @ 0x1800E5700 (-SetRotationAngle@CComponentTransform2D@@AEAAJPEBUAnimatedProperty@AnimationHelper@@PEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CEllipseGeometry::SetProperty(CGeometry *a1, int a2, int a3, const void *a4)
{
  void **i; // rax
  const struct AnimationHelper::AnimatedProperty *const near *const *j; // rax
  unsigned int v7; // ebx
  unsigned int v8; // eax
  int v9; // edi
  int v10; // r9d
  int v11; // eax
  const struct AnimationHelper::AnimatedProperty *v13; // rdx
  int v14; // eax
  const struct AnimationHelper::AnimatedProperty *const near *v15; // rdx
  __int64 (__fastcall *v16)(CBrush *, const struct AnimationHelper::AnimatedProperty *, const void *); // rax

  for ( i = (void **)&CEllipseGeometry::k_rgAnimDef; ; ++i )
  {
    if ( i == &CResourceWeakRef::`vftable' )
      goto LABEL_3;
    v13 = (const struct AnimationHelper::AnimatedProperty *)*i;
    if ( a2 == *(_DWORD *)*i && (a3 == *((_DWORD *)v13 + 1) || !a3) )
      break;
  }
  if ( !v13 )
  {
LABEL_3:
    for ( j = &CGeometry::k_rgAnimDef; ; ++j )
    {
      if ( j == &CColorBrush::k_rgAnimDef )
        goto LABEL_5;
      v15 = *j;
      if ( a2 == **(_DWORD **)j && (a3 == *((_DWORD *)v15 + 1) || !a3) )
        break;
    }
    if ( v15 )
    {
      v16 = (__int64 (__fastcall *)(CBrush *, const struct AnimationHelper::AnimatedProperty *, const void *))*((_QWORD *)v15 + 3);
      if ( v16 == CGeometry::SetTrimInvalidatingAnimatedProperty )
      {
        v11 = CGeometry::SetTrimInvalidatingAnimatedProperty(
                a1,
                (const struct AnimationHelper::AnimatedProperty *)v15,
                a4);
      }
      else if ( v16 == CComponentTransform2D::SetRotationAngle )
      {
        v11 = CComponentTransform2D::SetRotationAngle(a1, (const struct AnimationHelper::AnimatedProperty *)v15, a4);
      }
      else if ( v16 == CBrush::SetAnimatedProperty )
      {
        v11 = CBrush::SetAnimatedProperty(a1, (const struct AnimationHelper::AnimatedProperty *)v15, a4);
      }
      else
      {
        v11 = v16(a1, (const struct AnimationHelper::AnimatedProperty *)v15, a4);
      }
      v9 = v11;
      v7 = v11;
      if ( v11 >= 0 )
        return v7;
      v10 = v11;
      v8 = 46;
    }
    else
    {
LABEL_5:
      v7 = -2147024809;
      v8 = 50;
      v9 = -2147024809;
      v10 = -2147024809;
    }
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v10, v8, 0LL);
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v9, 0x24u, 0LL);
    return v7;
  }
  v14 = CResource::SetPropertyImpl(a1, v13, a4);
  v7 = v14;
  if ( v14 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v14, 0x20u, 0LL);
  return v7;
}
