/*
 * XREFs of ?HasActiveCustomAnimation@CInteractionTracker@@AEAA_NXZ @ 0x1800E5828
 * Callers:
 *     ?CheckForIdle@CInteractionTracker@@AEAAXXZ @ 0x1800E5684 (-CheckForIdle@CInteractionTracker@@AEAAXXZ.c)
 *     ?BoundTrackersHaveActiveCustomAnimations@CInteractionTrackerBindingManager@@QEAA_NPEAVCInteractionTracker@@@Z @ 0x1800E587C (-BoundTrackersHaveActiveCustomAnimations@CInteractionTrackerBindingManager@@QEAA_NPEAVCInteracti.c)
 * Callees:
 *     ?GetTargetResource@?$CWeakReference@VCGdiSpriteBitmap@@@@QEBAPEAVCGdiSpriteBitmap@@XZ @ 0x1800163B0 (-GetTargetResource@-$CWeakReference@VCGdiSpriteBitmap@@@@QEBAPEAVCGdiSpriteBitmap@@XZ.c)
 */

char __fastcall CInteractionTracker::HasActiveCustomAnimation(CInteractionTracker *this)
{
  char v1; // bl
  __int64 *v2; // rsi
  unsigned int i; // edi

  v1 = 0;
  v2 = (__int64 *)((char *)this + 352);
  for ( i = 0; i < 2; ++i )
  {
    if ( *v2 && CWeakReference<CGdiSpriteBitmap>::GetTargetResource(*v2) )
      return 1;
    ++v2;
  }
  return v1;
}
