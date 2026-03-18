/*
 * XREFs of RtlFindLowerBoundInSortedArray @ 0x1409B0BD0
 * Callers:
 *     CmpFindSecurityCellCacheIndex @ 0x14041FBC0 (CmpFindSecurityCellCacheIndex.c)
 *     RtlpFcGetFeatureHasSubscriptionsFromBuffer @ 0x14078CF2C (RtlpFcGetFeatureHasSubscriptionsFromBuffer.c)
 *     RtlpFcHasEffectiveStateInGovernedFeatureInfoTable @ 0x14078CFF8 (RtlpFcHasEffectiveStateInGovernedFeatureInfoTable.c)
 *     RtlpFcIsGovernedFeatureTableUpdateNeeded @ 0x14078D18C (RtlpFcIsGovernedFeatureTableUpdateNeeded.c)
 *     RtlpFcQueryFeatureConfigurationFromBuffers @ 0x14078D330 (RtlpFcQueryFeatureConfigurationFromBuffers.c)
 * Callees:
 *     CmpSearchSecurityCellCache @ 0x140434630 (CmpSearchSecurityCellCache.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

char *__fastcall RtlFindLowerBoundInSortedArray(
        _DWORD *a1,
        char *a2,
        unsigned __int64 a3,
        __int64 a4,
        __int64 (__fastcall *a5)(_DWORD *a1, _DWORD *a2))
{
  unsigned __int64 v6; // rbp
  char *v7; // rdi
  char *v8; // r15
  char *v10; // rbx
  int v11; // eax

  v6 = a3;
  v7 = a2;
  v8 = &a2[a4 * a3];
  if ( a2 < v8 )
  {
    do
    {
      v10 = &v7[a4 * (v6 >> 1)];
      if ( a5 == CmpSearchSecurityCellCache )
        v11 = CmpSearchSecurityCellCache(a1, v10);
      else
        v11 = guard_dispatch_icall_no_overrides(a1, v10, a3, a4);
      if ( v11 > 0 )
      {
        v6 += -1LL - (v6 >> 1);
      }
      else
      {
        v6 >>= 1;
        v8 = v10;
      }
      if ( v11 > 0 )
        v7 = &v10[a4];
    }
    while ( v7 < v8 );
  }
  return v7;
}
