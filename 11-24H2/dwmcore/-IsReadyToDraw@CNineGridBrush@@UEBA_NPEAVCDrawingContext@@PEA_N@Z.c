/*
 * XREFs of ?IsReadyToDraw@CNineGridBrush@@UEBA_NPEAVCDrawingContext@@PEA_N@Z @ 0x18004D9E0
 * Callers:
 *     ?IsReadyToDraw@CDropShadow@@AEBA_NPEAVCDrawingContext@@PEA_N@Z @ 0x180138D3C (-IsReadyToDraw@CDropShadow@@AEBA_NPEAVCDrawingContext@@PEA_N@Z.c)
 * Callees:
 *     ?IsReadyToDraw@CColorBrush@@UEBA_NPEAVCDrawingContext@@PEA_N@Z @ 0x1800483F0 (-IsReadyToDraw@CColorBrush@@UEBA_NPEAVCDrawingContext@@PEA_N@Z.c)
 *     ?HasSomethingToDraw@CVisualSurface@@QEBA_NXZ @ 0x18004BCE8 (-HasSomethingToDraw@CVisualSurface@@QEBA_NXZ.c)
 *     ??1?$com_ptr_t@VIBitmapResource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18004DC30 (--1-$com_ptr_t@VIBitmapResource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?reset@?$com_ptr_t@VIBitmapResource@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x18004DD48 (-reset@-$com_ptr_t@VIBitmapResource@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?GetBitmap@CBitmapRenderStrategy@@SAXPEBVCSurfaceBrush@@PEAPEAVIBitmapResource@@@Z @ 0x18004DDC0 (-GetBitmap@CBitmapRenderStrategy@@SAXPEBVCSurfaceBrush@@PEAPEAVIBitmapResource@@@Z.c)
 *     ?HasRenderingRealization@CBitmapRenderStrategy@@SA_NPEAVIBitmapResource@@@Z @ 0x18004DE60 (-HasRenderingRealization@CBitmapRenderStrategy@@SA_NPEAVIBitmapResource@@@Z.c)
 *     ?IsEmptyDrawing@CPrimitiveGroup@@UEBA_NXZ @ 0x18004E490 (-IsEmptyDrawing@CPrimitiveGroup@@UEBA_NXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

char __fastcall CNineGridBrush::IsReadyToDraw(CNineGridBrush *this, struct CDrawingContext *a2, bool *a3)
{
  __int64 v4; // rbx
  char (__fastcall *v5)(CColorBrush *, struct CDrawingContext *, bool *); // rax
  bool (__fastcall ***v6)(CBitmapRenderStrategy *__hidden, const struct CSurfaceBrush *, struct CDrawingContext *, bool *); // rcx
  bool (__fastcall *v7)(CBitmapRenderStrategy *__hidden, const struct CSurfaceBrush *, struct CDrawingContext *, bool *); // rax
  char IsReadyToDraw; // bl
  CPrimitiveGroup *v10; // rcx
  __int64 (*v11)(void); // rax
  char IsEmptyDrawing; // al
  char HasSomethingToDraw; // al
  struct IBitmapResource *v14; // [rsp+40h] [rbp+8h] BYREF

  *a3 = 0;
  v4 = *((_QWORD *)this + 13);
  if ( !v4 )
    return 0;
  v5 = *(char (__fastcall **)(CColorBrush *, struct CDrawingContext *, bool *))(*(_QWORD *)v4 + 312LL);
  if ( (char *)v5 != (char *)CSurfaceBrush::IsReadyToDraw )
  {
    if ( v5 == CColorBrush::IsReadyToDraw )
    {
      IsReadyToDraw = CColorBrush::IsReadyToDraw((CColorBrush *)v4, a2, a3);
      return IsReadyToDraw != 0;
    }
    HasSomethingToDraw = ((__int64 (__fastcall *)(__int64, struct CDrawingContext *))v5)(v4, a2);
    goto LABEL_12;
  }
  v6 = *(bool (__fastcall ****)(CBitmapRenderStrategy *__hidden, const struct CSurfaceBrush *, struct CDrawingContext *, bool *))(v4 + 136);
  v7 = **v6;
  if ( v7 == CBitmapRenderStrategy::IsReadyToDraw )
  {
    v14 = 0LL;
    wil::com_ptr_t<IBitmapResource,wil::err_returncode_policy>::reset(&v14);
    CBitmapRenderStrategy::GetBitmap((const struct CSurfaceBrush *)v4, &v14);
    IsReadyToDraw = CBitmapRenderStrategy::HasRenderingRealization(v14);
    wil::com_ptr_t<IBitmapResource,wil::err_returncode_policy>::~com_ptr_t<IBitmapResource,wil::err_returncode_policy>(&v14);
    return IsReadyToDraw != 0;
  }
  if ( (char *)v7 != (char *)CPrimitiveGroupRenderStrategy::IsReadyToDraw )
  {
    if ( v7 != CVisualSurfaceRenderStrategy::IsReadyToDraw )
    {
      IsReadyToDraw = v7((CBitmapRenderStrategy *)v6, (const struct CSurfaceBrush *)v4, a2, a3);
      return IsReadyToDraw != 0;
    }
    HasSomethingToDraw = CVisualSurface::HasSomethingToDraw(*(CVisualSurface **)(v4 + 128));
LABEL_12:
    IsReadyToDraw = HasSomethingToDraw;
    return IsReadyToDraw != 0;
  }
  v10 = *(CPrimitiveGroup **)(v4 + 128);
  v11 = *(__int64 (**)(void))(*(_QWORD *)v10 + 216LL);
  if ( (char *)v11 == (char *)CPrimitiveGroup::IsEmptyDrawing )
    IsEmptyDrawing = CPrimitiveGroup::IsEmptyDrawing(v10);
  else
    IsEmptyDrawing = v11();
  *a3 = IsEmptyDrawing;
  return 1;
}
