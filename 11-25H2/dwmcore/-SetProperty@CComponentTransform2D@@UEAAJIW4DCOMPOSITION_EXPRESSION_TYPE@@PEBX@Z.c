/*
 * XREFs of ?SetProperty@CComponentTransform2D@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x180022290
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

__int64 __fastcall CComponentTransform2D::SetProperty(__int64 a1, int a2, int a3, float *a4)
{
  const struct AnimationHelper::AnimatedProperty *const near *v5; // rbx
  float v6; // xmm0_4
  int (*v7)(CGeometry *__hidden, const struct AnimationHelper::AnimatedProperty *, const void *); // rax
  void (__fastcall *v8)(__int64, unsigned int, __int64); // rax
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
    for ( i = &CComponentTransform2D::k_rgAnimDef; i != &CComponentTransform3D::k_rgAnimDef; ++i )
    {
      if ( a2 == **(_DWORD **)i && (a3 == *((_DWORD *)*i + 1) || !a3) )
      {
        v5 = *i;
        break;
      }
    }
    if ( !v5 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024809, 0x4Au, 0LL);
      return 2147942487LL;
    }
  }
  v7 = (int (*)(CGeometry *__hidden, const struct AnimationHelper::AnimatedProperty *, const void *))*((_QWORD *)v5 + 3);
  if ( v7 == CGeometry::SetTrimInvalidatingAnimatedProperty )
  {
    if ( CResource::ModifyProperty((CResource *)a1, (const struct AnimationHelper::AnimatedProperty *)v5, a4) )
    {
      CResource::InvalidateAnimationSources((CResource *)a1, *(_DWORD *)v5);
      *(_WORD *)(a1 + 133) = 257;
      CResource::NotifyOnChanged((_DWORD *)a1, 0, 0LL);
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
    if ( (char *)v7 == (char *)CBrush::SetAnimatedProperty )
    {
      if ( CResource::ModifyProperty((CResource *)a1, (const struct AnimationHelper::AnimatedProperty *)v5, a4) )
      {
        CResource::InvalidateAnimationSources((CResource *)a1, *(_DWORD *)v5);
        v8 = *(void (__fastcall **)(__int64, unsigned int, __int64))(*(_QWORD *)a1 + 80LL);
        if ( (char *)v8 != (char *)&CGradientBrush::NotifyOnChanged && v8 != CBrush::NotifyOnChanged )
        {
          v8(a1, 0, a1);
          return 0LL;
        }
        CBrush::NotifyOnChanged(a1, 0, a1);
      }
      return 0LL;
    }
    v11 = ((__int64 (__fastcall *)(__int64, const struct AnimationHelper::AnimatedProperty *const near *, float *))v7)(
            a1,
            v5,
            a4);
  }
  v12 = v11;
  if ( v11 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v11, 0x46u, 0LL);
  return v12;
}
