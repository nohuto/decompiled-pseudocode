/*
 * XREFs of ?Initialize@CKeyframeAnimation@@QEAAJPEAVCResource@@IW4DCOMPOSITION_EXPRESSION_TYPE@@W4Enum@CompositionColorSpace@@W4SubchannelMaskType@@E_KW44KeyframeAnimationDelayBehavior@@MW44KeyframeAnimationDirection@@MW44KeyframeAnimationStopBehavior@@IPEAUKeyframeData@@@Z @ 0x1802458F4
 * Callers:
 *     ?CreateAndStartKeyframeAnimation@CInteractionTracker@@AEAAJW4Enum@InteractionTrackerProperty@@W4DCOMPOSITION_EXPRESSION_TYPE@@AEBUD2DVector4@@MPEAPEAVCScrollKeyframeAnimation@@@Z @ 0x180237A34 (-CreateAndStartKeyframeAnimation@CInteractionTracker@@AEAAJW4Enum@InteractionTrackerProperty@@W4.c)
 *     ?AppendDirtyRegionVisualizationRects@CVisual@@AEAAJPEAV?$DynArray@UD2D_RECT_F@@$0A@@@@Z @ 0x180296AA8 (-AppendDirtyRegionVisualizationRects@CVisual@@AEAAJPEAV-$DynArray@UD2D_RECT_F@@$0A@@@@Z.c)
 * Callees:
 *     ?GetFrameTargetTime@CComposition@@QEBA_KXZ @ 0x1800320D0 (-GetFrameTargetTime@CComposition@@QEBA_KXZ.c)
 *     ?reset@?$unique_ptr@VKeyframeSequence@@U?$default_delete@VKeyframeSequence@@@std@@@std@@QEAAXPEAVKeyframeSequence@@@Z @ 0x18005D35C (-reset@-$unique_ptr@VKeyframeSequence@@U-$default_delete@VKeyframeSequence@@@std@@@std@@QEAAXPEA.c)
 *     ?SetTarget@CBaseExpression@@QEAAJIPEAVCResource@@IW4DCOMPOSITION_EXPRESSION_TYPE@@W4SubchannelMaskType@@E_K@Z @ 0x18005FFF0 (-SetTarget@CBaseExpression@@QEAAJIPEAVCResource@@IW4DCOMPOSITION_EXPRESSION_TYPE@@W4SubchannelMa.c)
 *     ?TryRegisterWithExpressionManager@CBaseExpression@@IEAAJXZ @ 0x1800604F0 (-TryRegisterWithExpressionManager@CBaseExpression@@IEAAJXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?SetIterationInfo@CKeyframeAnimation@@AEAAJMW4Enum@KeyframeAnimationDirection@@MW42KeyframeAnimationStopBehavior@@@Z @ 0x1801E6588 (-SetIterationInfo@CKeyframeAnimation@@AEAAJMW4Enum@KeyframeAnimationDirection@@MW42KeyframeAnima.c)
 *     ?UpdatePlaybackState@CKeyframeAnimation@@AEAAJW4Enum@KeyframeAnimationPlaybackState@@_N_K@Z @ 0x1801EB39C (-UpdatePlaybackState@CKeyframeAnimation@@AEAAJW4Enum@KeyframeAnimationPlaybackState@@_N_K@Z.c)
 *     ?SetKeyFrameData@CKeyframeAnimation@@AEAAJW4Enum@KeyframeAnimationDelayBehavior@@W42CompositionColorSpace@@PEBUKeyframeData@@@Z @ 0x1802A8A74 (-SetKeyFrameData@CKeyframeAnimation@@AEAAJW4Enum@KeyframeAnimationDelayBehavior@@W42CompositionC.c)
 */

__int64 __fastcall CKeyframeAnimation::Initialize(
        __int64 a1,
        __int64 a2,
        int a3,
        unsigned int a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        float a10,
        __int64 a11,
        int a12,
        __int64 a13,
        __int64 a14,
        __int64 a15)
{
  int updated; // edi
  __int64 FrameTargetTime; // rax
  unsigned int v18; // eax

  updated = CBaseExpression::SetTarget(a1, 0, a2, a3, a4, 0, 0, 0LL);
  if ( updated < 0 )
  {
    v18 = 76;
    goto LABEL_11;
  }
  *(_DWORD *)(a1 + 492) = 2;
  updated = CKeyframeAnimation::SetIterationInfo(a1, a10, 0, COERCE_DOUBLE((unsigned __int64)a12), 0);
  if ( updated < 0 )
  {
    v18 = 84;
    goto LABEL_11;
  }
  updated = CKeyframeAnimation::SetKeyFrameData(a1, 0LL, 0LL, a15);
  if ( updated < 0 )
  {
    v18 = 89;
    goto LABEL_11;
  }
  updated = CBaseExpression::TryRegisterWithExpressionManager((CBaseExpression *)a1);
  if ( updated < 0 )
  {
    v18 = 91;
    goto LABEL_11;
  }
  FrameTargetTime = CComposition::GetFrameTargetTime(*(CComposition **)(a1 + 24));
  updated = CKeyframeAnimation::UpdatePlaybackState(a1, 1u, 1, FrameTargetTime);
  if ( updated < 0 )
  {
    v18 = 96;
LABEL_11:
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, updated, v18, 0LL);
    std::unique_ptr<KeyframeSequence>::reset((KeyframeSequence **)(a1 + 352), 0LL);
  }
  return (unsigned int)updated;
}
