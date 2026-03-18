/*
 * XREFs of ?IsEmptyDrawing@CBrush@@UEBA_NXZ @ 0x18004E680
 * Callers:
 *     ?IsOpaqueRect@CSurfaceBrush@@UEBA_NAEBUD2D_SIZE_F@@PEAUD2D_RECT_F@@@Z @ 0x18004B630 (-IsOpaqueRect@CSurfaceBrush@@UEBA_NAEBUD2D_SIZE_F@@PEAUD2D_RECT_F@@@Z.c)
 *     ?HitTest@CSurfaceBrush@@UEBAJAEBUD2D_SIZE_F@@AEBUD2D_POINT_2F@@PEA_N@Z @ 0x18014C600 (-HitTest@CSurfaceBrush@@UEBAJAEBUD2D_SIZE_F@@AEBUD2D_POINT_2F@@PEA_N@Z.c)
 *     ?GetBounds@CSurfaceBrush@@UEBAJAEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18014DBC0 (-GetBounds@CSurfaceBrush@@UEBAJAEBUD2D_SIZE_F@@PEAV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_P.c)
 *     ?GetBounds@CSceneWorld@@UEBAJAEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801FE9D0 (-GetBounds@CSceneWorld@@UEBAJAEBUD2D_SIZE_F@@PEAV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POI.c)
 *     ?AddOcclusionInformation@CSurfaceBrush@@UEAAJPEAVCOcclusionContext@@AEBUD2D_SIZE_F@@@Z @ 0x18023E480 (-AddOcclusionInformation@CSurfaceBrush@@UEAAJPEAVCOcclusionContext@@AEBUD2D_SIZE_F@@@Z.c)
 * Callees:
 *     ?IsReadyToDraw@CColorBrush@@UEBA_NPEAVCDrawingContext@@PEA_N@Z @ 0x1800483F0 (-IsReadyToDraw@CColorBrush@@UEBA_NPEAVCDrawingContext@@PEA_N@Z.c)
 *     ?HasSomethingToDraw@CVisualSurface@@QEBA_NXZ @ 0x18004BCE8 (-HasSomethingToDraw@CVisualSurface@@QEBA_NXZ.c)
 *     ?IsReadyToDraw@CEffectBrush@@UEBA_NPEAVCDrawingContext@@PEA_N@Z @ 0x18004D750 (-IsReadyToDraw@CEffectBrush@@UEBA_NPEAVCDrawingContext@@PEA_N@Z.c)
 *     ??1?$com_ptr_t@VIBitmapResource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18004DC30 (--1-$com_ptr_t@VIBitmapResource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?reset@?$com_ptr_t@VIBitmapResource@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x18004DD48 (-reset@-$com_ptr_t@VIBitmapResource@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?GetBitmap@CBitmapRenderStrategy@@SAXPEBVCSurfaceBrush@@PEAPEAVIBitmapResource@@@Z @ 0x18004DDC0 (-GetBitmap@CBitmapRenderStrategy@@SAXPEBVCSurfaceBrush@@PEAPEAVIBitmapResource@@@Z.c)
 *     ?HasRenderingRealization@CBitmapRenderStrategy@@SA_NPEAVIBitmapResource@@@Z @ 0x18004DE60 (-HasRenderingRealization@CBitmapRenderStrategy@@SA_NPEAVIBitmapResource@@@Z.c)
 *     ?IsEmptyDrawing@CPrimitiveGroup@@UEBA_NXZ @ 0x18004E490 (-IsEmptyDrawing@CPrimitiveGroup@@UEBA_NXZ.c)
 *     ?IsCloseRealZero@@YA_NMM@Z @ 0x18004F990 (-IsCloseRealZero@@YA_NMM@Z.c)
 *     ?empty@?$vector@PEAVCColorGradientStop@@V?$allocator@PEAVCColorGradientStop@@@std@@@std@@QEBA_NXZ @ 0x18004FAD0 (-empty@-$vector@PEAVCColorGradientStop@@V-$allocator@PEAVCColorGradientStop@@@std@@@std@@QEBA_NX.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

char __fastcall CBrush::IsEmptyDrawing(CBrush *this)
{
  __int64 v1; // rax
  CBrush *v2; // rdi
  char (__fastcall *v3)(CSurfaceBrush *, struct CDrawingContext *, bool *); // rax
  float *v4; // rbx
  char v5; // si
  char (__fastcall *v6)(CColorBrush *, struct CDrawingContext *, bool *); // rax
  char IsReadyToDraw; // al
  __int64 v8; // rcx
  bool v9; // al
  char HasRenderingRealization; // bl
  _BOOL8 (__fastcall ***v12)(CBitmapRenderStrategy *, const struct CSurfaceBrush *, struct CDrawingContext *, bool *); // rcx
  _BOOL8 (__fastcall *v13)(CBitmapRenderStrategy *, const struct CSurfaceBrush *, struct CDrawingContext *, bool *); // r10
  CVisualSurface **v14; // rbx
  _BOOL8 (__fastcall ***v15)(CBitmapRenderStrategy *, const struct CSurfaceBrush *, struct CDrawingContext *, bool *); // rcx
  _BOOL8 (__fastcall *v16)(CBitmapRenderStrategy *, const struct CSurfaceBrush *, struct CDrawingContext *, bool *); // r10
  CPrimitiveGroup *v17; // rcx
  char (__fastcall *v18)(CPrimitiveGroup *); // rdx
  char IsEmptyDrawing; // al
  CPrimitiveGroup *v20; // rcx
  char HasSomethingToDraw; // al
  bool v22; // [rsp+50h] [rbp+20h] BYREF
  struct IBitmapResource *v23; // [rsp+58h] [rbp+28h] BYREF
  char v24; // [rsp+60h] [rbp+30h] BYREF

  v1 = *(_QWORD *)this;
  v2 = this;
  v22 = 0;
  v3 = *(char (__fastcall **)(CSurfaceBrush *, struct CDrawingContext *, bool *))(v1 + 312);
  if ( v3 == CSurfaceBrush::IsReadyToDraw )
  {
    v12 = (_BOOL8 (__fastcall ***)(CBitmapRenderStrategy *, const struct CSurfaceBrush *, struct CDrawingContext *, bool *))*((_QWORD *)this + 17);
    v13 = **v12;
    if ( v13 == CBitmapRenderStrategy::IsReadyToDraw )
    {
      v23 = 0LL;
      wil::com_ptr_t<IBitmapResource,wil::err_returncode_policy>::reset(&v23);
      CBitmapRenderStrategy::GetBitmap(v2, &v23);
      HasRenderingRealization = CBitmapRenderStrategy::HasRenderingRealization(v23);
      wil::com_ptr_t<IBitmapResource,wil::err_returncode_policy>::~com_ptr_t<IBitmapResource,wil::err_returncode_policy>(&v23);
      return !HasRenderingRealization || v22;
    }
    if ( (char *)v13 == (char *)CPrimitiveGroupRenderStrategy::IsReadyToDraw )
    {
      v17 = (CPrimitiveGroup *)*((_QWORD *)v2 + 16);
      v18 = *(char (__fastcall **)(CPrimitiveGroup *))(*(_QWORD *)v17 + 216LL);
      if ( v18 == CPrimitiveGroup::IsEmptyDrawing )
      {
        IsEmptyDrawing = CPrimitiveGroup::IsEmptyDrawing(v17);
LABEL_27:
        v22 = IsEmptyDrawing;
        HasRenderingRealization = 1;
        return !HasRenderingRealization || v22;
      }
LABEL_48:
      IsEmptyDrawing = ((__int64 (*)(void))v18)();
      goto LABEL_27;
    }
    if ( (char *)v13 != (char *)CVisualSurfaceRenderStrategy::IsReadyToDraw )
    {
      HasRenderingRealization = (**v12)((CBitmapRenderStrategy *)v12, v2, 0LL, &v22);
      return !HasRenderingRealization || v22;
    }
    HasSomethingToDraw = CVisualSurface::HasSomethingToDraw(*((CVisualSurface **)v2 + 16));
LABEL_37:
    HasRenderingRealization = HasSomethingToDraw;
    return !HasRenderingRealization || v22;
  }
  if ( (char *)v3 == (char *)CMaskBrush::IsReadyToDraw )
  {
    v4 = (float *)*((_QWORD *)this + 15);
    v5 = 0;
    LOBYTE(v23) = 0;
    v24 = 0;
    if ( !v4 )
      goto LABEL_12;
    v6 = *(char (__fastcall **)(CColorBrush *, struct CDrawingContext *, bool *))(*(_QWORD *)v4 + 312LL);
    if ( (char *)v6 == (char *)CGradientBrush::IsReadyToDraw )
    {
      LOBYTE(v23) = std::vector<CColorGradientStop *>::empty(v4 + 42);
      IsReadyToDraw = std::vector<CColorGradientStop *>::empty(v4 + 42) ^ 1;
    }
    else
    {
      if ( v6 == CColorBrush::IsReadyToDraw )
      {
        LOBYTE(v23) = IsCloseRealZero(v4[29], 0.0000011920929);
LABEL_7:
        v8 = *((_QWORD *)v2 + 14);
        if ( !v8 || (*(unsigned __int8 (__fastcall **)(__int64, _QWORD, char *))(*(_QWORD *)v8 + 312LL))(v8, 0LL, &v24) )
          v5 = 1;
LABEL_10:
        if ( (_BYTE)v23 || v24 )
        {
          v9 = 1;
          goto LABEL_13;
        }
LABEL_12:
        v9 = 0;
LABEL_13:
        HasRenderingRealization = v5;
        v22 = v9;
        return !HasRenderingRealization || v22;
      }
      if ( v6 == CEffectBrush::IsReadyToDraw )
        IsReadyToDraw = CEffectBrush::IsReadyToDraw((CEffectBrush *)v4, 0LL, (bool *)&v23);
      else
        IsReadyToDraw = v6((CColorBrush *)v4, 0LL, (bool *)&v23);
    }
    if ( !IsReadyToDraw )
      goto LABEL_10;
    goto LABEL_7;
  }
  if ( v3 != CNineGridBrush::IsReadyToDraw )
  {
LABEL_44:
    HasSomethingToDraw = v3(this, 0LL, &v22);
    goto LABEL_37;
  }
  v14 = (CVisualSurface **)*((_QWORD *)this + 13);
  if ( !v14 )
    return 1;
  v3 = (char (__fastcall *)(CSurfaceBrush *, struct CDrawingContext *, bool *))*((_QWORD *)*v14 + 39);
  if ( v3 != CSurfaceBrush::IsReadyToDraw )
  {
    this = (CBrush *)*((_QWORD *)this + 13);
    if ( v3 == CColorBrush::IsReadyToDraw )
    {
      HasRenderingRealization = CColorBrush::IsReadyToDraw(this, 0LL, &v22);
      return !HasRenderingRealization || v22;
    }
    goto LABEL_44;
  }
  v15 = (_BOOL8 (__fastcall ***)(CBitmapRenderStrategy *, const struct CSurfaceBrush *, struct CDrawingContext *, bool *))v14[17];
  v16 = **v15;
  if ( v16 == CBitmapRenderStrategy::IsReadyToDraw )
  {
    v23 = 0LL;
    wil::com_ptr_t<IBitmapResource,wil::err_returncode_policy>::reset(&v23);
    CBitmapRenderStrategy::GetBitmap((const struct CSurfaceBrush *)v14, &v23);
    HasRenderingRealization = CBitmapRenderStrategy::HasRenderingRealization(v23);
    wil::com_ptr_t<IBitmapResource,wil::err_returncode_policy>::~com_ptr_t<IBitmapResource,wil::err_returncode_policy>(&v23);
    return !HasRenderingRealization || v22;
  }
  if ( (char *)v16 == (char *)CPrimitiveGroupRenderStrategy::IsReadyToDraw )
  {
    v20 = v14[16];
    v18 = *(char (__fastcall **)(CPrimitiveGroup *))(*(_QWORD *)v20 + 216LL);
    if ( v18 == CPrimitiveGroup::IsEmptyDrawing )
    {
      v22 = CPrimitiveGroup::IsEmptyDrawing(v20);
      HasRenderingRealization = 1;
      return !HasRenderingRealization || v22;
    }
    goto LABEL_48;
  }
  if ( (char *)v16 == (char *)CVisualSurfaceRenderStrategy::IsReadyToDraw )
    HasRenderingRealization = CVisualSurface::HasSomethingToDraw(v14[16]);
  else
    HasRenderingRealization = (**v15)(
                                (CBitmapRenderStrategy *)v15,
                                *((const struct CSurfaceBrush **)v2 + 13),
                                0LL,
                                &v22);
  return !HasRenderingRealization || v22;
}
