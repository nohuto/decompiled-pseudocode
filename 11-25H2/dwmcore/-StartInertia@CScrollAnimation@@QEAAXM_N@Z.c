/*
 * XREFs of ?StartInertia@CScrollAnimation@@QEAAXM_N@Z @ 0x1800F46DC
 * Callers:
 *     ?TransitionToInertia@CInteractionTracker@@AEAA_NW4InertiaReason@1@@Z @ 0x1800EFE88 (-TransitionToInertia@CInteractionTracker@@AEAA_NW4InertiaReason@1@@Z.c)
 *     ?CalculateInertiaValue@CScrollAnimation@@AEAAJPEAVCExpressionValueStack@@_KPEAM@Z @ 0x1800F2D70 (-CalculateInertiaValue@CScrollAnimation@@AEAAJPEAVCExpressionValueStack@@_KPEAM@Z.c)
 * Callees:
 *     ?GetFrameTargetTime@CComposition@@QEBA_KXZ @ 0x1800320D0 (-GetFrameTargetTime@CComposition@@QEBA_KXZ.c)
 *     ?TryGetChainingHelper@CScrollAnimation@@AEBAPEAVCChainingHelper@@XZ @ 0x1800F3B8C (-TryGetChainingHelper@CScrollAnimation@@AEBAPEAVCChainingHelper@@XZ.c)
 *     ?GetInteractionTracker@CScrollAnimation@@IEBAPEAVCInteractionTracker@@XZ @ 0x1800F3D68 (-GetInteractionTracker@CScrollAnimation@@IEBAPEAVCInteractionTracker@@XZ.c)
 *     ?AddOrUpdatePendingInertiaStateChange@CInteractionTracker@@QEAAXW4ScrollAxis@@MW4TrackerUpdateType@1@@Z @ 0x1800F47AC (-AddOrUpdatePendingInertiaStateChange@CInteractionTracker@@QEAAXW4ScrollAxis@@MW4TrackerUpdateTy.c)
 *     ?StartInertia@CChainingHelper@@QEAAXW4ScrollAxis@@@Z @ 0x1802518B8 (-StartInertia@CChainingHelper@@QEAAXW4ScrollAxis@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
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
