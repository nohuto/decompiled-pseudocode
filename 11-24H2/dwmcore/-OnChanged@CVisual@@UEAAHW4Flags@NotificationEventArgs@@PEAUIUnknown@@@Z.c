/*
 * XREFs of ?OnChanged@CVisual@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x18007FDF0
 * Callers:
 *     ?OnProgressChanged@CAnimationController@@QEAAXXZ @ 0x18007D1C0 (-OnProgressChanged@CAnimationController@@QEAAXXZ.c)
 *     ?NotifyListenerOfChange@CContent@@UEAAXPEAVCResource@@W4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x18007EFE0 (-NotifyListenerOfChange@CContent@@UEAAXPEAVCResource@@W4Flags@NotificationEventArgs@@PEAUIUnknow.c)
 *     ?NotifyListenerOfChange@CResource@@UEAAXPEAV1@W4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x18007F3E0 (-NotifyListenerOfChange@CResource@@UEAAXPEAV1@W4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?NotifyOnChanged@CBrush@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x18007F680 (-NotifyOnChanged@CBrush@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x18007FB20 (-NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?SetTrimInvalidatingAnimatedProperty@CGeometry@@AEAAJPEBUAnimatedProperty@AnimationHelper@@PEBX@Z @ 0x180134C70 (-SetTrimInvalidatingAnimatedProperty@CGeometry@@AEAAJPEBUAnimatedProperty@AnimationHelper@@PEBX@.c)
 *     ?NotifyListenerOfChange@CBrush@@UEAAXPEAVCResource@@W4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x180136550 (-NotifyListenerOfChange@CBrush@@UEAAXPEAVCResource@@W4Flags@NotificationEventArgs@@PEAUIUnknown@.c)
 *     ?NotifyOnChanged@CGeometry@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1801821D0 (-NotifyOnChanged@CGeometry@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?OnChanged@CLayerVisual@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1801D8DA0 (-OnChanged@CLayerVisual@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 * Callees:
 *     ?AddAdditionalDirtyRect@CVisual@@QEAAXAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@_N@Z @ 0x1800315A0 (-AddAdditionalDirtyRect@CVisual@@QEAAXAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSI.c)
 *     ?GetTransformParentDataInternal@CVisual@@QEBAPEAUTransformParentData@@XZ @ 0x180033C70 (-GetTransformParentDataInternal@CVisual@@QEBAPEAUTransformParentData@@XZ.c)
 *     ?UpdateContentFlags@CVisual@@AEAAXXZ @ 0x180037E5C (-UpdateContentFlags@CVisual@@AEAAXXZ.c)
 *     ?HasSingleD2DBitmapOrPrimitiveGroup@CVisual@@QEBA_NXZ @ 0x180038110 (-HasSingleD2DBitmapOrPrimitiveGroup@CVisual@@QEBA_NXZ.c)
 *     ?InternalQueryInterface@?$CMILCOMBaseWeakRefSource@VCResourceDeleter@@@@IEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18004C640 (-InternalQueryInterface@-$CMILCOMBaseWeakRefSource@VCResourceDeleter@@@@IEAAJAEBU_GUID@@PEAPEAX@.c)
 *     ?HasNonEmptyContent@CSpriteVisual@@UEBA_NXZ @ 0x18004C8A0 (-HasNonEmptyContent@CSpriteVisual@@UEBA_NXZ.c)
 *     ?HasNonEmptyContent@CVisual@@UEBA_NXZ @ 0x18004EA00 (-HasNonEmptyContent@CVisual@@UEBA_NXZ.c)
 *     ?UpdateBackdropVisualImageForWindowBackgroundTreatment@CVisual@@AEAAXXZ @ 0x18006AD64 (-UpdateBackdropVisualImageForWindowBackgroundTreatment@CVisual@@AEAAXXZ.c)
 *     ??1CRectanglesShape@@UEAA@XZ @ 0x180078DB0 (--1CRectanglesShape@@UEAA@XZ.c)
 *     ?InternalRelease@?$CMILCOMBaseWeakRefSource@VCResourceDeleter@@@@IEAAKXZ @ 0x1800797F0 (-InternalRelease@-$CMILCOMBaseWeakRefSource@VCResourceDeleter@@@@IEAAKXZ.c)
 *     ?GetTransform3DEffectNoRef@CVisual@@QEBAPEAVCTransform3D@@XZ @ 0x1800AE5D0 (-GetTransform3DEffectNoRef@CVisual@@QEBAPEAVCTransform3D@@XZ.c)
 *     ?PropagateFlags@CVisual@@IEAAXW4VisualDirty@@@Z @ 0x1800BEB20 (-PropagateFlags@CVisual@@IEAAXW4VisualDirty@@@Z.c)
 *     ?OnOuterTransformChanged@CVisual@@AEAAXXZ @ 0x1800BEE54 (-OnOuterTransformChanged@CVisual@@AEAAXXZ.c)
 *     ?OnClipChanged@CVisual@@AEAAXXZ @ 0x1800BF1FC (-OnClipChanged@CVisual@@AEAAXXZ.c)
 *     ?GetDirtyRegion@CCompositionSurfaceBitmap@@UEBA_NAEBUD2D_SIZE_F@@PEAVCRectanglesShape@@@Z @ 0x1800D29C0 (-GetDirtyRegion@CCompositionSurfaceBitmap@@UEBA_NAEBUD2D_SIZE_F@@PEAVCRectanglesShape@@@Z.c)
 *     ?ClearContentTreeDataCaches@CVisual@@IEAAXXZ @ 0x18010FF8C (-ClearContentTreeDataCaches@CVisual@@IEAAXXZ.c)
 *     ?HasContent@CVisual@@UEBA_NXZ @ 0x18016A490 (-HasContent@CVisual@@UEBA_NXZ.c)
 *     ?HasContent@CSpriteVisual@@UEBA_NXZ @ 0x18016A750 (-HasContent@CSpriteVisual@@UEBA_NXZ.c)
 *     ?OnInnerTransformChanged@CVisual@@AEAAXXZ @ 0x1801F013C (-OnInnerTransformChanged@CVisual@@AEAAXXZ.c)
 *     __security_check_cookie @ 0x1802508D0 (__security_check_cookie.c)
 *     ?Release@CGenericInk@@WJA@EAAKXZ @ 0x1802781B0 (-Release@CGenericInk@@WJA@EAAKXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CVisual::OnChanged(__int64 a1, unsigned int a2, CMaskBrush *a3)
{
  unsigned int v6; // esi
  bool (__fastcall *v7)(CSpriteVisual *__hidden); // rax
  bool HasContent; // al
  char (__fastcall *v9)(CSpriteVisual *); // rax
  char HasNonEmptyContent; // al
  char v11; // bl
  bool v12; // dl
  int v13; // eax
  __int64 (__fastcall **v14)(CMaskBrush *, const struct _GUID *, void **); // rax
  __int64 (__fastcall *v15)(CMaskBrush *, const struct _GUID *, void **); // rax
  int Interface; // eax
  __int64 v17; // r8
  FLOAT v18; // xmm0_4
  FLOAT v19; // xmm1_4
  bool (__fastcall *v20)(CCompositionSurfaceBitmap *__hidden, const struct D2D_SIZE_F *, struct CRectanglesShape *); // rax
  bool DirtyRegion; // al
  const struct D2D_RECT_F *v22; // rbx
  const struct D2D_RECT_F *v23; // r15
  void (*v24)(void); // rax
  struct TransformParentData *TransformParentDataInternal; // rax
  CMaskBrush *v27; // rcx
  int v28; // eax
  CCachedVisualImage *v29; // rcx
  CMaskBrush *Transform3DEffectNoRef; // rbx
  int v31; // eax
  CCachedVisualImage *v32; // rcx
  CCachedVisualImage *v33; // [rsp+20h] [rbp-60h] BYREF
  struct D2D_SIZE_F v34; // [rsp+28h] [rbp-58h] BYREF
  _QWORD v35[2]; // [rsp+30h] [rbp-50h] BYREF
  const struct D2D_RECT_F *v36; // [rsp+40h] [rbp-40h]
  const struct D2D_RECT_F *v37; // [rsp+48h] [rbp-38h]
  __int64 *v38; // [rsp+50h] [rbp-30h]
  _BYTE v39[16]; // [rsp+58h] [rbp-28h] BYREF
  __int64 v40; // [rsp+68h] [rbp-18h] BYREF

  if ( a2 == 1 )
    goto LABEL_2;
  if ( a2 == 3 )
  {
    v6 = 1;
  }
  else
  {
    v6 = 5;
    if ( a2 != 4 )
    {
      if ( a2 == 5 )
      {
        CVisual::ClearContentTreeDataCaches((CVisual *)a1);
        return 0LL;
      }
      if ( a2 != 6 )
      {
        if ( a2 != 11 )
        {
          if ( a2 == 15 )
          {
            CVisual::UpdateBackdropVisualImageForWindowBackgroundTreatment((CVisual *)a1);
            return 0LL;
          }
          if ( a2 == 16 )
            CVisual::ClearContentTreeDataCaches((CVisual *)a1);
          goto LABEL_13;
        }
        v6 = 2;
        goto LABEL_3;
      }
      CVisual::ClearContentTreeDataCaches((CVisual *)a1);
LABEL_2:
      v6 = 4;
LABEL_3:
      if ( (*(_BYTE *)(a1 + 96) & 0x10) == 0 )
      {
        v7 = *(bool (__fastcall **)(CSpriteVisual *__hidden))(*(_QWORD *)a1 + 256LL);
        if ( v7 == CVisual::HasContent )
          HasContent = CVisual::HasContent((CVisual *)a1);
        else
          HasContent = v7 == CSpriteVisual::HasContent
                     ? CSpriteVisual::HasContent((CSpriteVisual *)a1)
                     : v7((CSpriteVisual *)a1);
        if ( HasContent )
        {
          v9 = *(char (__fastcall **)(CSpriteVisual *))(*(_QWORD *)a1 + 264LL);
          if ( (char *)v9 == (char *)CVisual::HasNonEmptyContent )
            HasNonEmptyContent = CVisual::HasNonEmptyContent((CVisual *)a1);
          else
            HasNonEmptyContent = v9 == CSpriteVisual::HasNonEmptyContent
                               ? CSpriteVisual::HasNonEmptyContent((CSpriteVisual *)a1)
                               : v9((CSpriteVisual *)a1);
          v11 = HasNonEmptyContent;
          v12 = HasNonEmptyContent && !CVisual::HasSingleD2DBitmapOrPrimitiveGroup((CVisual *)a1);
          if ( (BYTE1(*(_DWORD *)(a1 + 96)) & 1) != v11 || (((*(int *)(a1 + 96) >> 8) & 0x200) != 0) != v12 )
            v6 |= 0x10u;
        }
      }
      goto LABEL_13;
    }
    CVisual::OnClipChanged((CVisual *)a1);
  }
LABEL_13:
  if ( *(_QWORD *)(a1 + 256) )
  {
    CVisual::UpdateContentFlags((CVisual *)a1);
    if ( *(CMaskBrush **)(a1 + 256) == a3 && a2 <= 0x10 )
    {
      v13 = 65602;
      if ( _bittest(&v13, a2) )
      {
        v14 = *(__int64 (__fastcall ***)(CMaskBrush *, const struct _GUID *, void **))a3;
        v33 = 0LL;
        v15 = *v14;
        if ( v15 == CMILCOMBaseWeakRefSource<CResourceDeleter>::InternalQueryInterface )
          Interface = CMILCOMBaseWeakRefSource<CResourceDeleter>::InternalQueryInterface(
                        a3,
                        &GUID_c155b649_2c5b_416a_b836_bbda56b2ec27,
                        (void **)&v33);
        else
          Interface = v15(a3, &GUID_c155b649_2c5b_416a_b836_bbda56b2ec27, (void **)&v33);
        if ( Interface >= 0 )
        {
          v35[1] = 0LL;
          v40 = 0LL;
          v18 = *(float *)(a1 + 144);
          v19 = *(float *)(a1 + 148);
          v35[0] = &CRectanglesShape::`vftable';
          v36 = (const struct D2D_RECT_F *)v39;
          v37 = (const struct D2D_RECT_F *)v39;
          v38 = &v40;
          v34.width = v18;
          v34.height = v19;
          v20 = *(bool (__fastcall **)(CCompositionSurfaceBitmap *__hidden, const struct D2D_SIZE_F *, struct CRectanglesShape *))(*(_QWORD *)v33 + 24LL);
          if ( v20 == CCompositionSurfaceBitmap::GetDirtyRegion )
            DirtyRegion = CCompositionSurfaceBitmap::GetDirtyRegion(v33, &v34, (struct CRectanglesShape *)v35);
          else
            DirtyRegion = v20(v33, &v34, (struct CRectanglesShape *)v35);
          if ( DirtyRegion )
          {
            v22 = v36;
            v23 = v37;
            while ( v22 != v23 )
              CVisual::AddAdditionalDirtyRect(a1, v22++, 1);
            v6 &= ~4u;
          }
          CRectanglesShape::~CRectanglesShape((CRectanglesShape *)v35);
        }
        if ( v33 )
        {
          v24 = *(void (**)(void))(*(_QWORD *)v33 + 16LL);
          if ( (char *)v24 == (char *)CMILCOMBaseWeakRefSource<CResourceDeleter>::InternalRelease )
          {
            CMILCOMBaseWeakRefSource<CResourceDeleter>::InternalRelease(
              v33,
              (__int64)CMILCOMBaseWeakRefSource<CResourceDeleter>::InternalRelease,
              v17);
          }
          else if ( (char *)v24 == (char *)CGenericInk::Release )
          {
            CGenericInk::Release(v33);
          }
          else
          {
            v24();
          }
        }
      }
    }
  }
  if ( v6 )
    CVisual::PropagateFlags(a1, v6);
  if ( a2 == 2 )
  {
    v27 = *(CMaskBrush **)(a1 + 240);
    if ( v27 )
    {
      v33 = 0LL;
      v28 = CMILCOMBaseWeakRefSource<CResourceDeleter>::InternalQueryInterface(
              v27,
              &GUID_00000000_0000_0000_c000_000000000046,
              (void **)&v33);
      v29 = v33;
      if ( v28 >= 0 && a3 == v33 )
      {
        CVisual::OnOuterTransformChanged((CVisual *)a1);
        v29 = v33;
      }
      if ( v29 )
        (*(void (__fastcall **)(CCachedVisualImage *))(*(_QWORD *)v29 + 16LL))(v29);
    }
    if ( CVisual::GetTransform3DEffectNoRef((CVisual *)a1) )
    {
      v33 = 0LL;
      Transform3DEffectNoRef = CVisual::GetTransform3DEffectNoRef((CVisual *)a1);
      if ( v33 )
        (*(void (__fastcall **)(CCachedVisualImage *))(*(_QWORD *)v33 + 16LL))(v33);
      v31 = CMILCOMBaseWeakRefSource<CResourceDeleter>::InternalQueryInterface(
              Transform3DEffectNoRef,
              &GUID_00000000_0000_0000_c000_000000000046,
              (void **)&v33);
      v32 = v33;
      if ( v31 >= 0 && a3 == v33 )
      {
        CVisual::OnInnerTransformChanged((CVisual *)a1);
        v32 = v33;
      }
      if ( v32 )
        (*(void (__fastcall **)(CCachedVisualImage *))(*(_QWORD *)v32 + 16LL))(v32);
    }
  }
  else if ( a3 )
  {
    TransformParentDataInternal = CVisual::GetTransformParentDataInternal((CVisual *)a1);
    if ( TransformParentDataInternal )
    {
      if ( a3 == *(CMaskBrush **)TransformParentDataInternal )
        CVisual::OnOuterTransformChanged((CVisual *)a1);
    }
  }
  return 0LL;
}
