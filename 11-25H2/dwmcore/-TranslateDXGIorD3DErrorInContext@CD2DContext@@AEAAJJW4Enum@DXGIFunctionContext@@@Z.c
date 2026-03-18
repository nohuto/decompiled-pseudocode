/*
 * XREFs of ?TranslateDXGIorD3DErrorInContext@CD2DContext@@AEAAJJW4Enum@DXGIFunctionContext@@@Z @ 0x180118204
 * Callers:
 *     ?CreateD2DEffect@CD2DContext@@UEAAJAEBU_GUID@@PEAPEAVCD2DEffect@@@Z @ 0x180116C10 (-CreateD2DEffect@CD2DContext@@UEAAJAEBU_GUID@@PEAPEAVCD2DEffect@@@Z.c)
 *     ?GetCachedEffectNoRef@CD2DContext@@UEAAJW4D2DEffect@@PEAPEAUID2D1Effect@@@Z @ 0x180118110 (-GetCachedEffectNoRef@CD2DContext@@UEAAJW4D2DEffect@@PEAPEAUID2D1Effect@@@Z.c)
 *     ?FlushD2D@CD2DContext@@UEAAJPEBVID2DContextOwner@@@Z @ 0x18018F490 (-FlushD2D@CD2DContext@@UEAAJPEBVID2DContextOwner@@@Z.c)
 *     ?CreateGradientStopCollection@CD2DContext@@QEAAJV?$span@$$CBUD2D1_GRADIENT_STOP@@$0?0@gsl@@W4D2D1_GAMMA@@W4D2D1_EXTEND_MODE@@PEAPEAUID2D1GradientStopCollection@@@Z @ 0x18019EC8C (-CreateGradientStopCollection@CD2DContext@@QEAAJV-$span@$$CBUD2D1_GRADIENT_STOP@@$0-0@gsl@@W4D2D.c)
 *     ?InitializeD2D@CD2DContext@@IEAAJPEAUIDXGIDevice3@@@Z @ 0x1801B2330 (-InitializeD2D@CD2DContext@@IEAAJPEAUIDXGIDevice3@@@Z.c)
 *     ?CreateD2DBitmapFromDxgiSurface@CD2DContext@@QEAAJPEAUIDXGISurface@@AEBUD2D1_BITMAP_PROPERTIES1@@PEAPEAUID2D1Bitmap1@@@Z @ 0x1801D6BFC (-CreateD2DBitmapFromDxgiSurface@CD2DContext@@QEAAJPEAUIDXGISurface@@AEBUD2D1_BITMAP_PROPERTIES1@.c)
 *     ?CreateBitmapFromWicBitmap@CD2DContext@@QEAAJPEAUIWICBitmapSource@@PEAPEAUID2D1Bitmap@@@Z @ 0x1802C4C54 (-CreateBitmapFromWicBitmap@CD2DContext@@QEAAJPEAUIWICBitmapSource@@PEAPEAUID2D1Bitmap@@@Z.c)
 *     ?CreateD2DInk@CD2DContext@@UEAAJAEBUD2D1_INK_POINT@@AEBUD2D1_INK_STYLE_PROPERTIES@@PEAPEAVCD2DInk@@@Z @ 0x1802C4CD0 (-CreateD2DInk@CD2DContext@@UEAAJAEBUD2D1_INK_POINT@@AEBUD2D1_INK_STYLE_PROPERTIES@@PEAPEAVCD2DIn.c)
 *     ?DrawYCbCrBitmap@CD2DContext@@UEAAJPEBVID2DContextOwner@@PEAUID2D1Bitmap1@@1W4D2D1_YCBCR_CHROMA_SUBSAMPLING@@PEBUD2D_RECT_F@@MW4D2D1_INTERPOLATION_MODE@@W4D2D1_COMPOSITE_MODE@@@Z @ 0x1802C5010 (-DrawYCbCrBitmap@CD2DContext@@UEAAJPEBVID2DContextOwner@@PEAUID2D1Bitmap1@@1W4D2D1_YCBCR_CHROMA_.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?TranslateDXGIorD3DErrorInContext@@YA_NJW4Enum@DXGIFunctionContext@@PEAJ@Z @ 0x180142B50 (-TranslateDXGIorD3DErrorInContext@@YA_NJW4Enum@DXGIFunctionContext@@PEAJ@Z.c)
 *     ?TempDisableHardwareProtection@CD2DContext@@IEAAXXZ @ 0x18025B75C (-TempDisableHardwareProtection@CD2DContext@@IEAAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CD2DContext::TranslateDXGIorD3DErrorInContext(__int64 a1, int a2, int a3)
{
  __int64 v3; // rdi
  int v4; // ebx
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rcx
  int v11; // r9d
  int v12; // ecx
  __int64 v13; // rax
  int v14; // [rsp+50h] [rbp+18h] BYREF

  v14 = a3;
  v3 = a1 + 1096;
  v4 = a2;
  if ( !a1 )
    v3 = 1112LL;
  if ( !*(_DWORD *)v3 && (a2 == -2005532292 || a2 == -2147024882 || a2 == -2005270523) )
  {
    v8 = a1 + 432;
    if ( !a1 )
      v8 = 448LL;
    if ( *(_DWORD *)v8 )
    {
      if ( a2 == -2005270523 )
      {
        v9 = a1 + 536;
        if ( !a1 )
          v9 = 552LL;
        if ( (*(unsigned int (__fastcall **)(_QWORD, __int64))(**(_QWORD **)v9 + 312LL))(*(_QWORD *)v9, 2289696773LL) != -2005270480 )
        {
          if ( *(_DWORD *)v3 )
            return (unsigned int)-2003304307;
          *(_DWORD *)v3 = -2005270523;
LABEL_23:
          if ( !*(_DWORD *)v3 )
            goto LABEL_8;
          return (unsigned int)-2003304307;
        }
        if ( !*(_DWORD *)v3 )
          *(_DWORD *)v3 = -2005270480;
      }
      v10 = a1;
      if ( !a1 )
        v10 = 16LL;
      CD2DContext::TempDisableHardwareProtection((CD2DContext *)v10);
    }
  }
  if ( v4 < 0 )
    goto LABEL_23;
LABEL_8:
  v14 = 0;
  if ( (unsigned __int8)TranslateDXGIorD3DErrorInContext((unsigned int)v4, 0LL, &v14) )
  {
    v11 = v14;
    v12 = -2003304307;
    if ( v14 == -2003304307 && !*(_DWORD *)v3 )
    {
      v13 = a1 + 1096;
      if ( v4 < 0 )
        v12 = v4;
      if ( !a1 )
        v13 = 1112LL;
      *(_DWORD *)v13 = v12;
    }
    v4 = v11;
    if ( v11 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v11, 0xB4Du, 0LL);
  }
  return (unsigned int)v4;
}
