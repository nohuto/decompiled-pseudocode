/*
 * XREFs of ?SetProperty@CComponentTransform2D@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x1801BD0C0
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

__int64 __fastcall CComponentTransform2D::SetProperty(__int64 a1, int a2, int a3, float *a4)
{
  const struct AnimationHelper::AnimatedProperty *const near *v5; // rbx
  float v6; // xmm0_4
  __int64 (__fastcall *v7)(CGeometry *, const struct AnimationHelper::AnimatedProperty *, const void *); // rax
  void (__fastcall *v8)(__int64, _QWORD, __int64); // rax
  const struct AnimationHelper::AnimatedProperty *const near *const *i; // rax
  int v11; // eax
  unsigned int v12; // ebx
  float v13; // [rsp+48h] [rbp+10h] BYREF

  v13 = 0.0;
  if ( a2 == 5 && a3 == 18 )
  {
    v5 = (const struct AnimationHelper::AnimatedProperty *const near *)&CComponentTransform2D::sc_RotationAngle;
    v6 = *a4 * 0.017453292;
    a4 = &v13;
    v13 = v6;
  }
  else
  {
    v5 = 0LL;
    for ( i = &CComponentTransform2D::k_rgAnimDef;
          i != (const struct AnimationHelper::AnimatedProperty *const near *const *)&unk_1802F8FC8;
          ++i )
    {
      if ( a2 == **(_DWORD **)i && (a3 == *((_DWORD *)*i + 1) || !a3) )
      {
        v5 = *i;
        break;
      }
    }
    if ( !v5 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024809, 0x4Au, 0LL);
      return 2147942487LL;
    }
  }
  v7 = (__int64 (__fastcall *)(CGeometry *, const struct AnimationHelper::AnimatedProperty *, const void *))*((_QWORD *)v5 + 3);
  if ( v7 == CGeometry::SetTrimInvalidatingAnimatedProperty )
  {
    if ( CResource::ModifyProperty((CResource *)a1, (const struct AnimationHelper::AnimatedProperty *)v5, a4) )
    {
      CResource::InvalidateAnimationSources((CResource *)a1, *(_DWORD *)v5);
      *(_WORD *)(a1 + 133) = 257;
      CResource::NotifyOnChanged((_DWORD *)a1, 0LL, 0LL);
      return 0LL;
    }
    return 0LL;
  }
  if ( (char *)v7 == (char *)CComponentTransform2D::SetRotationAngle )
  {
    v11 = CComponentTransform2D::SetRotationAngle(
            (CComponentTransform2D *)a1,
            (const struct AnimationHelper::AnimatedProperty *)v5,
            a4);
  }
  else
  {
    if ( v7 == CBrush::SetAnimatedProperty )
    {
      if ( CResource::ModifyProperty((CResource *)a1, (const struct AnimationHelper::AnimatedProperty *)v5, a4) )
      {
        CResource::InvalidateAnimationSources((CResource *)a1, *(_DWORD *)v5);
        v8 = *(void (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)a1 + 80LL);
        if ( (char *)v8 != (char *)CGradientBrush::NotifyOnChanged && (char *)v8 != (char *)CBrush::NotifyOnChanged )
        {
          v8(a1, 0LL, a1);
          return 0LL;
        }
        CBrush::NotifyOnChanged(a1, 0, a1);
      }
      return 0LL;
    }
    v11 = v7((CGeometry *)a1, (const struct AnimationHelper::AnimatedProperty *)v5, a4);
  }
  v12 = v11;
  if ( v11 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v11, 0x46u, 0LL);
  return v12;
}
