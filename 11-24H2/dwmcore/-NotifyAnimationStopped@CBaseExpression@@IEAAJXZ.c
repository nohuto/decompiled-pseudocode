/*
 * XREFs of ?NotifyAnimationStopped@CBaseExpression@@IEAAJXZ @ 0x18015459C
 * Callers:
 *     ?CalculateValueWorker@CKeyframeAnimation@@UEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x18000F9B0 (-CalculateValueWorker@CKeyframeAnimation@@UEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 *     ?Reset@CKeyframeAnimation@@AEAAJ_NPEAVCExpressionValueStack@@@Z @ 0x180153C54 (-Reset@CKeyframeAnimation@@AEAAJ_NPEAVCExpressionValueStack@@@Z.c)
 * Callees:
 *     ?IsAutoCompleteOnScreenOccluded@CKeyframeAnimation@@UEBA_NXZ @ 0x180014CD0 (-IsAutoCompleteOnScreenOccluded@CKeyframeAnimation@@UEBA_NXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetCount@?$CPtrArray@VCVisual@@@@QEBA_KXZ @ 0x1800BF1E0 (-GetCount@-$CPtrArray@VCVisual@@@@QEBA_KXZ.c)
 *     ?ShouldNotify@CNotificationResource@@IEBA_NXZ @ 0x180154670 (-ShouldNotify@CNotificationResource@@IEBA_NXZ.c)
 *     ?QueueAnimationStateChange@CExpressionManager@@QEAAJW4AnimationEventType@@PEAVCBaseExpression@@@Z @ 0x180154694 (-QueueAnimationStateChange@CExpressionManager@@QEAAJW4AnimationEventType@@PEAVCBaseExpression@@@.c)
 *     ?EnsureAutoCompleteOnOccludedAnimationRemoved@CExpressionManager@@QEAAXPEAVCBaseExpression@@@Z @ 0x1801547D0 (-EnsureAutoCompleteOnOccludedAnimationRemoved@CExpressionManager@@QEAAXPEAVCBaseExpression@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CBaseExpression::NotifyAnimationStopped(CBaseExpression *this)
{
  unsigned int v1; // edi
  __int64 v4; // rdx
  __int64 v5; // rcx
  bool (__fastcall *v6)(CKeyframeAnimation *); // rax
  bool IsAutoCompleteOnScreenOccluded; // al
  int v8; // eax

  v1 = 0;
  if ( *((_DWORD *)this + 57) == 4 && (*((_BYTE *)this + 224) & 2) != 0 )
  {
    *((_DWORD *)this + 57) = 2;
    if ( (CNotificationResource::ShouldNotify(this) || CPtrArray<CVisual>::GetCount((_QWORD *)(v5 + 32)))
      && (v8 = CExpressionManager::QueueAnimationStateChange(*(_QWORD *)(*((_QWORD *)this + 3) + 824LL), v4, this),
          v1 = v8,
          v8 < 0) )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v8, 0x55Du, 0LL);
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
  }
  return v1;
}
