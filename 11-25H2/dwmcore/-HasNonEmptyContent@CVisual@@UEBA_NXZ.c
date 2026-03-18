/*
 * XREFs of ?HasNonEmptyContent@CVisual@@UEBA_NXZ @ 0x1800D1450
 * Callers:
 *     ?OnChanged@CVisual@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x180020CD0 (-OnChanged@CVisual@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?RenderContent@CVisual@@UEAAJPEAVCDrawingContext@@PEA_N@Z @ 0x1800D2B10 (-RenderContent@CVisual@@UEAAJPEAVCDrawingContext@@PEA_N@Z.c)
 *     ?PostSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x18012B970 (-PostSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?HasSingleD2DBitmapOrPrimitiveGroupInternal@CWindowNode@@MEBA_NXZ @ 0x1801D4F20 (-HasSingleD2DBitmapOrPrimitiveGroupInternal@CWindowNode@@MEBA_NXZ.c)
 *     ?HasNonEmptyContent@CCursorVisual@@UEBA_NXZ @ 0x18029A7A0 (-HasNonEmptyContent@CCursorVisual@@UEBA_NXZ.c)
 * Callees:
 *     ?IsReadyToDraw@CColorBrush@@UEBA_NPEAVCDrawingContext@@PEA_N@Z @ 0x18005B2A0 (-IsReadyToDraw@CColorBrush@@UEBA_NPEAVCDrawingContext@@PEA_N@Z.c)
 *     ?IsReadyToDraw@CEffectBrush@@UEBA_NPEAVCDrawingContext@@PEA_N@Z @ 0x1800D01B0 (-IsReadyToDraw@CEffectBrush@@UEBA_NPEAVCDrawingContext@@PEA_N@Z.c)
 *     ??1?$com_ptr_t@VIBitmapResource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800D0690 (--1-$com_ptr_t@VIBitmapResource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?reset@?$com_ptr_t@VIBitmapResource@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800D07A8 (-reset@-$com_ptr_t@VIBitmapResource@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?GetBitmap@CBitmapRenderStrategy@@SAXPEBVCSurfaceBrush@@PEAPEAVIBitmapResource@@@Z @ 0x1800D0820 (-GetBitmap@CBitmapRenderStrategy@@SAXPEBVCSurfaceBrush@@PEAPEAVIBitmapResource@@@Z.c)
 *     ?HasRenderingRealization@CBitmapRenderStrategy@@SA_NPEAVIBitmapResource@@@Z @ 0x1800D08C0 (-HasRenderingRealization@CBitmapRenderStrategy@@SA_NPEAVIBitmapResource@@@Z.c)
 *     ?IsEmptyDrawing@CPrimitiveGroup@@UEBA_NXZ @ 0x1800D0EE0 (-IsEmptyDrawing@CPrimitiveGroup@@UEBA_NXZ.c)
 *     ?IsCloseRealZero@@YA_NMM@Z @ 0x1800D23E0 (-IsCloseRealZero@@YA_NMM@Z.c)
 *     ?empty@?$vector@PEAVCColorGradientStop@@V?$allocator@PEAVCColorGradientStop@@@std@@@std@@QEBA_NXZ @ 0x1800D2520 (-empty@-$vector@PEAVCColorGradientStop@@V-$allocator@PEAVCColorGradientStop@@@std@@@std@@QEBA_NX.c)
 *     ?HasSomethingToDraw@CVisualSurface@@QEBA_NXZ @ 0x1801309F4 (-HasSomethingToDraw@CVisualSurface@@QEBA_NXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

bool __fastcall CVisual::HasNonEmptyContent(CVisual *this)
{
  __int64 v1; // rdi
  char *v2; // r14
  _DWORD *v4; // r8
  bool (__fastcall *v6)(CColorBrush *__hidden); // rdx
  char (__fastcall *v7)(CSurfaceBrush *, struct CDrawingContext *, bool *); // rax
  float *v8; // rbx
  char v9; // r15
  char (__fastcall *v10)(CColorBrush *, struct CDrawingContext *, bool *); // rax
  char IsReadyToDraw; // al
  __int64 v12; // rcx
  bool v13; // al
  char HasRenderingRealization; // bl
  _BOOL8 (__fastcall ***v15)(CBitmapRenderStrategy *, const struct CSurfaceBrush *, struct CDrawingContext *, bool *); // rcx
  _BOOL8 (__fastcall *v16)(CBitmapRenderStrategy *, const struct CSurfaceBrush *, struct CDrawingContext *, bool *); // r10
  char v17; // al
  CVisualSurface **v18; // rbx
  _BOOL8 (__fastcall ***v19)(CBitmapRenderStrategy *, const struct CSurfaceBrush *, struct CDrawingContext *, bool *); // rcx
  _BOOL8 (__fastcall *v20)(CBitmapRenderStrategy *, const struct CSurfaceBrush *, struct CDrawingContext *, bool *); // r10
  CPrimitiveGroup *v21; // rcx
  char (__fastcall *v22)(CPrimitiveGroup *); // rdx
  char IsEmptyDrawing; // al
  CPrimitiveGroup *v24; // rcx
  char HasSomethingToDraw; // al
  __int64 v26; // rcx
  _BYTE *v27; // rax
  unsigned int i; // r9d
  CColorBrush *v29; // rcx
  struct IBitmapResource *v30[3]; // [rsp+30h] [rbp-20h] BYREF
  bool v31; // [rsp+80h] [rbp+30h] BYREF
  bool v32; // [rsp+88h] [rbp+38h] BYREF
  char v33; // [rsp+90h] [rbp+40h] BYREF
  struct IBitmapResource *v34; // [rsp+98h] [rbp+48h] BYREF

  v1 = *((_QWORD *)this + 32);
  v2 = 0LL;
  if ( !v1 )
    goto LABEL_2;
  v6 = *(bool (__fastcall **)(CColorBrush *__hidden))(*(_QWORD *)v1 + 216LL);
  if ( (char *)v6 != (char *)CBrush::IsEmptyDrawing )
  {
    if ( v6 == CColorBrush::IsEmptyDrawing )
      v17 = IsCloseRealZero(*(float *)(v1 + 116), 0.0000011920929);
    else
      v17 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v1 + 216LL))(v1);
    if ( !v17 )
      return 1;
    goto LABEL_2;
  }
  v7 = *(char (__fastcall **)(CSurfaceBrush *, struct CDrawingContext *, bool *))(*(_QWORD *)v1 + 312LL);
  v31 = 0;
  if ( v7 == CSurfaceBrush::IsReadyToDraw )
  {
    v15 = *(_BOOL8 (__fastcall ****)(CBitmapRenderStrategy *, const struct CSurfaceBrush *, struct CDrawingContext *, bool *))(v1 + 136);
    v16 = **v15;
    if ( v16 == CBitmapRenderStrategy::IsReadyToDraw )
    {
      v34 = 0LL;
      wil::com_ptr_t<IBitmapResource,wil::err_returncode_policy>::reset(&v34);
      CBitmapRenderStrategy::GetBitmap((const struct CSurfaceBrush *)v1, &v34);
      HasRenderingRealization = CBitmapRenderStrategy::HasRenderingRealization(v34);
      wil::com_ptr_t<IBitmapResource,wil::err_returncode_policy>::~com_ptr_t<IBitmapResource,wil::err_returncode_policy>(&v34);
      goto LABEL_18;
    }
    if ( (char *)v16 == (char *)CPrimitiveGroupRenderStrategy::IsReadyToDraw )
    {
      v21 = *(CPrimitiveGroup **)(v1 + 128);
      v22 = *(char (__fastcall **)(CPrimitiveGroup *))(*(_QWORD *)v21 + 216LL);
      if ( v22 == CPrimitiveGroup::IsEmptyDrawing )
      {
        IsEmptyDrawing = CPrimitiveGroup::IsEmptyDrawing(v21);
LABEL_35:
        v31 = IsEmptyDrawing;
        HasRenderingRealization = 1;
        goto LABEL_18;
      }
LABEL_65:
      IsEmptyDrawing = ((__int64 (*)(void))v22)();
      goto LABEL_35;
    }
    if ( (char *)v16 != (char *)CVisualSurfaceRenderStrategy::IsReadyToDraw )
    {
      HasRenderingRealization = (**v15)((CBitmapRenderStrategy *)v15, (const struct CSurfaceBrush *)v1, 0LL, &v31);
      goto LABEL_18;
    }
    HasSomethingToDraw = CVisualSurface::HasSomethingToDraw(*(CVisualSurface **)(v1 + 128));
LABEL_44:
    HasRenderingRealization = HasSomethingToDraw;
    goto LABEL_18;
  }
  if ( (char *)v7 == (char *)CMaskBrush::IsReadyToDraw )
  {
    v8 = *(float **)(v1 + 120);
    v9 = 0;
    v32 = 0;
    v33 = 0;
    if ( !v8 )
      goto LABEL_16;
    v10 = *(char (__fastcall **)(CColorBrush *, struct CDrawingContext *, bool *))(*(_QWORD *)v8 + 312LL);
    if ( (char *)v10 == (char *)CGradientBrush::IsReadyToDraw )
    {
      v32 = std::vector<CColorGradientStop *>::empty(v8 + 42);
      IsReadyToDraw = std::vector<CColorGradientStop *>::empty(v8 + 42) ^ 1;
    }
    else
    {
      if ( v10 == CColorBrush::IsReadyToDraw )
      {
        v32 = IsCloseRealZero(v8[29], 0.0000011920929);
LABEL_11:
        v12 = *(_QWORD *)(v1 + 112);
        if ( !v12
          || (*(unsigned __int8 (__fastcall **)(__int64, _QWORD, char *))(*(_QWORD *)v12 + 312LL))(v12, 0LL, &v33) )
        {
          v9 = 1;
        }
LABEL_14:
        if ( v32 || v33 )
        {
          v13 = 1;
          goto LABEL_17;
        }
LABEL_16:
        v13 = 0;
LABEL_17:
        HasRenderingRealization = v9;
        v31 = v13;
        goto LABEL_18;
      }
      if ( v10 == CEffectBrush::IsReadyToDraw )
        IsReadyToDraw = CEffectBrush::IsReadyToDraw((CEffectBrush *)v8, 0LL, &v32);
      else
        IsReadyToDraw = v10((CColorBrush *)v8, 0LL, &v32);
    }
    if ( !IsReadyToDraw )
      goto LABEL_14;
    goto LABEL_11;
  }
  if ( v7 != CNineGridBrush::IsReadyToDraw )
  {
    v29 = (CColorBrush *)v1;
LABEL_61:
    HasSomethingToDraw = v7(v29, 0LL, &v31);
    goto LABEL_44;
  }
  v18 = *(CVisualSurface ***)(v1 + 104);
  if ( v18 )
  {
    v7 = (char (__fastcall *)(CSurfaceBrush *, struct CDrawingContext *, bool *))*((_QWORD *)*v18 + 39);
    if ( v7 == CSurfaceBrush::IsReadyToDraw )
    {
      v19 = (_BOOL8 (__fastcall ***)(CBitmapRenderStrategy *, const struct CSurfaceBrush *, struct CDrawingContext *, bool *))v18[17];
      v20 = **v19;
      if ( v20 == CBitmapRenderStrategy::IsReadyToDraw )
      {
        v30[0] = 0LL;
        wil::com_ptr_t<IBitmapResource,wil::err_returncode_policy>::reset(v30);
        CBitmapRenderStrategy::GetBitmap((const struct CSurfaceBrush *)v18, v30);
        HasRenderingRealization = CBitmapRenderStrategy::HasRenderingRealization(v30[0]);
        wil::com_ptr_t<IBitmapResource,wil::err_returncode_policy>::~com_ptr_t<IBitmapResource,wil::err_returncode_policy>(v30);
        goto LABEL_18;
      }
      if ( (char *)v20 != (char *)CPrimitiveGroupRenderStrategy::IsReadyToDraw )
      {
        if ( (char *)v20 == (char *)CVisualSurfaceRenderStrategy::IsReadyToDraw )
          HasRenderingRealization = CVisualSurface::HasSomethingToDraw(v18[16]);
        else
          HasRenderingRealization = (**v19)(
                                      (CBitmapRenderStrategy *)v19,
                                      *(const struct CSurfaceBrush **)(v1 + 104),
                                      0LL,
                                      &v31);
LABEL_18:
        if ( HasRenderingRealization && !v31 )
          return 1;
        goto LABEL_2;
      }
      v24 = v18[16];
      v22 = *(char (__fastcall **)(CPrimitiveGroup *))(*(_QWORD *)v24 + 216LL);
      if ( v22 == CPrimitiveGroup::IsEmptyDrawing )
      {
        v31 = CPrimitiveGroup::IsEmptyDrawing(v24);
        HasRenderingRealization = 1;
        goto LABEL_18;
      }
      goto LABEL_65;
    }
    v29 = *(CColorBrush **)(v1 + 104);
    if ( v7 == CColorBrush::IsReadyToDraw )
    {
      HasRenderingRealization = CColorBrush::IsReadyToDraw(v29, 0LL, &v31);
      goto LABEL_18;
    }
    goto LABEL_61;
  }
LABEL_2:
  v4 = (_DWORD *)*((_QWORD *)this + 29);
  if ( (*v4 & 0x40000) == 0 )
    return 0;
  v26 = (unsigned int)v4[1];
  v27 = v4 + 2;
  for ( i = 0; i < (unsigned int)v26; ++v27 )
  {
    if ( *v27 == 14 )
      break;
    ++i;
  }
  if ( i < (unsigned int)v26 )
    v2 = (char *)v4 + v26 + 8LL * i - (((_BYTE)v26 + 15) & 7) + 15;
  return **(_QWORD **)v2 != *(_QWORD *)(*(_QWORD *)v2 + 8LL);
}
