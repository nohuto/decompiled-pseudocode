/*
 * XREFs of ?NotifyAnimationCompleted@CBaseExpression@@QEAAJXZ @ 0x180154388
 * Callers:
 *     ?CalculateValueWorker@CKeyframeAnimation@@UEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x18000F9B0 (-CalculateValueWorker@CKeyframeAnimation@@UEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 *     ?CalculateValue@CNaturalAnimation@@AEAAXPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x1801BAEE0 (-CalculateValue@CNaturalAnimation@@AEAAXPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 *     ?ProcessSetRequestedScaleAnimation@CInteractionTracker@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_INTERACTIONTRACKER_SETREQUESTEDSCALEANIMATION@@@Z @ 0x1801E11CC (-ProcessSetRequestedScaleAnimation@CInteractionTracker@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_I.c)
 *     ?ProcessSetRequestedPositionAnimation@CInteractionTracker@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_INTERACTIONTRACKER_SETREQUESTEDPOSITIONANIMATION@@@Z @ 0x1801E12EC (-ProcessSetRequestedPositionAnimation@CInteractionTracker@@QEAAJPEAVCResourceTable@@PEBUtagMILCM.c)
 *     ?CalculateValueWorker@CInjectionAnimation@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x18029C250 (-CalculateValueWorker@CInjectionAnimation@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     ?IsAutoCompleteOnScreenOccluded@CKeyframeAnimation@@UEBA_NXZ @ 0x180014CD0 (-IsAutoCompleteOnScreenOccluded@CKeyframeAnimation@@UEBA_NXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetCount@?$CPtrArray@VCVisual@@@@QEBA_KXZ @ 0x1800BF1E0 (-GetCount@-$CPtrArray@VCVisual@@@@QEBA_KXZ.c)
 *     ?ShouldNotify@CNotificationResource@@IEBA_NXZ @ 0x180154670 (-ShouldNotify@CNotificationResource@@IEBA_NXZ.c)
 *     ?QueueAnimationStateChange@CExpressionManager@@QEAAJW4AnimationEventType@@PEAVCBaseExpression@@@Z @ 0x180154694 (-QueueAnimationStateChange@CExpressionManager@@QEAAJW4AnimationEventType@@PEAVCBaseExpression@@@.c)
 *     ?EnsureAutoCompleteOnOccludedAnimationRemoved@CExpressionManager@@QEAAXPEAVCBaseExpression@@@Z @ 0x1801547D0 (-EnsureAutoCompleteOnOccludedAnimationRemoved@CExpressionManager@@QEAAXPEAVCBaseExpression@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CBaseExpression::NotifyAnimationCompleted(CBaseExpression *this)
{
  unsigned int v2; // edi
  __int64 v3; // rcx
  int v4; // eax
  bool (__fastcall *v5)(CKeyframeAnimation *); // rax
  bool IsAutoCompleteOnScreenOccluded; // al

  v2 = 0;
  if ( (CNotificationResource::ShouldNotify(this) || CPtrArray<CVisual>::GetCount((_QWORD *)(v3 + 32)))
    && (v4 = CExpressionManager::QueueAnimationStateChange(*(_QWORD *)(*((_QWORD *)this + 3) + 824LL), 1LL, this),
        v2 = v4,
        v4 < 0) )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v4, 0x534u, 0LL);
  }
  else
  {
    v5 = *(bool (__fastcall **)(CKeyframeAnimation *))(*(_QWORD *)this + 240LL);
    if ( v5 == CKeyframeAnimation::IsAutoCompleteOnScreenOccluded )
      IsAutoCompleteOnScreenOccluded = CKeyframeAnimation::IsAutoCompleteOnScreenOccluded(this);
    else
      IsAutoCompleteOnScreenOccluded = v5(this);
    if ( IsAutoCompleteOnScreenOccluded )
      CExpressionManager::EnsureAutoCompleteOnOccludedAnimationRemoved(
        *(CExpressionManager **)(*((_QWORD *)this + 3) + 824LL),
        this);
  }
  *((_DWORD *)this + 57) = 1;
  return v2;
}
