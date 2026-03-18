/*
 * XREFs of HalpAcquireCmosSpinLock @ 0x140425EE8
 * Callers:
 *     HalpWriteCmosDataByPort @ 0x140425230 (HalpWriteCmosDataByPort.c)
 *     HalpSetCmosData @ 0x140425294 (HalpSetCmosData.c)
 *     HalpSetClockAfterSleep @ 0x1404254A4 (HalpSetClockAfterSleep.c)
 *     HalpSetClockBeforeSleep @ 0x140425518 (HalpSetClockBeforeSleep.c)
 *     HalpGetSetCmosData @ 0x140425794 (HalpGetSetCmosData.c)
 *     HalpWriteRtcStdPCAT @ 0x140425990 (HalpWriteRtcStdPCAT.c)
 *     HalpReadRtcStdPCAT @ 0x140425A50 (HalpReadRtcStdPCAT.c)
 *     HalpReadCmosDataByPort @ 0x140425C10 (HalpReadCmosDataByPort.c)
 *     HalpAcquireCmosSpinLockAndWait @ 0x140425E20 (HalpAcquireCmosSpinLockAndWait.c)
 *     HalSetBusDataByOffset @ 0x14048F220 (HalSetBusDataByOffset.c)
 *     HalGetEnvironmentVariable @ 0x1405414C0 (HalGetEnvironmentVariable.c)
 *     HalSetEnvironmentVariable @ 0x140541550 (HalSetEnvironmentVariable.c)
 *     HalMakeBeep @ 0x140543EC0 (HalMakeBeep.c)
 *     HalpReboot @ 0x140544C40 (HalpReboot.c)
 *     x86BiosReadCmosPortByte @ 0x1405466B4 (x86BiosReadCmosPortByte.c)
 *     x86BiosWriteCmosPortByte @ 0x140546830 (x86BiosWriteCmosPortByte.c)
 * Callees:
 *     HalpDisableInterrupts @ 0x140320790 (HalpDisableInterrupts.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 HalpAcquireCmosSpinLock()
{
  unsigned int v0; // ebx
  bool v1; // al
  __int64 v2; // r8
  __int64 v3; // r9
  __int64 v4; // rcx
  __int64 v5; // rdx
  __int64 result; // rax

  v0 = 0;
  while ( 1 )
  {
    v1 = HalpDisableInterrupts();
    LODWORD(v4) = KeGetPcr()->Prcb.Number;
    LOBYTE(v5) = v1;
    result = (unsigned int)_InterlockedCompareExchange(&HalpSystemHardwareLock, v4, -1);
    if ( (_DWORD)result == -1 )
      break;
    if ( (_BYTE)v5 )
      _enable();
    while ( HalpSystemHardwareLock != -1 )
    {
      if ( HalpRebootNow )
        guard_dispatch_icall_no_overrides(v4, v5, v2, v3);
      if ( (++v0 & dword_140FC0EBC) != 0 || !qword_140FC0EC0 )
        _mm_pause();
      else
        guard_dispatch_icall_no_overrides(v0, v5, v2, v3);
    }
  }
  HalpSystemHardwareLockInterruptsEnabled = v5;
  return result;
}
