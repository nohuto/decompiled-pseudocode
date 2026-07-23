/*
 * XREFs of HalpGetMcaPcrContext @ 0x1404787C8
 * Callers:
 *     HalpCmciInitializeErrorPacket @ 0x140477DA0 (HalpCmciInitializeErrorPacket.c)
 *     HalpMcaStuckErrorCheck @ 0x1404782E4 (HalpMcaStuckErrorCheck.c)
 *     HalpCmciInitProcessor @ 0x140478374 (HalpCmciInitProcessor.c)
 *     HalpCmciPollProcessor @ 0x140478818 (HalpCmciPollProcessor.c)
 *     HalpHvInitMcaPcrContext @ 0x1404C74C4 (HalpHvInitMcaPcrContext.c)
 *     HalpMceHandlerCore @ 0x14053DD18 (HalpMceHandlerCore.c)
 *     HalpMceInitializeErrorPacket @ 0x140B6F19C (HalpMceInitializeErrorPacket.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall HalpGetMcaPcrContext(__int64 a1, __int64 a2)
{
  if ( (a1 & 0x100000000LL) == 0 )
    return HalpMcaPcrContextData + 192LL * (unsigned int)a1;
  LODWORD(a1) = a1 & 0x7FFFFFFF;
  return HalpHvVpMcaPcrContextData + 192LL * (unsigned int)guard_dispatch_icall_no_overrides(a1, a2);
}
