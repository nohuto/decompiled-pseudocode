/*
 * XREFs of RtlpFcGetFeatureHasSubscriptionsFromBuffer @ 0x14078CE5C
 * Callers:
 *     RtlpFcHasEffectiveStateInGovernedFeatureInfoTable @ 0x14078CF28 (RtlpFcHasEffectiveStateInGovernedFeatureInfoTable.c)
 *     RtlpFcQueryFeatureConfigurationFromBuffers @ 0x14078D260 (RtlpFcQueryFeatureConfigurationFromBuffers.c)
 * Callees:
 *     RtlFindLowerBoundInSortedArray @ 0x14099A690 (RtlFindLowerBoundInSortedArray.c)
 *     RtlpFcLinearSearchInSortedArray @ 0x140AB27F4 (RtlpFcLinearSearchInSortedArray.c)
 */

__int64 __fastcall RtlpFcGetFeatureHasSubscriptionsFromBuffer(int a1, __int64 a2, __int64 a3, int a4)
{
  unsigned int *v5; // rdi
  int v6; // edx
  __int64 LowerBoundInSortedArray; // rax
  int v8; // ecx
  int v9; // ecx
  unsigned int v10; // eax
  int v12; // [rsp+40h] [rbp+8h] BYREF

  v12 = a1;
  if ( !a2 || (v5 = *(unsigned int **)(a2 + 8)) == 0LL )
  {
    *(_DWORD *)(a3 + 4) &= ~0x80u;
    v10 = *(_DWORD *)(a3 + 4);
    return (v10 & 0x80u) == 0 ? 0xC0000225 : 0;
  }
  v6 = (_DWORD)v5 + 4;
  if ( *v5 )
  {
    LowerBoundInSortedArray = RtlFindLowerBoundInSortedArray(
                                (unsigned int)&v12,
                                v6,
                                *v5,
                                16,
                                (__int64)RtlpFcCompareFeatureIdToGovernedFeature);
    if ( (unsigned int *)LowerBoundInSortedArray == &v5[4 * *v5 + 1] || *(_DWORD *)LowerBoundInSortedArray != v12 )
      LowerBoundInSortedArray = 0LL;
  }
  else
  {
    LowerBoundInSortedArray = RtlpFcLinearSearchInSortedArray(
                                (unsigned int)&v12,
                                v6,
                                0,
                                a4,
                                (__int64)RtlpFcCompareFeatureIdToGovernedFeature);
  }
  v8 = *(_DWORD *)(a3 + 4);
  if ( !LowerBoundInSortedArray )
  {
    v10 = v8 & 0xFFFFFF7F;
    goto LABEL_13;
  }
  v9 = v8 | 0x80;
  *(_DWORD *)(a3 + 4) = v9;
  if ( (v9 & 0x40) == 0 )
  {
    v10 = v9 & 0xFFFFFFBF | ((*(_WORD *)(LowerBoundInSortedArray + 6) & 1) << 6);
LABEL_13:
    *(_DWORD *)(a3 + 4) = v10;
    return (v10 & 0x80u) == 0 ? 0xC0000225 : 0;
  }
  LOBYTE(v10) = v9;
  return (v10 & 0x80u) == 0 ? 0xC0000225 : 0;
}
