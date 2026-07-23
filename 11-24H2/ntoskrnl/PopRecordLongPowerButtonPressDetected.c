/*
 * XREFs of PopRecordLongPowerButtonPressDetected @ 0x140747A48
 * Callers:
 *     PoClearTransitionMarker @ 0x1407472C8 (PoClearTransitionMarker.c)
 *     PopDiagTracePowerButtonBugcheck @ 0x1407550C4 (PopDiagTracePowerButtonBugcheck.c)
 * Callees:
 *     PopReleaseRwLock @ 0x1402AE8FC (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x14041C564 (PopAcquireRwLockExclusive.c)
 *     RtlBootStatusDisableFlushing @ 0x1404F8358 (RtlBootStatusDisableFlushing.c)
 *     RtlSetSystemBootStatus @ 0x140A65AF0 (RtlSetSystemBootStatus.c)
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
