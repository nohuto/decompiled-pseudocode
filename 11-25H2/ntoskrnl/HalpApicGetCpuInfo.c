/*
 * XREFs of HalpApicGetCpuInfo @ 0x140565C94
 * Callers:
 *     HalpApicIsCmciImplemented @ 0x140566124 (HalpApicIsCmciImplemented.c)
 *     HalpApicRegisterIoUnit @ 0x1405662D8 (HalpApicRegisterIoUnit.c)
 * Callees:
 *     HalSocRequestApi @ 0x1404AD34C (HalSocRequestApi.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

char __fastcall HalpApicGetCpuInfo(__int64 a1)
{
  if ( HalpApicCpuApi || (int)HalSocRequestApi(a1, 0LL, 2, 16LL, &HalpApicCpuApi) >= 0 && HalpApicCpuApi )
    return guard_dispatch_icall_no_overrides(a1);
  else
    return 0;
}
