/*
 * XREFs of ?EnsureInertiaStateChangeAdded@CScrollKeyframeAnimation@@AEAAJXZ @ 0x1800EFCB8
 * Callers:
 *     ?CalculateValueWorker@CScrollKeyframeAnimation@@UEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x1800EFBC0 (-CalculateValueWorker@CScrollKeyframeAnimation@@UEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     ?GetCurrentValue@CInteractionTracker@@QEBAMW4ScrollAxis@@@Z @ 0x18003D85C (-GetCurrentValue@CInteractionTracker@@QEBAMW4ScrollAxis@@@Z.c)
 *     ?AreInteractionAnimationsAlive@CInteractionTracker@@QEBA_NXZ @ 0x18003DD8C (-AreInteractionAnimationsAlive@CInteractionTracker@@QEBA_NXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B2FCC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetForceEngineCurrentValue@CScrollAnimation@@QEBAMXZ @ 0x1800EFB8C (-GetForceEngineCurrentValue@CScrollAnimation@@QEBAMXZ.c)
 *     ?EnsureInertiaStateChangeInfo@CScrollKeyframeAnimation@@AEAAJXZ @ 0x1800F0164 (-EnsureInertiaStateChangeInfo@CScrollKeyframeAnimation@@AEAAJXZ.c)
 *     ?HasActiveInertiaForce@CScrollAnimation@@QEBA_NXZ @ 0x1800F46B4 (-HasActiveInertiaForce@CScrollAnimation@@QEBA_NXZ.c)
 *     ?AddOrUpdatePendingInertiaStateChange@CInteractionTracker@@QEAAXW4ScrollAxis@@MW4TrackerUpdateType@1@@Z @ 0x1800F47AC (-AddOrUpdatePendingInertiaStateChange@CInteractionTracker@@QEAAXW4ScrollAxis@@MW4TrackerUpdateTy.c)
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
  CInteractionTracker::GetCurrentValue(v3, 0);
  CInteractionTracker::AddOrUpdatePendingInertiaStateChange(v3, 0LL, v4, 0LL);
  v5 = (CScrollAnimation **)*((_QWORD *)this + 68);
  if ( CInteractionTracker::AreInteractionAnimationsAlive((CInteractionTracker *)v5)
    && CScrollAnimation::HasActiveInertiaForce(v5[43]) )
  {
    CScrollAnimation::GetForceEngineCurrentValue(v5[43]);
  }
  CInteractionTracker::AddOrUpdatePendingInertiaStateChange(v5, 1LL, v6, 0LL);
  v7 = (CScrollAnimation **)*((_QWORD *)this + 68);
  if ( CInteractionTracker::AreInteractionAnimationsAlive((CInteractionTracker *)v7) )
  {
    if ( CScrollAnimation::HasActiveInertiaForce(v7[41]) )
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
