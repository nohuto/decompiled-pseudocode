/*
 * XREFs of ?GetCurrentRenderingRealization@CCachedVisualImage@@UEAAJPEAPEAVIBitmapRealization@@@Z @ 0x18004B8A0
 * Callers:
 *     ?RealizeBitmaps@CPrimitiveGroupDrawListGenerator@@AEAAJXZ @ 0x180019EC8 (-RealizeBitmaps@CPrimitiveGroupDrawListGenerator@@AEAAJXZ.c)
 *     ??0CDrawListBitmap@@QEAA@PEAVIBitmapResource@@@Z @ 0x18004BC04 (--0CDrawListBitmap@@QEAA@PEAVIBitmapResource@@@Z.c)
 *     ?GetBrushParametersWorker@CBitmapResourceRenderStrategy@@KAJPEBVCSurfaceBrush@@PEAVIBitmapResource@@PEAULayoutData@CContent@@W4D2D1_INTERPOLATION_MODE@@PEAVCBrushDrawListGenerator@@@Z @ 0x18004BDEC (-GetBrushParametersWorker@CBitmapResourceRenderStrategy@@KAJPEBVCSurfaceBrush@@PEAVIBitmapResour.c)
 *     ?GetBrushParameters@CBitmapRenderStrategy@@UEBAJPEBVCSurfaceBrush@@PEAVCBrushDrawListGenerator@@@Z @ 0x18004C190 (-GetBrushParameters@CBitmapRenderStrategy@@UEBAJPEBVCSurfaceBrush@@PEAVCBrushDrawListGenerator@@.c)
 *     ?DrawBitmap@CRenderDataBounds@@UEAAJPEAVCResource@@@Z @ 0x1801E40F0 (-DrawBitmap@CRenderDataBounds@@UEAAJPEAVCResource@@@Z.c)
 * Callees:
 *     ?Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x180249CC0 (-Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CCachedVisualImage::GetCurrentRenderingRealization(
        CCachedVisualImage *this,
        struct IBitmapRealization **a2)
{
  char *v2; // rax
  struct IBitmapRealization *v3; // rcx
  void (*v4)(void); // rax
  int v5; // et0
  int v7; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = (char *)this - 72;
  v3 = (CCachedVisualImage *)((char *)this + 8);
  if ( !v2 )
    v3 = 0LL;
  *a2 = v3;
  v4 = *(void (**)(void))(*(_QWORD *)v3 + 8LL);
  if ( (char *)v4 != (char *)CMILRefCountImpl::AddReference )
  {
    v4();
    return 0LL;
  }
  v5 = _InterlockedAdd((volatile signed __int32 *)v3, 1u);
  if ( !((v5 < 0) ^ __OFSUB__(v4, CMILRefCountImpl::AddReference) | (v5 == 0)) )
    return 0LL;
  wil::details::in1diag3::Log_Hr(
    retaddr,
    (void *)0x18,
    (unsigned int)"onecoreuap\\windows\\dwm\\common\\shared\\refcountbase.cpp",
    (const char *)0x8007029CLL,
    v7);
  return 0LL;
}
