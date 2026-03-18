/*
 * XREFs of ?IsInMotion@CInteractionTrackerPositionAnimation@@UEBA_NXZ @ 0x1800F2A60
 * Callers:
 *     <none>
 * Callees:
 *     ?AreInteractionAnimationsAlive@CInteractionTracker@@QEBA_NXZ @ 0x18003DD8C (-AreInteractionAnimationsAlive@CInteractionTracker@@QEBA_NXZ.c)
 *     ?IsInMotion@CScrollAnimation@@UEBA_NXZ @ 0x1800F2AC0 (-IsInMotion@CScrollAnimation@@UEBA_NXZ.c)
 *     ?GetInteractionTracker@CScrollAnimation@@IEBAPEAVCInteractionTracker@@XZ @ 0x1800F3D68 (-GetInteractionTracker@CScrollAnimation@@IEBAPEAVCInteractionTracker@@XZ.c)
 */

char __fastcall CInteractionTrackerPositionAnimation::IsInMotion(CInteractionTrackerPositionAnimation *this)
{
  char v2; // bl
  CInteractionTracker *InteractionTracker; // rax
  unsigned __int64 v5; // rdx
  __int64 v6; // rcx

  v2 = 0;
  if ( CScrollAnimation::IsInMotion(this) )
    return 1;
  InteractionTracker = CScrollAnimation::GetInteractionTracker(this);
  if ( CInteractionTracker::AreInteractionAnimationsAlive(InteractionTracker) )
    v5 = *(_QWORD *)(*(_QWORD *)(v6 + 328) + 368LL);
  if ( v5 > *((_QWORD *)this + 46) )
    return 1;
  return v2;
}
