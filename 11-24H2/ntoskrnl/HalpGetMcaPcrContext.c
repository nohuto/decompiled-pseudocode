/*
 * XREFs of HalpGetMcaPcrContext @ 0x14047D638
 * Callers:
 *     HalpCmciInitializeErrorPacket @ 0x14047CC18 (HalpCmciInitializeErrorPacket.c)
 *     HalpMcaStuckErrorCheck @ 0x14047D154 (HalpMcaStuckErrorCheck.c)
 *     HalpCmciInitProcessor @ 0x14047D1E4 (HalpCmciInitProcessor.c)
 *     HalpCmciPollProcessor @ 0x14047D688 (HalpCmciPollProcessor.c)
 *     HalpHvInitMcaPcrContext @ 0x1404CE1F8 (HalpHvInitMcaPcrContext.c)
 *     HalpMceHandlerCore @ 0x140540418 (HalpMceHandlerCore.c)
 *     HalpMceInitializeErrorPacket @ 0x140B6D8FC (HalpMceInitializeErrorPacket.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall HalpGetMcaPcrContext(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  if ( (a1 & 0x100000000LL) == 0 )
    return HalpMcaPcrContextData + 192LL * (unsigned int)a1;
  LODWORD(a1) = a1 & 0x7FFFFFFF;
  return HalpHvVpMcaPcrContextData + 192LL * (unsigned int)guard_dispatch_icall_no_overrides(a1, a2, a3, a4);
}
