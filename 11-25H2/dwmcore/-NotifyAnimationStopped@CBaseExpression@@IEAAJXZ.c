/*
 * XREFs of ?NotifyAnimationStopped@CBaseExpression@@IEAAJXZ @ 0x18003D4D4
 * Callers:
 *     ?CalculateValueWorker@CKeyframeAnimation@@UEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x180035880 (-CalculateValueWorker@CKeyframeAnimation@@UEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 *     ?Reset@CKeyframeAnimation@@AEAAJ_NPEAVCExpressionValueStack@@@Z @ 0x18003CE98 (-Reset@CKeyframeAnimation@@AEAAJ_NPEAVCExpressionValueStack@@@Z.c)
 * Callees:
 *     ?EnsureAutoCompleteOnOccludedAnimationRemoved@CExpressionManager@@QEAAXPEAVCBaseExpression@@@Z @ 0x18003AAE0 (-EnsureAutoCompleteOnOccludedAnimationRemoved@CExpressionManager@@QEAAXPEAVCBaseExpression@@@Z.c)
 *     ?QueueAnimationStateChange@CExpressionManager@@QEAAJW4AnimationEventType@@PEAVCBaseExpression@@@Z @ 0x18003AEA8 (-QueueAnimationStateChange@CExpressionManager@@QEAAJW4AnimationEventType@@PEAVCBaseExpression@@@.c)
 *     ?IsAutoCompleteOnScreenOccluded@CKeyframeAnimation@@UEBA_NXZ @ 0x18003AFE0 (-IsAutoCompleteOnScreenOccluded@CKeyframeAnimation@@UEBA_NXZ.c)
 *     ?ShouldNotify@CNotificationResource@@IEBA_NXZ @ 0x18003D670 (-ShouldNotify@CNotificationResource@@IEBA_NXZ.c)
 *     ?GetCount@?$CPtrArray@VCVisual@@@@QEBA_KXZ @ 0x1800E56E0 (-GetCount@-$CPtrArray@VCVisual@@@@QEBA_KXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CBaseExpression::NotifyAnimationStopped(CBaseExpression *this)
{
  unsigned int v1; // edi
  int v4; // edx
  __int64 v5; // rcx
  __int64 v6; // r9
  bool (__fastcall *v7)(CKeyframeAnimation *); // rax
  bool IsAutoCompleteOnScreenOccluded; // al
  int v9; // eax

  v1 = 0;
  if ( *((_DWORD *)this + 57) == 4 && (*((_BYTE *)this + 224) & 2) != 0 )
  {
    *((_DWORD *)this + 57) = 2;
    if ( (CNotificationResource::ShouldNotify(this) || CPtrArray<CVisual>::GetCount(v5 + 32))
      && (v9 = CExpressionManager::QueueAnimationStateChange(
                 *(_QWORD *)(*((_QWORD *)this + 3) + 824LL),
                 v4,
                 (int *)this,
                 v6),
          v1 = v9,
          v9 < 0) )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v9, 0x54Au, 0LL);
    }
    else
    {
      v7 = *(bool (__fastcall **)(CKeyframeAnimation *))(*(_QWORD *)this + 240LL);
      if ( v7 == CKeyframeAnimation::IsAutoCompleteOnScreenOccluded )
        IsAutoCompleteOnScreenOccluded = CKeyframeAnimation::IsAutoCompleteOnScreenOccluded(this);
      else
        IsAutoCompleteOnScreenOccluded = v7(this);
      if ( IsAutoCompleteOnScreenOccluded )
        CExpressionManager::EnsureAutoCompleteOnOccludedAnimationRemoved(
          *(CExpressionManager **)(*((_QWORD *)this + 3) + 824LL),
          this);
    }
  }
  return v1;
}
