/*
 * XREFs of HalpInterruptSendIpiToPhysicalTarget @ 0x1405447F0
 * Callers:
 *     HalpBlkPoReadPerfIoPort @ 0x14056CF60 (HalpBlkPoReadPerfIoPort.c)
 *     HalpBlkPoReadPerfMsr @ 0x14056D070 (HalpBlkPoReadPerfMsr.c)
 *     HalpBlkPoRegisterIdleState @ 0x14056D170 (HalpBlkPoRegisterIdleState.c)
 *     HalpBlkPoWritePerfIoPort @ 0x14056D240 (HalpBlkPoWritePerfIoPort.c)
 *     HalpBlkPoWritePerfMsr @ 0x14056D330 (HalpBlkPoWritePerfMsr.c)
 * Callees:
 *     HalpDisableInterrupts @ 0x140320790 (HalpDisableInterrupts.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall HalpInterruptSendIpiToPhysicalTarget(int a1)
{
  bool v1; // bl
  __int64 result; // rax
  __int128 v3; // [rsp+30h] [rbp-28h] BYREF
  __int64 v4; // [rsp+40h] [rbp-18h]
  int v5; // [rsp+78h] [rbp+20h] BYREF
  int v6; // [rsp+7Ch] [rbp+24h]

  v4 = 0LL;
  v3 = 0LL;
  DWORD2(v3) = a1;
  LODWORD(v3) = 4;
  v6 = *(_DWORD *)(HalpInterruptIpiLines + 20);
  v5 = *(_DWORD *)(HalpInterruptIpiLines + 16);
  v1 = HalpDisableInterrupts();
  result = guard_dispatch_icall_no_overrides(*(_QWORD *)(HalpInterruptController + 16), &v5, &v3, 225LL);
  if ( v1 )
    _enable();
  return result;
}
