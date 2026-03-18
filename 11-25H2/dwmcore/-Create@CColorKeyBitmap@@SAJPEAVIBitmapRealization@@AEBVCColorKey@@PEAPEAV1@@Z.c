/*
 * XREFs of ?Create@CColorKeyBitmap@@SAJPEAVIBitmapRealization@@AEBVCColorKey@@PEAPEAV1@@Z @ 0x1801D521C
 * Callers:
 *     ?Initialize@CColorKeyBitmapRealization@@IEAAJPEAVIBitmapRealization@@AEBVCColorKey@@@Z @ 0x1801D5184 (-Initialize@CColorKeyBitmapRealization@@IEAAJPEAVIBitmapRealization@@AEBVCColorKey@@@Z.c)
 * Callees:
 *     ??0?$CMILCOMBaseT@UID2D1SimplifiedGeometrySink@@U1@VCMilObjectDeleter@@@@IEAA@XZ @ 0x180042D58 (--0-$CMILCOMBaseT@UID2D1SimplifiedGeometrySink@@U1@VCMilObjectDeleter@@@@IEAA@XZ.c)
 *     ??2@YAPEAX_K@Z @ 0x18006BC80 (--2@YAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Initialize@CColorKeyBitmap@@IEAAJPEAVIBitmapRealization@@@Z @ 0x1801D5B1C (-Initialize@CColorKeyBitmap@@IEAAJPEAVIBitmapRealization@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CColorKeyBitmap::Create(
        struct IBitmapRealization *a1,
        const struct CColorKey *a2,
        struct CColorKeyBitmap **a3)
{
  CColorKeyBitmap *v6; // rbx
  unsigned int v7; // edi
  __int64 result; // rax
  int v9; // eax

  v6 = (CColorKeyBitmap *)operator new(0x90uLL);
  if ( v6 )
  {
    CMILCOMBaseT<ID2D1SimplifiedGeometrySink,ID2D1SimplifiedGeometrySink,CMilObjectDeleter>::CMILCOMBaseT<ID2D1SimplifiedGeometrySink,ID2D1SimplifiedGeometrySink,CMilObjectDeleter>();
    *((_QWORD *)v6 + 2) = &CColorKeyBitmap::`vftable'{for `IPixelColor'};
    *(_QWORD *)v6 = &CColorKeyBitmap::`vftable'{for `CMILCOMBaseT<ID2DBitmapCacheSource,ID2DBitmapCacheSource,CMilObjectDeleter>'};
    *((_QWORD *)v6 + 3) = 0LL;
    *((_QWORD *)v6 + 4) = 0LL;
    *(_OWORD *)((char *)v6 + 40) = *(_OWORD *)a2;
    *(_OWORD *)((char *)v6 + 56) = *((_OWORD *)a2 + 1);
    *((_DWORD *)v6 + 18) = *((_DWORD *)a2 + 8);
    *(_QWORD *)((char *)v6 + 84) = 0LL;
    *(_QWORD *)((char *)v6 + 116) = 0LL;
    (*(void (__fastcall **)(CColorKeyBitmap *))(*(_QWORD *)v6 + 8LL))(v6);
    v9 = CColorKeyBitmap::Initialize(v6, a1);
    v7 = v9;
    if ( v9 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v9, 0x18u, 0LL);
  }
  else
  {
    v7 = -2147024882;
    v6 = 0LL;
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024882, 0x16u, 0LL);
  }
  result = v7;
  *a3 = v6;
  return result;
}
