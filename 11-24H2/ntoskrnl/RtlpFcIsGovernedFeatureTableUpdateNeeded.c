/*
 * XREFs of RtlpFcIsGovernedFeatureTableUpdateNeeded @ 0x14078D0BC
 * Callers:
 *     RtlpFcUpdateGovernedFeaturesEffectiveStates @ 0x140781D08 (RtlpFcUpdateGovernedFeaturesEffectiveStates.c)
 * Callees:
 *     RtlpFcCompareFeatureIdToGovernedFeature @ 0x1406F31A0 (RtlpFcCompareFeatureIdToGovernedFeature.c)
 *     RtlFindLowerBoundInSortedArray @ 0x14099A690 (RtlFindLowerBoundInSortedArray.c)
 */

char __fastcall RtlpFcIsGovernedFeatureTableUpdateNeeded(__int64 a1, __int64 a2, __int64 a3, unsigned __int64 a4)
{
  unsigned __int64 v4; // rdi
  unsigned __int64 v5; // rsi
  __int64 v8; // r13
  int v9; // ebp
  _DWORD *v10; // r12
  int v11; // eax
  __int64 v12; // rax
  __int64 LowerBoundInSortedArray; // rax
  __int64 v15; // [rsp+78h] [rbp+10h] BYREF
  __int64 v16; // [rsp+80h] [rbp+18h]

  v16 = a3;
  v15 = a2;
  v4 = 0LL;
  v5 = 0LL;
  if ( a1 )
  {
    v8 = a1 + *(_QWORD *)(a1 + 8);
    while ( v4 < a4 )
    {
      v9 = (unsigned __int16)*(_DWORD *)a1;
      if ( v5 >= (unsigned __int16)*(_DWORD *)a1 )
        break;
      v10 = (_DWORD *)(a3 + 32 * v4);
      v11 = RtlpFcCompareFeatureIdToGovernedFeature(v10, (_DWORD *)(v8 + 16 * v5));
      if ( !v11 )
        return 1;
      if ( v11 <= 0 )
      {
        LODWORD(v15) = *(_DWORD *)(v8 + 16 * v5);
        LowerBoundInSortedArray = RtlFindLowerBoundInSortedArray(
                                    (unsigned int)&v15,
                                    (_DWORD)v10,
                                    (int)a4 - (int)v4,
                                    32,
                                    (__int64)RtlpFcCompareFeatureIdToGovernedFeature);
        a3 = v16;
        v4 = (LowerBoundInSortedArray - v16) >> 5;
      }
      else
      {
        LODWORD(v15) = *v10;
        v12 = RtlFindLowerBoundInSortedArray(
                (unsigned int)&v15,
                (int)v8 + 16 * (int)v5,
                v9 - (int)v5,
                16,
                (__int64)RtlpFcCompareFeatureIdToGovernedFeature);
        a3 = v16;
        v5 = (v12 - v8) >> 4;
      }
    }
  }
  return 0;
}
