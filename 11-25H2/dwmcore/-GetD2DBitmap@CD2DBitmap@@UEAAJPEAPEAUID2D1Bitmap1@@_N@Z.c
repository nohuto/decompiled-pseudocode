/*
 * XREFs of ?GetD2DBitmap@CD2DBitmap@@UEAAJPEAPEAUID2D1Bitmap1@@_N@Z @ 0x1801D68F0
 * Callers:
 *     ?GetD2DBitmap@?$IDeviceSurfaceMethodsT@VCD2DBitmap@@VIDeviceTextureTarget@@@@WKI@EAAJPEAPEAUID2D1Bitmap1@@_N@Z @ 0x1802D6C10 (-GetD2DBitmap@-$IDeviceSurfaceMethodsT@VCD2DBitmap@@VIDeviceTextureTarget@@@@WKI@EAAJPEAPEAUID2D.c)
 *     ?GetD2DBitmap@?$IDeviceSurfaceMethodsT@VCD2DBitmap@@VIDeviceTextureTarget@@@@WLI@EAAJPEAPEAUID2D1Bitmap1@@_N@Z @ 0x1802D6C30 (-GetD2DBitmap@-$IDeviceSurfaceMethodsT@VCD2DBitmap@@VIDeviceTextureTarget@@@@WLI@EAAJPEAPEAUID2D.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?EnsureBitmap@CD2DBitmap@@IEAAJXZ @ 0x1801D6A18 (-EnsureBitmap@CD2DBitmap@@IEAAJXZ.c)
 *     ?EnsureIgnoreAlphaBitmap@CD2DBitmap@@IEAAJXZ @ 0x1802D6574 (-EnsureIgnoreAlphaBitmap@CD2DBitmap@@IEAAJXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CD2DBitmap::GetD2DBitmap(CD2DBitmap *this, struct ID2D1Bitmap1 **a2, char a3)
{
  CD2DBitmap *v4; // rcx
  int v6; // eax
  unsigned int v7; // ebx
  struct ID2D1Bitmap1 *v8; // rcx
  void (*v9)(void); // rax
  int v11; // eax
  struct ID2D1Bitmap1 *v12; // rcx

  *a2 = 0LL;
  v4 = (CD2DBitmap *)((char *)this - 72);
  if ( a3 )
  {
    v11 = CD2DBitmap::EnsureIgnoreAlphaBitmap(v4);
    v7 = v11;
    if ( v11 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v11, 0x8Fu, 0LL);
      return v7;
    }
    v12 = (struct ID2D1Bitmap1 *)*((_QWORD *)this + 8);
    *a2 = v12;
    v9 = *(void (**)(void))(*(_QWORD *)v12 + 8LL);
  }
  else
  {
    v6 = CD2DBitmap::EnsureBitmap(v4);
    v7 = v6;
    if ( v6 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v6, 0x88u, 0LL);
      return v7;
    }
    v8 = (struct ID2D1Bitmap1 *)*((_QWORD *)this + 7);
    *a2 = v8;
    v9 = *(void (**)(void))(*(_QWORD *)v8 + 8LL);
  }
  v9();
  return v7;
}
