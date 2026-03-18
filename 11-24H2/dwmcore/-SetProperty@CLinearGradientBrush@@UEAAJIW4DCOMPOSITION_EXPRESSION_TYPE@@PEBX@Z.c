/*
 * XREFs of ?SetProperty@CLinearGradientBrush@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x1801C3760
 * Callers:
 *     <none>
 * Callees:
 *     ?NotifyOnChanged@CBrush@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x18007F680 (-NotifyOnChanged@CBrush@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?InvalidateAnimationSources@CResource@@IEAAXI@Z @ 0x18007F9F0 (-InvalidateAnimationSources@CResource@@IEAAXI@Z.c)
 *     ?NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x18007FB20 (-NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?SetRotationAngle@CComponentTransform2D@@AEAAJPEBUAnimatedProperty@AnimationHelper@@PEBX@Z @ 0x180080250 (-SetRotationAngle@CComponentTransform2D@@AEAAJPEBUAnimatedProperty@AnimationHelper@@PEBX@Z.c)
 *     ?ModifyProperty@CResource@@IEAA_NPEBUAnimatedProperty@AnimationHelper@@PEBX@Z @ 0x1800805D0 (-ModifyProperty@CResource@@IEAA_NPEBUAnimatedProperty@AnimationHelper@@PEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CLinearGradientBrush::SetProperty(__int64 a1, int a2, int a3, void *a4)
{
  const struct AnimationHelper::AnimatedProperty *const near *const *i; // rax
  int v7; // eax
  unsigned int v8; // ebx
  const struct AnimationHelper::AnimatedProperty *const near *v9; // rbx
  __int64 (__fastcall *v10)(CGeometry *, const struct AnimationHelper::AnimatedProperty *, const void *); // rax
  void (__fastcall *v11)(__int64, _QWORD, __int64); // rax

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
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024809, 0x52u, 0LL);
    return 2147942487LL;
  }
  v10 = (__int64 (__fastcall *)(CGeometry *, const struct AnimationHelper::AnimatedProperty *, const void *))*((_QWORD *)v9 + 3);
  if ( v10 == CGeometry::SetTrimInvalidatingAnimatedProperty )
  {
    if ( CResource::ModifyProperty((CResource *)a1, (const struct AnimationHelper::AnimatedProperty *)v9, a4) )
    {
      CResource::InvalidateAnimationSources((CResource *)a1, *(_DWORD *)v9);
      *(_WORD *)(a1 + 133) = 257;
      CResource::NotifyOnChanged((_DWORD *)a1, 0LL, 0LL);
      return 0LL;
    }
    return 0LL;
  }
  if ( (char *)v10 == (char *)CComponentTransform2D::SetRotationAngle )
  {
    v7 = CComponentTransform2D::SetRotationAngle(
           (CComponentTransform2D *)a1,
           (const struct AnimationHelper::AnimatedProperty *)v9,
           (float *)a4);
  }
  else
  {
    if ( v10 == CBrush::SetAnimatedProperty )
    {
      if ( CResource::ModifyProperty((CResource *)a1, (const struct AnimationHelper::AnimatedProperty *)v9, a4) )
      {
        CResource::InvalidateAnimationSources((CResource *)a1, *(_DWORD *)v9);
        v11 = *(void (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)a1 + 80LL);
        if ( (char *)v11 != (char *)CGradientBrush::NotifyOnChanged && (char *)v11 != (char *)CBrush::NotifyOnChanged )
        {
          v11(a1, 0LL, a1);
          return 0LL;
        }
        CBrush::NotifyOnChanged(a1, 0, a1);
      }
      return 0LL;
    }
    v7 = v10((CGeometry *)a1, (const struct AnimationHelper::AnimatedProperty *)v9, a4);
  }
  v8 = v7;
  if ( v7 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v7, 0x4Eu, 0LL);
  return v8;
}
