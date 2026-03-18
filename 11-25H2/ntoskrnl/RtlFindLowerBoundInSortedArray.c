/*
 * XREFs of RtlFindLowerBoundInSortedArray @ 0x1409C2D50
 * Callers:
 *     CmpFindSecurityCellCacheIndex @ 0x140429CE0 (CmpFindSecurityCellCacheIndex.c)
 *     RtlpFcGetFeatureHasSubscriptionsFromBuffer @ 0x14077DD5C (RtlpFcGetFeatureHasSubscriptionsFromBuffer.c)
 *     RtlpFcHasEffectiveStateInGovernedFeatureInfoTable @ 0x14077DE28 (RtlpFcHasEffectiveStateInGovernedFeatureInfoTable.c)
 *     RtlpFcIsGovernedFeatureTableUpdateNeeded @ 0x14077DFB4 (RtlpFcIsGovernedFeatureTableUpdateNeeded.c)
 *     RtlpFcQueryFeatureConfigurationFromBuffers @ 0x140AC8A30 (RtlpFcQueryFeatureConfigurationFromBuffers.c)
 * Callees:
 *     CmpSearchSecurityCellCache @ 0x1404383D0 (CmpSearchSecurityCellCache.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

unsigned __int64 __fastcall RtlFindLowerBoundInSortedArray(
        _DWORD *a1,
        unsigned __int64 a2,
        unsigned __int64 a3,
        __int64 a4,
        __int64 (__fastcall *a5)(_DWORD *a1, _DWORD *a2))
{
  unsigned __int64 v6; // rbp
  unsigned __int64 v7; // rdi
  unsigned __int64 v8; // r15
  unsigned __int64 v10; // rbx
  int v11; // eax

  v6 = a3;
  v7 = a2;
  v8 = a2 + a4 * a3;
  if ( a2 < v8 )
  {
    do
    {
      v10 = v7 + a4 * (v6 >> 1);
      if ( a5 == CmpSearchSecurityCellCache )
        v11 = CmpSearchSecurityCellCache(a1, (_DWORD *)(v7 + a4 * (v6 >> 1)));
      else
        v11 = guard_dispatch_icall_no_overrides(a1);
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
        v7 = v10 + a4;
    }
    while ( v7 < v8 );
  }
  return v7;
}
