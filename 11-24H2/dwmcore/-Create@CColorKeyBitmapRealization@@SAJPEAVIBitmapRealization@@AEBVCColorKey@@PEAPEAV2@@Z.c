/*
 * XREFs of ?Create@CColorKeyBitmapRealization@@SAJPEAVIBitmapRealization@@AEBVCColorKey@@PEAPEAV2@@Z @ 0x1801C2928
 * Callers:
 *     ?CreateSectionBitmap@CGdiSpriteBitmap@@AEAAJPEAXII@Z @ 0x1800266BC (-CreateSectionBitmap@CGdiSpriteBitmap@@AEAAJPEAXII@Z.c)
 *     ?CreateSectionBitmapSubRects@CGdiSpriteBitmap@@AEAAJII@Z @ 0x1801D8754 (-CreateSectionBitmapSubRects@CGdiSpriteBitmap@@AEAAJII@Z.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180041E40 (--2@YAPEAX_K@Z.c)
 *     ?InternalRelease@?$CMILRefCountBaseT@UIUnknown@@VCMilObjectDeleter@@@@IEAAKXZ @ 0x18007AA30 (-InternalRelease@-$CMILRefCountBaseT@UIUnknown@@VCMilObjectDeleter@@@@IEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x1800DA570 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 *     ?Initialize@CColorKeyBitmapRealization@@IEAAJPEAVIBitmapRealization@@AEBVCColorKey@@@Z @ 0x1801C2A44 (-Initialize@CColorKeyBitmapRealization@@IEAAJPEAVIBitmapRealization@@AEBVCColorKey@@@Z.c)
 *     memset_0 @ 0x180251AD8 (memset_0.c)
 */

__int64 __fastcall CColorKeyBitmapRealization::Create(
        struct IBitmapRealization *a1,
        const struct CColorKey *a2,
        struct IBitmapRealization **a3)
{
  _QWORD *v6; // rax
  _QWORD *v7; // rbx
  int v8; // eax
  unsigned int v9; // edi

  *a3 = 0LL;
  v6 = operator new(0x68uLL);
  v7 = v6;
  if ( v6 )
  {
    memset_0(v6, 0, 0x68uLL);
    v7[7] = 0LL;
    v7[8] = 0LL;
    *v7 = &CColorKeyBitmapRealization::`vftable'{for `CMILCOMBaseT<IUnknown,IUnknown,CMilObjectDeleter>'};
    v7[2] = &CGDISectionBitmapRealization::`vftable'{for `IDeviceResourceNotify'};
    v7[10] = &CColorKeyBitmapRealization::`vftable'{for `IGDIBitmapRealization'};
    v7[11] = &CColorKeyBitmapRealization::`vftable'{for `IPixelColor'};
    *((_BYTE *)v7 + 72) = 0;
    v7[12] = 0LL;
    CMILRefCountImpl::AddReference((CMILRefCountImpl *)(v7 + 1));
    v8 = CColorKeyBitmapRealization::Initialize((CColorKeyBitmapRealization *)v7, a1, a2);
    v9 = v8;
    if ( v8 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v8, 0x19u, 0LL);
      CMILRefCountBaseT<IUnknown,CMilObjectDeleter>::InternalRelease((CGlobalDrawingContext *)v7);
    }
    else
    {
      *a3 = (struct IBitmapRealization *)((unsigned __int64)(v7 + 10) & -(__int64)(v7 != 0LL));
    }
  }
  else
  {
    v9 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024882, 0x17u, 0LL);
  }
  return v9;
}
