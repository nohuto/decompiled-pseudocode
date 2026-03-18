/*
 * XREFs of ?SetProperty@CComponentTransform3D@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x180080C60
 * Callers:
 *     ?SetOutputValueOnTarget@CBaseExpression@@IEAAJPEAVCResource@@@Z @ 0x18000ED10 (-SetOutputValueOnTarget@CBaseExpression@@IEAAJPEAVCResource@@@Z.c)
 * Callees:
 *     ?NotifyOnChanged@CBrush@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x18007F680 (-NotifyOnChanged@CBrush@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?InvalidateAnimationSources@CResource@@IEAAXI@Z @ 0x18007F9F0 (-InvalidateAnimationSources@CResource@@IEAAXI@Z.c)
 *     ?NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x18007FB20 (-NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?SetRotationAngle@CComponentTransform2D@@AEAAJPEBUAnimatedProperty@AnimationHelper@@PEBX@Z @ 0x180080250 (-SetRotationAngle@CComponentTransform2D@@AEAAJPEBUAnimatedProperty@AnimationHelper@@PEBX@Z.c)
 *     ?ModifyProperty@CResource@@IEAA_NPEBUAnimatedProperty@AnimationHelper@@PEBX@Z @ 0x1800805D0 (-ModifyProperty@CResource@@IEAA_NPEBUAnimatedProperty@AnimationHelper@@PEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CComponentTransform3D::SetProperty(__int64 a1, int a2, int a3, float *a4)
{
  _DWORD *v5; // rbx
  void **i; // rax
  float v8; // xmm0_4
  int (*v9)(CGeometry *__hidden, const struct AnimationHelper::AnimatedProperty *, const void *); // rax
  int v10; // eax
  unsigned int v11; // ebx
  void (__fastcall *v12)(__int64, unsigned int, __int64); // rax
  float v13; // [rsp+48h] [rbp+10h] BYREF

  v13 = 0.0;
  if ( a2 == 6 && a3 == 18 )
  {
    v5 = &CComponentTransform3D::sc_RotationAngle;
    v8 = *a4 * 0.017453292;
    a4 = &v13;
    v13 = v8;
  }
  else
  {
    v5 = 0LL;
    for ( i = (void **)&CComponentTransform3D::k_rgAnimDef;
          i != &CShapeBitmapProducer::`vftable'{for `CMILCOMBaseT<IBitmapResource,IBitmapResource,CMilObjectDeleter>'};
          ++i )
    {
      if ( a2 == *(_DWORD *)*i && (a3 == *((_DWORD *)*i + 1) || !a3) )
      {
        v5 = *i;
        break;
      }
    }
    if ( !v5 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024809, 0x54u, 0LL);
      return 2147942487LL;
    }
  }
  v9 = (int (*)(CGeometry *__hidden, const struct AnimationHelper::AnimatedProperty *, const void *))*((_QWORD *)v5 + 3);
  if ( v9 == CGeometry::SetTrimInvalidatingAnimatedProperty )
  {
    if ( CResource::ModifyProperty((CResource *)a1, (const struct AnimationHelper::AnimatedProperty *)v5, a4) )
    {
      CResource::InvalidateAnimationSources((CResource *)a1, *v5);
      *(_WORD *)(a1 + 133) = 257;
      CResource::NotifyOnChanged((_DWORD *)a1, 0LL, 0LL);
      return 0LL;
    }
    return 0LL;
  }
  if ( (char *)v9 != (char *)CComponentTransform2D::SetRotationAngle )
  {
    if ( v9 != CBrush::SetAnimatedProperty )
    {
      v10 = ((__int64 (__fastcall *)(__int64, _DWORD *, float *))v9)(a1, v5, a4);
      goto LABEL_11;
    }
    if ( CResource::ModifyProperty((CResource *)a1, (const struct AnimationHelper::AnimatedProperty *)v5, a4) )
    {
      CResource::InvalidateAnimationSources((CResource *)a1, *v5);
      v12 = *(void (__fastcall **)(__int64, unsigned int, __int64))(*(_QWORD *)a1 + 80LL);
      if ( (char *)v12 != (char *)&CGradientBrush::NotifyOnChanged && v12 != CBrush::NotifyOnChanged )
      {
        v12(a1, 0, a1);
        return 0LL;
      }
      CBrush::NotifyOnChanged(a1, 0, a1);
    }
    return 0LL;
  }
  v10 = CComponentTransform2D::SetRotationAngle(
          (CComponentTransform2D *)a1,
          (const struct AnimationHelper::AnimatedProperty *)v5,
          a4);
LABEL_11:
  v11 = v10;
  if ( v10 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v10, 0x50u, 0LL);
  return v11;
}
