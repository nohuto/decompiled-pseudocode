/*
 * XREFs of HalpHvVpStartEnabled @ 0x14054B9C4
 * Callers:
 *     HalpInterruptBuildGlobalStartupStub @ 0x14054181C (HalpInterruptBuildGlobalStartupStub.c)
 *     HalpInterruptStartProcessor @ 0x140B4BED0 (HalpInterruptStartProcessor.c)
 * Callees:
 *     HalpIsXboxNanovisorPresent @ 0x14054AC90 (HalpIsXboxNanovisorPresent.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

char __fastcall HalpHvVpStartEnabled(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  if ( qword_140FC0F70 )
    return guard_dispatch_icall_no_overrides(a1, a2, a3, a4);
  else
    return HalpIsXboxNanovisorPresent() != 0;
}
