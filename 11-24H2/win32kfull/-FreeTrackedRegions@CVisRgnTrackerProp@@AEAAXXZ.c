/*
 * XREFs of ?FreeTrackedRegions@CVisRgnTrackerProp@@AEAAXXZ @ 0x1401AE968
 * Callers:
 *     zzzComposeDesktop @ 0x140168F78 (zzzComposeDesktop.c)
 *     ?Delete@CVisRgnTrackerProp@@UEAAXXZ @ 0x1401AE900 (-Delete@CVisRgnTrackerProp@@UEAAXXZ.c)
 * Callees:
 *     ?FreeTrackedRegion@CVisRgnTrackerProp@@AEAAXI@Z @ 0x1401AE99C (-FreeTrackedRegion@CVisRgnTrackerProp@@AEAAXI@Z.c)
 */

void __fastcall CVisRgnTrackerProp::FreeTrackedRegions(CVisRgnTrackerProp *this)
{
  signed int i; // ebx

  for ( i = 0; i < 3; ++i )
    CVisRgnTrackerProp::FreeTrackedRegion(this, i);
}
