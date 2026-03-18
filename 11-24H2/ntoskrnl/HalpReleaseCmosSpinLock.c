/*
 * XREFs of HalpReleaseCmosSpinLock @ 0x140425E04
 * Callers:
 *     HalpWriteCmosDataByPort @ 0x140425230 (HalpWriteCmosDataByPort.c)
 *     HalpSetCmosData @ 0x140425294 (HalpSetCmosData.c)
 *     HalpSetClockAfterSleep @ 0x1404254A4 (HalpSetClockAfterSleep.c)
 *     HalpSetClockBeforeSleep @ 0x140425518 (HalpSetClockBeforeSleep.c)
 *     HalpWriteCmosTime @ 0x140425598 (HalpWriteCmosTime.c)
 *     HalpGetSetCmosData @ 0x140425794 (HalpGetSetCmosData.c)
 *     HalpWriteRtcStdPCAT @ 0x140425990 (HalpWriteRtcStdPCAT.c)
 *     HalpReadRtcStdPCAT @ 0x140425A50 (HalpReadRtcStdPCAT.c)
 *     HalpSetWakeAlarm @ 0x140425AC8 (HalpSetWakeAlarm.c)
 *     HalpReadCmosDataByPort @ 0x140425C10 (HalpReadCmosDataByPort.c)
 *     HalpReadCmosTime @ 0x140425C74 (HalpReadCmosTime.c)
 *     HalpAcquireCmosSpinLockAndWait @ 0x140425E20 (HalpAcquireCmosSpinLockAndWait.c)
 *     HalSetBusDataByOffset @ 0x14048F220 (HalSetBusDataByOffset.c)
 *     HalGetEnvironmentVariable @ 0x1405414C0 (HalGetEnvironmentVariable.c)
 *     HalSetEnvironmentVariable @ 0x140541550 (HalSetEnvironmentVariable.c)
 *     HalMakeBeep @ 0x140543EC0 (HalMakeBeep.c)
 *     x86BiosReadCmosPortByte @ 0x1405466B4 (x86BiosReadCmosPortByte.c)
 *     x86BiosWriteCmosPortByte @ 0x140546830 (x86BiosWriteCmosPortByte.c)
 * Callees:
 *     <none>
 */

__int64 HalpReleaseCmosSpinLock()
{
  __int64 result; // rax

  result = (unsigned int)_InterlockedExchange(&HalpSystemHardwareLock, -1);
  if ( HalpSystemHardwareLockInterruptsEnabled )
    _enable();
  return result;
}
