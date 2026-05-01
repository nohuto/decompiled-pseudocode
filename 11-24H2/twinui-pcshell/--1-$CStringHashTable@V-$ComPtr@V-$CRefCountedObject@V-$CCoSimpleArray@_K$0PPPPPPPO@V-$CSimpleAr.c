/*
 * XREFs of ??1?$CStringHashTable@V?$ComPtr@V?$CRefCountedObject@V?$CCoSimpleArray@_K$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@_K@@@@@@@WRL@Microsoft@@VCStringHashPolicy@@VCStringCompare@@@@QEAA@XZ @ 0x1802E2FE8
 * Callers:
 *     ??1CApplicationManager@@MEAA@XZ @ 0x1802E31E4 (--1CApplicationManager@@MEAA@XZ.c)
 * Callees:
 *     ??$s_EnumAdaptor@V_lambda_43584e7377c77bc592a90ea9fe565013_@@@?$CSimpleHashTable@PEBGV?$ComPtr@V?$CRefCountedObject@V?$CCoSimpleArray@_K$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@_K@@@@@@@WRL@Microsoft@@VCStringHashPolicy@@VCStringCompare@@VCDefaultResizePolicy@@VCDefaultRehashPolicy@@@@CAHPEBV_lambda_43584e7377c77bc592a90ea9fe565013_@@AEBQEBGAEAV?$ComPtr@V?$CRefCountedObject@V?$CCoSimpleArray@_K$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@_K@@@@@@@WRL@Microsoft@@@Z @ 0x1802E2DB4 (--$s_EnumAdaptor@V_lambda_43584e7377c77bc592a90ea9fe565013_@@@-$CSimpleHashTable@PEBGV-$ComPtr@V.c)
 *     ?RemoveAll@?$CSimpleHashTable@PEBGV?$ComPtr@V?$CRefCountedObject@V?$CCoSimpleArray@_K$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@_K@@@@@@@WRL@Microsoft@@VCStringHashPolicy@@VCStringCompare@@VCDefaultResizePolicy@@VCDefaultRehashPolicy@@@@QEAAXXZ @ 0x1802EA760 (-RemoveAll@-$CSimpleHashTable@PEBGV-$ComPtr@V-$CRefCountedObject@V-$CCoSimpleArray@_K$0PPPPPPPO@.c)
 */

__int64 __fastcall CStringHashTable<Microsoft::WRL::ComPtr<CRefCountedObject<CCoSimpleArray<unsigned __int64,4294967294,CSimpleArrayStandardCompareHelper<unsigned __int64>>>>,CStringHashPolicy,CStringCompare>::~CStringHashTable<Microsoft::WRL::ComPtr<CRefCountedObject<CCoSimpleArray<unsigned __int64,4294967294,CSimpleArrayStandardCompareHelper<unsigned __int64>>>>,CStringHashPolicy,CStringCompare>(
        __int64 a1)
{
  __int64 v2; // rdx
  __int64 v3; // rdi
  __int64 v4; // rax
  __int64 v5; // rdx
  char v7; // [rsp+30h] [rbp+8h] BYREF
  char *v8; // [rsp+38h] [rbp+10h] BYREF

  v7 = 0;
  v8 = &v7;
  v2 = 1LL;
  if ( *(_QWORD *)(a1 + 16) )
  {
    v3 = 0LL;
    do
    {
      if ( (unsigned int)v3 >= *(_DWORD *)(a1 + 4) )
        break;
      v4 = *(_QWORD *)(a1 + 16);
      if ( *(_DWORD *)(v4 + 24 * v3) == 1 )
        v2 = (unsigned int)CSimpleHashTable<unsigned short const *,Microsoft::WRL::ComPtr<CRefCountedObject<CCoSimpleArray<unsigned __int64,4294967294,CSimpleArrayStandardCompareHelper<unsigned __int64>>>>,CStringHashPolicy,CStringCompare,CDefaultResizePolicy,CDefaultRehashPolicy>::s_EnumAdaptor<_lambda_43584e7377c77bc592a90ea9fe565013_>(
                             (__int64)&v8,
                             (LPVOID *)(v4 + 8 + 24 * v3));
      v3 = (unsigned int)(v3 + 1);
    }
    while ( (_DWORD)v2 );
  }
  CSimpleHashTable<unsigned short const *,Microsoft::WRL::ComPtr<CRefCountedObject<CCoSimpleArray<unsigned __int64,4294967294,CSimpleArrayStandardCompareHelper<unsigned __int64>>>>,CStringHashPolicy,CStringCompare,CDefaultResizePolicy,CDefaultRehashPolicy>::RemoveAll(
    a1,
    v2);
  return CSimpleHashTable<unsigned short const *,Microsoft::WRL::ComPtr<CRefCountedObject<CCoSimpleArray<unsigned __int64,4294967294,CSimpleArrayStandardCompareHelper<unsigned __int64>>>>,CStringHashPolicy,CStringCompare,CDefaultResizePolicy,CDefaultRehashPolicy>::RemoveAll(
           a1,
           v5);
}
