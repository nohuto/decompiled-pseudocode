/*
 * XREFs of ??1?$CSimpleArray@V?$CComHeapPtr@UtWAVEFORMATEX@@@ATL@@V?$CSimpleArrayEqualHelper@V?$CComHeapPtr@UtWAVEFORMATEX@@@ATL@@@2@@ATL@@QEAA@XZ @ 0x180073928
 * Callers:
 *     _CEndpointCharacteristics::ForEachCandidateFormatForMode__lambda_5789e60fd85b99cd3c89d9f341e01d71____::_1_::dtor$0 @ 0x18016AF8E (_CEndpointCharacteristics--ForEachCandidateFormatForMode__lambda_5789e60fd85b99cd3c_ea_18016AF8E.c)
 * Callees:
 *     <none>
 */

void __fastcall ATL::CSimpleArray<ATL::CComHeapPtr<tWAVEFORMATEX>,ATL::CSimpleArrayEqualHelper<ATL::CComHeapPtr<tWAVEFORMATEX>>>::~CSimpleArray<ATL::CComHeapPtr<tWAVEFORMATEX>,ATL::CSimpleArrayEqualHelper<ATL::CComHeapPtr<tWAVEFORMATEX>>>(
        char **a1)
{
  int *v1; // rsi
  int v3; // ebp
  __int64 v4; // r14
  char *v5; // rbx

  v1 = (int *)(a1 + 1);
  if ( *a1 )
  {
    v3 = 0;
    if ( *v1 > 0 )
    {
      v4 = 0LL;
      do
      {
        v5 = *a1;
        CoTaskMemFree(*(LPVOID *)&(*a1)[v4]);
        *(_QWORD *)&v5[v4] = 0LL;
        ++v3;
        v4 += 8LL;
      }
      while ( v3 < *v1 );
    }
    free(*a1);
    *a1 = 0LL;
  }
  *v1 = 0;
  *((_DWORD *)a1 + 3) = 0;
}
