/*
 * XREFs of ?GetTargetResource@?$CWeakReference@VCGdiSpriteBitmap@@@@QEBAPEAVCGdiSpriteBitmap@@XZ @ 0x1800163B0
 * Callers:
 *     ?InsertInOrder@CBaseExpression@@QEAAXAEBUExpressionWalkContext@@@Z @ 0x180013310 (-InsertInOrder@CBaseExpression@@QEAAXAEBUExpressionWalkContext@@@Z.c)
 *     ?SetTarget@CBaseExpression@@QEAAJIPEAVCResource@@IW4DCOMPOSITION_EXPRESSION_TYPE@@W4SubchannelMaskType@@E_K@Z @ 0x180015570 (-SetTarget@CBaseExpression@@QEAAJIPEAVCResource@@IW4DCOMPOSITION_EXPRESSION_TYPE@@W4SubchannelMa.c)
 *     ?ProcessLegacyTokens@CGlobalSurfaceManager@@AEAAJXZ @ 0x18003FA40 (-ProcessLegacyTokens@CGlobalSurfaceManager@@AEAAJXZ.c)
 *     ?GetInteractionTracker@CScrollAnimation@@IEBAPEAVCInteractionTracker@@XZ @ 0x1800E42A8 (-GetInteractionTracker@CScrollAnimation@@IEBAPEAVCInteractionTracker@@XZ.c)
 *     ?SetRequestedPosition@CInteractionTracker@@AEAA_NAEBUD2DVector3@@W4Enum@InteractionTrackerClampingOption@@W43InteractionTrackerPositionUpdateOption@@@Z @ 0x1800E51BC (-SetRequestedPosition@CInteractionTracker@@AEAA_NAEBUD2DVector3@@W4Enum@InteractionTrackerClampi.c)
 *     ?StopCustomAnimation@CInteractionTracker@@AEAAXH_N@Z @ 0x1800E556C (-StopCustomAnimation@CInteractionTracker@@AEAAXH_N@Z.c)
 *     ?HasActiveCustomAnimation@CInteractionTracker@@AEAA_NXZ @ 0x1800E5828 (-HasActiveCustomAnimation@CInteractionTracker@@AEAA_NXZ.c)
 *     ?GetIndexOfCustomAnimation@CInteractionTracker@@AEBAHPEBUIUnknown@@@Z @ 0x1800E6354 (-GetIndexOfCustomAnimation@CInteractionTracker@@AEBAHPEBUIUnknown@@@Z.c)
 *     ?UnregisterSources@CExpression@@IEAAXXZ @ 0x1800E8608 (-UnregisterSources@CExpression@@IEAAXXZ.c)
 *     ?SetOutputValue@CBaseExpression@@IEAAJPEBVCExpressionValue@@@Z @ 0x180154180 (-SetOutputValue@CBaseExpression@@IEAAJPEBVCExpressionValue@@@Z.c)
 *     ?InvalidateReadersAnimationSources@DataSourceProxy@@AEAAXI@Z @ 0x1801A845C (-InvalidateReadersAnimationSources@DataSourceProxy@@AEAAXI@Z.c)
 *     ?RegisterSourceForAnimation@CExpression@@AEAAJPEAVCBaseExpression@@PEBUExpressionReferenceInfo@@@Z @ 0x18023D730 (-RegisterSourceForAnimation@CExpression@@AEAAJPEAVCBaseExpression@@PEBUExpressionReferenceInfo@@.c)
 *     ??1DataSourceProxy@@UEAA@XZ @ 0x180271B44 (--1DataSourceProxy@@UEAA@XZ.c)
 *     ?ResolveTargetNoRef@CBaseExpression@@IEBAPEAVCResource@@XZ @ 0x18028CAFC (-ResolveTargetNoRef@CBaseExpression@@IEBAPEAVCResource@@XZ.c)
 *     ?ResolveReference@CExpression@@AEBAJAEBUExpressionReferenceInfo@@PEAVCExpressionValue@@@Z @ 0x18029B124 (-ResolveReference@CExpression@@AEBAJAEBUExpressionReferenceInfo@@PEAVCExpressionValue@@@Z.c)
 *     ?GetCurrentState@CNaturalAnimationScalarForceAdapater@@UEBA?BUIntegrationState@@XZ @ 0x1802AFE20 (-GetCurrentState@CNaturalAnimationScalarForceAdapater@@UEBA-BUIntegrationState@@XZ.c)
 *     ?GetFinalValue@CNaturalAnimationScalarForceAdapater@@UEBAMM@Z @ 0x1802AFEE0 (-GetFinalValue@CNaturalAnimationScalarForceAdapater@@UEBAMM@Z.c)
 *     ?IsInMotion@CNaturalAnimationScalarForceAdapater@@UEBA_NXZ @ 0x1802AFFD0 (-IsInMotion@CNaturalAnimationScalarForceAdapater@@UEBA_NXZ.c)
 *     ?Update@CNaturalAnimationScalarForceAdapater@@UEAAMMPEAVCExpressionValueStack@@_K@Z @ 0x1802B0060 (-Update@CNaturalAnimationScalarForceAdapater@@UEAAMMPEAVCExpressionValueStack@@_K@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ModuleFailFastForHRESULT @ 0x18024634C (ModuleFailFastForHRESULT.c)
 *     ??0CThreadContext@@AEAA@XZ @ 0x1802467D8 (--0CThreadContext@@AEAA@XZ.c)
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
