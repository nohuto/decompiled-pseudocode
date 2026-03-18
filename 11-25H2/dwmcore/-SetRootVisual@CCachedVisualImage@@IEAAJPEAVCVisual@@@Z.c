/*
 * XREFs of ?SetRootVisual@CCachedVisualImage@@IEAAJPEAVCVisual@@@Z @ 0x180298794
 * Callers:
 *     ?EnsureCachedVisualImage@CVisualBitmap@@AEAAJXZ @ 0x1801EFAF0 (-EnsureCachedVisualImage@CVisualBitmap@@AEAAJXZ.c)
 *     ?SetForDCompSnapshot@CCachedVisualImage@@IEAAJPEAVCVisual@@AEBUD2D_SIZE_U@@_N@Z @ 0x1802985F4 (-SetForDCompSnapshot@CCachedVisualImage@@IEAAJPEAVCVisual@@AEBUD2D_SIZE_U@@_N@Z.c)
 * Callees:
 *     ?MarkAllTargetsDirty@CCachedVisualImage@@QEAAXXZ @ 0x18009C400 (-MarkAllTargetsDirty@CCachedVisualImage@@QEAAXXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CCachedVisualImage::SetRootVisual(CCachedVisualImage *this, struct CVisual *a2)
{
  unsigned int v2; // edi
  __int64 v5; // rax
  int v6; // eax
  int v7; // eax

  v2 = 0;
  if ( !*((_BYTE *)this + 2056) )
  {
    (*(void (__fastcall **)(CCachedVisualImage *))(*(_QWORD *)this + 192LL))(this);
    v5 = *(_QWORD *)this;
    *((_QWORD *)this + 17) = a2;
    v6 = (*(__int64 (__fastcall **)(CCachedVisualImage *))(v5 + 184))(this);
    v2 = v6;
    if ( v6 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v6, 0x322u, 0LL);
    }
    else
    {
      v7 = (*(__int64 (__fastcall **)(CCachedVisualImage *))(*(_QWORD *)this + 224LL))(this);
      v2 = v7;
      if ( v7 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v7, 0x324u, 0LL);
      }
      else
      {
        CCachedVisualImage::MarkAllTargetsDirty(this);
        (*(void (__fastcall **)(CCachedVisualImage *, _QWORD, _QWORD))(*(_QWORD *)this + 80LL))(this, 0LL, 0LL);
      }
    }
  }
  return v2;
}
