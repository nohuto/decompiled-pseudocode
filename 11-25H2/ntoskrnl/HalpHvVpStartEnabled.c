/*
 * XREFs of HalpHvVpStartEnabled @ 0x1405490D4
 * Callers:
 *     HalpInterruptBuildGlobalStartupStub @ 0x14053EFEC (HalpInterruptBuildGlobalStartupStub.c)
 *     HalpInterruptStartProcessor @ 0x140B3BED0 (HalpInterruptStartProcessor.c)
 * Callees:
 *     HalpIsXboxNanovisorPresent @ 0x1405483A0 (HalpIsXboxNanovisorPresent.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

char __fastcall HalpHvVpStartEnabled(__int64 a1)
{
  if ( qword_140FC07D0 )
    return guard_dispatch_icall_no_overrides(a1);
  else
    return HalpIsXboxNanovisorPresent() != 0;
}
