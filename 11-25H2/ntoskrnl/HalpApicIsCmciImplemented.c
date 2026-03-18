/*
 * XREFs of HalpApicIsCmciImplemented @ 0x140566124
 * Callers:
 *     HalpApicInitializeLocalUnit @ 0x140565F00 (HalpApicInitializeLocalUnit.c)
 * Callees:
 *     HalpApicGetCpuInfo @ 0x140565C94 (HalpApicGetCpuInfo.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

char __fastcall HalpApicIsCmciImplemented(__int64 a1, _DWORD *a2)
{
  HalpApicGetCpuInfo(0LL);
  if ( a2 )
    *a2 = 0;
  return 0;
}
