/*
 * XREFs of RtlFindLowerBoundInSortedArray @ 0x180170370
 * Callers:
 *     RtlpFcGetFeatureHasSubscriptionsFromBuffer @ 0x180170028 (RtlpFcGetFeatureHasSubscriptionsFromBuffer.c)
 *     RtlpFcHasEffectiveStateInGovernedFeatureInfoTable @ 0x1801700F0 (RtlpFcHasEffectiveStateInGovernedFeatureInfoTable.c)
 *     RtlpFcQueryFeatureConfigurationFromBuffers @ 0x1801707F0 (RtlpFcQueryFeatureConfigurationFromBuffers.c)
 * Callees:
 *     RtlFcpCompareFeatureIdToFeature @ 0x180170440 (RtlFcpCompareFeatureIdToFeature.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180171020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

unsigned __int64 __fastcall RtlFindLowerBoundInSortedArray(
        __int64 a1,
        unsigned __int64 a2,
        unsigned __int64 a3,
        __int64 a4,
        __int64 (__fastcall *a5)(__int64, unsigned __int64))
{
  unsigned __int64 v5; // r14
  unsigned __int64 v6; // rdi
  unsigned __int64 v7; // rbp
  unsigned __int64 v9; // rbx
  int v10; // eax
  unsigned __int64 v11; // rbx

  v5 = a3;
  v6 = a2;
  v7 = a2 + 16 * a3;
  if ( a2 < v7 )
  {
    do
    {
      v9 = v6 + 16 * (v5 >> 1);
      if ( a5 == RtlFcpCompareFeatureIdToFeature )
        v10 = RtlFcpCompareFeatureIdToFeature(a1, v9);
      else
        v10 = a5(a1, v9);
      if ( v10 > 0 )
      {
        v5 += -1LL - (v5 >> 1);
      }
      else
      {
        v5 >>= 1;
        v7 = v9;
      }
      v11 = v9 + 16;
      if ( v10 > 0 )
        v6 = v11;
    }
    while ( v6 < v7 );
  }
  return v6;
}
