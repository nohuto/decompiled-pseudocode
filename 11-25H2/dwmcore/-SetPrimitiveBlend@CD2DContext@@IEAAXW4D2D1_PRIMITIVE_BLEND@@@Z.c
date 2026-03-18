/*
 * XREFs of ?SetPrimitiveBlend@CD2DContext@@IEAAXW4D2D1_PRIMITIVE_BLEND@@@Z @ 0x1801F6D80
 * Callers:
 *     ?DrawYCbCrBitmap@CD2DContext@@UEAAJPEBVID2DContextOwner@@PEAUID2D1Bitmap1@@1W4D2D1_YCBCR_CHROMA_SUBSAMPLING@@PEBUD2D_RECT_F@@MW4D2D1_INTERPOLATION_MODE@@W4D2D1_COMPOSITE_MODE@@@Z @ 0x1802C5010 (-DrawYCbCrBitmap@CD2DContext@@UEAAJPEBVID2DContextOwner@@PEAUID2D1Bitmap1@@1W4D2D1_YCBCR_CHROMA_.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CD2DContext::SetPrimitiveBlend(CD2DContext *this, enum D2D1_PRIMITIVE_BLEND a2)
{
  if ( a2 != *((_DWORD *)this + 99) )
  {
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 25) + 624LL))(*((_QWORD *)this + 25));
    *((_DWORD *)this + 99) = a2;
  }
}
