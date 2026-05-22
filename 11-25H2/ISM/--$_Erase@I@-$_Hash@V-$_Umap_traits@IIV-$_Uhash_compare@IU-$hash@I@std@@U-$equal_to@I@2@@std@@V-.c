/*
 * XREFs of ??$_Erase@I@?$_Hash@V?$_Umap_traits@IIV?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@U?$pair@$$CBII@std@@@2@$0A@@std@@@std@@AEAA_KAEBI@Z @ 0x180027044
 * Callers:
 *     ?OnWindowRemoved@ViewHierarchyWithWindowManager@@AEAAJUWindowWatcher@WindowManagement@ApplicationModel@Internal@Windows@winrt@@UWindowChangedEventArgs@34567@@Z @ 0x180026750 (-OnWindowRemoved@ViewHierarchyWithWindowManager@@AEAAJUWindowWatcher@WindowManagement@Applicatio.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18001AB00 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

__int64 __fastcall std::_Hash<std::_Umap_traits<unsigned int,unsigned int,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,unsigned int>>,0>>::_Erase<unsigned int>(
        _QWORD *a1,
        _DWORD *a2)
{
  __int64 v4; // r8
  unsigned __int64 i; // r9
  __int64 v6; // rax
  __int64 *v7; // rdx
  __int64 v8; // rax
  __int64 v9; // r8
  __int64 v10; // rax
  __int64 *v11; // rcx
  __int64 v13; // r8

  v4 = 0xCBF29CE484222325uLL;
  for ( i = 0LL; i < 4; ++i )
  {
    v6 = *((unsigned __int8 *)a2 + i);
    v4 = 0x100000001B3LL * (v6 ^ v4);
  }
  v7 = (__int64 *)a1[1];
  v8 = v4 & a1[6];
  v9 = a1[3];
  v10 = 2 * v8;
  v11 = *(__int64 **)(v9 + 8 * v10 + 8);
  if ( v11 == v7 )
  {
LABEL_4:
    v11 = 0LL;
  }
  else
  {
    while ( *a2 != *((_DWORD *)v11 + 4) )
    {
      if ( v11 == *(__int64 **)(v9 + 8 * v10) )
        goto LABEL_4;
      v11 = (__int64 *)v11[1];
    }
  }
  if ( !v11 )
    return 0LL;
  if ( *(__int64 **)(v9 + 8 * v10 + 8) == v11 )
  {
    if ( *(__int64 **)(v9 + 8 * v10) == v11 )
      *(_QWORD *)(v9 + 8 * v10) = v7;
    else
      v7 = (__int64 *)v11[1];
    *(_QWORD *)(v9 + 8 * v10 + 8) = v7;
  }
  else if ( *(__int64 **)(v9 + 8 * v10) == v11 )
  {
    *(_QWORD *)(v9 + 8 * v10) = *v11;
  }
  v13 = *v11;
  --a1[2];
  *(_QWORD *)v11[1] = v13;
  *(_QWORD *)(v13 + 8) = v11[1];
  std::_Deallocate<16,0>((char *)v11, (const struct std::nothrow_t *)0x18);
  return 1LL;
}
