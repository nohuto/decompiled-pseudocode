/*
 * XREFs of ?HasNonEmptyContent@CSpriteVisual@@UEBA_NXZ @ 0x18004C8A0
 * Callers:
 *     ?RenderContent@CVisual@@UEAAJPEAVCDrawingContext@@PEA_N@Z @ 0x1800500C0 (-RenderContent@CVisual@@UEAAJPEAVCDrawingContext@@PEA_N@Z.c)
 *     ?OnChanged@CVisual@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x18007FDF0 (-OnChanged@CVisual@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 * Callees:
 *     ?IsReadyToDraw@CColorBrush@@UEBA_NPEAVCDrawingContext@@PEA_N@Z @ 0x1800483F0 (-IsReadyToDraw@CColorBrush@@UEBA_NPEAVCDrawingContext@@PEA_N@Z.c)
 *     ?GetProjectedShadowReceivers@CVisual@@QEBAPEAV?$vector@PEAVCProjectedShadowReceiver@@V?$allocator@PEAVCProjectedShadowReceiver@@@std@@@std@@XZ @ 0x18004B570 (-GetProjectedShadowReceivers@CVisual@@QEBAPEAV-$vector@PEAVCProjectedShadowReceiver@@V-$allocato.c)
 *     ?HasSomethingToDraw@CVisualSurface@@QEBA_NXZ @ 0x18004BCE8 (-HasSomethingToDraw@CVisualSurface@@QEBA_NXZ.c)
 *     ?IsReadyToDraw@CEffectBrush@@UEBA_NPEAVCDrawingContext@@PEA_N@Z @ 0x18004D750 (-IsReadyToDraw@CEffectBrush@@UEBA_NPEAVCDrawingContext@@PEA_N@Z.c)
 *     ?IsReadyToDraw@CSurfaceBrush@@UEBA_NPEAVCDrawingContext@@PEA_N@Z @ 0x18004DB30 (-IsReadyToDraw@CSurfaceBrush@@UEBA_NPEAVCDrawingContext@@PEA_N@Z.c)
 *     ??1?$com_ptr_t@VIBitmapResource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18004DC30 (--1-$com_ptr_t@VIBitmapResource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?reset@?$com_ptr_t@VIBitmapResource@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x18004DD48 (-reset@-$com_ptr_t@VIBitmapResource@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?GetBitmap@CBitmapRenderStrategy@@SAXPEBVCSurfaceBrush@@PEAPEAVIBitmapResource@@@Z @ 0x18004DDC0 (-GetBitmap@CBitmapRenderStrategy@@SAXPEBVCSurfaceBrush@@PEAPEAVIBitmapResource@@@Z.c)
 *     ?HasRenderingRealization@CBitmapRenderStrategy@@SA_NPEAVIBitmapResource@@@Z @ 0x18004DE60 (-HasRenderingRealization@CBitmapRenderStrategy@@SA_NPEAVIBitmapResource@@@Z.c)
 *     ?IsEmptyDrawing@CPrimitiveGroup@@UEBA_NXZ @ 0x18004E490 (-IsEmptyDrawing@CPrimitiveGroup@@UEBA_NXZ.c)
 *     ?IsCloseRealZero@@YA_NMM@Z @ 0x18004F990 (-IsCloseRealZero@@YA_NMM@Z.c)
 *     ?empty@?$vector@PEAVCColorGradientStop@@V?$allocator@PEAVCColorGradientStop@@@std@@@std@@QEBA_NXZ @ 0x18004FAD0 (-empty@-$vector@PEAVCColorGradientStop@@V-$allocator@PEAVCColorGradientStop@@@std@@@std@@QEBA_NX.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

char __fastcall CSpriteVisual::HasNonEmptyContent(CSpriteVisual *this)
{
  __int64 v1; // rsi
  __int64 *v2; // r14
  _DWORD *v4; // r8
  bool (__fastcall *v6)(CColorBrush *__hidden); // rdx
  bool (__fastcall *v7)(CSurfaceBrush *__hidden, struct CDrawingContext *, bool *); // rax
  float *v8; // rcx
  char v9; // r15
  char (__fastcall *v10)(CColorBrush *, struct CDrawingContext *, bool *); // rax
  float *v11; // rbx
  char IsReadyToDraw; // al
  __int64 v13; // rcx
  bool v14; // al
  char HasRenderingRealization; // bl
  bool (__fastcall ***v16)(CBitmapRenderStrategy *__hidden, const struct CSurfaceBrush *, struct CDrawingContext *, bool *); // rcx
  bool (__fastcall *v17)(CBitmapRenderStrategy *__hidden, const struct CSurfaceBrush *, struct CDrawingContext *, bool *); // r10
  __int64 v18; // rax
  _BYTE *v19; // rdx
  unsigned int i; // ecx
  __int64 v21; // rax
  bool v22; // dl
  CSurfaceBrush *v23; // rcx
  char v24; // al
  CVisualSurface **v25; // rbx
  bool (__fastcall ***v26)(CBitmapRenderStrategy *__hidden, const struct CSurfaceBrush *, struct CDrawingContext *, bool *); // rcx
  bool (__fastcall *v27)(CBitmapRenderStrategy *__hidden, const struct CSurfaceBrush *, struct CDrawingContext *, bool *); // r10
  CPrimitiveGroup *v28; // rcx
  bool (__fastcall *v29)(CPrimitiveGroup *__hidden); // rdx
  char IsEmptyDrawing; // al
  bool (__fastcall *v31)(CSurfaceBrush *__hidden, struct CDrawingContext *, bool *); // rax
  bool v32; // al
  CPrimitiveGroup *v33; // rcx
  char HasSomethingToDraw; // al
  _QWORD *ProjectedShadowReceivers; // rax
  CColorBrush *v36; // rcx
  struct IBitmapResource *v37[2]; // [rsp+30h] [rbp-28h] BYREF
  bool v38; // [rsp+90h] [rbp+38h] BYREF
  bool v39; // [rsp+98h] [rbp+40h] BYREF
  char v40; // [rsp+A0h] [rbp+48h] BYREF
  struct IBitmapResource *v41; // [rsp+A8h] [rbp+50h] BYREF

  v1 = *((_QWORD *)this + 32);
  v2 = 0LL;
  if ( !v1 )
    goto LABEL_2;
  v6 = *(bool (__fastcall **)(CColorBrush *__hidden))(*(_QWORD *)v1 + 216LL);
  if ( v6 != CBrush::IsEmptyDrawing )
  {
    if ( v6 == CColorBrush::IsEmptyDrawing )
      v24 = IsCloseRealZero(*(float *)(v1 + 116), 0.0000011920929);
    else
      v24 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v1 + 216LL))(v1);
    if ( !v24 )
      return 1;
    goto LABEL_2;
  }
  v7 = *(bool (__fastcall **)(CSurfaceBrush *__hidden, struct CDrawingContext *, bool *))(*(_QWORD *)v1 + 312LL);
  v38 = 0;
  if ( v7 == CSurfaceBrush::IsReadyToDraw )
  {
    v16 = *(bool (__fastcall ****)(CBitmapRenderStrategy *__hidden, const struct CSurfaceBrush *, struct CDrawingContext *, bool *))(v1 + 136);
    v17 = **v16;
    if ( v17 == CBitmapRenderStrategy::IsReadyToDraw )
    {
      v41 = 0LL;
      wil::com_ptr_t<IBitmapResource,wil::err_returncode_policy>::reset(&v41);
      CBitmapRenderStrategy::GetBitmap((const struct CSurfaceBrush *)v1, &v41);
      HasRenderingRealization = CBitmapRenderStrategy::HasRenderingRealization(v41);
      wil::com_ptr_t<IBitmapResource,wil::err_returncode_policy>::~com_ptr_t<IBitmapResource,wil::err_returncode_policy>(&v41);
      goto LABEL_19;
    }
    if ( v17 == CPrimitiveGroupRenderStrategy::IsReadyToDraw )
    {
      v28 = *(CPrimitiveGroup **)(v1 + 128);
      v29 = *(bool (__fastcall **)(CPrimitiveGroup *__hidden))(*(_QWORD *)v28 + 216LL);
      if ( v29 == CPrimitiveGroup::IsEmptyDrawing )
      {
        IsEmptyDrawing = CPrimitiveGroup::IsEmptyDrawing(v28);
LABEL_45:
        v38 = IsEmptyDrawing;
        HasRenderingRealization = 1;
        goto LABEL_19;
      }
LABEL_76:
      IsEmptyDrawing = ((__int64 (*)(void))v29)();
      goto LABEL_45;
    }
    if ( v17 != CVisualSurfaceRenderStrategy::IsReadyToDraw )
    {
      HasRenderingRealization = (**v16)((CBitmapRenderStrategy *)v16, (const struct CSurfaceBrush *)v1, 0LL, &v38);
      goto LABEL_19;
    }
    HasSomethingToDraw = CVisualSurface::HasSomethingToDraw(*(CVisualSurface **)(v1 + 128));
LABEL_60:
    HasRenderingRealization = HasSomethingToDraw;
    goto LABEL_19;
  }
  if ( v7 == CMaskBrush::IsReadyToDraw )
  {
    v8 = *(float **)(v1 + 120);
    v9 = 0;
    v39 = 0;
    v40 = 0;
    if ( !v8 )
      goto LABEL_17;
    v10 = *(char (__fastcall **)(CColorBrush *, struct CDrawingContext *, bool *))(*(_QWORD *)v8 + 312LL);
    if ( (char *)v10 == (char *)CGradientBrush::IsReadyToDraw )
    {
      v11 = v8 + 42;
      v39 = std::vector<CColorGradientStop *>::empty(v8 + 42);
      IsReadyToDraw = std::vector<CColorGradientStop *>::empty(v11) ^ 1;
    }
    else
    {
      if ( v10 == CColorBrush::IsReadyToDraw )
      {
        v39 = IsCloseRealZero(v8[29], 0.0000011920929);
LABEL_12:
        v13 = *(_QWORD *)(v1 + 112);
        if ( !v13
          || (*(unsigned __int8 (__fastcall **)(__int64, _QWORD, char *))(*(_QWORD *)v13 + 312LL))(v13, 0LL, &v40) )
        {
          v9 = 1;
        }
LABEL_15:
        if ( v39 || v40 )
        {
          v14 = 1;
          goto LABEL_18;
        }
LABEL_17:
        v14 = 0;
LABEL_18:
        HasRenderingRealization = v9;
        v38 = v14;
        goto LABEL_19;
      }
      if ( (char *)v10 == (char *)CEffectBrush::IsReadyToDraw )
        IsReadyToDraw = CEffectBrush::IsReadyToDraw((CEffectBrush *)v8, 0LL, &v39);
      else
        IsReadyToDraw = v10((CColorBrush *)v8, 0LL, &v39);
    }
    if ( !IsReadyToDraw )
      goto LABEL_15;
    goto LABEL_12;
  }
  if ( v7 != CNineGridBrush::IsReadyToDraw )
  {
    v36 = (CColorBrush *)v1;
LABEL_72:
    HasSomethingToDraw = v7(v36, 0LL, &v38);
    goto LABEL_60;
  }
  v25 = *(CVisualSurface ***)(v1 + 104);
  if ( v25 )
  {
    v7 = (bool (__fastcall *)(CSurfaceBrush *__hidden, struct CDrawingContext *, bool *))*((_QWORD *)*v25 + 39);
    if ( v7 == CSurfaceBrush::IsReadyToDraw )
    {
      v26 = (bool (__fastcall ***)(CBitmapRenderStrategy *__hidden, const struct CSurfaceBrush *, struct CDrawingContext *, bool *))v25[17];
      v27 = **v26;
      if ( v27 == CBitmapRenderStrategy::IsReadyToDraw )
      {
        v37[0] = 0LL;
        wil::com_ptr_t<IBitmapResource,wil::err_returncode_policy>::reset(v37);
        CBitmapRenderStrategy::GetBitmap((const struct CSurfaceBrush *)v25, v37);
        HasRenderingRealization = CBitmapRenderStrategy::HasRenderingRealization(v37[0]);
        wil::com_ptr_t<IBitmapResource,wil::err_returncode_policy>::~com_ptr_t<IBitmapResource,wil::err_returncode_policy>(v37);
        goto LABEL_19;
      }
      if ( v27 != CPrimitiveGroupRenderStrategy::IsReadyToDraw )
      {
        if ( v27 == CVisualSurfaceRenderStrategy::IsReadyToDraw )
          HasRenderingRealization = CVisualSurface::HasSomethingToDraw(v25[16]);
        else
          HasRenderingRealization = (**v26)(
                                      (CBitmapRenderStrategy *)v26,
                                      *(const struct CSurfaceBrush **)(v1 + 104),
                                      0LL,
                                      &v38);
LABEL_19:
        if ( HasRenderingRealization && !v38 )
          return 1;
        goto LABEL_2;
      }
      v33 = v25[16];
      v29 = *(bool (__fastcall **)(CPrimitiveGroup *__hidden))(*(_QWORD *)v33 + 216LL);
      if ( v29 == CPrimitiveGroup::IsEmptyDrawing )
      {
        v38 = CPrimitiveGroup::IsEmptyDrawing(v33);
        HasRenderingRealization = 1;
        goto LABEL_19;
      }
      goto LABEL_76;
    }
    v36 = *(CColorBrush **)(v1 + 104);
    if ( (char *)v7 == (char *)CColorBrush::IsReadyToDraw )
    {
      HasRenderingRealization = CColorBrush::IsReadyToDraw(v36, 0LL, &v38);
      goto LABEL_19;
    }
    goto LABEL_72;
  }
LABEL_2:
  if ( (**((_DWORD **)this + 29) & 0x40000) == 0
    || (ProjectedShadowReceivers = (_QWORD *)CVisual::GetProjectedShadowReceivers((__int64)this),
        *ProjectedShadowReceivers == ProjectedShadowReceivers[1]) )
  {
    v4 = (_DWORD *)*((_QWORD *)this + 29);
    if ( (*v4 & 0x20000) == 0 )
      return 0;
    v18 = (unsigned int)v4[1];
    v19 = v4 + 2;
    for ( i = 0; i < (unsigned int)v18; ++v19 )
    {
      if ( *v19 == 15 )
        break;
      ++i;
    }
    if ( i < (unsigned int)v18 )
      v2 = (__int64 *)((char *)v4 + v18 + 8LL * i - (((_BYTE)v18 + 15) & 7) + 15);
    v21 = *v2;
    v22 = 0;
    v38 = 0;
    if ( COERCE_FLOAT(*(_DWORD *)(v21 + 92) & _xmm) < 0.0000011920929 )
      return 0;
    if ( *(_DWORD *)(v21 + 124) != 1 )
    {
      v23 = *(CSurfaceBrush **)(v21 + 176);
      if ( v23 )
      {
        v31 = *(bool (__fastcall **)(CSurfaceBrush *__hidden, struct CDrawingContext *, bool *))(*(_QWORD *)v23 + 312LL);
        if ( v31 == CSurfaceBrush::IsReadyToDraw )
          v32 = CSurfaceBrush::IsReadyToDraw(v23, 0LL, &v38);
        else
          v32 = v31(v23, 0LL, &v38);
        if ( !v32 )
          return 0;
        v22 = v38;
      }
      if ( v22 )
        return 0;
    }
  }
  return 1;
}
