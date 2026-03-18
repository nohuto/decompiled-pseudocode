/*
 * XREFs of ?EnableOverlay@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAJPEAVIOverlaySwapChain@@@Z @ 0x1801E87B0
 * Callers:
 *     ?EnableOverlay@CGlobalCompositionSurfaceInfo@@UEAAJ_KPEAVIOverlaySwapChain@@@Z @ 0x1801E8740 (-EnableOverlay@CGlobalCompositionSurfaceInfo@@UEAAJ_KPEAVIOverlaySwapChain@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?PinResources@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAJXZ @ 0x1801E8854 (-PinResources@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAJXZ.c)
 *     ?EnsureOverlaySwapChainWeakRef@CBindInfo@CGlobalCompositionSurfaceInfo@@IEAAJPEAVIOverlaySwapChain@@@Z @ 0x1801E8D3C (-EnsureOverlaySwapChainWeakRef@CBindInfo@CGlobalCompositionSurfaceInfo@@IEAAJPEAVIOverlaySwapCha.c)
 */

__int64 __fastcall CGlobalCompositionSurfaceInfo::CBindInfo::EnableOverlay(
        CGlobalCompositionSurfaceInfo::CBindInfo *this,
        struct IOverlaySwapChain *a2)
{
  int v4; // eax
  unsigned int v5; // ebx
  unsigned int v7; // [rsp+20h] [rbp-18h]

  if ( *((_BYTE *)this + 184) )
  {
    v5 = -2003292412;
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2003292412, 0x4C5u, 0LL);
    return v5;
  }
  v4 = CGlobalCompositionSurfaceInfo::CBindInfo::PinResources(this);
  v5 = v4;
  if ( v4 >= 0 )
  {
    v4 = CGlobalCompositionSurfaceInfo::CBindInfo::EnsureOverlaySwapChainWeakRef(this, a2);
    v5 = v4;
    if ( v4 >= 0 )
    {
      *((_BYTE *)this + 187) = 1;
      return v5;
    }
    v7 = 1225;
  }
  else
  {
    v7 = 1224;
  }
  MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v4, v7, 0LL);
  return v5;
}
