/*
 * XREFs of HalpInterruptSendIpiToPhysicalTarget @ 0x140541FC4
 * Callers:
 *     HalpBlkPoReadPerfIoPort @ 0x140569C60 (HalpBlkPoReadPerfIoPort.c)
 *     HalpBlkPoReadPerfMsr @ 0x140569D70 (HalpBlkPoReadPerfMsr.c)
 *     HalpBlkPoRegisterIdleState @ 0x140569E70 (HalpBlkPoRegisterIdleState.c)
 *     HalpBlkPoWritePerfIoPort @ 0x140569F40 (HalpBlkPoWritePerfIoPort.c)
 *     HalpBlkPoWritePerfMsr @ 0x14056A030 (HalpBlkPoWritePerfMsr.c)
 * Callees:
 *     HalpDisableInterrupts @ 0x140288F50 (HalpDisableInterrupts.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 HalpInterruptSendIpiToPhysicalTarget()
{
  bool v0; // bl
  __int64 result; // rax

  v0 = HalpDisableInterrupts();
  result = guard_dispatch_icall_no_overrides(*(_QWORD *)(HalpInterruptController + 16));
  if ( v0 )
    _enable();
  return result;
}
