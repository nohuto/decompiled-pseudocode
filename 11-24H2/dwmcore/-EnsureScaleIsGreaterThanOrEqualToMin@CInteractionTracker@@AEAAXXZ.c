/*
 * XREFs of ?EnsureScaleIsGreaterThanOrEqualToMin@CInteractionTracker@@AEAAXXZ @ 0x180014C4C
 * Callers:
 *     ?SetMinScale@CInteractionTracker@@AEAAXM@Z @ 0x180212234 (-SetMinScale@CInteractionTracker@@AEAAXM@Z.c)
 * Callees:
 *     ?SetScale@CInteractionTracker@@AEAAXMW4TrackerUpdateType@1@@Z @ 0x180014AC0 (-SetScale@CInteractionTracker@@AEAAXMW4TrackerUpdateType@1@@Z.c)
 */

void __fastcall CInteractionTracker::EnsureScaleIsGreaterThanOrEqualToMin(CInteractionTracker *this)
{
  if ( !*((_DWORD *)this + 46) && (*((_BYTE *)this + 540) & 0x20) == 0 )
    CInteractionTracker::SetScale((__int64)this, fmaxf(*((float *)this + 36), *((float *)this + 37)), 0);
}
