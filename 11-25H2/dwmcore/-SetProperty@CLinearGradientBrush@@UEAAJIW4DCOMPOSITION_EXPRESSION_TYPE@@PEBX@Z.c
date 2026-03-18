/*
 * XREFs of ?SetProperty@CLinearGradientBrush@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x180022480
 * Callers:
 *     <none>
 * Callees:
 *     ?NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800209D0 (-NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?NotifyOnChanged@CBrush@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x180021400 (-NotifyOnChanged@CBrush@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?InvalidateAnimationSources@CResource@@IEAAXI@Z @ 0x1800E4E40 (-InvalidateAnimationSources@CResource@@IEAAXI@Z.c)
 *     ?SetRotationAngle@CComponentTransform2D@@AEAAJPEBUAnimatedProperty@AnimationHelper@@PEBX@Z @ 0x1800E5700 (-SetRotationAngle@CComponentTransform2D@@AEAAJPEBUAnimatedProperty@AnimationHelper@@PEBX@Z.c)
 *     ?ModifyProperty@CResource@@IEAA_NPEBUAnimatedProperty@AnimationHelper@@PEBX@Z @ 0x1800E5C50 (-ModifyProperty@CResource@@IEAA_NPEBUAnimatedProperty@AnimationHelper@@PEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CLinearGradientBrush::SetProperty(__int64 a1, int a2, int a3, const void *a4)
{
  const struct AnimationHelper::AnimatedProperty *const near *const *i; // rax
  int v7; // eax
  unsigned int v8; // ebx
  const struct AnimationHelper::AnimatedProperty *const near *v9; // rbx
  int (*v10)(CGeometry *__hidden, const struct AnimationHelper::AnimatedProperty *, const void *); // rax
  void (__fastcall *v11)(__int64, unsigned int, __int64); // rax

  for ( i = &CLinearGradientBrush::k_rgAnimDef; ; ++i )
  {
    if ( i == &CGeometry::k_rgAnimDef )
      goto LABEL_3;
    v9 = *i;
    if ( a2 == **(_DWORD **)i && (a3 == *((_DWORD *)v9 + 1) || !a3) )
      break;
  }
  if ( !v9 )
  {
LABEL_3:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024809, 0x52u, 0LL);
    return 2147942487LL;
  }
  v10 = (int (*)(CGeometry *__hidden, const struct AnimationHelper::AnimatedProperty *, const void *))*((_QWORD *)v9 + 3);
  if ( v10 == CGeometry::SetTrimInvalidatingAnimatedProperty )
  {
    if ( CResource::ModifyProperty((CResource *)a1, (const struct AnimationHelper::AnimatedProperty *)v9, a4) )
    {
      CResource::InvalidateAnimationSources((CResource *)a1, *(_DWORD *)v9);
      *(_WORD *)(a1 + 133) = 257;
      CResource::NotifyOnChanged((_DWORD *)a1, 0, 0LL);
      return 0LL;
    }
    return 0LL;
  }
  if ( (char *)v10 == (char *)CComponentTransform2D::SetRotationAngle )
  {
    v7 = CComponentTransform2D::SetRotationAngle(
           (CComponentTransform2D *)a1,
           (const struct AnimationHelper::AnimatedProperty *)v9,
           a4);
  }
  else
  {
    if ( (char *)v10 == (char *)CBrush::SetAnimatedProperty )
    {
      if ( CResource::ModifyProperty((CResource *)a1, (const struct AnimationHelper::AnimatedProperty *)v9, a4) )
      {
        CResource::InvalidateAnimationSources((CResource *)a1, *(_DWORD *)v9);
        v11 = *(void (__fastcall **)(__int64, unsigned int, __int64))(*(_QWORD *)a1 + 80LL);
        if ( (char *)v11 != (char *)&CGradientBrush::NotifyOnChanged && v11 != CBrush::NotifyOnChanged )
        {
          v11(a1, 0, a1);
          return 0LL;
        }
        CBrush::NotifyOnChanged(a1, 0, a1);
      }
      return 0LL;
    }
    v7 = ((__int64 (__fastcall *)(__int64, const struct AnimationHelper::AnimatedProperty *const near *, const void *))v10)(
           a1,
           v9,
           a4);
  }
  v8 = v7;
  if ( v7 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v7, 0x4Eu, 0LL);
  return v8;
}
