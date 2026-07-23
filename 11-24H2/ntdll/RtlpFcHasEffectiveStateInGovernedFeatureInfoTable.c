/*
 * XREFs of RtlpFcHasEffectiveStateInGovernedFeatureInfoTable @ 0x1801700F0
 * Callers:
 *     RtlpFcQueryFeatureConfigurationFromBufferSet @ 0x180170730 (RtlpFcQueryFeatureConfigurationFromBufferSet.c)
 * Callees:
 *     RtlpFcGetFeatureHasSubscriptionsFromBuffer @ 0x180170028 (RtlpFcGetFeatureHasSubscriptionsFromBuffer.c)
 *     RtlFindLowerBoundInSortedArray @ 0x180170370 (RtlFindLowerBoundInSortedArray.c)
 *     RtlpFcLinearSearchInSortedArray @ 0x1801706C8 (RtlpFcLinearSearchInSortedArray.c)
 */

char __fastcall RtlpFcHasEffectiveStateInGovernedFeatureInfoTable(
        int a1,
        unsigned __int16 *a2,
        __int64 a3,
        int a4,
        __int64 a5,
        int *a6)
{
  char v6; // bl
  char *v9; // rsi
  char *LowerBoundInSortedArray; // rax
  int v11; // r11d
  _DWORD *v12; // rdx
  __int64 v13; // rax
  _DWORD *v14; // rdi
  _DWORD *v15; // r14
  unsigned int v16; // ecx
  int *v17; // r8
  unsigned int v18; // eax
  int v19; // eax
  unsigned int v20; // edx
  int v21; // ecx
  unsigned int v22; // eax
  int v23; // eax
  int v25; // [rsp+50h] [rbp+8h] BYREF

  v25 = a1;
  v6 = 0;
  if ( a2 )
  {
    v9 = (char *)a2 + *((_QWORD *)a2 + 1);
    if ( *a2 )
    {
      LowerBoundInSortedArray = (char *)RtlFindLowerBoundInSortedArray(
                                          (unsigned int)&v25,
                                          (_DWORD)v9,
                                          *a2,
                                          a4,
                                          (__int64)RtlpFcCompareFeatureIdToGovernedFeature);
      v11 = v25;
      v12 = LowerBoundInSortedArray;
      if ( LowerBoundInSortedArray == &v9[16 * *a2] || *(_DWORD *)LowerBoundInSortedArray != v25 )
        v12 = 0LL;
    }
    else
    {
      v13 = RtlpFcLinearSearchInSortedArray(
              (unsigned int)&v25,
              (_DWORD)v9,
              0,
              a4,
              (__int64)RtlpFcCompareFeatureIdToGovernedFeature);
      v11 = v25;
      v12 = (_DWORD *)v13;
    }
    if ( v12 )
    {
      v14 = v12;
      v15 = v12;
      v16 = a4 == 1 ? v12[3] : v12[2];
      if ( (v16 & 1) != 0 && *(_DWORD *)&v9[16 * (unsigned __int16)(v16 >> 7)] != *v12 )
      {
        v17 = a6;
        v6 = 1;
        *(_OWORD *)a6 = 0LL;
        *v17 = v11;
        if ( a4 == 1 )
          v18 = v12[3];
        else
          v18 = v12[2];
        v19 = v17[1] ^ (v17[1] ^ (16 * (v18 >> 1))) & 0x30;
        v17[1] = v19;
        if ( a4 == 1 )
          v20 = v12[3];
        else
          v20 = v12[2];
        v21 = v19 ^ ((unsigned __int8)(v20 >> 3) ^ (unsigned __int8)v19) & 0xF;
        v17[1] = v21;
        if ( a4 == 1 )
          v22 = v14[3];
        else
          v22 = v15[2];
        v23 = v21 ^ ((unsigned __int8)v21 ^ (unsigned __int8)((unsigned __int8)(v22 >> 23) << 6)) & 0x40;
        v17[1] = v23;
        if ( (v23 & 0x30) != 0x10 )
          RtlpFcGetFeatureHasSubscriptionsFromBuffer(v11, a5, (__int64)v17, 12);
      }
    }
  }
  return v6;
}
