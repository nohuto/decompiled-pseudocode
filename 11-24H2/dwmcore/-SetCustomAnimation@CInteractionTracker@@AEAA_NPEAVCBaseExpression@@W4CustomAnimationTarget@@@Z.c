/*
 * XREFs of ?SetCustomAnimation@CInteractionTracker@@AEAA_NPEAVCBaseExpression@@W4CustomAnimationTarget@@@Z @ 0x1801E13E8
 * Callers:
 *     ?ProcessSetRequestedScaleAnimation@CInteractionTracker@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_INTERACTIONTRACKER_SETREQUESTEDSCALEANIMATION@@@Z @ 0x1801E11CC (-ProcessSetRequestedScaleAnimation@CInteractionTracker@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_I.c)
 *     ?ProcessSetRequestedPositionAnimation@CInteractionTracker@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_INTERACTIONTRACKER_SETREQUESTEDPOSITIONANIMATION@@@Z @ 0x1801E12EC (-ProcessSetRequestedPositionAnimation@CInteractionTracker@@QEAAJPEAVCResourceTable@@PEBUtagMILCM.c)
 * Callees:
 *     ?StopCustomAnimation@CInteractionTracker@@AEAAXH_N@Z @ 0x1800E556C (-StopCustomAnimation@CInteractionTracker@@AEAAXH_N@Z.c)
 *     ?CheckForIdle@CInteractionTracker@@AEAAXXZ @ 0x1800E5684 (-CheckForIdle@CInteractionTracker@@AEAAXXZ.c)
 *     ?TransitionToCustomAnimation@CInteractionTracker@@AEAA_NPEAVCBaseExpression@@W4CustomAnimationTarget@@@Z @ 0x1801E143C (-TransitionToCustomAnimation@CInteractionTracker@@AEAA_NPEAVCBaseExpression@@W4CustomAnimationTa.c)
 */

char __fastcall CInteractionTracker::SetCustomAnimation(CInteractionTracker *a1, __int64 a2, int a3)
{
  char v3; // di

  v3 = 0;
  if ( a2 )
    return CInteractionTracker::TransitionToCustomAnimation();
  if ( *((_DWORD *)a1 + 46) == 3 )
  {
    CInteractionTracker::StopCustomAnimation(a1, a3, 0);
    CInteractionTracker::CheckForIdle(a1);
  }
  return v3;
}
