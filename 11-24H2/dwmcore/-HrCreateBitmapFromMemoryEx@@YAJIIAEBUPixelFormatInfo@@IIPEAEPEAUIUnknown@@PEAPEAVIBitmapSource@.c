/*
 * XREFs of ?HrCreateBitmapFromMemoryEx@@YAJIIAEBUPixelFormatInfo@@IIPEAEPEAUIUnknown@@PEAPEAVIBitmapSource@@@Z @ 0x18002432C
 * Callers:
 *     ?CopyPixels@CD2DBitmap@@UEBAJAEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@IIPEAE@Z @ 0x180022DF0 (-CopyPixels@CD2DBitmap@@UEBAJAEBV-$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@.c)
 *     ?CopyTexture2D@CD3DDevice@@QEAAJPEAUID3D11Texture2D@@IAEBUPixelFormatInfo@@AEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@PEAVIBitmapDest@@HH@Z @ 0x1800238F4 (-CopyTexture2D@CD3DDevice@@QEAAJPEAUID3D11Texture2D@@IAEBUPixelFormatInfo@@AEBV-$TMilRect@IUMilR.c)
 *     ?MapSectionBitmap@CaptureBitsResponse@@IEAAJXZ @ 0x18018D908 (-MapSectionBitmap@CaptureBitsResponse@@IEAAJXZ.c)
 *     ?EnsureBitmapCacheSource@CSectionBitmapRealization@@MEAAJXZ @ 0x1801976F0 (-EnsureBitmapCacheSource@CSectionBitmapRealization@@MEAAJXZ.c)
 *     ?FormatConvertLock@CSecondaryD2DBitmap@@IEAAJPEAVIBitmapLock@@PEAPEAV2@@Z @ 0x18022AED0 (-FormatConvertLock@CSecondaryD2DBitmap@@IEAAJPEAVIBitmapLock@@PEAPEAV2@@Z.c)
 *     ?EnsureBitmapDest@CLegacyRemotingSwapChain@@IEAAJXZ @ 0x1802CBD48 (-EnsureBitmapDest@CLegacyRemotingSwapChain@@IEAAJXZ.c)
 *     ?EnsureBitmapCacheSource@CGDISubSectionBitmapRealization@@EEAAJXZ @ 0x1802D7320 (-EnsureBitmapCacheSource@CGDISubSectionBitmapRealization@@EEAAJXZ.c)
 *     ?CreateScaledLock@CSecondaryD2DBitmap@@IEAAJAEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@PEAVID2DBitmapCacheSource@@PEAPEAVIBitmapLock@@@Z @ 0x1802D98D4 (-CreateScaledLock@CSecondaryD2DBitmap@@IEAAJAEBV-$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@R.c)
 * Callees:
 *     ??0CClientMemoryBitmap@@QEAA@XZ @ 0x180024508 (--0CClientMemoryBitmap@@QEAA@XZ.c)
 *     ?IsValidPixelFormatInfo@@YA_NAEBUPixelFormatInfo@@@Z @ 0x180024684 (-IsValidPixelFormatInfo@@YA_NAEBUPixelFormatInfo@@@Z.c)
 *     ?HrCheckBufferSize@@YAJW4DXGI_FORMAT@@IIII@Z @ 0x180025458 (-HrCheckBufferSize@@YAJW4DXGI_FORMAT@@IIII@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x180041E40 (--2@YAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall HrCreateBitmapFromMemoryEx(
        unsigned int a1,
        unsigned int a2,
        const struct PixelFormatInfo *a3,
        unsigned int a4,
        unsigned int a5,
        unsigned __int8 *a6,
        struct IUnknown *a7,
        struct IBitmapSource **a8)
{
  CClientMemoryBitmap *v12; // rax
  CClientMemoryBitmap *v13; // rax
  struct IBitmapSource *v14; // rbx
  int v15; // eax
  int v16; // r14d
  unsigned int v17; // edi
  int v18; // r9d
  unsigned int v19; // eax

  v12 = (CClientMemoryBitmap *)operator new(0xA0uLL);
  if ( !v12 || (v13 = CClientMemoryBitmap::CClientMemoryBitmap(v12), (v14 = v13) == 0LL) )
  {
    v17 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x1Cu, 0LL);
    return v17;
  }
  (*(void (__fastcall **)(CClientMemoryBitmap *))(*(_QWORD *)v13 + 8LL))(v13);
  if ( !IsValidPixelFormatInfo(a3) || !a1 || !a2 || !a6 || !a4 )
  {
    v19 = 31;
LABEL_15:
    v18 = -2147024809;
    v17 = -2147024809;
    v16 = -2147024809;
    goto LABEL_11;
  }
  if ( a2 >= 0x7FFFFFFF / a4 )
  {
    v19 = 36;
    goto LABEL_15;
  }
  v15 = HrCheckBufferSize((enum DXGI_FORMAT)*(_DWORD *)a3, a4, a1, a2, a5);
  v16 = v15;
  v17 = v15;
  if ( v15 < 0 )
  {
    v18 = v15;
    v19 = 45;
LABEL_11:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v18, v19, 0LL);
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v16, 0x26u, 0LL);
    (*(void (__fastcall **)(struct IBitmapSource *))(*(_QWORD *)v14 + 16LL))(v14);
    return v17;
  }
  *((_QWORD *)v14 + 19) = a7;
  if ( a7 )
    ((void (__fastcall *)(struct IUnknown *))a7->lpVtbl->AddRef)(a7);
  *((_DWORD *)v14 + 22) = a1;
  *((_DWORD *)v14 + 23) = a2;
  *((_QWORD *)v14 + 13) = *(_QWORD *)a3;
  *((_DWORD *)v14 + 28) = *((_DWORD *)a3 + 2);
  *((_QWORD *)v14 + 17) = a6;
  *((_DWORD *)v14 + 36) = a4;
  *a8 = v14;
  return v17;
}
