/*
 * XREFs of ?EnsureScaleIsLessThanOrEqualToMax@CInteractionTracker@@AEAAXXZ @ 0x18003B0A4
 * Callers:
 *     ?SetMaxScale@CInteractionTracker@@AEAAXM@Z @ 0x18021D83C (-SetMaxScale@CInteractionTracker@@AEAAXM@Z.c)
 * Callees:
 *     ?SetScale@CInteractionTracker@@AEAAXMW4TrackerUpdateType@1@@Z @ 0x18003BEF0 (-SetScale@CInteractionTracker@@AEAAXMW4TrackerUpdateType@1@@Z.c)
 */

void __fastcall CInteractionTracker::EnsureScaleIsLessThanOrEqualToMax(CInteractionTracker *this, __int64 a2)
{
  if ( !*((_DWORD *)this + 46) && (*((_BYTE *)this + 540) & 0x20) == 0 )
    CInteractionTracker::SetScale(this, a2, 0LL);
}
