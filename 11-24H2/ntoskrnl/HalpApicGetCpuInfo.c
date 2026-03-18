/*
 * XREFs of HalpApicGetCpuInfo @ 0x140568864
 * Callers:
 *     HalpApicIsCmciImplemented @ 0x140568CF4 (HalpApicIsCmciImplemented.c)
 *     HalpApicRegisterIoUnit @ 0x140568EA8 (HalpApicRegisterIoUnit.c)
 * Callees:
 *     HalSocRequestApi @ 0x1404AE160 (HalSocRequestApi.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

char __fastcall HalpApicGetCpuInfo(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  if ( HalpApicCpuApi || (int)HalSocRequestApi(a1, 0LL, 2, 16LL, &HalpApicCpuApi) >= 0 && HalpApicCpuApi )
    return guard_dispatch_icall_no_overrides(a1, a2, a3, a4);
  else
    return 0;
}
