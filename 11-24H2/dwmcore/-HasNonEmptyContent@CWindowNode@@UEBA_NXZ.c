/*
 * XREFs of ?HasNonEmptyContent@CWindowNode@@UEBA_NXZ @ 0x180049B40
 * Callers:
 *     ?SetSpriteBitmap@CWindowNode@@QEAAJPEAVCGdiSpriteBitmap@@@Z @ 0x1800495FC (-SetSpriteBitmap@CWindowNode@@QEAAJPEAVCGdiSpriteBitmap@@@Z.c)
 *     ?RenderContent@CVisual@@UEAAJPEAVCDrawingContext@@PEA_N@Z @ 0x1800500C0 (-RenderContent@CVisual@@UEAAJPEAVCDrawingContext@@PEA_N@Z.c)
 *     ?SetFlipExSurface@CWindowNode@@QEAAJPEAX@Z @ 0x1801A159C (-SetFlipExSurface@CWindowNode@@QEAAJPEAX@Z.c)
 *     ?HasVisibleCursor@CWindowNode@@UEBA_NXZ @ 0x180277170 (-HasVisibleCursor@CWindowNode@@UEBA_NXZ.c)
 * Callees:
 *     ?IsReadyToDraw@CColorBrush@@UEBA_NPEAVCDrawingContext@@PEA_N@Z @ 0x1800483F0 (-IsReadyToDraw@CColorBrush@@UEBA_NPEAVCDrawingContext@@PEA_N@Z.c)
 *     ?GetProjectedShadowReceivers@CVisual@@QEBAPEAV?$vector@PEAVCProjectedShadowReceiver@@V?$allocator@PEAVCProjectedShadowReceiver@@@std@@@std@@XZ @ 0x18004B570 (-GetProjectedShadowReceivers@CVisual@@QEBAPEAV-$vector@PEAVCProjectedShadowReceiver@@V-$allocato.c)
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

bool __fastcall CWindowNode::HasNonEmptyContent(CWindowNode *this)
{
  __int64 v1; // rax
  __int64 v3; // rsi
  __int64 v5; // rax
  bool (__fastcall *v7)(CColorBrush *__hidden); // rdx
  bool (__fastcall *v8)(CSurfaceBrush *__hidden, struct CDrawingContext *, bool *); // rax
  float *v9; // rbx
  char v10; // r14
  char (__fastcall *v11)(CColorBrush *, struct CDrawingContext *, bool *); // rax
  char IsReadyToDraw; // al
  __int64 v13; // rcx
  bool v14; // al
  char HasRenderingRealization; // bl
  bool (__fastcall ***v16)(CBitmapRenderStrategy *__hidden, const struct CSurfaceBrush *, struct CDrawingContext *, bool *); // rcx
  bool (__fastcall *v17)(CBitmapRenderStrategy *__hidden, const struct CSurfaceBrush *, struct CDrawingContext *, bool *); // r10
  char v18; // al
  CVisualSurface **v19; // rbx
  bool (__fastcall ***v20)(CBitmapRenderStrategy *__hidden, const struct CSurfaceBrush *, struct CDrawingContext *, bool *); // rcx
  bool (__fastcall *v21)(CBitmapRenderStrategy *__hidden, const struct CSurfaceBrush *, struct CDrawingContext *, bool *); // r10
  CPrimitiveGroup *v22; // rcx
  bool (__fastcall *v23)(CPrimitiveGroup *__hidden); // rdx
  char IsEmptyDrawing; // al
  __int64 v25; // rax
  CPrimitiveGroup *v27; // rcx
  char HasSomethingToDraw; // al
  _QWORD *ProjectedShadowReceivers; // rax
  CColorBrush *v30; // rcx
  struct IBitmapResource *v31[2]; // [rsp+30h] [rbp-28h] BYREF
  bool v32; // [rsp+70h] [rbp+18h] BYREF
  bool v33; // [rsp+78h] [rbp+20h] BYREF
  char v34; // [rsp+80h] [rbp+28h] BYREF
  struct IBitmapResource *v35; // [rsp+88h] [rbp+30h] BYREF

  v1 = *((_QWORD *)this + 102);
  if ( !v1 || !*(_BYTE *)(v1 + 160) )
  {
    if ( !*((_BYTE *)this + 753) )
    {
      v5 = *((_QWORD *)this + 104);
      if ( (v5 & 2) != 0 ? *(_QWORD *)(v5 & 0xFFFFFFFFFFFFFFFCuLL) : *((_QWORD *)this + 104) & 1LL )
        return 1;
    }
    v25 = *((_QWORD *)this + 105);
    if ( (v25 & 2) != 0 ? *(_QWORD *)(v25 & 0xFFFFFFFFFFFFFFFCuLL) : *((_QWORD *)this + 105) & 1LL )
      return 1;
  }
  v3 = *((_QWORD *)this + 32);
  if ( !v3 )
    goto LABEL_4;
  v7 = *(bool (__fastcall **)(CColorBrush *__hidden))(*(_QWORD *)v3 + 216LL);
  if ( v7 != CBrush::IsEmptyDrawing )
  {
    if ( v7 == CColorBrush::IsEmptyDrawing )
      v18 = IsCloseRealZero(*(float *)(v3 + 116), 0.0000011920929);
    else
      v18 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v3 + 216LL))(v3);
    if ( !v18 )
      return 1;
LABEL_4:
    if ( (**((_DWORD **)this + 29) & 0x40000) == 0 )
      return 0;
    ProjectedShadowReceivers = (_QWORD *)CVisual::GetProjectedShadowReceivers(this);
    return *ProjectedShadowReceivers != ProjectedShadowReceivers[1];
  }
  v8 = *(bool (__fastcall **)(CSurfaceBrush *__hidden, struct CDrawingContext *, bool *))(*(_QWORD *)v3 + 312LL);
  v32 = 0;
  if ( v8 == CSurfaceBrush::IsReadyToDraw )
  {
    v16 = *(bool (__fastcall ****)(CBitmapRenderStrategy *__hidden, const struct CSurfaceBrush *, struct CDrawingContext *, bool *))(v3 + 136);
    v17 = **v16;
    if ( v17 == CBitmapRenderStrategy::IsReadyToDraw )
    {
      v35 = 0LL;
      wil::com_ptr_t<IBitmapResource,wil::err_returncode_policy>::reset(&v35);
      CBitmapRenderStrategy::GetBitmap((const struct CSurfaceBrush *)v3, &v35);
      HasRenderingRealization = CBitmapRenderStrategy::HasRenderingRealization(v35);
      wil::com_ptr_t<IBitmapResource,wil::err_returncode_policy>::~com_ptr_t<IBitmapResource,wil::err_returncode_policy>(&v35);
      goto LABEL_26;
    }
    if ( v17 == CPrimitiveGroupRenderStrategy::IsReadyToDraw )
    {
      v22 = *(CPrimitiveGroup **)(v3 + 128);
      v23 = *(bool (__fastcall **)(CPrimitiveGroup *__hidden))(*(_QWORD *)v22 + 216LL);
      if ( v23 == CPrimitiveGroup::IsEmptyDrawing )
      {
        IsEmptyDrawing = CPrimitiveGroup::IsEmptyDrawing(v22);
LABEL_43:
        v32 = IsEmptyDrawing;
        HasRenderingRealization = 1;
        goto LABEL_26;
      }
LABEL_72:
      IsEmptyDrawing = ((__int64 (*)(void))v23)();
      goto LABEL_43;
    }
    if ( v17 != CVisualSurfaceRenderStrategy::IsReadyToDraw )
    {
      HasRenderingRealization = (**v16)((CBitmapRenderStrategy *)v16, (const struct CSurfaceBrush *)v3, 0LL, &v32);
      goto LABEL_26;
    }
    HasSomethingToDraw = CVisualSurface::HasSomethingToDraw(*(CVisualSurface **)(v3 + 128));
LABEL_57:
    HasRenderingRealization = HasSomethingToDraw;
    goto LABEL_26;
  }
  if ( v8 == CMaskBrush::IsReadyToDraw )
  {
    v9 = *(float **)(v3 + 120);
    v10 = 0;
    v33 = 0;
    v34 = 0;
    if ( !v9 )
      goto LABEL_24;
    v11 = *(char (__fastcall **)(CColorBrush *, struct CDrawingContext *, bool *))(*(_QWORD *)v9 + 312LL);
    if ( (char *)v11 == (char *)CGradientBrush::IsReadyToDraw )
    {
      v33 = std::vector<CColorGradientStop *>::empty(v9 + 42);
      IsReadyToDraw = std::vector<CColorGradientStop *>::empty(v9 + 42) ^ 1;
    }
    else
    {
      if ( v11 == CColorBrush::IsReadyToDraw )
      {
        v33 = IsCloseRealZero(v9[29], 0.0000011920929);
LABEL_19:
        v13 = *(_QWORD *)(v3 + 112);
        if ( !v13
          || (*(unsigned __int8 (__fastcall **)(__int64, _QWORD, char *))(*(_QWORD *)v13 + 312LL))(v13, 0LL, &v34) )
        {
          v10 = 1;
        }
LABEL_22:
        if ( v33 || v34 )
        {
          v14 = 1;
          goto LABEL_25;
        }
LABEL_24:
        v14 = 0;
LABEL_25:
        HasRenderingRealization = v10;
        v32 = v14;
        goto LABEL_26;
      }
      if ( (char *)v11 == (char *)CEffectBrush::IsReadyToDraw )
        IsReadyToDraw = CEffectBrush::IsReadyToDraw((CEffectBrush *)v9, 0LL, &v33);
      else
        IsReadyToDraw = v11((CColorBrush *)v9, 0LL, &v33);
    }
    if ( !IsReadyToDraw )
      goto LABEL_22;
    goto LABEL_19;
  }
  if ( v8 != CNineGridBrush::IsReadyToDraw )
  {
    v30 = (CColorBrush *)v3;
LABEL_68:
    HasSomethingToDraw = v8(v30, 0LL, &v32);
    goto LABEL_57;
  }
  v19 = *(CVisualSurface ***)(v3 + 104);
  if ( !v19 )
    goto LABEL_4;
  v8 = (bool (__fastcall *)(CSurfaceBrush *__hidden, struct CDrawingContext *, bool *))*((_QWORD *)*v19 + 39);
  if ( v8 != CSurfaceBrush::IsReadyToDraw )
  {
    v30 = *(CColorBrush **)(v3 + 104);
    if ( (char *)v8 == (char *)CColorBrush::IsReadyToDraw )
    {
      HasRenderingRealization = CColorBrush::IsReadyToDraw(v30, 0LL, &v32);
      goto LABEL_26;
    }
    goto LABEL_68;
  }
  v20 = (bool (__fastcall ***)(CBitmapRenderStrategy *__hidden, const struct CSurfaceBrush *, struct CDrawingContext *, bool *))v19[17];
  v21 = **v20;
  if ( v21 == CBitmapRenderStrategy::IsReadyToDraw )
  {
    v31[0] = 0LL;
    wil::com_ptr_t<IBitmapResource,wil::err_returncode_policy>::reset(v31);
    CBitmapRenderStrategy::GetBitmap((const struct CSurfaceBrush *)v19, v31);
    HasRenderingRealization = CBitmapRenderStrategy::HasRenderingRealization(v31[0]);
    wil::com_ptr_t<IBitmapResource,wil::err_returncode_policy>::~com_ptr_t<IBitmapResource,wil::err_returncode_policy>(v31);
    goto LABEL_26;
  }
  if ( v21 == CPrimitiveGroupRenderStrategy::IsReadyToDraw )
  {
    v27 = v19[16];
    v23 = *(bool (__fastcall **)(CPrimitiveGroup *__hidden))(*(_QWORD *)v27 + 216LL);
    if ( v23 == CPrimitiveGroup::IsEmptyDrawing )
    {
      v32 = CPrimitiveGroup::IsEmptyDrawing(v27);
      HasRenderingRealization = 1;
      goto LABEL_26;
    }
    goto LABEL_72;
  }
  if ( v21 == CVisualSurfaceRenderStrategy::IsReadyToDraw )
    HasRenderingRealization = CVisualSurface::HasSomethingToDraw(v19[16]);
  else
    HasRenderingRealization = (**v20)(
                                (CBitmapRenderStrategy *)v20,
                                *(const struct CSurfaceBrush **)(v3 + 104),
                                0LL,
                                &v32);
LABEL_26:
  if ( !HasRenderingRealization || v32 )
    goto LABEL_4;
  return 1;
}
