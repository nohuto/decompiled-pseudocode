/*
 * XREFs of ?EnsureCachedVisualImage@CVisualBitmap@@AEAAJXZ @ 0x1801E5DE0
 * Callers:
 *     ?CanUseCVI@CVisualBitmap@@AEAA_NPEAVCDrawingContext@@@Z @ 0x1800F621C (-CanUseCVI@CVisualBitmap@@AEAA_NPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     ??$ReleaseInterfaceNoNULL@UIHolographicExclusivePresentData@@@@YAXPEAUIHolographicExclusivePresentData@@@Z @ 0x180024308 (--$ReleaseInterfaceNoNULL@UIHolographicExclusivePresentData@@@@YAXPEAUIHolographicExclusivePrese.c)
 *     ??0CCachedVisualImage@@IEAA@PEAVCComposition@@_N@Z @ 0x18006D8D0 (--0CCachedVisualImage@@IEAA@PEAVCComposition@@_N@Z.c)
 *     ?ChoosePixelFormat@CCachedVisualImage@@IEAAXXZ @ 0x18006D978 (-ChoosePixelFormat@CCachedVisualImage@@IEAAXXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??2CCachedVisualImage@@KAPEAX_K@Z @ 0x180213074 (--2CCachedVisualImage@@KAPEAX_K@Z.c)
 *     ?SetRootVisual@CCachedVisualImage@@IEAAJPEAVCVisual@@@Z @ 0x18028D324 (-SetRootVisual@CCachedVisualImage@@IEAAJPEAVCVisual@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CVisualBitmap::EnsureCachedVisualImage(struct CComposition **this)
{
  unsigned int v1; // edi
  CCachedVisualImage *v2; // rbx
  CCachedVisualImage *v4; // rax
  int v5; // eax
  int v6; // eax

  v1 = 0;
  v2 = 0LL;
  if ( !this[12] )
  {
    v4 = (CCachedVisualImage *)CCachedVisualImage::operator new((unsigned __int64)this);
    if ( v4 )
      v2 = CCachedVisualImage::CCachedVisualImage(v4, this[3]);
    (*(void (__fastcall **)(CCachedVisualImage *))(*(_QWORD *)v2 + 8LL))(v2);
    v5 = (*(__int64 (__fastcall **)(CCachedVisualImage *))(*(_QWORD *)v2 + 56LL))(v2);
    v1 = v5;
    if ( v5 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v5, 0x1Bu, 0LL);
    }
    else
    {
      *((_DWORD *)v2 + 37) = 0;
      *((_DWORD *)v2 + 38) = 0;
      *((_DWORD *)v2 + 39) = 0;
      *((_BYTE *)v2 + 2058) = 1;
      CCachedVisualImage::ChoosePixelFormat(v2);
      (*(void (__fastcall **)(CCachedVisualImage *, _QWORD, _QWORD))(*(_QWORD *)v2 + 80LL))(v2, 0LL, 0LL);
      v6 = CCachedVisualImage::SetRootVisual(v2, this[9]);
      v1 = v6;
      if ( v6 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v6, 0x1Fu, 0LL);
      }
      else
      {
        this[12] = v2;
        v2 = 0LL;
      }
    }
  }
  ReleaseInterfaceNoNULL<IHolographicExclusivePresentData>((__int64)v2);
  return v1;
}
