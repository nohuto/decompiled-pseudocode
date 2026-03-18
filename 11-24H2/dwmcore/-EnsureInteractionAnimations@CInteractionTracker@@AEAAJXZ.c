/*
 * XREFs of ?EnsureInteractionAnimations@CInteractionTracker@@AEAAJXZ @ 0x1801E0A00
 * Callers:
 *     ?TransitionToInertia@CInteractionTracker@@AEAA_NW4InertiaReason@1@@Z @ 0x1801E05CC (-TransitionToInertia@CInteractionTracker@@AEAA_NW4InertiaReason@1@@Z.c)
 *     ?TransitionToInContact@CInteractionTracker@@AEAAXXZ @ 0x1801E09AC (-TransitionToInContact@CInteractionTracker@@AEAAXXZ.c)
 * Callees:
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x18000CD4C (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180061E70 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??4?$ComPtr@VCVisual@@@WRL@Microsoft@@QEAAAEAV012@PEAVCVisual@@@Z @ 0x180094C60 (--4-$ComPtr@VCVisual@@@WRL@Microsoft@@QEAAAEAV012@PEAVCVisual@@@Z.c)
 *     ?Initialize@CInteractionTrackerPositionAnimation@@QEAAJPEAVCInteractionTracker@@W4ScrollAxis@@@Z @ 0x1801E08A8 (-Initialize@CInteractionTrackerPositionAnimation@@QEAAJPEAVCInteractionTracker@@W4ScrollAxis@@@Z.c)
 *     ??0CInteractionTrackerPositionAnimation@@QEAA@PEAVCComposition@@@Z @ 0x1801E0960 (--0CInteractionTrackerPositionAnimation@@QEAA@PEAVCComposition@@@Z.c)
 *     ??0CMotion@@QEAA@XZ @ 0x1801E0BF8 (--0CMotion@@QEAA@XZ.c)
 *     ??0CScrollAnimation@@QEAA@PEAVCComposition@@@Z @ 0x1801E0D4C (--0CScrollAnimation@@QEAA@PEAVCComposition@@@Z.c)
 *     ?Initialize@CInteractionTrackerScaleAnimation@@QEAAJPEAVCInteractionTracker@@@Z @ 0x1801E0ED4 (-Initialize@CInteractionTrackerScaleAnimation@@QEAAJPEAVCInteractionTracker@@@Z.c)
 *     ??2CInteractionTrackerPositionAnimation@@SAPEAX_K@Z @ 0x18022E8C4 (--2CInteractionTrackerPositionAnimation@@SAPEAX_K@Z.c)
 *     ModuleFailFastForHRESULT @ 0x18024634C (ModuleFailFastForHRESULT.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CInteractionTracker::EnsureInteractionAnimations(struct CComposition **this)
{
  CScrollAnimation *v2; // rax
  CScrollAnimation *v3; // rsi
  CInteractionTrackerScaleAnimation *v4; // rcx
  int v5; // r9d
  unsigned int v6; // ebx
  int v7; // eax
  __int64 *v8; // rbx
  CInteractionTrackerPositionAnimation *v9; // rax
  __int64 *v10; // rbx
  CInteractionTrackerPositionAnimation *v11; // rax
  unsigned int v13; // [rsp+20h] [rbp-18h]
  void *retaddr; // [rsp+38h] [rbp+0h]
  struct CComposition *v15; // [rsp+40h] [rbp+8h] BYREF

  if ( !this[41] )
  {
    v2 = (CScrollAnimation *)DefaultHeap::AllocClear(0x240uLL);
    v3 = v2;
    if ( !v2 )
      ModuleFailFastForHRESULT(-2147024882, retaddr);
    CScrollAnimation::CScrollAnimation(v2, this[3]);
    *(_QWORD *)v3 = &CInteractionTrackerScaleAnimation::`vftable';
    CMotion::CMotion((CScrollAnimation *)((char *)v3 + 440));
    *((_QWORD *)v3 + 55) = &CScaleMotion::`vftable';
    if ( this[41] != v3 )
    {
      (*(void (__fastcall **)(CScrollAnimation *))(*(_QWORD *)v3 + 8LL))(v3);
      v15 = this[41];
      this[41] = v3;
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v15);
    }
    v4 = this[41];
    if ( !v4 )
    {
      v13 = 3205;
LABEL_8:
      v5 = -2147024882;
      v6 = -2147024882;
LABEL_9:
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v5, v13, 0LL);
      return v6;
    }
    v7 = CInteractionTrackerScaleAnimation::Initialize(v4, (struct CInteractionTracker *)this);
    v6 = v7;
    if ( v7 < 0 )
    {
      v13 = 3207;
LABEL_13:
      v5 = v7;
      goto LABEL_9;
    }
  }
  v8 = (__int64 *)(this + 42);
  if ( !this[42] )
  {
    v9 = (CInteractionTrackerPositionAnimation *)CInteractionTrackerPositionAnimation::operator new((unsigned __int64)this);
    if ( v9 )
      v9 = CInteractionTrackerPositionAnimation::CInteractionTrackerPositionAnimation(v9, this[3]);
    Microsoft::WRL::ComPtr<CVisual>::operator=((__int64 *)this + 42, (__int64)v9);
    if ( !*v8 )
    {
      v6 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024882, 0xC8Du, 0LL);
      return v6;
    }
    v7 = CInteractionTrackerPositionAnimation::Initialize(*v8, this);
    v6 = v7;
    if ( v7 < 0 )
    {
      v13 = 3215;
      goto LABEL_13;
    }
  }
  v10 = (__int64 *)(this + 43);
  if ( !this[43] )
  {
    v11 = (CInteractionTrackerPositionAnimation *)CInteractionTrackerPositionAnimation::operator new((unsigned __int64)this);
    if ( v11 )
      v11 = CInteractionTrackerPositionAnimation::CInteractionTrackerPositionAnimation(v11, this[3]);
    Microsoft::WRL::ComPtr<CVisual>::operator=((__int64 *)this + 43, (__int64)v11);
    if ( !*v10 )
    {
      v13 = 3221;
      goto LABEL_8;
    }
    v7 = CInteractionTrackerPositionAnimation::Initialize(*v10, this);
    v6 = v7;
    if ( v7 < 0 )
    {
      v13 = 3223;
      goto LABEL_13;
    }
  }
  return 0;
}
