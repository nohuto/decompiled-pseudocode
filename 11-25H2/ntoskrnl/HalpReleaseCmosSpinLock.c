/*
 * XREFs of HalpReleaseCmosSpinLock @ 0x14042DD34
 * Callers:
 *     HalpWriteCmosDataByPort @ 0x14042D160 (HalpWriteCmosDataByPort.c)
 *     HalpSetCmosData @ 0x14042D1C4 (HalpSetCmosData.c)
 *     HalpSetClockAfterSleep @ 0x14042D3D4 (HalpSetClockAfterSleep.c)
 *     HalpSetClockBeforeSleep @ 0x14042D448 (HalpSetClockBeforeSleep.c)
 *     HalpWriteCmosTime @ 0x14042D4C8 (HalpWriteCmosTime.c)
 *     HalpGetSetCmosData @ 0x14042D6C4 (HalpGetSetCmosData.c)
 *     HalpWriteRtcStdPCAT @ 0x14042D8C0 (HalpWriteRtcStdPCAT.c)
 *     HalpReadRtcStdPCAT @ 0x14042D980 (HalpReadRtcStdPCAT.c)
 *     HalpSetWakeAlarm @ 0x14042D9F8 (HalpSetWakeAlarm.c)
 *     HalpReadCmosDataByPort @ 0x14042DB40 (HalpReadCmosDataByPort.c)
 *     HalpReadCmosTime @ 0x14042DBA4 (HalpReadCmosTime.c)
 *     HalpAcquireCmosSpinLockAndWait @ 0x14042DD50 (HalpAcquireCmosSpinLockAndWait.c)
 *     HalSetBusDataByOffset @ 0x14048F900 (HalSetBusDataByOffset.c)
 *     HalGetEnvironmentVariable @ 0x14053EC90 (HalGetEnvironmentVariable.c)
 *     HalSetEnvironmentVariable @ 0x14053ED20 (HalSetEnvironmentVariable.c)
 *     HalMakeBeep @ 0x140541690 (HalMakeBeep.c)
 *     x86BiosReadCmosPortByte @ 0x140543DC4 (x86BiosReadCmosPortByte.c)
 *     x86BiosWriteCmosPortByte @ 0x140543F40 (x86BiosWriteCmosPortByte.c)
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
