/*
 * XREFs of ?OnGetSynchronizationCommitHandle@CAnimationClockCoordinator@@QEAAJAEBU_GUID@@KPEAPEAX@Z @ 0x180096FC4
 * Callers:
 *     ?_SetStoryboardTriggerForAnimationClock@CAnimationScheduler@@AEAAJU_GUID@@@Z @ 0x180059618 (-_SetStoryboardTriggerForAnimationClock@CAnimationScheduler@@AEAAJU_GUID@@@Z.c)
 *     ?ProcessSyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEAXI_NKPEBU_REMOTE_PORT_VIEW@@PEAJPEAI@Z @ 0x1800915A0 (-ProcessSyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEAXI_NKPEBU_REMOTE_PORT_VIEW@@PEAJPEAI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCAtlasedImage@@@WRL@Microsoft@@IEAAKXZ @ 0x180017358 (-InternalRelease@-$ComPtr@VCAtlasedImage@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180026560 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?GetAnimationClock@CAnimationClockCoordinator@@QEAAJU_GUID@@PEAPEAVCAnimationClock@@@Z @ 0x1800598C4 (-GetAnimationClock@CAnimationClockCoordinator@@QEAAJU_GUID@@PEAPEAVCAnimationClock@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180094EC0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetCommitHandle@CAnimationClock@@QEAAJKPEAPEAX@Z @ 0x1800A63C4 (-GetCommitHandle@CAnimationClock@@QEAAJKPEAPEAX@Z.c)
 */

__int64 __fastcall CAnimationClockCoordinator::OnGetSynchronizationCommitHandle(
        CAnimationClockCoordinator *this,
        const struct _GUID *a2,
        unsigned int a3,
        void **a4)
{
  int AnimationClock; // eax
  CBaseObject *v9; // rcx
  unsigned int v10; // ebx
  int CommitHandle; // eax
  struct _GUID v13; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  struct CAnimationClock *v15; // [rsp+48h] [rbp+10h] BYREF

  *a4 = 0LL;
  v15 = 0LL;
  Microsoft::WRL::ComPtr<CAtlasedImage>::InternalRelease(&v15);
  v13 = *a2;
  AnimationClock = CAnimationClockCoordinator::GetAnimationClock(this, &v13, &v15);
  v9 = v15;
  v10 = AnimationClock;
  if ( AnimationClock >= 0 )
  {
    CommitHandle = CAnimationClock::GetCommitHandle(v15, a3, a4);
    v10 = CommitHandle;
    if ( CommitHandle >= 0 )
      v10 = 0;
    else
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xD5,
        (__int64)"clientcore\\windows\\dwm\\udwm\\animationclockcoordinator.cpp",
        (const char *)(unsigned int)CommitHandle);
    Microsoft::WRL::ComPtr<CAtlasedImage>::InternalRelease(&v15);
  }
  else if ( v15 )
  {
    v15 = 0LL;
    CBaseObject::Release(v9);
  }
  return v10;
}
