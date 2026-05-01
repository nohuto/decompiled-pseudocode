/*
 * XREFs of ??$_Erase@PEAUHWND__@@@?$_Hash@V?$_Umap_traits@PEAUHWND__@@PEAUHWINEVENTHOOK__@@V?$_Uhash_compare@PEAUHWND__@@U?$hash@PEAUHWND__@@@std@@U?$equal_to@PEAUHWND__@@@3@@std@@V?$allocator@U?$pair@QEAUHWND__@@PEAUHWINEVENTHOOK__@@@std@@@4@$0A@@std@@@std@@AEAA_KAEBQEAUHWND__@@@Z @ 0x18065E044
 * Callers:
 *     ?CheckAndRaiseEvent@WindowsTracker@implementation@Shell@Internal@Windows@winrt@@AEAAXPEAUHWND__@@@Z @ 0x18065E9DC (-CheckAndRaiseEvent@WindowsTracker@implementation@Shell@Internal@Windows@winrt@@AEAAXPEAUHWND__@.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18004860C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z @ 0x18010FC00 (-_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z.c)
 *     ??$_Find_last@_K@?$_Hash@V?$_Umap_traits@_KV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@2@V?$allocator@U?$pair@$$CB_KV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@@2@$0A@@std@@@std@@IEBA?AU?$_Hash_find_last_result@PEAU?$_List_node@U?$pair@$$CB_KV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@PEAX@std@@@1@AEB_K_K@Z @ 0x18010FE40 (--$_Find_last@_K@-$_Hash@V-$_Umap_traits@_KV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G.c)
 */

__int64 __fastcall std::_Hash<std::_Umap_traits<HWND__ *,HWINEVENTHOOK__ *,std::_Uhash_compare<HWND__ *,std::hash<HWND__ *>,std::equal_to<HWND__ *>>,std::allocator<std::pair<HWND__ * const,HWINEVENTHOOK__ *>>,0>>::_Erase<HWND__ *>(
        _QWORD *a1,
        const unsigned __int8 *a2)
{
  __int64 appended; // rax
  _QWORD *v4; // rdx
  __int64 *v5; // rcx
  __int64 v6; // r10
  __int64 v7; // r8
  __int64 v8; // rdx
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 *v12; // [rsp+20h] [rbp-18h] BYREF

  appended = std::_Fnv1a_append_bytes((__int64)a1, a2, 8uLL);
  v5 = std::_Hash<std::_Umap_traits<unsigned __int64,std::wstring,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,std::wstring>>,0>>::_Find_last<unsigned __int64>(
         a1,
         &v12,
         v4,
         appended)[1];
  if ( !v5 )
    return 0LL;
  v7 = a1[3];
  v8 = 2 * (v6 & a1[6]);
  if ( *(__int64 **)(v7 + 16 * (v6 & a1[6]) + 8) == v5 )
  {
    if ( *(__int64 **)(v7 + 16 * (v6 & a1[6])) == v5 )
    {
      v9 = a1[1];
      *(_QWORD *)(v7 + 16 * (v6 & a1[6])) = v9;
    }
    else
    {
      v9 = v5[1];
    }
    *(_QWORD *)(v7 + 8 * v8 + 8) = v9;
  }
  else if ( *(__int64 **)(v7 + 16 * (v6 & a1[6])) == v5 )
  {
    *(_QWORD *)(v7 + 16 * (v6 & a1[6])) = *v5;
  }
  v10 = *v5;
  --a1[2];
  *(_QWORD *)v5[1] = v10;
  *(_QWORD *)(v10 + 8) = v5[1];
  std::_Deallocate<16,0>(v5, (const struct std::nothrow_t *)0x20);
  return 1LL;
}
