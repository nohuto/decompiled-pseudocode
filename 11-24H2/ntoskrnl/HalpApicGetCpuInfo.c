/*
 * XREFs of HalpApicGetCpuInfo @ 0x140566354
 * Callers:
 *     HalpApicIsCmciImplemented @ 0x1405667E4 (HalpApicIsCmciImplemented.c)
 *     HalpApicRegisterIoUnit @ 0x140566998 (HalpApicRegisterIoUnit.c)
 * Callees:
 *     HalSocRequestApi @ 0x1404A8A70 (HalSocRequestApi.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

char __fastcall HalpApicGetCpuInfo(__int64 a1, __int64 a2)
{
  if ( HalpApicCpuApi || (int)HalSocRequestApi(a1, 0LL, 2, 16LL, &HalpApicCpuApi) >= 0 && HalpApicCpuApi )
    return guard_dispatch_icall_no_overrides(a1, a2);
  else
    return 0;
}
