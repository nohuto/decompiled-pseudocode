/*
 * XREFs of RtlpFcLinearSearchInSortedArray @ 0x140AB27F4
 * Callers:
 *     RtlpFcGetFeatureHasSubscriptionsFromBuffer @ 0x14078CE5C (RtlpFcGetFeatureHasSubscriptionsFromBuffer.c)
 *     RtlpFcHasEffectiveStateInGovernedFeatureInfoTable @ 0x14078CF28 (RtlpFcHasEffectiveStateInGovernedFeatureInfoTable.c)
 *     RtlpFcQueryFeatureConfigurationFromBuffers @ 0x14078D260 (RtlpFcQueryFeatureConfigurationFromBuffers.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall RtlpFcLinearSearchInSortedArray(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  unsigned __int64 i; // rdi
  int v7; // eax

  for ( i = 0LL; i < a3; ++i )
  {
    v7 = guard_dispatch_icall_no_overrides(a1, a2);
    if ( v7 < 0 )
      break;
    if ( !v7 )
      return a2;
    a2 += 16LL;
  }
  return 0LL;
}
