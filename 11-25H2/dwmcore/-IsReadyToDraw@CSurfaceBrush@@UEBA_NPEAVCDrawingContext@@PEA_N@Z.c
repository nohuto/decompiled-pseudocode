/*
 * XREFs of ?IsReadyToDraw@CSurfaceBrush@@UEBA_NPEAVCDrawingContext@@PEA_N@Z @ 0x1800D0590
 * Callers:
 *     ?IsReadyToDraw@CDropShadow@@AEBA_NPEAVCDrawingContext@@PEA_N@Z @ 0x18007FB1C (-IsReadyToDraw@CDropShadow@@AEBA_NPEAVCDrawingContext@@PEA_N@Z.c)
 *     ?HasNonEmptyContent@CSpriteVisual@@UEBA_NXZ @ 0x1800CF300 (-HasNonEmptyContent@CSpriteVisual@@UEBA_NXZ.c)
 *     ?IsEmptyDrawing@CDropShadow@@UEBA_NXZ @ 0x18011A1F0 (-IsEmptyDrawing@CDropShadow@@UEBA_NXZ.c)
 * Callees:
 *     ??1?$com_ptr_t@VIBitmapResource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800D0690 (--1-$com_ptr_t@VIBitmapResource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?reset@?$com_ptr_t@VIBitmapResource@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800D07A8 (-reset@-$com_ptr_t@VIBitmapResource@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?GetBitmap@CBitmapRenderStrategy@@SAXPEBVCSurfaceBrush@@PEAPEAVIBitmapResource@@@Z @ 0x1800D0820 (-GetBitmap@CBitmapRenderStrategy@@SAXPEBVCSurfaceBrush@@PEAPEAVIBitmapResource@@@Z.c)
 *     ?HasRenderingRealization@CBitmapRenderStrategy@@SA_NPEAVIBitmapResource@@@Z @ 0x1800D08C0 (-HasRenderingRealization@CBitmapRenderStrategy@@SA_NPEAVIBitmapResource@@@Z.c)
 *     ?IsEmptyDrawing@CPrimitiveGroup@@UEBA_NXZ @ 0x1800D0EE0 (-IsEmptyDrawing@CPrimitiveGroup@@UEBA_NXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

char __fastcall CSurfaceBrush::IsReadyToDraw(CSurfaceBrush *this, struct CDrawingContext *a2, bool *a3)
{
  char (__fastcall ***v5)(CPrimitiveGroupRenderStrategy *, const struct CSurfaceBrush *, struct CDrawingContext *, bool *); // rcx
  char (__fastcall *v6)(CPrimitiveGroupRenderStrategy *, const struct CSurfaceBrush *, struct CDrawingContext *, bool *); // rax
  bool HasRenderingRealization; // bl
  CPrimitiveGroup *v9; // rcx
  __int64 (*v10)(void); // rax
  char IsEmptyDrawing; // al
  struct IBitmapResource *v12; // [rsp+40h] [rbp+8h] BYREF

  v5 = (char (__fastcall ***)(CPrimitiveGroupRenderStrategy *, const struct CSurfaceBrush *, struct CDrawingContext *, bool *))*((_QWORD *)this + 17);
  v6 = **v5;
  if ( (char *)v6 == (char *)CBitmapRenderStrategy::IsReadyToDraw )
  {
    *a3 = 0;
    v12 = 0LL;
    wil::com_ptr_t<IBitmapResource,wil::err_returncode_policy>::reset(&v12);
    CBitmapRenderStrategy::GetBitmap(this, &v12);
    HasRenderingRealization = CBitmapRenderStrategy::HasRenderingRealization(v12);
    wil::com_ptr_t<IBitmapResource,wil::err_returncode_policy>::~com_ptr_t<IBitmapResource,wil::err_returncode_policy>(&v12);
    return HasRenderingRealization;
  }
  else if ( v6 == CPrimitiveGroupRenderStrategy::IsReadyToDraw )
  {
    v9 = (CPrimitiveGroup *)*((_QWORD *)this + 16);
    v10 = *(__int64 (**)(void))(*(_QWORD *)v9 + 216LL);
    if ( (char *)v10 == (char *)CPrimitiveGroup::IsEmptyDrawing )
      IsEmptyDrawing = CPrimitiveGroup::IsEmptyDrawing(v9);
    else
      IsEmptyDrawing = v10();
    *a3 = IsEmptyDrawing;
    return 1;
  }
  else if ( (char *)v6 == (char *)CVisualSurfaceRenderStrategy::IsReadyToDraw )
  {
    *a3 = 0;
    return CVisualSurface::HasSomethingToDraw(*((CVisualSurface **)this + 16));
  }
  else
  {
    return v6((CPrimitiveGroupRenderStrategy *)v5, this, a2, a3);
  }
}
