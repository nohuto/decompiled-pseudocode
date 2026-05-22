/*
 * XREFs of ?_Unchecked_erase@?$_Hash@V?$_Umap_traits@_K_KV?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@std@@V?$allocator@U?$pair@$$CB_K_K@std@@@2@$0A@@std@@@std@@AEAAPEAU?$_List_node@U?$pair@$$CB_K_K@std@@PEAX@2@PEAU32@@Z @ 0x18004FD70
 * Callers:
 *     ?InputSinkRemoved@InputSinkDataCache@@QEAAX_K@Z @ 0x18004FC60 (-InputSinkRemoved@InputSinkDataCache@@QEAAX_K@Z.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18001AB00 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

__int64 __fastcall std::_Hash<std::_Umap_traits<unsigned __int64,unsigned __int64,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,unsigned __int64>>,0>>::_Unchecked_erase(
        _QWORD *a1,
        __int64 *a2)
{
  __int64 v4; // rdx
  unsigned __int64 i; // rcx
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rbx

  v4 = 0xCBF29CE484222325uLL;
  for ( i = 0LL; i < 8; ++i )
  {
    v6 = *((unsigned __int8 *)a2 + i + 16);
    v4 = 0x100000001B3LL * (v6 ^ v4);
  }
  v7 = v4 & a1[6];
  v8 = a1[3];
  v9 = 2 * v7;
  if ( *(__int64 **)(v8 + 8 * v9 + 8) == a2 )
  {
    if ( *(__int64 **)(v8 + 8 * v9) == a2 )
    {
      v10 = a1[1];
      *(_QWORD *)(v8 + 8 * v9) = v10;
    }
    else
    {
      v10 = a2[1];
    }
    *(_QWORD *)(v8 + 8 * v9 + 8) = v10;
  }
  else if ( *(__int64 **)(v8 + 8 * v9) == a2 )
  {
    *(_QWORD *)(v8 + 8 * v9) = *a2;
  }
  v11 = *a2;
  --a1[2];
  *(_QWORD *)a2[1] = v11;
  *(_QWORD *)(v11 + 8) = a2[1];
  std::_Deallocate<16,0>((char *)a2, (const struct std::nothrow_t *)0x20);
  return v11;
}
