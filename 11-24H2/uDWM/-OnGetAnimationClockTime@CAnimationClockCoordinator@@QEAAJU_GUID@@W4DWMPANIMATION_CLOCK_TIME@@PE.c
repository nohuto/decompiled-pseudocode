/*
 * XREFs of ?OnGetAnimationClockTime@CAnimationClockCoordinator@@QEAAJU_GUID@@W4DWMPANIMATION_CLOCK_TIME@@PEAT_LARGE_INTEGER@@@Z @ 0x1800A6E74
 * Callers:
 *     ?ProcessSyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEAXI_NKPEBU_REMOTE_PORT_VIEW@@PEAJPEAI@Z @ 0x1800915A0 (-ProcessSyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEAXI_NKPEBU_REMOTE_PORT_VIEW@@PEAJPEAI@Z.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180026560 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?GetAnimationClock@CAnimationClockCoordinator@@QEAAJU_GUID@@PEAPEAVCAnimationClock@@@Z @ 0x1800598C4 (-GetAnimationClock@CAnimationClockCoordinator@@QEAAJU_GUID@@PEAPEAVCAnimationClock@@@Z.c)
 *     ?GetTime@CAnimationClock@@QEAAJW4DWMPANIMATION_CLOCK_TIME@@PEAT_LARGE_INTEGER@@@Z @ 0x1800A6578 (-GetTime@CAnimationClock@@QEAAJW4DWMPANIMATION_CLOCK_TIME@@PEAT_LARGE_INTEGER@@@Z.c)
 */

__int64 __fastcall CAnimationClockCoordinator::OnGetAnimationClockTime(
        CAnimationClockCoordinator *a1,
        struct _GUID *a2,
        int a3,
        _QWORD *a4)
{
  struct _GUID v4; // xmm0
  int AnimationClock; // edi
  _QWORD *v8; // r8
  CBaseObject *v9; // rbx
  struct _GUID v11; // [rsp+20h] [rbp-18h] BYREF
  CBaseObject *v12; // [rsp+48h] [rbp+10h] BYREF

  v4 = *a2;
  v12 = 0LL;
  v11 = v4;
  AnimationClock = CAnimationClockCoordinator::GetAnimationClock(a1, &v11, &v12);
  if ( AnimationClock >= 0 )
  {
    v8 = a4;
    v9 = v12;
    AnimationClock = CAnimationClock::GetTime((__int64)v12, a3, v8);
    if ( v9 )
      CBaseObject::Release(v9);
  }
  return (unsigned int)AnimationClock;
}
