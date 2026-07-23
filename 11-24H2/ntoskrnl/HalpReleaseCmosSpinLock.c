/*
 * XREFs of HalpReleaseCmosSpinLock @ 0x140419CB4
 * Callers:
 *     HalpWriteCmosDataByPort @ 0x1404190E0 (HalpWriteCmosDataByPort.c)
 *     HalpSetCmosData @ 0x140419144 (HalpSetCmosData.c)
 *     HalpSetClockAfterSleep @ 0x140419354 (HalpSetClockAfterSleep.c)
 *     HalpSetClockBeforeSleep @ 0x1404193C8 (HalpSetClockBeforeSleep.c)
 *     HalpWriteCmosTime @ 0x140419448 (HalpWriteCmosTime.c)
 *     HalpGetSetCmosData @ 0x140419644 (HalpGetSetCmosData.c)
 *     HalpWriteRtcStdPCAT @ 0x140419840 (HalpWriteRtcStdPCAT.c)
 *     HalpReadRtcStdPCAT @ 0x140419900 (HalpReadRtcStdPCAT.c)
 *     HalpSetWakeAlarm @ 0x140419978 (HalpSetWakeAlarm.c)
 *     HalpReadCmosDataByPort @ 0x140419AC0 (HalpReadCmosDataByPort.c)
 *     HalpReadCmosTime @ 0x140419B24 (HalpReadCmosTime.c)
 *     HalpAcquireCmosSpinLockAndWait @ 0x140419CD0 (HalpAcquireCmosSpinLockAndWait.c)
 *     HalSetBusDataByOffset @ 0x140489430 (HalSetBusDataByOffset.c)
 *     HalGetEnvironmentVariable @ 0x14053EDC0 (HalGetEnvironmentVariable.c)
 *     HalSetEnvironmentVariable @ 0x14053EE50 (HalSetEnvironmentVariable.c)
 *     HalMakeBeep @ 0x140541810 (HalMakeBeep.c)
 *     x86BiosReadCmosPortByte @ 0x140543F74 (x86BiosReadCmosPortByte.c)
 *     x86BiosWriteCmosPortByte @ 0x1405440F0 (x86BiosWriteCmosPortByte.c)
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
