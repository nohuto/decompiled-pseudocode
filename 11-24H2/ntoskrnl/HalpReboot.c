/*
 * XREFs of HalpReboot @ 0x140544C40
 * Callers:
 *     HalReturnToFirmware @ 0x140544920 (HalReturnToFirmware.c)
 * Callees:
 *     HalpDisableInterrupts @ 0x140320790 (HalpDisableInterrupts.c)
 *     HalpAcquireCmosSpinLock @ 0x140425EE8 (HalpAcquireCmosSpinLock.c)
 *     HalRequestIpiSpecifyVector @ 0x140437AC0 (HalRequestIpiSpecifyVector.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F4F48 (KiLowerIrqlProcessIrqlFlags.c)
 *     HalpPowerWriteResetCommand @ 0x140544B14 (HalpPowerWriteResetCommand.c)
 *     HalpNmiReboot @ 0x140559C54 (HalpNmiReboot.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

void __noreturn HalpReboot()
{
  __int64 v0; // rdx
  __int64 v1; // r8
  __int64 v2; // r9
  ULONG_PTR i; // rbx
  __int64 v4; // r8
  __int64 v5; // r9

  HalpDisableInterrupts();
  if ( !HalpHvCpuManager || HalpEnlightenment )
  {
    for ( i = HalpRegisteredTimers; (ULONG_PTR *)i != &HalpRegisteredTimers; i = *(_QWORD *)i )
    {
      if ( (*(_DWORD *)(i + 184) & 2) != 0 && *(_QWORD *)(i + 136) )
        guard_dispatch_icall_no_overrides(*(_QWORD *)(i + 72), v0, v1, v2);
    }
  }
  HalpAcquireCmosSpinLock();
  if ( HalpResetParkDisposition && HalpInterruptController && HalpInterruptProcessorsStarted != 1 && !dword_140E100F8 )
  {
    HalpNmiReboot();
    HalpRebootNow = (__int64)HalpInterruptResetThisProcessor;
    HalRequestIpiSpecifyVector(2, 0LL, 0xD7u);
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), 0);
    __writecr8(0LL);
    _enable();
    while ( 1 )
      ;
  }
  HalpPowerWriteResetCommand(0LL, 0LL, v4, v5);
}
