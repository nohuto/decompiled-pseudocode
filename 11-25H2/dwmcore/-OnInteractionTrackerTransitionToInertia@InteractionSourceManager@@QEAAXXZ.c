/*
 * XREFs of ?OnInteractionTrackerTransitionToInertia@InteractionSourceManager@@QEAAXXZ @ 0x1802357F0
 * Callers:
 *     ?SetState@CInteractionTracker@@AEAAXW4ScrollState@@W4TrackerUpdateType@1@@Z @ 0x1800F86F4 (-SetState@CInteractionTracker@@AEAAXW4ScrollState@@W4TrackerUpdateType@1@@Z.c)
 * Callees:
 *     ?GetActiveInteraction@InteractionSourceManager@@AEBAPEAVCInteraction@@XZ @ 0x18003E960 (-GetActiveInteraction@InteractionSourceManager@@AEBAPEAVCInteraction@@XZ.c)
 *     ?TryGetActiveManipulation@InteractionSourceManager@@QEBAPEAVCManipulation@@XZ @ 0x1800F3D84 (-TryGetActiveManipulation@InteractionSourceManager@@QEBAPEAVCManipulation@@XZ.c)
 *     ?ReportInertiaStart@CInteraction@@QEAAJW4InputType@@MM@Z @ 0x180221E9C (-ReportInertiaStart@CInteraction@@QEAAJW4InputType@@MM@Z.c)
 */

void __fastcall InteractionSourceManager::OnInteractionTrackerTransitionToInertia(InteractionSourceManager *this)
{
  struct CManipulation *ActiveManipulation; // rax
  __int64 v3; // r9
  char *v4; // rax

  if ( InteractionSourceManager::GetActiveInteraction(this) )
  {
    ActiveManipulation = InteractionSourceManager::TryGetActiveManipulation(this);
    if ( ActiveManipulation )
    {
      v4 = (char *)ActiveManipulation + 400;
      if ( COERCE_FLOAT(*(_OWORD *)v4) != 0.0 || COERCE_FLOAT(HIDWORD(*(_QWORD *)v4)) != 0.0 )
        CInteraction::ReportInertiaStart(v3, HIDWORD(*((_QWORD *)v4 + 4)));
    }
  }
}
