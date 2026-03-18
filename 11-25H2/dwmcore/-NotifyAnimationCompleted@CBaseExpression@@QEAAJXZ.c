/*
 * XREFs of ?NotifyAnimationCompleted@CBaseExpression@@QEAAJXZ @ 0x18003D5A4
 * Callers:
 *     ?CalculateValueWorker@CKeyframeAnimation@@UEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x180035880 (-CalculateValueWorker@CKeyframeAnimation@@UEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 *     ?ProcessSetRequestedScaleAnimation@CInteractionTracker@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_INTERACTIONTRACKER_SETREQUESTEDSCALEANIMATION@@@Z @ 0x1800EF6B8 (-ProcessSetRequestedScaleAnimation@CInteractionTracker@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_I.c)
 *     ?ProcessSetRequestedPositionAnimation@CInteractionTracker@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_INTERACTIONTRACKER_SETREQUESTEDPOSITIONANIMATION@@@Z @ 0x1800EF7D8 (-ProcessSetRequestedPositionAnimation@CInteractionTracker@@QEAAJPEAVCResourceTable@@PEBUtagMILCM.c)
 *     ?CalculateValue@CNaturalAnimation@@AEAAXPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x1801CC5C0 (-CalculateValue@CNaturalAnimation@@AEAAXPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 *     ?CalculateValueWorker@CInjectionAnimation@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x1802A5FD0 (-CalculateValueWorker@CInjectionAnimation@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     ?EnsureAutoCompleteOnOccludedAnimationRemoved@CExpressionManager@@QEAAXPEAVCBaseExpression@@@Z @ 0x18003AAE0 (-EnsureAutoCompleteOnOccludedAnimationRemoved@CExpressionManager@@QEAAXPEAVCBaseExpression@@@Z.c)
 *     ?QueueAnimationStateChange@CExpressionManager@@QEAAJW4AnimationEventType@@PEAVCBaseExpression@@@Z @ 0x18003AEA8 (-QueueAnimationStateChange@CExpressionManager@@QEAAJW4AnimationEventType@@PEAVCBaseExpression@@@.c)
 *     ?IsAutoCompleteOnScreenOccluded@CKeyframeAnimation@@UEBA_NXZ @ 0x18003AFE0 (-IsAutoCompleteOnScreenOccluded@CKeyframeAnimation@@UEBA_NXZ.c)
 *     ?ShouldNotify@CNotificationResource@@IEBA_NXZ @ 0x18003D670 (-ShouldNotify@CNotificationResource@@IEBA_NXZ.c)
 *     ?GetCount@?$CPtrArray@VCVisual@@@@QEBA_KXZ @ 0x1800E56E0 (-GetCount@-$CPtrArray@VCVisual@@@@QEBA_KXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CBaseExpression::NotifyAnimationCompleted(CBaseExpression *this)
{
  unsigned int v2; // edi
  __int64 v3; // rcx
  __int64 v4; // r9
  int v5; // eax
  bool (__fastcall *v6)(CKeyframeAnimation *); // rax
  bool IsAutoCompleteOnScreenOccluded; // al

  v2 = 0;
  if ( (CNotificationResource::ShouldNotify(this) || CPtrArray<CVisual>::GetCount(v3 + 32))
    && (v5 = CExpressionManager::QueueAnimationStateChange(
               *(_QWORD *)(*((_QWORD *)this + 3) + 824LL),
               1,
               (int *)this,
               v4),
        v2 = v5,
        v5 < 0) )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v5, 0x521u, 0LL);
  }
  else
  {
    v6 = *(bool (__fastcall **)(CKeyframeAnimation *))(*(_QWORD *)this + 240LL);
    if ( v6 == CKeyframeAnimation::IsAutoCompleteOnScreenOccluded )
      IsAutoCompleteOnScreenOccluded = CKeyframeAnimation::IsAutoCompleteOnScreenOccluded(this);
    else
      IsAutoCompleteOnScreenOccluded = v6(this);
    if ( IsAutoCompleteOnScreenOccluded )
      CExpressionManager::EnsureAutoCompleteOnOccludedAnimationRemoved(
        *(CExpressionManager **)(*((_QWORD *)this + 3) + 824LL),
        this);
  }
  *((_DWORD *)this + 57) = 1;
  return v2;
}
