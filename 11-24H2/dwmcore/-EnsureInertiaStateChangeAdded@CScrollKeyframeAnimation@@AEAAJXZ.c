/*
 * XREFs of ?EnsureInertiaStateChangeAdded@CScrollKeyframeAnimation@@AEAAJXZ @ 0x1800DE0E8
 * Callers:
 *     ?CalculateValueWorker@CScrollKeyframeAnimation@@UEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x1800DDFF0 (-CalculateValueWorker@CScrollKeyframeAnimation@@UEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18001DF0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?AddOrUpdatePendingInertiaStateChange@CInteractionTracker@@QEAAXW4ScrollAxis@@MW4TrackerUpdateType@1@@Z @ 0x1800DE2D0 (-AddOrUpdatePendingInertiaStateChange@CInteractionTracker@@QEAAXW4ScrollAxis@@MW4TrackerUpdateTy.c)
 *     ?EnsureInertiaStateChangeInfo@CScrollKeyframeAnimation@@AEAAJXZ @ 0x1800DE4DC (-EnsureInertiaStateChangeInfo@CScrollKeyframeAnimation@@AEAAJXZ.c)
 *     ?GetForceEngineCurrentValue@CScrollAnimation@@QEBAMXZ @ 0x1800DE724 (-GetForceEngineCurrentValue@CScrollAnimation@@QEBAMXZ.c)
 *     ?GetCurrentValue@CInteractionTracker@@QEBAMW4ScrollAxis@@@Z @ 0x1800E3A18 (-GetCurrentValue@CInteractionTracker@@QEBAMW4ScrollAxis@@@Z.c)
 *     ?AreInteractionAnimationsAlive@CInteractionTracker@@QEBA_NXZ @ 0x1800E3B2C (-AreInteractionAnimationsAlive@CInteractionTracker@@QEBA_NXZ.c)
 *     ?HasActiveInertiaForce@CScrollAnimation@@QEBA_NXZ @ 0x1800E54A8 (-HasActiveInertiaForce@CScrollAnimation@@QEBA_NXZ.c)
 */

__int64 __fastcall CScrollKeyframeAnimation::EnsureInertiaStateChangeAdded(CScrollKeyframeAnimation *this)
{
  char v1; // al
  __int64 v3; // rbx
  __int64 v4; // r8
  CScrollAnimation **v5; // rbx
  __int64 v6; // r8
  CScrollAnimation **v7; // rbx
  __int64 v8; // r8
  int v9; // eax
  unsigned int v10; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v1 = *((_BYTE *)this + 712);
  if ( (v1 & 1) != 0 )
    return 0LL;
  v3 = *((_QWORD *)this + 68);
  *((_BYTE *)this + 712) = v1 | 1;
  CInteractionTracker::GetCurrentValue(v3, 0LL);
  CInteractionTracker::AddOrUpdatePendingInertiaStateChange(v3, 0LL, v4, 0LL);
  v5 = (CScrollAnimation **)*((_QWORD *)this + 68);
  if ( CInteractionTracker::AreInteractionAnimationsAlive((CInteractionTracker *)v5)
    && CScrollAnimation::HasActiveInertiaForce(v5[43]) )
  {
    CScrollAnimation::GetForceEngineCurrentValue(v5[43]);
  }
  CInteractionTracker::AddOrUpdatePendingInertiaStateChange(v5, 1LL, v6, 0LL);
  v7 = (CScrollAnimation **)*((_QWORD *)this + 68);
  if ( CInteractionTracker::AreInteractionAnimationsAlive((CInteractionTracker *)v7)
    && CScrollAnimation::HasActiveInertiaForce(v7[41]) )
  {
    CScrollAnimation::GetForceEngineCurrentValue(v7[41]);
  }
  CInteractionTracker::AddOrUpdatePendingInertiaStateChange(v7, 2LL, v8, 0LL);
  v9 = CScrollKeyframeAnimation::EnsureInertiaStateChangeInfo(this);
  v10 = v9;
  if ( v9 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xD3,
    (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\scrollkeyframeanimation.cpp",
    (const char *)(unsigned int)v9);
  return v10;
}
