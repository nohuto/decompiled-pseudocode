/*
 * XREFs of ?CommitRecordedStatistics@CFlipExSwapchainStatistics@@UEAAJPEAVIOverlaySwapChain@@@Z @ 0x1802501E0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CFlipExSwapchainStatistics::CommitRecordedStatistics(
        CFlipExSwapchainStatistics *this,
        struct IOverlaySwapChain *a2)
{
  unsigned int v2; // edi
  int v3; // eax
  int v4; // ebx

  v2 = 0;
  v3 = NtSetCompositionSurfaceBufferUsage(
         *(_QWORD *)(*((_QWORD *)this + 2) + 32LL),
         *((_QWORD *)this + 2) + 136LL,
         *((unsigned int *)this + 6),
         0LL,
         *((_DWORD *)this + 7));
  if ( v3 < 0 )
  {
    v4 = v3 | 0x10000000;
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v3 | 0x10000000, 0xB2u, 0LL);
    if ( v4 < 0 )
    {
      v2 = v4;
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v4, 0x63u, 0LL);
    }
  }
  return v2;
}
