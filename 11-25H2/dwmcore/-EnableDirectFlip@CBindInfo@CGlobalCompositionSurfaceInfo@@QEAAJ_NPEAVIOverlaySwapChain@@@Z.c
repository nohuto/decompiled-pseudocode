/*
 * XREFs of ?EnableDirectFlip@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAJ_NPEAVIOverlaySwapChain@@@Z @ 0x1801E85C8
 * Callers:
 *     ?EnableDirectFlip@CGlobalCompositionSurfaceInfo@@UEAAJ_K_NPEAVIOverlaySwapChain@@@Z @ 0x180234990 (-EnableDirectFlip@CGlobalCompositionSurfaceInfo@@UEAAJ_K_NPEAVIOverlaySwapChain@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?PinResources@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAJXZ @ 0x1801E8854 (-PinResources@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAJXZ.c)
 *     ?EnsureOverlaySwapChainWeakRef@CBindInfo@CGlobalCompositionSurfaceInfo@@IEAAJPEAVIOverlaySwapChain@@@Z @ 0x1801E8D3C (-EnsureOverlaySwapChainWeakRef@CBindInfo@CGlobalCompositionSurfaceInfo@@IEAAJPEAVIOverlaySwapCha.c)
 */

__int64 __fastcall CGlobalCompositionSurfaceInfo::CBindInfo::EnableDirectFlip(
        CGlobalCompositionSurfaceInfo::CBindInfo *this,
        unsigned __int8 a2,
        struct IOverlaySwapChain *a3)
{
  int v5; // eax
  int v6; // ebx
  unsigned int v7; // eax

  v5 = NtSetCompositionSurfaceDirectFlipState(*(_QWORD *)(*(_QWORD *)this + 32LL), (char *)this + 24, 1LL, a2);
  if ( v5 >= 0 )
  {
    v6 = CGlobalCompositionSurfaceInfo::CBindInfo::PinResources(this);
    if ( v6 >= 0 )
    {
      v6 = CGlobalCompositionSurfaceInfo::CBindInfo::EnsureOverlaySwapChainWeakRef(this, a3);
      if ( v6 >= 0 )
      {
        *((_BYTE *)this + 186) = 1;
        return (unsigned int)v6;
      }
      v7 = 1168;
    }
    else
    {
      v7 = 1164;
    }
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v6, v7, 0LL);
    NtSetCompositionSurfaceDirectFlipState(*(_QWORD *)(*(_QWORD *)this + 32LL), (char *)this + 24, 0LL, 0LL);
  }
  else
  {
    v6 = v5 | 0x10000000;
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v5 | 0x10000000, 0x48Bu, 0LL);
  }
  return (unsigned int)v6;
}
