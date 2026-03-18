/*
 * XREFs of ?GetTargetResource@?$CWeakReference@VCVisual@@@@QEBAPEAVCVisual@@XZ @ 0x1800B0A10
 * Callers:
 *     ?ProcessPostSubgraphWindowBackdropInput@CPreComputeContext@@AEAAJPEAVCVisual@@@Z @ 0x1800344E0 (-ProcessPostSubgraphWindowBackdropInput@CPreComputeContext@@AEAAJPEAVCVisual@@@Z.c)
 *     ?PostSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180082470 (-PostSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180083CD0 (-PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?GetVisualNoRef@CInteraction@@QEBAPEAVCVisual@@XZ @ 0x180095A18 (-GetVisualNoRef@CInteraction@@QEBAPEAVCVisual@@XZ.c)
 *     ?GetVisualNoRef@CExcludeVisualReference@@QEBAPEAVCVisual@@XZ @ 0x180097238 (-GetVisualNoRef@CExcludeVisualReference@@QEBAPEAVCVisual@@XZ.c)
 *     ?Update@CCpuClippingData@@QEAAJPEBVCVisualTree@@PEAVCVisual@@AEBVCScopedClipStack@@PEBVCShape@@PEBVCMILMatrix@@PEBV1@W4D2D1_ANTIALIAS_MODE@@W4CpuClippingScopeMode@@@Z @ 0x1800AE6F0 (-Update@CCpuClippingData@@QEAAJPEBVCVisualTree@@PEAVCVisual@@AEBVCScopedClipStack@@PEBVCShape@@P.c)
 *     ?GetTransformParent@CVisual@@QEBAPEBV1@PEBVCVisualTree@@PEA_N@Z @ 0x1800B0870 (-GetTransformParent@CVisual@@QEBAPEBV1@PEBVCVisualTree@@PEA_N@Z.c)
 *     ?GetParentTreeData@CVisual@@AEBAPEBVCTreeData@@PEBVCVisualTree@@PEAV2@PEA_N@Z @ 0x1800B0B20 (-GetParentTreeData@CVisual@@AEBAPEBVCTreeData@@PEBVCVisualTree@@PEAV2@PEA_N@Z.c)
 *     ?PreSubgraph@CHitTestContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x1800C1560 (-PreSubgraph@CHitTestContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?SkipInvalidTransformParentSubtree@CVisual@@QEBA_NPEBVCVisualTree@@@Z @ 0x1800D6B70 (-SkipInvalidTransformParentSubtree@CVisual@@QEBA_NPEBVCVisualTree@@@Z.c)
 *     ?Restore@CExcludeVisualReference@@UEAAJXZ @ 0x1801E9720 (-Restore@CExcludeVisualReference@@UEAAJXZ.c)
 *     ?Show@CExcludeVisualReference@@UEAAJXZ @ 0x1801F6130 (-Show@CExcludeVisualReference@@UEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ModuleFailFastForHRESULT @ 0x18024634C (ModuleFailFastForHRESULT.c)
 *     ??0CThreadContext@@AEAA@XZ @ 0x1802467D8 (--0CThreadContext@@AEAA@XZ.c)
 */

__int64 __fastcall CWeakReference<CVisual>::GetTargetResource(__int64 a1)
{
  CGlobalComposition *v3; // rdi
  _DWORD *Value; // rdi
  HANDLE ProcessHeap; // rax
  CThreadContext *v6; // rax
  CThreadContext *v7; // rax
  void *retaddr; // [rsp+38h] [rbp+0h]

  if ( !g_pComposition )
    goto LABEL_12;
  if ( GetCurrentThreadId() != CComposition::s_compositionThreadId )
  {
    v3 = g_pComposition;
    if ( GetCurrentThreadId() != *((_DWORD *)v3 + 1428) )
    {
      Value = TlsGetValue(CThreadContext::s_dwTlsIndex);
      if ( !Value )
      {
        ProcessHeap = GetProcessHeap();
        v6 = (CThreadContext *)HeapAlloc(ProcessHeap, 0, 0x1C0uLL);
        if ( !v6 || (v7 = CThreadContext::CThreadContext(v6), (Value = v7) == 0LL) )
        {
          MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024882, 0x28u, 0LL);
          goto LABEL_12;
        }
        TlsSetValue(CThreadContext::s_dwTlsIndex, v7);
      }
      if ( Value[10] )
        return *(_QWORD *)(a1 + 64);
LABEL_12:
      ModuleFailFastForHRESULT(-2003304313, retaddr);
    }
  }
  return *(_QWORD *)(a1 + 64);
}
