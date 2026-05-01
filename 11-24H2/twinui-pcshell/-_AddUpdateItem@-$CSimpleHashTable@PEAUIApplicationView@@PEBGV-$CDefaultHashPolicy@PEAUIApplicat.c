/*
 * XREFs of ?_AddUpdateItem@?$CSimpleHashTable@PEAUIApplicationView@@PEBGV?$CDefaultHashPolicy@PEAUIApplicationView@@@@V?$CDefaultKeyCompare@PEAUIApplicationView@@@@VCDefaultResizePolicy@@VCDefaultRehashPolicy@@@@AEAAJHAEBQEAUIApplicationView@@AEBQEBGPEAPEBG@Z @ 0x180534CD0
 * Callers:
 *     TabletModeDragPattern::GetWindowTitleWithMap @ 0x180534B60 (TabletModeDragPattern--GetWindowTitleWithMap.c)
 * Callees:
 *     ?ULongLongMult@@YAJ_K0PEA_K@Z @ 0x180148D24 (-ULongLongMult@@YAJ_K0PEA_K@Z.c)
 *     ?Alloc@CTLocalAllocPolicy@@SAJPEAXK_KPEAPEAX@Z @ 0x180216570 (-Alloc@CTLocalAllocPolicy@@SAJPEAXK_KPEAPEAX@Z.c)
 *     ?_RehashTable@?$CSimpleHashTable@PEAUIApplicationView@@PEBGV?$CDefaultHashPolicy@PEAUIApplicationView@@@@V?$CDefaultKeyCompare@PEAUIApplicationView@@@@VCDefaultResizePolicy@@VCDefaultRehashPolicy@@@@AEAAJI@Z @ 0x180534DB8 (-_RehashTable@-$CSimpleHashTable@PEAUIApplicationView@@PEBGV-$CDefaultHashPolicy@PEAUIApplicatio.c)
 *     ?s_LookupEntry@?$CSimpleHashTable@PEAUIApplicationView@@PEBGV?$CDefaultHashPolicy@PEAUIApplicationView@@@@V?$CDefaultKeyCompare@PEAUIApplicationView@@@@VCDefaultResizePolicy@@VCDefaultRehashPolicy@@@@CAAEAVHashBucket@1@PEAV21@IAEBQEAUIApplicationView@@@Z @ 0x180534E90 (-s_LookupEntry@-$CSimpleHashTable@PEAUIApplicationView@@PEBGV-$CDefaultHashPolicy@PEAUIApplicati.c)
 */

__int64 __fastcall CSimpleHashTable<IApplicationView *,unsigned short const *,CDefaultHashPolicy<IApplicationView *>,CDefaultKeyCompare<IApplicationView *>,CDefaultResizePolicy,CDefaultRehashPolicy>::_AddUpdateItem(
        __int64 a1,
        __int64 a2,
        _QWORD *a3,
        _QWORD *a4)
{
  _QWORD *v4; // r10
  unsigned __int64 v8; // rcx
  int v9; // eax
  __int64 v10; // rdx
  void **v11; // r10
  int v12; // ecx
  __int64 v13; // rdx
  __int64 v14; // rax
  unsigned __int64 v16; // [rsp+30h] [rbp+8h] BYREF

  v4 = (_QWORD *)(a1 + 16);
  if ( *(_QWORD *)(a1 + 16) )
    goto LABEL_5;
  v8 = *(unsigned int *)(a1 + 4);
  *v4 = 0LL;
  v16 = 0LL;
  v9 = ULongLongMult(v8, 0x18uLL, &v16);
  v12 = v9;
  if ( v9 >= 0 )
    v12 = CTLocalAllocPolicy::Alloc((void *)(unsigned int)v9, v10, v16, v11);
  if ( v12 >= 0 )
  {
LABEL_5:
    v13 = *(unsigned int *)(a1 + 4);
    if ( *(_DWORD *)a1 <= *(_DWORD *)(a1 + 4) >> 1 )
    {
      if ( *(_DWORD *)(a1 + 8) <= (unsigned int)v13 >> 2 )
      {
LABEL_9:
        v14 = CSimpleHashTable<IApplicationView *,unsigned short const *,CDefaultHashPolicy<IApplicationView *>,CDefaultKeyCompare<IApplicationView *>,CDefaultResizePolicy,CDefaultRehashPolicy>::s_LookupEntry(
                *(_QWORD *)(a1 + 16),
                *(unsigned int *)(a1 + 4),
                a3);
        if ( *(_DWORD *)v14 == 1 )
        {
          *(_QWORD *)(v14 + 16) = *a4;
        }
        else
        {
          if ( *(_DWORD *)v14 == 2 )
            --*(_DWORD *)(a1 + 8);
          *(_QWORD *)(v14 + 8) = *a3;
          *(_QWORD *)(v14 + 16) = *a4;
          *(_DWORD *)v14 = 1;
          ++*(_DWORD *)a1;
        }
        return 0;
      }
    }
    else
    {
      v13 = (unsigned int)(2 * v13 - 1);
    }
    v12 = CSimpleHashTable<IApplicationView *,unsigned short const *,CDefaultHashPolicy<IApplicationView *>,CDefaultKeyCompare<IApplicationView *>,CDefaultResizePolicy,CDefaultRehashPolicy>::_RehashTable(
            a1,
            v13);
    if ( v12 < 0 )
      return (unsigned int)v12;
    goto LABEL_9;
  }
  return (unsigned int)v12;
}
