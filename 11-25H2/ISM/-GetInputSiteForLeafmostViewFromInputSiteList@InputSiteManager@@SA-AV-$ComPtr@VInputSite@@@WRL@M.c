/*
 * XREFs of ?GetInputSiteForLeafmostViewFromInputSiteList@InputSiteManager@@SA?AV?$ComPtr@VInputSite@@@WRL@Microsoft@@AEBV?$vector@V?$ComPtr@VInputSite@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@std@@@std@@@Z @ 0x18001AB50
 * Callers:
 *     ?HitTest@DWMInputRouter@@UEAAJPEAU_InputHitTestRequest@@PEAU_InputHitTestResult@@PEAVInputContext@@PEAUIInputBuffer@@PEAPEAUIInputTarget@@@Z @ 0x180018CC0 (-HitTest@DWMInputRouter@@UEAAJPEAU_InputHitTestRequest@@PEAU_InputHitTestResult@@PEAVInputContex.c)
 *     ?GetViewInstanceIdFromInputSiteList@InputSiteManager@@SAIAEBV?$vector@V?$ComPtr@VInputSite@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@std@@@std@@@Z @ 0x18001B1E0 (-GetViewInstanceIdFromInputSiteList@InputSiteManager@@SAIAEBV-$vector@V-$ComPtr@VInputSite@@@WRL.c)
 * Callees:
 *     ?_Throw_bad_optional_access@std@@YAXXZ @ 0x18009B5DC (-_Throw_bad_optional_access@std@@YAXXZ.c)
 *     ?_Throw_bad_variant_access@std@@YAXXZ @ 0x18009B664 (-_Throw_bad_variant_access@std@@YAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801D3010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 *__fastcall InputSiteManager::GetInputSiteForLeafmostViewFromInputSiteList(__int64 *a1, __int64 **a2)
{
  __int64 *v3; // rbx
  __int64 *v4; // rdi
  __int64 v6; // rbp
  __int64 v7; // rbx
  __int64 v8; // rcx
  int v9; // [rsp+68h] [rbp+10h] BYREF
  __int64 v10; // [rsp+70h] [rbp+18h]

  *a1 = 0LL;
  v3 = *a2;
  v4 = a2[1];
  while ( 1 )
  {
    if ( v3 == v4 )
      return a1;
    v6 = *v3;
    if ( *(_BYTE *)(*v3 + 480) )
    {
      if ( !*(_BYTE *)(v6 + 68) )
      {
        v9 = 0;
        if ( *(_BYTE *)(v6 + 56) > 1u )
          std::_Throw_bad_variant_access();
        NtQueryCompositionInputSinkViewId(*(_QWORD *)(v6 + 48), &v9);
        LODWORD(v10) = v9;
        BYTE4(v10) = 1;
        *(_QWORD *)(v6 + 64) = v10;
        if ( !*(_BYTE *)(v6 + 68) )
          std::_Throw_bad_optional_access();
      }
      if ( *(_DWORD *)(v6 + 64) )
        break;
    }
    ++v3;
  }
  v7 = *v3;
  if ( *a1 == v7 )
    return a1;
  if ( v7 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 8LL))(v7);
  v8 = *a1;
  *a1 = v7;
  if ( v8 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  return a1;
}
