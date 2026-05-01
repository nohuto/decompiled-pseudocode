/*
 * XREFs of ?_RehashTable@?$CSimpleHashTable@PEAUIApplicationView@@PEBGV?$CDefaultHashPolicy@PEAUIApplicationView@@@@V?$CDefaultKeyCompare@PEAUIApplicationView@@@@VCDefaultResizePolicy@@VCDefaultRehashPolicy@@@@AEAAJI@Z @ 0x180534DB8
 * Callers:
 *     ?_AddUpdateItem@?$CSimpleHashTable@PEAUIApplicationView@@PEBGV?$CDefaultHashPolicy@PEAUIApplicationView@@@@V?$CDefaultKeyCompare@PEAUIApplicationView@@@@VCDefaultResizePolicy@@VCDefaultRehashPolicy@@@@AEAAJHAEBQEAUIApplicationView@@AEBQEBGPEAPEBG@Z @ 0x180534CD0 (-_AddUpdateItem@-$CSimpleHashTable@PEAUIApplicationView@@PEBGV-$CDefaultHashPolicy@PEAUIApplicat.c)
 * Callees:
 *     ?ULongLongMult@@YAJ_K0PEA_K@Z @ 0x180148D24 (-ULongLongMult@@YAJ_K0PEA_K@Z.c)
 *     ?Alloc@CTLocalAllocPolicy@@SAJPEAXK_KPEAPEAX@Z @ 0x180216570 (-Alloc@CTLocalAllocPolicy@@SAJPEAXK_KPEAPEAX@Z.c)
 *     ?s_LookupEntry@?$CSimpleHashTable@PEAUIApplicationView@@PEBGV?$CDefaultHashPolicy@PEAUIApplicationView@@@@V?$CDefaultKeyCompare@PEAUIApplicationView@@@@VCDefaultResizePolicy@@VCDefaultRehashPolicy@@@@CAAEAVHashBucket@1@PEAV21@IAEBQEAUIApplicationView@@@Z @ 0x180534E90 (-s_LookupEntry@-$CSimpleHashTable@PEAUIApplicationView@@PEBGV-$CDefaultHashPolicy@PEAUIApplicati.c)
 */

__int64 __fastcall CSimpleHashTable<IApplicationView *,unsigned short const *,CDefaultHashPolicy<IApplicationView *>,CDefaultKeyCompare<IApplicationView *>,CDefaultResizePolicy,CDefaultRehashPolicy>::_RehashTable(
        __int64 a1,
        unsigned int a2)
{
  void *v2; // rbp
  __int64 v5; // rdx
  void *v6; // rcx
  int v7; // edi
  int v8; // eax
  __int64 i; // rsi
  __int64 v10; // r12
  __int64 v11; // rax
  unsigned __int64 v13; // [rsp+60h] [rbp+18h] BYREF
  void *v14; // [rsp+68h] [rbp+20h] BYREF

  v2 = 0LL;
  v13 = 0LL;
  v14 = 0LL;
  v7 = ULongLongMult(a2, 0x18uLL, &v13);
  if ( v7 >= 0 )
  {
    v8 = CTLocalAllocPolicy::Alloc(v6, v5, v13, &v14);
    v2 = v14;
    v7 = v8;
  }
  if ( v7 >= 0 )
  {
    for ( i = 0LL; (unsigned int)i < *(_DWORD *)(a1 + 4); i = (unsigned int)(i + 1) )
    {
      v10 = *(_QWORD *)(a1 + 16);
      if ( *(_DWORD *)(v10 + 24 * i) == 1 )
      {
        v11 = CSimpleHashTable<IApplicationView *,unsigned short const *,CDefaultHashPolicy<IApplicationView *>,CDefaultKeyCompare<IApplicationView *>,CDefaultResizePolicy,CDefaultRehashPolicy>::s_LookupEntry(
                v2,
                a2,
                v10 + 8 + 24 * i);
        *(_OWORD *)v11 = *(_OWORD *)(v10 + 24 * i);
        *(_QWORD *)(v11 + 16) = *(_QWORD *)(v10 + 24 * i + 16);
      }
    }
    LocalFree(*(HLOCAL *)(a1 + 16));
    *(_DWORD *)(a1 + 8) = 0;
    *(_QWORD *)(a1 + 16) = v2;
    *(_DWORD *)(a1 + 4) = a2;
  }
  return (unsigned int)v7;
}
