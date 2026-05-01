/*
 * XREFs of ??$RemoveIfCallback@URemoveIfFreeString@?1??DeleteItem@?$CStringHashTable@V?$ComPtr@V?$CRefCountedObject@V?$CCoSimpleArray@_K$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@_K@@@@@@@WRL@Microsoft@@VCStringHashPolicy@@VCStringCompare@@@@QEAAJAEBQEBG@Z@@?$CSimpleHashTable@PEBGV?$ComPtr@V?$CRefCountedObject@V?$CCoSimpleArray@_K$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@_K@@@@@@@WRL@Microsoft@@VCStringHashPolicy@@VCStringCompare@@VCDefaultResizePolicy@@VCDefaultRehashPolicy@@@@QEAAXAEAURemoveIfFreeString@?1??DeleteItem@?$CStringHashTable@V?$ComPtr@V?$CRefCountedObject@V?$CCoSimpleArray@_K$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@_K@@@@@@@WRL@Microsoft@@VCStringHashPolicy@@VCStringCompare@@@@QEAAJAEBQEBG@Z@@Z @ 0x18016B044
 * Callers:
 *     ?_DeleteApplicationData@CApplicationManager@@AEAAJPEBGAEB_K@Z @ 0x18016A9B8 (-_DeleteApplicationData@CApplicationManager@@AEAAJPEBGAEB_K@Z.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
int __fastcall ___RemoveIfCallback_URemoveIfFreeString__1__DeleteItem___CStringHashTable_V__ComPtr_V__CRefCountedObject_V__CCoSimpleArray__K_0PPPPPPPO_V__CSimpleArrayStandardCompareHelper__K_______WRL_Microsoft__VCStringHashPolicy__VCStringCompare____QEAAJAEBQEBG_Z____CSimpleHashTable_PEBGV__ComPtr_V__CRefCountedObject_V__CCoSimpleArray__K_0PPPPPPPO_V__CSimpleArrayStandardCompareHelper__K_______WRL_Microsoft__VCStringHashPolicy__VCStringCompare__VCDefaultResizePolicy__VCDefaultRehashPolicy____QEAAXAEAURemoveIfFreeString__1__DeleteItem___CStringHashTable_V__ComPtr_V__CRefCountedObject_V__CCoSimpleArray__K_0PPPPPPPO_V__CSimpleArrayStandardCompareHelper__K_______WRL_Microsoft__VCStringHashPolicy__VCStringCompare____QEAAJAEBQEBG_Z__Z(
        __int64 a1,
        __int64 a2)
{
  _UNKNOWN **v2; // rax
  __int64 i; // rsi
  __int64 v6; // rbp
  void *v7; // rcx
  _UNKNOWN *retaddr; // [rsp+38h] [rbp+0h] BYREF

  v2 = &retaddr;
  if ( *(_QWORD *)(a1 + 16) )
  {
    for ( i = 0LL; (unsigned int)i < *(_DWORD *)(a1 + 4); i = (unsigned int)(i + 1) )
    {
      v6 = *(_QWORD *)(a1 + 16);
      if ( *(_DWORD *)(v6 + 24 * i) == 1 )
      {
        LODWORD(v2) = CompareStringOrdinal(*(LPCWCH *)(v6 + 24 * i + 8), -1, *(LPCWCH *)(a2 + 8), -1, 0);
        if ( (_DWORD)v2 == 2 )
        {
          CoTaskMemFree(*(LPVOID *)(v6 + 24 * i + 8));
          *(_BYTE *)a2 = 1;
          v2 = *(_UNKNOWN ***)(a1 + 16);
          if ( LODWORD(v2[3 * i]) == 1 )
          {
            LODWORD(v2[3 * i]) = 2;
            v7 = v2[3 * i + 2];
            if ( v7 )
            {
              v2[3 * i + 2] = 0LL;
              LODWORD(v2) = (*(__int64 (__fastcall **)(void *))(*(_QWORD *)v7 + 16LL))(v7);
            }
            ++*(_DWORD *)(a1 + 8);
            --*(_DWORD *)a1;
          }
        }
      }
    }
  }
  return (int)v2;
}
