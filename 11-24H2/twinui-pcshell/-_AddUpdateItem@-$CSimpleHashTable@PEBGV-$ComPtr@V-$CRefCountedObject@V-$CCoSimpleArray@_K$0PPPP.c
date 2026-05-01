/*
 * XREFs of ?_AddUpdateItem@?$CSimpleHashTable@PEBGV?$ComPtr@V?$CRefCountedObject@V?$CCoSimpleArray@_K$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@_K@@@@@@@WRL@Microsoft@@VCStringHashPolicy@@VCStringCompare@@VCDefaultResizePolicy@@VCDefaultRehashPolicy@@@@AEAAJHAEBQEBGAEBV?$ComPtr@V?$CRefCountedObject@V?$CCoSimpleArray@_K$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@_K@@@@@@@WRL@Microsoft@@PEAV234@@Z @ 0x18016A8D0
 * Callers:
 *     ?_AddApplicationData@CApplicationManager@@AEAAJPEBGAEB_KAEAV?$ComPtr@V?$CRefCountedObject@UPER_APPLICATION_DATA@@@@@WRL@Microsoft@@@Z @ 0x18016ABDC (-_AddApplicationData@CApplicationManager@@AEAAJPEBGAEB_KAEAV-$ComPtr@V-$CRefCountedObject@UPER_A.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180016C0C (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?ULongLongMult@@YAJ_K0PEA_K@Z @ 0x180148D24 (-ULongLongMult@@YAJ_K0PEA_K@Z.c)
 *     ?s_LookupEntry@?$CSimpleHashTable@PEBGV?$ComPtr@V?$CRefCountedObject@V?$CCoSimpleArray@_K$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@_K@@@@@@@WRL@Microsoft@@VCStringHashPolicy@@VCStringCompare@@VCDefaultResizePolicy@@VCDefaultRehashPolicy@@@@CAAEAVHashBucket@1@PEAV21@IAEBQEBG@Z @ 0x18016AEA4 (-s_LookupEntry@-$CSimpleHashTable@PEBGV-$ComPtr@V-$CRefCountedObject@V-$CCoSimpleArray@_K$0PPPPP.c)
 *     ?Alloc@CTLocalAllocPolicy@@SAJPEAXK_KPEAPEAX@Z @ 0x180216570 (-Alloc@CTLocalAllocPolicy@@SAJPEAXK_KPEAPEAX@Z.c)
 *     ?_RehashTable@?$CSimpleHashTable@PEBGV?$ComPtr@V?$CRefCountedObject@V?$CCoSimpleArray@_K$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@_K@@@@@@@WRL@Microsoft@@VCStringHashPolicy@@VCStringCompare@@VCDefaultResizePolicy@@VCDefaultRehashPolicy@@@@AEAAJI@Z @ 0x1802B7260 (-_RehashTable@-$CSimpleHashTable@PEBGV-$ComPtr@V-$CRefCountedObject@V-$CCoSimpleArray@_K$0PPPPPP.c)
 */

int __fastcall CSimpleHashTable<unsigned short const *,Microsoft::WRL::ComPtr<CRefCountedObject<CCoSimpleArray<unsigned __int64,4294967294,CSimpleArrayStandardCompareHelper<unsigned __int64>>>>,CStringHashPolicy,CStringCompare,CDefaultResizePolicy,CDefaultRehashPolicy>::_AddUpdateItem(
        __int64 a1,
        __int64 a2,
        _QWORD *a3,
        _QWORD *a4)
{
  _QWORD *v4; // r10
  unsigned __int64 v8; // rcx
  int result; // eax
  unsigned int v10; // edx
  void *v11; // rcx
  void **v12; // r10
  __int64 v13; // rdx
  __int64 v14; // rax
  _DWORD *v15; // rdi
  unsigned __int64 v16; // [rsp+30h] [rbp+8h] BYREF

  v4 = (_QWORD *)(a1 + 16);
  if ( !*(_QWORD *)(a1 + 16) )
  {
    v8 = *(unsigned int *)(a1 + 4);
    *v4 = 0LL;
    v16 = 0LL;
    result = ULongLongMult(v8, 0x18uLL, &v16);
    if ( result < 0 )
      return result;
    result = CTLocalAllocPolicy::Alloc(v11, v10, v16, v12);
    if ( result < 0 )
      return result;
  }
  v13 = *(unsigned int *)(a1 + 4);
  if ( *(_DWORD *)a1 > *(_DWORD *)(a1 + 4) >> 1 )
  {
    v13 = (unsigned int)(2 * v13 - 1);
    goto LABEL_7;
  }
  if ( *(_DWORD *)(a1 + 8) > (unsigned int)v13 >> 2 )
  {
LABEL_7:
    result = CSimpleHashTable<unsigned short const *,Microsoft::WRL::ComPtr<CRefCountedObject<CCoSimpleArray<unsigned __int64,4294967294,CSimpleArrayStandardCompareHelper<unsigned __int64>>>>,CStringHashPolicy,CStringCompare,CDefaultResizePolicy,CDefaultRehashPolicy>::_RehashTable(
               a1,
               v13);
    if ( result < 0 )
      return result;
  }
  v14 = CSimpleHashTable<unsigned short const *,Microsoft::WRL::ComPtr<CRefCountedObject<CCoSimpleArray<unsigned __int64,4294967294,CSimpleArrayStandardCompareHelper<unsigned __int64>>>>,CStringHashPolicy,CStringCompare,CDefaultResizePolicy,CDefaultRehashPolicy>::s_LookupEntry(
          *(_QWORD *)(a1 + 16),
          *(unsigned int *)(a1 + 4),
          a3);
  v15 = (_DWORD *)v14;
  if ( *(_DWORD *)v14 == 1 )
    return -2147024809;
  if ( *(_DWORD *)v14 == 2 )
    --*(_DWORD *)(a1 + 8);
  *(_QWORD *)(v14 + 8) = *a3;
  *(_QWORD *)(v14 + 16) = *a4;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)(v14 + 16));
  *v15 = 1;
  ++*(_DWORD *)a1;
  return 0;
}
