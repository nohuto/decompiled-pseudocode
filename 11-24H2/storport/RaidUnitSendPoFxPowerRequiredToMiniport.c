/*
 * XREFs of RaidUnitSendPoFxPowerRequiredToMiniport @ 0x14002E9DC
 * Callers:
 *     StorPortUnitPowerNotRequiredStep1 @ 0x14002E520 (StorPortUnitPowerNotRequiredStep1.c)
 *     StorPortUnitPowerRequiredStep1 @ 0x14002E610 (StorPortUnitPowerRequiredStep1.c)
 *     StorPortUnitDirectedPowerDown @ 0x14007A070 (StorPortUnitDirectedPowerDown.c)
 *     StorPortUnitDirectedPowerUp @ 0x14007A540 (StorPortUnitDirectedPowerUp.c)
 * Callees:
 *     RaidIsUnitControlSupported @ 0x14001DD30 (RaidIsUnitControlSupported.c)
 *     RaCallMiniportUnitControl @ 0x14001DEE0 (RaCallMiniportUnitControl.c)
 */

__int64 __fastcall RaidUnitSendPoFxPowerRequiredToMiniport(__int64 a1)
{
  unsigned int v2; // ebx

  v2 = -1073741637;
  if ( RaidIsUnitControlSupported(a1, 5) )
    return (unsigned int)RaCallMiniportUnitControl(*(_QWORD *)(a1 + 24) + 376LL);
  return v2;
}
