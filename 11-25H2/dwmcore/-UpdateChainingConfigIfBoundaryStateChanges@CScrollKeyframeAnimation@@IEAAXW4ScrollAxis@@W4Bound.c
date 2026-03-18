/*
 * XREFs of ?UpdateChainingConfigIfBoundaryStateChanges@CScrollKeyframeAnimation@@IEAAXW4ScrollAxis@@W4Boundary@@@Z @ 0x180234354
 * Callers:
 *     ?EnsureChainingConfigUpdated@CScrollPositionKeyframeAnimation@@MEAAXPEAVCExpressionValueStack@@_K@Z @ 0x1802283D0 (-EnsureChainingConfigUpdated@CScrollPositionKeyframeAnimation@@MEAAXPEAVCExpressionValueStack@@_.c)
 *     ?EnsureChainingConfigUpdated@CScrollScaleKeyframeAnimation@@MEAAXPEAVCExpressionValueStack@@_K@Z @ 0x1802B53C0 (-EnsureChainingConfigUpdated@CScrollScaleKeyframeAnimation@@MEAAXPEAVCExpressionValueStack@@_K@Z.c)
 * Callees:
 *     ?GetCurrentValue@CInteractionTracker@@QEBAMW4ScrollAxis@@@Z @ 0x18003D85C (-GetCurrentValue@CInteractionTracker@@QEBAMW4ScrollAxis@@@Z.c)
 *     ?BoundaryFromValue@CInteractionTracker@@QEBA?AW4Boundary@@MW4ScrollAxis@@@Z @ 0x18003D910 (-BoundaryFromValue@CInteractionTracker@@QEBA-AW4Boundary@@MW4ScrollAxis@@@Z.c)
 *     ?TryGetActiveChainingHelper@InteractionSourceManager@@QEBAPEAVCChainingHelper@@XZ @ 0x18003D970 (-TryGetActiveChainingHelper@InteractionSourceManager@@QEBAPEAVCChainingHelper@@XZ.c)
 *     ?ShouldChainForAxis@CInteractionTracker@@QEBA_NW4ScrollAxis@@PEBVCManipulation@@_N@Z @ 0x18003DDB8 (-ShouldChainForAxis@CInteractionTracker@@QEBA_NW4ScrollAxis@@PEBVCManipulation@@_N@Z.c)
 *     ?TryGetActiveManipulation@InteractionSourceManager@@QEBAPEAVCManipulation@@XZ @ 0x1800F3D84 (-TryGetActiveManipulation@InteractionSourceManager@@QEBAPEAVCManipulation@@XZ.c)
 *     ?RestoreSupportedInteractionsWithBoundaries@CChainingHelper@@QEAAXW4ScrollAxis@@W4Boundary@@_N2@Z @ 0x180211A70 (-RestoreSupportedInteractionsWithBoundaries@CChainingHelper@@QEAAXW4ScrollAxis@@W4Boundary@@_N2@.c)
 *     ?ShouldChainAllForAxis@CInteractionTracker@@QEBA_NW4ScrollAxis@@PEBVCManipulation@@@Z @ 0x180220158 (-ShouldChainAllForAxis@CInteractionTracker@@QEBA_NW4ScrollAxis@@PEBVCManipulation@@@Z.c)
 */

struct CManipulation *__fastcall CScrollKeyframeAnimation::UpdateChainingConfigIfBoundaryStateChanges(
        __int64 a1,
        unsigned int a2,
        unsigned int a3)
{
  float *v3; // rbx
  double CurrentValue; // xmm0_8
  struct CManipulation *result; // rax
  __int64 v9; // rbx
  struct CChainingHelper *ActiveChainingHelper; // rsi
  __int64 v11; // rcx
  char ShouldChainAllForAxis; // bl
  __int64 v13; // rcx
  __int64 v14; // r10
  __int64 v15; // r9

  v3 = *(float **)(a1 + 544);
  CurrentValue = CInteractionTracker::GetCurrentValue((__int64)v3, a2);
  result = (struct CManipulation *)CInteractionTracker::BoundaryFromValue(v3, *(float *)&CurrentValue, a2);
  if ( (_DWORD)result != a3 )
  {
    v9 = *(_QWORD *)(a1 + 544);
    ActiveChainingHelper = InteractionSourceManager::TryGetActiveChainingHelper((InteractionSourceManager *)(v9 + 208));
    result = InteractionSourceManager::TryGetActiveManipulation((InteractionSourceManager *)(v9 + 208));
    if ( ActiveChainingHelper )
    {
      if ( result )
      {
        ShouldChainAllForAxis = CInteractionTracker::ShouldChainAllForAxis(v11, a2, (__int64)result);
        LOBYTE(v15) = CInteractionTracker::ShouldChainForAxis(v13, a2, v14, 1u);
        return (struct CManipulation *)CChainingHelper::RestoreSupportedInteractionsWithBoundaries(
                                         (__int64)ActiveChainingHelper,
                                         a2,
                                         a3,
                                         v15,
                                         ShouldChainAllForAxis);
      }
    }
  }
  return result;
}
