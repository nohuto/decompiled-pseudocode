/*
 * XREFs of ??$find@X@?$_Hash@V?$_Umap_traits@_K_KV?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@std@@V?$allocator@U?$pair@$$CB_K_K@std@@@2@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_K_K@std@@@std@@@std@@@1@AEB_K@Z @ 0x18005A820
 * Callers:
 *     ?CursorManagerCursorIdExists@SystemCursorService2@@QEAA_N_K@Z @ 0x1800FA028 (-CursorManagerCursorIdExists@SystemCursorService2@@QEAA_N_K@Z.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall std::_Hash<std::_Umap_traits<unsigned __int64,unsigned __int64,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,unsigned __int64>>,0>>::find<void>(
        _QWORD *a1,
        _QWORD *a2,
        _QWORD *a3)
{
  __int64 v4; // r9
  unsigned __int64 i; // r10
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v8; // r9
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v11; // r9

  v4 = 0xCBF29CE484222325uLL;
  for ( i = 0LL; i < 8; ++i )
  {
    v6 = *((unsigned __int8 *)a3 + i);
    v4 = 0x100000001B3LL * (v6 ^ v4);
  }
  v7 = v4 & a1[6];
  v8 = a1[3];
  v9 = 2 * v7;
  v10 = *(_QWORD *)(v8 + 8 * v9 + 8);
  if ( v10 == a1[1] )
  {
LABEL_8:
    v10 = 0LL;
  }
  else
  {
    v11 = *(_QWORD *)(v8 + 8 * v9);
    while ( *a3 != *(_QWORD *)(v10 + 16) )
    {
      if ( v10 == v11 )
        goto LABEL_8;
      v10 = *(_QWORD *)(v10 + 8);
    }
  }
  if ( !v10 )
    v10 = a1[1];
  *a2 = v10;
  return a2;
}
