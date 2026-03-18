/*
 * XREFs of ?Create@CColorKeyBitmap@@SAJPEAVIBitmapRealization@@AEBVCColorKey@@PEAPEAV1@@Z @ 0x1801C2ADC
 * Callers:
 *     ?Initialize@CColorKeyBitmapRealization@@IEAAJPEAVIBitmapRealization@@AEBVCColorKey@@@Z @ 0x1801C2A44 (-Initialize@CColorKeyBitmapRealization@@IEAAJPEAVIBitmapRealization@@AEBVCColorKey@@@Z.c)
 * Callees:
 *     ??0?$CMILCOMBaseT@UID2D1SimplifiedGeometrySink@@U1@VCMilObjectDeleter@@@@IEAA@XZ @ 0x18002465C (--0-$CMILCOMBaseT@UID2D1SimplifiedGeometrySink@@U1@VCMilObjectDeleter@@@@IEAA@XZ.c)
 *     ??2@YAPEAX_K@Z @ 0x180041E40 (--2@YAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Initialize@CColorKeyBitmap@@IEAAJPEAVIBitmapRealization@@@Z @ 0x1801C2BDC (-Initialize@CColorKeyBitmap@@IEAAJPEAVIBitmapRealization@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CColorKeyBitmap::Create(
        struct IBitmapRealization *a1,
        const struct CColorKey *a2,
        struct CColorKeyBitmap **a3)
{
  CColorKeyBitmap *v6; // rax
  CColorKeyBitmap *v7; // rbx
  unsigned int v8; // edi
  __int64 result; // rax
  int v10; // eax

  v6 = (CColorKeyBitmap *)operator new(0x90uLL);
  v7 = v6;
  if ( v6 )
  {
    CMILCOMBaseT<ID2D1SimplifiedGeometrySink,ID2D1SimplifiedGeometrySink,CMilObjectDeleter>::CMILCOMBaseT<ID2D1SimplifiedGeometrySink,ID2D1SimplifiedGeometrySink,CMilObjectDeleter>((__int64)v6);
    *((_QWORD *)v7 + 2) = &CColorKeyBitmap::`vftable'{for `IPixelColor'};
    *(_QWORD *)v7 = &CColorKeyBitmap::`vftable'{for `CMILCOMBaseT<ID2DBitmapCacheSource,ID2DBitmapCacheSource,CMilObjectDeleter>'};
    *((_QWORD *)v7 + 3) = 0LL;
    *((_QWORD *)v7 + 4) = 0LL;
    *(_OWORD *)((char *)v7 + 40) = *(_OWORD *)a2;
    *(_OWORD *)((char *)v7 + 56) = *((_OWORD *)a2 + 1);
    *((_DWORD *)v7 + 18) = *((_DWORD *)a2 + 8);
    *(_QWORD *)((char *)v7 + 84) = 0LL;
    *(_QWORD *)((char *)v7 + 116) = 0LL;
    (*(void (__fastcall **)(CColorKeyBitmap *))(*(_QWORD *)v7 + 8LL))(v7);
    v10 = CColorKeyBitmap::Initialize(v7, a1);
    v8 = v10;
    if ( v10 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v10, 0x18u, 0LL);
  }
  else
  {
    v8 = -2147024882;
    v7 = 0LL;
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024882, 0x16u, 0LL);
  }
  result = v8;
  *a3 = v7;
  return result;
}
