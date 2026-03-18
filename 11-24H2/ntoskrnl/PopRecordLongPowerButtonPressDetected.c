/*
 * XREFs of PopRecordLongPowerButtonPressDetected @ 0x140749718
 * Callers:
 *     PoClearTransitionMarker @ 0x140748F9C (PoClearTransitionMarker.c)
 *     PopDiagTracePowerButtonBugcheck @ 0x140756C44 (PopDiagTracePowerButtonBugcheck.c)
 * Callees:
 *     PopReleaseRwLock @ 0x1403B5EC8 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x1404283D4 (PopAcquireRwLockExclusive.c)
 *     RtlBootStatusDisableFlushing @ 0x1404FAA78 (RtlBootStatusDisableFlushing.c)
 *     RtlSetSystemBootStatus @ 0x140A6C590 (RtlSetSystemBootStatus.c)
 */

__int64 __fastcall PopRecordLongPowerButtonPressDetected(char a1, char a2)
{
  if ( a2 )
    RtlBootStatusDisableFlushing(0);
  PopAcquireRwLockExclusive(&PopBsdUpdateLock);
  HIBYTE(PopBsdPhysicalPowerButtonInfo) = HIBYTE(PopBsdPhysicalPowerButtonInfo) & 0xFB | (4 * (a1 & 1));
  BYTE1(PopBsdPowerTransitionExtension) = PnpSetupInProgress & 1 | BYTE1(PopBsdPowerTransitionExtension) & 0xFC | (2 * (PnpSetupOOBEInProgress & 1));
  RtlSetSystemBootStatus(14LL, &PopBsdPhysicalPowerButtonInfo, 64LL, 0LL);
  RtlSetSystemBootStatus(16LL, &PopBsdPowerTransitionExtension, 32LL, 0LL);
  return PopReleaseRwLock((signed __int64 *)&PopBsdUpdateLock);
}
