/*
 * XREFs of HalpAcquireCmosSpinLock @ 0x140419D98
 * Callers:
 *     HalpWriteCmosDataByPort @ 0x1404190E0 (HalpWriteCmosDataByPort.c)
 *     HalpSetCmosData @ 0x140419144 (HalpSetCmosData.c)
 *     HalpSetClockAfterSleep @ 0x140419354 (HalpSetClockAfterSleep.c)
 *     HalpSetClockBeforeSleep @ 0x1404193C8 (HalpSetClockBeforeSleep.c)
 *     HalpGetSetCmosData @ 0x140419644 (HalpGetSetCmosData.c)
 *     HalpWriteRtcStdPCAT @ 0x140419840 (HalpWriteRtcStdPCAT.c)
 *     HalpReadRtcStdPCAT @ 0x140419900 (HalpReadRtcStdPCAT.c)
 *     HalpReadCmosDataByPort @ 0x140419AC0 (HalpReadCmosDataByPort.c)
 *     HalpAcquireCmosSpinLockAndWait @ 0x140419CD0 (HalpAcquireCmosSpinLockAndWait.c)
 *     HalSetBusDataByOffset @ 0x140489430 (HalSetBusDataByOffset.c)
 *     HalGetEnvironmentVariable @ 0x14053EDC0 (HalGetEnvironmentVariable.c)
 *     HalSetEnvironmentVariable @ 0x14053EE50 (HalSetEnvironmentVariable.c)
 *     HalMakeBeep @ 0x140541810 (HalMakeBeep.c)
 *     HalpReboot @ 0x140542500 (HalpReboot.c)
 *     x86BiosReadCmosPortByte @ 0x140543F74 (x86BiosReadCmosPortByte.c)
 *     x86BiosWriteCmosPortByte @ 0x1405440F0 (x86BiosWriteCmosPortByte.c)
 * Callees:
 *     HalpDisableInterrupts @ 0x1402C9320 (HalpDisableInterrupts.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 HalpAcquireCmosSpinLock()
{
  unsigned int v0; // ebx
  bool v1; // al
  __int64 v2; // rcx
  __int64 v3; // rdx
  __int64 result; // rax

  v0 = 0;
  while ( 1 )
  {
    v1 = HalpDisableInterrupts();
    LODWORD(v2) = KeGetPcr()->Prcb.Number;
    LOBYTE(v3) = v1;
    result = (unsigned int)_InterlockedCompareExchange(&HalpSystemHardwareLock, v2, -1);
    if ( (_DWORD)result == -1 )
      break;
    if ( (_BYTE)v3 )
      _enable();
    while ( HalpSystemHardwareLock != -1 )
    {
      if ( HalpRebootNow )
        guard_dispatch_icall_no_overrides(v2, v3);
      if ( (++v0 & dword_140FC111C) != 0 || !qword_140FC1120 )
        _mm_pause();
      else
        guard_dispatch_icall_no_overrides(v0, v3);
    }
  }
  HalpSystemHardwareLockInterruptsEnabled = v3;
  return result;
}
