/*
 * XREFs of ?EnsureHDRMetaData@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAJXZ @ 0x1801A61F0
 * Callers:
 *     ?UpdateRenderingRealization@CGlobalCompositionSurfaceInfo@@IEAA_NPEAVISwapChainRealization@@PEBUCSM_BUFFER_ATTRIBUTES@@PEBUCSM_RGNDATA_@@PEBUScrollOptimization@@@Z @ 0x180028BD0 (-UpdateRenderingRealization@CGlobalCompositionSurfaceInfo@@IEAA_NPEAVISwapChainRealization@@PEBU.c)
 *     ?CreateAndAddSwapChainBuffers@CBindInfo@CGlobalCompositionSurfaceInfo@@IEAAJAEBUCSM_BUFFER_ATTRIBUTES@@I@Z @ 0x1801A5624 (-CreateAndAddSwapChainBuffers@CBindInfo@CGlobalCompositionSurfaceInfo@@IEAAJAEBUCSM_BUFFER_ATTRI.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CGlobalCompositionSurfaceInfo::CBindInfo::EnsureHDRMetaData(
        CGlobalCompositionSurfaceInfo::CBindInfo *this)
{
  _DWORD *v1; // rdi
  int v2; // ebx
  int CompositionSurfaceHDRMetaData; // eax

  v1 = (_DWORD *)((char *)this + 128);
  v2 = 0;
  CompositionSurfaceHDRMetaData = NtQueryCompositionSurfaceHDRMetaData(
                                    *(_QWORD *)(*(_QWORD *)this + 32LL),
                                    (char *)this + 24,
                                    (char *)this + 128,
                                    28LL,
                                    (char *)this + 132);
  if ( CompositionSurfaceHDRMetaData < 0 )
  {
    v2 = CompositionSurfaceHDRMetaData | 0x10000000;
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, CompositionSurfaceHDRMetaData | 0x10000000, 0x763u, 0LL);
    if ( v2 < 0 )
      *v1 = 0;
  }
  return (unsigned int)v2;
}
