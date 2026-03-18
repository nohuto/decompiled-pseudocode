/*
 * XREFs of ?SetForDCompSnapshot@CCachedVisualImage@@IEAAJPEAVCVisual@@AEBUD2D_SIZE_U@@_N@Z @ 0x18028D184
 * Callers:
 *     ?CreateCVI@CSnapshot@@AEAAJPEAVCVisual@@@Z @ 0x1802A9018 (-CreateCVI@CSnapshot@@AEAAJPEAVCVisual@@@Z.c)
 * Callees:
 *     ?ChoosePixelFormat@CCachedVisualImage@@IEAAXXZ @ 0x18006D978 (-ChoosePixelFormat@CCachedVisualImage@@IEAAXXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?SetRootVisual@CCachedVisualImage@@IEAAJPEAVCVisual@@@Z @ 0x18028D324 (-SetRootVisual@CCachedVisualImage@@IEAAJPEAVCVisual@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CCachedVisualImage::SetForDCompSnapshot(
        CCachedVisualImage *this,
        struct CVisual *a2,
        const struct D2D_SIZE_U *a3,
        char a4)
{
  int v7; // eax
  unsigned int v8; // edi
  signed int height; // eax

  v7 = CCachedVisualImage::SetRootVisual(this, a2);
  v8 = v7;
  if ( v7 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v7, 0x1C6u, 0LL);
  }
  else
  {
    *((_QWORD *)this + 12) = 0LL;
    *((float *)this + 26) = (float)(int)a3->width;
    *((float *)this + 27) = (float)(int)a3->height;
    *((float *)this + 30) = (float)(int)a3->width;
    height = a3->height;
    *((_QWORD *)this + 18) = 0LL;
    *((_QWORD *)this + 19) = 0LL;
    *((_DWORD *)this + 42) = 2;
    *((_BYTE *)this + 2059) = a4;
    *((float *)this + 31) = (float)height;
    CCachedVisualImage::ChoosePixelFormat(this);
    (*(void (__fastcall **)(CCachedVisualImage *, _QWORD, _QWORD))(*(_QWORD *)this + 80LL))(this, 0LL, 0LL);
  }
  return v8;
}
