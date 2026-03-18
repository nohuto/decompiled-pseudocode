/*
 * XREFs of ?IsReadyToDraw@CEffectBrush@@UEBA_NPEAVCDrawingContext@@PEA_N@Z @ 0x1800D01B0
 * Callers:
 *     ?Draw@CSurfaceRenderStrategy@CSurfaceBrush@@UEBAJPEAV2@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x180072230 (-Draw@CSurfaceRenderStrategy@CSurfaceBrush@@UEBAJPEAV2@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAV.c)
 *     ?PostSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x1800B8E40 (-PostSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?HasNonEmptyContent@CSpriteVisual@@UEBA_NXZ @ 0x1800CF300 (-HasNonEmptyContent@CSpriteVisual@@UEBA_NXZ.c)
 *     ?IsReadyToDraw@CEffectBrush@@UEBA_NPEAVCDrawingContext@@PEA_N@Z @ 0x1800D01B0 (-IsReadyToDraw@CEffectBrush@@UEBA_NPEAVCDrawingContext@@PEA_N@Z.c)
 *     ?IsEmptyDrawing@CBrush@@UEBA_NXZ @ 0x1800D10D0 (-IsEmptyDrawing@CBrush@@UEBA_NXZ.c)
 *     ?HasNonEmptyContent@CVisual@@UEBA_NXZ @ 0x1800D1450 (-HasNonEmptyContent@CVisual@@UEBA_NXZ.c)
 *     ?IsReadyToDraw@CMaskBrush@@UEBA_NPEAVCDrawingContext@@PEA_N@Z @ 0x1800D2400 (-IsReadyToDraw@CMaskBrush@@UEBA_NPEAVCDrawingContext@@PEA_N@Z.c)
 *     ?RenderContent@CVisual@@UEAAJPEAVCDrawingContext@@PEA_N@Z @ 0x1800D2B10 (-RenderContent@CVisual@@UEAAJPEAVCDrawingContext@@PEA_N@Z.c)
 *     ?Draw@CBrush@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x1800D3ED0 (-Draw@CBrush@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z.c)
 *     ?HasNonEmptyContent@CWindowNode@@UEBA_NXZ @ 0x180130500 (-HasNonEmptyContent@CWindowNode@@UEBA_NXZ.c)
 *     ?RenderContentWorker@CVisual@@KAJPEAV1@PEAVCContent@@IIPEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z @ 0x18014C600 (-RenderContentWorker@CVisual@@KAJPEAV1@PEAVCContent@@IIPEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z.c)
 * Callees:
 *     ?IsReadyToDraw@CColorBrush@@UEBA_NPEAVCDrawingContext@@PEA_N@Z @ 0x18005B2A0 (-IsReadyToDraw@CColorBrush@@UEBA_NPEAVCDrawingContext@@PEA_N@Z.c)
 *     ?IsReadyToDraw@CEffectBrush@@UEBA_NPEAVCDrawingContext@@PEA_N@Z @ 0x1800D01B0 (-IsReadyToDraw@CEffectBrush@@UEBA_NPEAVCDrawingContext@@PEA_N@Z.c)
 *     ??1?$com_ptr_t@VIBitmapResource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800D0690 (--1-$com_ptr_t@VIBitmapResource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?reset@?$com_ptr_t@VIBitmapResource@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800D07A8 (-reset@-$com_ptr_t@VIBitmapResource@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?GetBitmap@CBitmapRenderStrategy@@SAXPEBVCSurfaceBrush@@PEAPEAVIBitmapResource@@@Z @ 0x1800D0820 (-GetBitmap@CBitmapRenderStrategy@@SAXPEBVCSurfaceBrush@@PEAPEAVIBitmapResource@@@Z.c)
 *     ?HasRenderingRealization@CBitmapRenderStrategy@@SA_NPEAVIBitmapResource@@@Z @ 0x1800D08C0 (-HasRenderingRealization@CBitmapRenderStrategy@@SA_NPEAVIBitmapResource@@@Z.c)
 *     ?IsEmptyDrawing@CPrimitiveGroup@@UEBA_NXZ @ 0x1800D0EE0 (-IsEmptyDrawing@CPrimitiveGroup@@UEBA_NXZ.c)
 *     ?HasSomethingToDraw@CVisualSurface@@QEBA_NXZ @ 0x1801309F4 (-HasSomethingToDraw@CVisualSurface@@QEBA_NXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

char __fastcall CEffectBrush::IsReadyToDraw(CEffectBrush *this, struct CDrawingContext *a2, bool *a3)
{
  __int64 v4; // rcx
  char v6; // cl
  char *v7; // rax
  _QWORD *v8; // r8
  __int64 v10; // rcx
  struct CTreeEffect *(__fastcall *v11)(CLayerVisual *); // rax
  __int64 v12; // rax
  char v13; // r15
  unsigned int v14; // esi
  __int64 i; // rbx
  const struct CSurfaceBrush *v16; // rdi
  __int64 v17; // rax
  char (__fastcall *v18)(CColorBrush *, struct CDrawingContext *, bool *); // rax
  bool (__fastcall ***v19)(CBitmapRenderStrategy *__hidden, const struct CSurfaceBrush *, struct CDrawingContext *, bool *); // rcx
  bool (__fastcall *v20)(CBitmapRenderStrategy *__hidden, const struct CSurfaceBrush *, struct CDrawingContext *, bool *); // rax
  char HasRenderingRealization; // di
  CPrimitiveGroup *v22; // rcx
  bool (__fastcall *v23)(CPrimitiveGroup *__hidden); // rax
  char HasSomethingToDraw; // al
  bool v26; // [rsp+70h] [rbp+8h] BYREF
  struct IBitmapResource *v27; // [rsp+80h] [rbp+18h] BYREF

  *a3 = 0;
  v4 = *((_QWORD *)this + 16);
  if ( v4 && (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v4 + 64LL))(v4) )
  {
    if ( !a2 || !*((_BYTE *)a2 + 7936) )
      goto LABEL_13;
    v6 = *((_BYTE *)a2 + 7937);
    v7 = (char *)a2 + 3216;
    v8 = (_QWORD *)((char *)a2 + 7952);
    if ( !(v6 ? *(_QWORD *)v7 : *v8) )
      goto LABEL_13;
    if ( !v6 )
      v7 = (char *)a2 + 7952;
    v10 = *(_QWORD *)v7;
    v11 = *(struct CTreeEffect *(__fastcall **)(CLayerVisual *))(**(_QWORD **)v7 + 224LL);
    v12 = v11 == CLayerVisual::GetTreeEffect
        ? *(_QWORD *)(v10 + 680)
        : ((__int64 (__fastcall *)(__int64, struct CTreeEffect *(__fastcall *)(CLayerVisual *), _QWORD *))v11)(
            v10,
            CLayerVisual::GetTreeEffect,
            v8);
    if ( v12 && *(_QWORD *)(v12 + 8) )
      v13 = 1;
    else
LABEL_13:
      v13 = 0;
    v14 = *((_DWORD *)this + 40);
    for ( i = 0LL; ; i = (unsigned int)(i + 1) )
    {
      if ( (unsigned int)i >= v14 )
        return 1;
      v16 = *(const struct CSurfaceBrush **)(*((_QWORD *)this + 17) + 8 * i);
      if ( v16 )
        break;
      if ( !v13 )
        return 0;
LABEL_21:
      ;
    }
    v17 = *(_QWORD *)v16;
    v26 = 0;
    v18 = *(char (__fastcall **)(CColorBrush *, struct CDrawingContext *, bool *))(v17 + 312);
    if ( (char *)v18 == (char *)CSurfaceBrush::IsReadyToDraw )
    {
      v19 = (bool (__fastcall ***)(CBitmapRenderStrategy *__hidden, const struct CSurfaceBrush *, struct CDrawingContext *, bool *))*((_QWORD *)v16 + 17);
      v20 = **v19;
      if ( v20 == CBitmapRenderStrategy::IsReadyToDraw )
      {
        v27 = 0LL;
        wil::com_ptr_t<IBitmapResource,wil::err_returncode_policy>::reset(&v27);
        CBitmapRenderStrategy::GetBitmap(v16, &v27);
        HasRenderingRealization = CBitmapRenderStrategy::HasRenderingRealization(v27);
        wil::com_ptr_t<IBitmapResource,wil::err_returncode_policy>::~com_ptr_t<IBitmapResource,wil::err_returncode_policy>(&v27);
        goto LABEL_20;
      }
      if ( (char *)v20 == (char *)CPrimitiveGroupRenderStrategy::IsReadyToDraw )
      {
        v22 = (CPrimitiveGroup *)*((_QWORD *)v16 + 16);
        v23 = *(bool (__fastcall **)(CPrimitiveGroup *__hidden))(*(_QWORD *)v22 + 216LL);
        if ( v23 == CPrimitiveGroup::IsEmptyDrawing )
          CPrimitiveGroup::IsEmptyDrawing(v22);
        else
          ((void (__fastcall *)(CPrimitiveGroup *, bool (__fastcall *)(CBitmapRenderStrategy *__hidden, const struct CSurfaceBrush *, struct CDrawingContext *, bool *), bool (__fastcall *)(CPrimitiveGroup *__hidden), bool (__fastcall *)(CVisualSurfaceRenderStrategy *__hidden, const struct CSurfaceBrush *, struct CDrawingContext *, bool *)))v23)(
            v22,
            CBitmapRenderStrategy::IsReadyToDraw,
            CPrimitiveGroup::IsEmptyDrawing,
            CVisualSurfaceRenderStrategy::IsReadyToDraw);
        HasRenderingRealization = 1;
LABEL_20:
        if ( !HasRenderingRealization )
          return 0;
        goto LABEL_21;
      }
      if ( v20 != CVisualSurfaceRenderStrategy::IsReadyToDraw )
      {
        HasRenderingRealization = v20((CBitmapRenderStrategy *)v19, v16, a2, &v26);
        goto LABEL_20;
      }
      HasSomethingToDraw = CVisualSurface::HasSomethingToDraw(*((CVisualSurface **)v16 + 16));
    }
    else
    {
      if ( v18 == CColorBrush::IsReadyToDraw )
      {
        HasRenderingRealization = CColorBrush::IsReadyToDraw(v16, a2, &v26);
        goto LABEL_20;
      }
      if ( (char *)v18 == (char *)CEffectBrush::IsReadyToDraw )
      {
        HasRenderingRealization = CEffectBrush::IsReadyToDraw(v16, a2, &v26);
        goto LABEL_20;
      }
      HasSomethingToDraw = ((__int64 (__fastcall *)(const struct CSurfaceBrush *, struct CDrawingContext *, bool *, _QWORD))v18)(
                             v16,
                             a2,
                             &v26,
                             CVisualSurfaceRenderStrategy::IsReadyToDraw);
    }
    HasRenderingRealization = HasSomethingToDraw;
    goto LABEL_20;
  }
  return 0;
}
