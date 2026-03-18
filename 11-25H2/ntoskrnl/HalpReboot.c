/*
 * XREFs of HalpReboot @ 0x14054237C
 * Callers:
 *     HalReturnToFirmware @ 0x140542060 (HalReturnToFirmware.c)
 * Callees:
 *     HalpDisableInterrupts @ 0x140288F50 (HalpDisableInterrupts.c)
 *     HalpAcquireCmosSpinLock @ 0x14042DE18 (HalpAcquireCmosSpinLock.c)
 *     HalRequestIpiSpecifyVector @ 0x140439850 (HalRequestIpiSpecifyVector.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F1088 (KiLowerIrqlProcessIrqlFlags.c)
 *     HalpPowerWriteResetCommand @ 0x140542254 (HalpPowerWriteResetCommand.c)
 *     HalpNmiReboot @ 0x140557354 (HalpNmiReboot.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

void __noreturn HalpReboot()
{
  ULONG_PTR i; // rbx

  HalpDisableInterrupts();
  if ( !HalpHvCpuManager || HalpEnlightenment )
  {
    for ( i = HalpRegisteredTimers; (ULONG_PTR *)i != &HalpRegisteredTimers; i = *(_QWORD *)i )
    {
      if ( (*(_DWORD *)(i + 184) & 2) != 0 && *(_QWORD *)(i + 136) )
        guard_dispatch_icall_no_overrides(*(_QWORD *)(i + 72));
    }
  }
  HalpAcquireCmosSpinLock();
  if ( HalpResetParkDisposition && HalpInterruptController && HalpInterruptProcessorsStarted != 1 && !dword_140E0FE78 )
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
  HalpPowerWriteResetCommand(0LL, 0LL);
}
