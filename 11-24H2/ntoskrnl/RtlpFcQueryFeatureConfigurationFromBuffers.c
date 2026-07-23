/*
 * XREFs of RtlpFcQueryFeatureConfigurationFromBuffers @ 0x14078D260
 * Callers:
 *     RtlQueryFeatureConfigurationFromBuffers @ 0x1405E66C4 (RtlQueryFeatureConfigurationFromBuffers.c)
 *     RtlpFcQueryFeatureConfigurationFromBufferSet @ 0x1406F7B64 (RtlpFcQueryFeatureConfigurationFromBufferSet.c)
 * Callees:
 *     RtlpFcGetFeatureHasSubscriptionsFromBuffer @ 0x14078CE5C (RtlpFcGetFeatureHasSubscriptionsFromBuffer.c)
 *     RtlFindLowerBoundInSortedArray @ 0x14099A690 (RtlFindLowerBoundInSortedArray.c)
 *     RtlpFcLinearSearchInSortedArray @ 0x140AB27F4 (RtlpFcLinearSearchInSortedArray.c)
 */

__int64 __fastcall RtlpFcQueryFeatureConfigurationFromBuffers(int a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int *v4; // rbp
  unsigned int v5; // ebx
  int v8; // eax
  unsigned int *LowerBoundInSortedArray; // rdi
  int v10; // edx
  int v11; // eax
  int v13; // [rsp+50h] [rbp+8h] BYREF

  v13 = a1;
  v4 = *(unsigned int **)(a2 + 8);
  v5 = 0;
  v8 = a1;
  LowerBoundInSortedArray = 0LL;
  if ( !v4 )
    goto LABEL_9;
  v10 = (_DWORD)v4 + 4;
  if ( *v4 )
  {
    LowerBoundInSortedArray = (unsigned int *)RtlFindLowerBoundInSortedArray(
                                                (unsigned int)&v13,
                                                v10,
                                                *v4,
                                                16,
                                                (__int64)RtlFcpCompareFeatureIdToFeature);
    v8 = v13;
    if ( LowerBoundInSortedArray == &v4[4 * *v4 + 1] || *LowerBoundInSortedArray != v13 )
      LowerBoundInSortedArray = 0LL;
  }
  else
  {
    LowerBoundInSortedArray = (unsigned int *)RtlpFcLinearSearchInSortedArray(
                                                (unsigned int)&v13,
                                                v10,
                                                0,
                                                a4,
                                                (__int64)RtlFcpCompareFeatureIdToFeature);
    v8 = v13;
  }
  if ( LowerBoundInSortedArray )
  {
    *(_OWORD *)a4 = *(_OWORD *)LowerBoundInSortedArray;
  }
  else
  {
LABEL_9:
    *(_OWORD *)a4 = 0LL;
    *(_DWORD *)a4 = v8;
  }
  RtlpFcGetFeatureHasSubscriptionsFromBuffer(v8, a3, a4, a4);
  if ( !LowerBoundInSortedArray )
  {
    v11 = *(_DWORD *)(a4 + 4);
    if ( (v11 & 0x40) == 0 )
      return (v11 & 0x80u) != 0 ? 279 : -1073741275;
  }
  return v5;
}
