/*
 * XREFs of ?GetTargetResource@?$CWeakReference@VCGdiSpriteBitmap@@@@QEBAPEAVCGdiSpriteBitmap@@XZ @ 0x180060BE0
 * Callers:
 *     ?InsertInOrder@CBaseExpression@@QEAAXAEBUExpressionWalkContext@@@Z @ 0x180039AB0 (-InsertInOrder@CBaseExpression@@QEAAXAEBUExpressionWalkContext@@@Z.c)
 *     ?SetTarget@CBaseExpression@@QEAAJIPEAVCResource@@IW4DCOMPOSITION_EXPRESSION_TYPE@@W4SubchannelMaskType@@E_K@Z @ 0x18005FFF0 (-SetTarget@CBaseExpression@@QEAAJIPEAVCResource@@IW4DCOMPOSITION_EXPRESSION_TYPE@@W4SubchannelMa.c)
 *     ?ProcessLegacyTokens@CGlobalSurfaceManager@@AEAAJXZ @ 0x1800699C0 (-ProcessLegacyTokens@CGlobalSurfaceManager@@AEAAJXZ.c)
 *     ?GetInteractionTracker@CScrollAnimation@@IEBAPEAVCInteractionTracker@@XZ @ 0x1800F3D68 (-GetInteractionTracker@CScrollAnimation@@IEBAPEAVCInteractionTracker@@XZ.c)
 *     ?SetRequestedPosition@CInteractionTracker@@AEAA_NAEBUD2DVector3@@W4Enum@InteractionTrackerClampingOption@@W43InteractionTrackerPositionUpdateOption@@@Z @ 0x1800F5EBC (-SetRequestedPosition@CInteractionTracker@@AEAA_NAEBUD2DVector3@@W4Enum@InteractionTrackerClampi.c)
 *     ?GetIndexOfCustomAnimation@CInteractionTracker@@AEBAHPEBUIUnknown@@@Z @ 0x1800F666C (-GetIndexOfCustomAnimation@CInteractionTracker@@AEBAHPEBUIUnknown@@@Z.c)
 *     ?StopCustomAnimation@CInteractionTracker@@AEAAXH_N@Z @ 0x1800F775C (-StopCustomAnimation@CInteractionTracker@@AEAAXH_N@Z.c)
 *     ?HasActiveCustomAnimation@CInteractionTracker@@AEAA_NXZ @ 0x1800F7874 (-HasActiveCustomAnimation@CInteractionTracker@@AEAA_NXZ.c)
 *     ?UnregisterSources@CExpression@@IEAAXXZ @ 0x1801B82B8 (-UnregisterSources@CExpression@@IEAAXXZ.c)
 *     ?InvalidateReadersAnimationSources@DataSourceProxy@@AEAAXI@Z @ 0x1801CFFBC (-InvalidateReadersAnimationSources@DataSourceProxy@@AEAAXI@Z.c)
 *     ?RegisterSourceForAnimation@CExpression@@AEAAJPEAVCBaseExpression@@PEBUExpressionReferenceInfo@@@Z @ 0x180245820 (-RegisterSourceForAnimation@CExpression@@AEAAJPEAVCBaseExpression@@PEBUExpressionReferenceInfo@@.c)
 *     ??1DataSourceProxy@@UEAA@XZ @ 0x18027C254 (--1DataSourceProxy@@UEAA@XZ.c)
 *     ?ResolveTargetNoRef@CBaseExpression@@IEBAPEAVCResource@@XZ @ 0x180297F6C (-ResolveTargetNoRef@CBaseExpression@@IEBAPEAVCResource@@XZ.c)
 *     ?ResolveReference@CExpression@@AEBAJAEBUExpressionReferenceInfo@@PEAVCExpressionValue@@@Z @ 0x1802A4EE4 (-ResolveReference@CExpression@@AEBAJAEBUExpressionReferenceInfo@@PEAVCExpressionValue@@@Z.c)
 *     ?GetCurrentState@CNaturalAnimationScalarForceAdapater@@UEBA?BUIntegrationState@@XZ @ 0x1802B9A10 (-GetCurrentState@CNaturalAnimationScalarForceAdapater@@UEBA-BUIntegrationState@@XZ.c)
 *     ?GetFinalValue@CNaturalAnimationScalarForceAdapater@@UEBAMM@Z @ 0x1802B9AD0 (-GetFinalValue@CNaturalAnimationScalarForceAdapater@@UEBAMM@Z.c)
 *     ?IsInMotion@CNaturalAnimationScalarForceAdapater@@UEBA_NXZ @ 0x1802B9BC0 (-IsInMotion@CNaturalAnimationScalarForceAdapater@@UEBA_NXZ.c)
 *     ?Update@CNaturalAnimationScalarForceAdapater@@UEAAMMPEAVCExpressionValueStack@@_K@Z @ 0x1802B9C50 (-Update@CNaturalAnimationScalarForceAdapater@@UEAAMMPEAVCExpressionValueStack@@_K@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ModuleFailFastForHRESULT @ 0x18024A244 (ModuleFailFastForHRESULT.c)
 *     ??0CThreadContext@@AEAA@XZ @ 0x180251704 (--0CThreadContext@@AEAA@XZ.c)
 */

__int64 __fastcall CWeakReference<CGdiSpriteBitmap>::GetTargetResource(__int64 a1)
{
  CGlobalComposition *v3; // rdi
  _DWORD *Value; // rdi
  HANDLE ProcessHeap; // rax
  CThreadContext *v6; // rax
  CThreadContext *v7; // rax
  void *retaddr; // [rsp+38h] [rbp+0h]

  if ( !g_pComposition )
    goto LABEL_5;
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
          goto LABEL_5;
        }
        TlsSetValue(CThreadContext::s_dwTlsIndex, v7);
      }
      if ( Value[10] )
        return *(_QWORD *)(a1 + 64);
LABEL_5:
      ModuleFailFastForHRESULT(-2003304313, retaddr);
    }
  }
  return *(_QWORD *)(a1 + 64);
}
