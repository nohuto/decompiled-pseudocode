/*
 * XREFs of ?GetTargetResource@?$CWeakReference@VCVisual@@@@QEBAPEAVCVisual@@XZ @ 0x18001E0B0
 * Callers:
 *     ?Update@CCpuClippingData@@QEAAJPEBVCVisualTree@@PEAVCVisual@@AEBVCScopedClipStack@@PEBVCShape@@PEBVCMILMatrix@@PEBV1@W4D2D1_ANTIALIAS_MODE@@W4CpuClippingScopeMode@@@Z @ 0x18001BD40 (-Update@CCpuClippingData@@QEAAJPEBVCVisualTree@@PEAVCVisual@@AEBVCScopedClipStack@@PEBVCShape@@P.c)
 *     ?GetTransformParent@CVisual@@QEBAPEBV1@PEBVCVisualTree@@PEA_N@Z @ 0x18001DF00 (-GetTransformParent@CVisual@@QEBAPEBV1@PEBVCVisualTree@@PEA_N@Z.c)
 *     ?GetParentTreeData@CVisual@@AEBAPEBVCTreeData@@PEBVCVisualTree@@PEAV2@PEA_N@Z @ 0x18001E1C0 (-GetParentTreeData@CVisual@@AEBAPEBVCTreeData@@PEBVCVisualTree@@PEAV2@PEA_N@Z.c)
 *     ?ProcessVisuals@CPreWalkVisual@@SAXXZ @ 0x18001E4A0 (-ProcessVisuals@CPreWalkVisual@@SAXXZ.c)
 *     ?ProcessPostSubgraphWindowBackdropInput@CPreComputeContext@@AEAAJPEAVCVisual@@@Z @ 0x180024410 (-ProcessPostSubgraphWindowBackdropInput@CPreComputeContext@@AEAAJPEAVCVisual@@@Z.c)
 *     ?PreSubgraph@CHitTestContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x1800B5890 (-PreSubgraph@CHitTestContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?GetVisualNoRef@CExcludeVisualReference@@QEBAPEAVCVisual@@XZ @ 0x1800C529C (-GetVisualNoRef@CExcludeVisualReference@@QEBAPEAVCVisual@@XZ.c)
 *     ?PostSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x1800E7AF0 (-PostSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x1800E9350 (-PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?SkipInvalidTransformParentSubtree@CVisual@@QEBA_NPEBVCVisualTree@@@Z @ 0x18010C430 (-SkipInvalidTransformParentSubtree@CVisual@@QEBA_NPEBVCVisualTree@@@Z.c)
 *     ?GetVisualNoRef@CInteraction@@QEBAPEAVCVisual@@XZ @ 0x18013A998 (-GetVisualNoRef@CInteraction@@QEBAPEAVCVisual@@XZ.c)
 *     ?Restore@CExcludeVisualReference@@UEAAJXZ @ 0x1801F6AD0 (-Restore@CExcludeVisualReference@@UEAAJXZ.c)
 *     ?Show@CExcludeVisualReference@@UEAAJXZ @ 0x1802023A0 (-Show@CExcludeVisualReference@@UEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ModuleFailFastForHRESULT @ 0x18024A244 (ModuleFailFastForHRESULT.c)
 *     ??0CThreadContext@@AEAA@XZ @ 0x180251704 (--0CThreadContext@@AEAA@XZ.c)
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
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x28u, 0LL);
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
