/*
 * XREFs of ?UpdateSwapChainTelemetry@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAXW4SwapChainStat@CCompositionSurfaceInfo@@_N@Z @ 0x180204280
 * Callers:
 *     ?TraceSwapChainTelemetry@CBindInfo@CGlobalCompositionSurfaceInfo@@IEAAXXZ @ 0x1801A4F7C (-TraceSwapChainTelemetry@CBindInfo@CGlobalCompositionSurfaceInfo@@IEAAXXZ.c)
 *     ?UpdateSwapChainTelemetry@CGlobalCompositionSurfaceInfo@@UEAAXW4SwapChainStat@CCompositionSurfaceInfo@@_N@Z @ 0x18021A0C0 (-UpdateSwapChainTelemetry@CGlobalCompositionSurfaceInfo@@UEAAXW4SwapChainStat@CCompositionSurfac.c)
 * Callees:
 *     ?GetFrameTargetTime@CComposition@@QEBA_KXZ @ 0x1800F3A90 (-GetFrameTargetTime@CComposition@@QEBA_KXZ.c)
 */

void __fastcall CGlobalCompositionSurfaceInfo::CBindInfo::UpdateSwapChainTelemetry(__int64 a1, int a2, char a3)
{
  __int64 v4; // rsi
  unsigned __int64 FrameTargetTime; // rax

  v4 = a2;
  if ( *(_QWORD *)(a1 + 288) )
  {
    FrameTargetTime = CComposition::GetFrameTargetTime(g_pComposition);
    if ( a3 )
      *(_QWORD *)(a1 + 16 * (v4 + 14)) = FrameTargetTime;
    else
      *(_QWORD *)(a1 + 16 * v4 + 232) += (FrameTargetTime - *(_QWORD *)(a1 + 16 * (v4 + 14)))
                                       / (g_qpcFrequency.QuadPart
                                        / 1000);
  }
}
