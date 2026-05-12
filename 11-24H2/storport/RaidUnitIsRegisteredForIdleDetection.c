/*
 * XREFs of RaidUnitIsRegisteredForIdleDetection @ 0x1400713D4
 * Callers:
 *     RaidStartIoPacket @ 0x140004760 (RaidStartIoPacket.c)
 *     RaidUnitPendingDpcRoutine @ 0x14002ED00 (RaidUnitPendingDpcRoutine.c)
 *     RaAcquirePowerRefWorkRoutine @ 0x14003E4F0 (RaAcquirePowerRefWorkRoutine.c)
 *     StorpUnitInitializePoFxPower @ 0x14005456C (StorpUnitInitializePoFxPower.c)
 *     RaUnitDeregisterFromIdleDetection @ 0x14007705C (RaUnitDeregisterFromIdleDetection.c)
 *     RaUnitPowerCapIoctl @ 0x140094920 (RaUnitPowerCapIoctl.c)
 *     RaUnitRegisterForIdleDetection @ 0x1401B9B4C (RaUnitRegisterForIdleDetection.c)
 * Callees:
 *     <none>
 */

char __fastcall RaidUnitIsRegisteredForIdleDetection(__int64 a1)
{
  if ( FeatureFixKcsanRacyAccessV2 )
    return (*(_DWORD *)(a1 + 504) & 0x8000) != 0;
  else
    return *(_BYTE *)(a1 + 505) >> 7;
}
