/*
 * XREFs of ?GetImagingFactory@CComposition@@QEAAJPEAPEAUIWICImagingFactory@@@Z @ 0x18025BE0C
 * Callers:
 *     ?RotateShape@CCursorState@@AEAA?AV?$shared_ptr@VShapeData@CCursorState@@@std@@AEBV23@W4DXGI_MODE_ROTATION@@@Z @ 0x1802B3754 (-RotateShape@CCursorState@@AEAA-AV-$shared_ptr@VShapeData@CCursorState@@@std@@AEBV23@W4DXGI_MODE.c)
 *     ?ScaleShape@CCursorState@@AEAA?AV?$shared_ptr@VShapeData@CCursorState@@@std@@AEBV23@AEBUD2D_SIZE_U@@@Z @ 0x1802B39BC (-ScaleShape@CCursorState@@AEAA-AV-$shared_ptr@VShapeData@CCursorState@@@std@@AEBV23@AEBUD2D_SIZE.c)
 *     ?CreateScaledLock@CSecondaryD2DBitmap@@IEAAJAEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@PEAVID2DBitmapCacheSource@@PEAPEAVIBitmapLock@@@Z @ 0x1802D98D4 (-CreateScaledLock@CSecondaryD2DBitmap@@IEAAJAEBV-$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@R.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18001DF0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CComposition::GetImagingFactory(CComposition *this, struct IWICImagingFactory **a2)
{
  _QWORD *v2; // rbx
  int v4; // eax
  unsigned int v5; // edi
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = (_QWORD *)((char *)this + 6520);
  if ( *((_QWORD *)this + 815)
    || (*v2 = 0LL, v4 = WICCreateImagingFactory_Proxy(567LL, (char *)this + 6520), v5 = v4, v4 >= 0) )
  {
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v2 + 8LL))(*v2);
    *a2 = (struct IWICImagingFactory *)*v2;
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xE20,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\composition.cpp",
      (const char *)(unsigned int)v4);
    return v5;
  }
}
