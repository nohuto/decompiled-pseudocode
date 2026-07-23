/*
 * XREFs of HalpHvVpStartEnabled @ 0x140549284
 * Callers:
 *     HalpInterruptBuildGlobalStartupStub @ 0x14053F11C (HalpInterruptBuildGlobalStartupStub.c)
 *     HalpInterruptStartProcessor @ 0x140B4DF10 (HalpInterruptStartProcessor.c)
 * Callees:
 *     HalpIsXboxNanovisorPresent @ 0x140548550 (HalpIsXboxNanovisorPresent.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

char __fastcall HalpHvVpStartEnabled(__int64 a1, __int64 a2)
{
  if ( qword_140FC11D0 )
    return guard_dispatch_icall_no_overrides(a1, a2);
  else
    return HalpIsXboxNanovisorPresent() != 0;
}
