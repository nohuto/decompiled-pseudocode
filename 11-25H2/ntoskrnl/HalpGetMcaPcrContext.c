/*
 * XREFs of HalpGetMcaPcrContext @ 0x14047C738
 * Callers:
 *     HalpCmciInitializeErrorPacket @ 0x14047BD0C (HalpCmciInitializeErrorPacket.c)
 *     HalpMcaStuckErrorCheck @ 0x14047C254 (HalpMcaStuckErrorCheck.c)
 *     HalpCmciInitProcessor @ 0x14047C2E4 (HalpCmciInitProcessor.c)
 *     HalpCmciPollProcessor @ 0x14047C788 (HalpCmciPollProcessor.c)
 *     HalpHvInitMcaPcrContext @ 0x1404CE418 (HalpHvInitMcaPcrContext.c)
 *     HalpMceHandlerCore @ 0x14053DBE8 (HalpMceHandlerCore.c)
 *     HalpMceInitializeErrorPacket @ 0x140B5E84C (HalpMceInitializeErrorPacket.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall HalpGetMcaPcrContext(__int64 a1, __int64 a2)
{
  if ( (a1 & 0x100000000LL) == 0 )
    return HalpMcaPcrContextData + 192LL * (unsigned int)a1;
  LODWORD(a1) = a1 & 0x7FFFFFFF;
  return HalpHvVpMcaPcrContextData + 192LL * (unsigned int)guard_dispatch_icall_no_overrides(a1, a2);
}
