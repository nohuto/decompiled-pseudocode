/*
 * XREFs of HalpAcquireCmosSpinLock @ 0x14042DE18
 * Callers:
 *     HalpWriteCmosDataByPort @ 0x14042D160 (HalpWriteCmosDataByPort.c)
 *     HalpSetCmosData @ 0x14042D1C4 (HalpSetCmosData.c)
 *     HalpSetClockAfterSleep @ 0x14042D3D4 (HalpSetClockAfterSleep.c)
 *     HalpSetClockBeforeSleep @ 0x14042D448 (HalpSetClockBeforeSleep.c)
 *     HalpGetSetCmosData @ 0x14042D6C4 (HalpGetSetCmosData.c)
 *     HalpWriteRtcStdPCAT @ 0x14042D8C0 (HalpWriteRtcStdPCAT.c)
 *     HalpReadRtcStdPCAT @ 0x14042D980 (HalpReadRtcStdPCAT.c)
 *     HalpReadCmosDataByPort @ 0x14042DB40 (HalpReadCmosDataByPort.c)
 *     HalpAcquireCmosSpinLockAndWait @ 0x14042DD50 (HalpAcquireCmosSpinLockAndWait.c)
 *     HalSetBusDataByOffset @ 0x14048F900 (HalSetBusDataByOffset.c)
 *     HalGetEnvironmentVariable @ 0x14053EC90 (HalGetEnvironmentVariable.c)
 *     HalSetEnvironmentVariable @ 0x14053ED20 (HalSetEnvironmentVariable.c)
 *     HalMakeBeep @ 0x140541690 (HalMakeBeep.c)
 *     HalpReboot @ 0x14054237C (HalpReboot.c)
 *     x86BiosReadCmosPortByte @ 0x140543DC4 (x86BiosReadCmosPortByte.c)
 *     x86BiosWriteCmosPortByte @ 0x140543F40 (x86BiosWriteCmosPortByte.c)
 * Callees:
 *     HalpDisableInterrupts @ 0x140288F50 (HalpDisableInterrupts.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
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
      if ( (++v0 & dword_140FC071C) != 0 || !qword_140FC0720 )
        _mm_pause();
      else
        guard_dispatch_icall_no_overrides(v0, v3);
    }
  }
  HalpSystemHardwareLockInterruptsEnabled = v3;
  return result;
}
