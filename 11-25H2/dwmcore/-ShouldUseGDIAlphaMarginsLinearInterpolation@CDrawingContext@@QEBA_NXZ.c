/*
 * XREFs of ?ShouldUseGDIAlphaMarginsLinearInterpolation@CDrawingContext@@QEBA_NXZ @ 0x180073AE4
 * Callers:
 *     ?RenderImage@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCWindowOcclusionInfo@@PEAVIBitmapResource@@PEBVCShape@@_NH@Z @ 0x1800727D4 (-RenderImage@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCWindowOcclusionInfo@@PEAVIBitmapResourc.c)
 * Callees:
 *     ?IsDisplayTarget@CDeviceTextureTarget@@UEBA_NXZ @ 0x180073B40 (-IsDisplayTarget@CDeviceTextureTarget@@UEBA_NXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

bool __fastcall CDrawingContext::ShouldUseGDIAlphaMarginsLinearInterpolation(CDrawingContext *this)
{
  CDeviceTextureTarget *v2; // rcx
  __int64 (*v3)(void); // rax
  char IsDisplayTarget; // al
  char v5; // dl
  bool result; // al

  v2 = (CDeviceTextureTarget *)*((_QWORD *)this + 4);
  v3 = *(__int64 (**)(void))(*(_QWORD *)v2 + 128LL);
  if ( (char *)v3 == (char *)CDeviceTextureTarget::IsDisplayTarget )
    IsDisplayTarget = CDeviceTextureTarget::IsDisplayTarget(v2);
  else
    IsDisplayTarget = v3();
  v5 = IsDisplayTarget;
  result = 0;
  if ( v5 )
    return *((_BYTE *)this + 7938) != 0;
  return result;
}
