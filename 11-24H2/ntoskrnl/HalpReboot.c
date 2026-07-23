/*
 * XREFs of HalpReboot @ 0x140542500
 * Callers:
 *     HalReturnToFirmware @ 0x1405421E0 (HalReturnToFirmware.c)
 * Callees:
 *     HalpDisableInterrupts @ 0x1402C9320 (HalpDisableInterrupts.c)
 *     HalpAcquireCmosSpinLock @ 0x140419D98 (HalpAcquireCmosSpinLock.c)
 *     HalRequestIpiSpecifyVector @ 0x14042A540 (HalRequestIpiSpecifyVector.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 *     HalpPowerWriteResetCommand @ 0x1405423D4 (HalpPowerWriteResetCommand.c)
 *     HalpNmiReboot @ 0x140557884 (HalpNmiReboot.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

void __noreturn HalpReboot()
{
  __int64 v0; // rdx
  ULONG_PTR i; // rbx

  HalpDisableInterrupts();
  if ( !HalpHvCpuManager || HalpEnlightenment )
  {
    for ( i = HalpRegisteredTimers; (ULONG_PTR *)i != &HalpRegisteredTimers; i = *(_QWORD *)i )
    {
      if ( (*(_DWORD *)(i + 184) & 2) != 0 && *(_QWORD *)(i + 136) )
        guard_dispatch_icall_no_overrides(*(_QWORD *)(i + 72), v0);
    }
  }
  HalpAcquireCmosSpinLock();
  if ( HalpResetParkDisposition && HalpInterruptController && HalpInterruptProcessorsStarted != 1 && !dword_140E10288 )
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
