/*
 * XREFs of RtlpFcQueryFeatureConfigurationFromBuffers @ 0x1801707F0
 * Callers:
 *     RtlpFcQueryFeatureConfigurationFromBufferSet @ 0x180170730 (RtlpFcQueryFeatureConfigurationFromBufferSet.c)
 * Callees:
 *     RtlpFcGetFeatureHasSubscriptionsFromBuffer @ 0x180170028 (RtlpFcGetFeatureHasSubscriptionsFromBuffer.c)
 *     RtlFindLowerBoundInSortedArray @ 0x180170370 (RtlFindLowerBoundInSortedArray.c)
 *     RtlpFcLinearSearchInSortedArray @ 0x1801706C8 (RtlpFcLinearSearchInSortedArray.c)
 */

__int64 __fastcall RtlpFcQueryFeatureConfigurationFromBuffers(int a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int *v4; // rbp
  unsigned int v5; // ebx
  int v8; // eax
  unsigned int *LowerBoundInSortedArray; // rdi
  unsigned __int64 v10; // r8
  unsigned __int64 v11; // rdx
  int v12; // eax
  int v14; // [rsp+50h] [rbp+8h] BYREF

  v14 = a1;
  v4 = *(unsigned int **)(a2 + 8);
  v5 = 0;
  v8 = a1;
  LowerBoundInSortedArray = 0LL;
  if ( !v4 )
    goto LABEL_9;
  v10 = *v4;
  v11 = (unsigned __int64)(v4 + 1);
  if ( (_DWORD)v10 )
  {
    LowerBoundInSortedArray = (unsigned int *)RtlFindLowerBoundInSortedArray(
                                                (__int64)&v14,
                                                v11,
                                                v10,
                                                a4,
                                                (__int64 (__fastcall *)(__int64, unsigned __int64))RtlFcpCompareFeatureIdToFeature);
    v8 = v14;
    if ( LowerBoundInSortedArray == &v4[4 * *v4 + 1] || *LowerBoundInSortedArray != v14 )
      LowerBoundInSortedArray = 0LL;
  }
  else
  {
    LowerBoundInSortedArray = (unsigned int *)RtlpFcLinearSearchInSortedArray(
                                                (__int64)&v14,
                                                v11,
                                                v10,
                                                a4,
                                                (__int64 (__fastcall *)(__int64, __int64))RtlFcpCompareFeatureIdToFeature);
    v8 = v14;
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
    v12 = *(_DWORD *)(a4 + 4);
    if ( (v12 & 0x40) == 0 )
      return (v12 & 0x80u) != 0 ? 279 : -1073741275;
  }
  return v5;
}
