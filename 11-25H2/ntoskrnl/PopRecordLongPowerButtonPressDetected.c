/*
 * XREFs of PopRecordLongPowerButtonPressDetected @ 0x14073D6BC
 * Callers:
 *     PoClearTransitionMarker @ 0x14073CF8C (PoClearTransitionMarker.c)
 *     PopDiagTracePowerButtonBugcheck @ 0x14074AB90 (PopDiagTracePowerButtonBugcheck.c)
 * Callees:
 *     PopReleaseRwLock @ 0x140204578 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x140431E64 (PopAcquireRwLockExclusive.c)
 *     RtlBootStatusDisableFlushing @ 0x1404F85D8 (RtlBootStatusDisableFlushing.c)
 *     RtlSetSystemBootStatus @ 0x140A69F60 (RtlSetSystemBootStatus.c)
 */

__int64 __fastcall PopRecordLongPowerButtonPressDetected(char a1, char a2)
{
  if ( a2 )
    RtlBootStatusDisableFlushing(0);
  PopAcquireRwLockExclusive((unsigned __int64 *)&PopBsdUpdateLock);
  HIBYTE(PopBsdPhysicalPowerButtonInfo) = HIBYTE(PopBsdPhysicalPowerButtonInfo) & 0xFB | (4 * (a1 & 1));
  BYTE1(PopBsdPowerTransitionExtension) = PnpSetupInProgress & 1 | BYTE1(PopBsdPowerTransitionExtension) & 0xFC | (2 * (PnpSetupOOBEInProgress & 1));
  RtlSetSystemBootStatus(RtlBsdItemPowerButtonPressInfo, &PopBsdPhysicalPowerButtonInfo, 0x40u, 0LL);
  RtlSetSystemBootStatus(RtlBsdPowerTransitionExtension, &PopBsdPowerTransitionExtension, 0x20u, 0LL);
  return PopReleaseRwLock(&PopBsdUpdateLock);
}
