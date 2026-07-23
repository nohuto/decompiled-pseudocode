/*
 * XREFs of HalpInterruptSendIpiToPhysicalTarget @ 0x140542140
 * Callers:
 *     HalpBlkPoReadPerfIoPort @ 0x14056A3F0 (HalpBlkPoReadPerfIoPort.c)
 *     HalpBlkPoReadPerfMsr @ 0x14056A500 (HalpBlkPoReadPerfMsr.c)
 *     HalpBlkPoRegisterIdleState @ 0x14056A600 (HalpBlkPoRegisterIdleState.c)
 *     HalpBlkPoWritePerfIoPort @ 0x14056A6D0 (HalpBlkPoWritePerfIoPort.c)
 *     HalpBlkPoWritePerfMsr @ 0x14056A7C0 (HalpBlkPoWritePerfMsr.c)
 * Callees:
 *     HalpDisableInterrupts @ 0x1402C9320 (HalpDisableInterrupts.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 HalpInterruptSendIpiToPhysicalTarget()
{
  bool v0; // bl
  __int64 result; // rax
  int v2; // [rsp+78h] [rbp+20h] BYREF
  int v3; // [rsp+7Ch] [rbp+24h]

  v3 = *(_DWORD *)(HalpInterruptIpiLines + 20);
  v2 = *(_DWORD *)(HalpInterruptIpiLines + 16);
  v0 = HalpDisableInterrupts();
  result = guard_dispatch_icall_no_overrides(*(_QWORD *)(HalpInterruptController + 16), &v2);
  if ( v0 )
    _enable();
  return result;
}
