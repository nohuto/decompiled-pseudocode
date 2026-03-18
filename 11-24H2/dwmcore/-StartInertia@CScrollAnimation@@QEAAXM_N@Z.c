/*
 * XREFs of ?StartInertia@CScrollAnimation@@QEAAXM_N@Z @ 0x1800DE200
 * Callers:
 *     ?CalculateInertiaValue@CScrollAnimation@@AEAAJPEAVCExpressionValueStack@@_KPEAM@Z @ 0x1800E4B4C (-CalculateInertiaValue@CScrollAnimation@@AEAAJPEAVCExpressionValueStack@@_KPEAM@Z.c)
 *     ?TransitionToInertia@CInteractionTracker@@AEAA_NW4InertiaReason@1@@Z @ 0x1801E05CC (-TransitionToInertia@CInteractionTracker@@AEAA_NW4InertiaReason@1@@Z.c)
 * Callees:
 *     ?AddOrUpdatePendingInertiaStateChange@CInteractionTracker@@QEAAXW4ScrollAxis@@MW4TrackerUpdateType@1@@Z @ 0x1800DE2D0 (-AddOrUpdatePendingInertiaStateChange@CInteractionTracker@@QEAAXW4ScrollAxis@@MW4TrackerUpdateTy.c)
 *     ?TryGetChainingHelper@CScrollAnimation@@AEBAPEAVCChainingHelper@@XZ @ 0x1800E40C4 (-TryGetChainingHelper@CScrollAnimation@@AEBAPEAVCChainingHelper@@XZ.c)
 *     ?GetInteractionTracker@CScrollAnimation@@IEBAPEAVCInteractionTracker@@XZ @ 0x1800E42A8 (-GetInteractionTracker@CScrollAnimation@@IEBAPEAVCInteractionTracker@@XZ.c)
 *     ?GetFrameTargetTime@CComposition@@QEBA_KXZ @ 0x1800F3A90 (-GetFrameTargetTime@CComposition@@QEBA_KXZ.c)
 *     ?StartInertia@CChainingHelper@@QEAAXW4ScrollAxis@@@Z @ 0x18024698C (-StartInertia@CChainingHelper@@QEAAXW4ScrollAxis@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CScrollAnimation::StartInertia(CComposition **this, float a2, char a3)
{
  struct CInteractionTracker *InteractionTracker; // rbx
  unsigned __int64 FrameTargetTime; // rax
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r8
  __int64 v10; // rdx
  struct CChainingHelper *ChainingHelper; // rax

  InteractionTracker = CScrollAnimation::GetInteractionTracker((CScrollAnimation *)this);
  FrameTargetTime = CComposition::GetFrameTargetTime(this[3]);
  v7 = *((unsigned int *)this + 81);
  this[43] = (CComposition *)FrameTargetTime;
  *((_DWORD *)this + 80) = 2;
  CInteractionTracker::AddOrUpdatePendingInertiaStateChange(InteractionTracker, v7, v8, 0LL);
  LOBYTE(v9) = a3;
  (*((void (__fastcall **)(CComposition **, __int64, __int64))*this + 41))(this, v10, v9);
  ChainingHelper = CScrollAnimation::TryGetChainingHelper((CScrollAnimation *)this);
  if ( !a3 && ChainingHelper )
    CChainingHelper::StartInertia(ChainingHelper, *((unsigned int *)this + 81));
  *((_BYTE *)this + 352) &= ~4u;
  *((_OWORD *)this + 26) = 0LL;
  this[54] = 0LL;
}
