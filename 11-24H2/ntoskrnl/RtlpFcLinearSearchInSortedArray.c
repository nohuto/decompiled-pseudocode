/*
 * XREFs of RtlpFcLinearSearchInSortedArray @ 0x140AB8330
 * Callers:
 *     RtlpFcGetFeatureHasSubscriptionsFromBuffer @ 0x14078CF2C (RtlpFcGetFeatureHasSubscriptionsFromBuffer.c)
 *     RtlpFcHasEffectiveStateInGovernedFeatureInfoTable @ 0x14078CFF8 (RtlpFcHasEffectiveStateInGovernedFeatureInfoTable.c)
 *     RtlpFcQueryFeatureConfigurationFromBuffers @ 0x14078D330 (RtlpFcQueryFeatureConfigurationFromBuffers.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall RtlpFcLinearSearchInSortedArray(__int64 a1, __int64 a2, unsigned __int64 a3, __int64 a4)
{
  unsigned __int64 i; // rdi
  int v8; // eax

  for ( i = 0LL; i < a3; ++i )
  {
    v8 = guard_dispatch_icall_no_overrides(a1, a2, a3, a4);
    if ( v8 < 0 )
      break;
    if ( !v8 )
      return a2;
    a2 += 16LL;
  }
  return 0LL;
}
