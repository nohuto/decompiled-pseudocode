/*
 * XREFs of ?_Rehash_for_1@?$_Hash@V?$_Umap_traits@_KPEAUIMPCTarget@@V?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@std@@V?$allocator@U?$pair@$$CB_KPEAUIMPCTarget@@@std@@@3@$0A@@std@@@std@@IEAAXXZ @ 0x1800FD3DC
 * Callers:
 *     ??$_Try_emplace@AEB_K$$V@?$_Hash@V?$_Umap_traits@_KPEAUIMPCTarget@@V?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@std@@V?$allocator@U?$pair@$$CB_KPEAUIMPCTarget@@@std@@@3@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_List_node@U?$pair@$$CB_KPEAUIMPCTarget@@@std@@PEAX@std@@_N@1@AEB_K@Z @ 0x1800FA6C0 (--$_Try_emplace@AEB_K$$V@-$_Hash@V-$_Umap_traits@_KPEAUIMPCTarget@@V-$_Uhash_compare@_KU-$hash@_.c)
 * Callees:
 *     ?_Desired_grow_bucket_count@?$_Hash@V?$_Uset_traits@W4_Button@@V?$_Uhash_compare@W4_Button@@U?$hash@W4_Button@@@std@@U?$equal_to@W4_Button@@@3@@std@@V?$allocator@W4_Button@@@3@$0A@@std@@@std@@IEBA_K_K@Z @ 0x180021BE0 (-_Desired_grow_bucket_count@-$_Hash@V-$_Uset_traits@W4_Button@@V-$_Uhash_compare@W4_Button@@U-$h.c)
 */

__int64 __fastcall std::_Hash<std::_Umap_traits<unsigned __int64,IMPCTarget *,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,IMPCTarget *>>,0>>::_Rehash_for_1(
        _QWORD *a1)
{
  unsigned __int64 v2; // rax

  v2 = std::_Hash<std::_Uset_traits<enum _Button,std::_Uhash_compare<enum _Button,std::hash<enum _Button>,std::equal_to<enum _Button>>,std::allocator<enum _Button>,0>>::_Desired_grow_bucket_count(
         (__int64)a1,
         a1[2] + 1LL);
  return std::_Hash<std::_Umap_traits<unsigned __int64,std::vector<Microsoft::WRL::ComPtr<InputSite>>,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,std::vector<Microsoft::WRL::ComPtr<InputSite>>>>,0>>::_Forced_rehash(
           a1,
           v2);
}
