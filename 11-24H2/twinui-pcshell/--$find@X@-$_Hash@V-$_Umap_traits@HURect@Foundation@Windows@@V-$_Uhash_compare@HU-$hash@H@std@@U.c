/*
 * XREFs of ??$find@X@?$_Hash@V?$_Umap_traits@HURect@Foundation@Windows@@V?$_Uhash_compare@HU?$hash@H@std@@U?$equal_to@H@2@@std@@V?$allocator@U?$pair@$$CBHURect@Foundation@Windows@@@std@@@5@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBHURect@Foundation@Windows@@@std@@@std@@@std@@@1@AEBH@Z @ 0x18059BA3C
 * Callers:
 *     ?GetAndDeleteSnapId@CShellSnapComponent@@UEAAJHPEAURect@Foundation@Windows@@@Z @ 0x18059E290 (-GetAndDeleteSnapId@CShellSnapComponent@@UEAAJHPEAURect@Foundation@Windows@@@Z.c)
 *     ?GetAndDeleteSnapIdForWindow@CShellSnapComponent@@UEAAJH_KPEAURect@Foundation@Windows@@@Z @ 0x18059E3A0 (-GetAndDeleteSnapIdForWindow@CShellSnapComponent@@UEAAJH_KPEAURect@Foundation@Windows@@@Z.c)
 *     ?StartSnapLaunch@CShellSnapComponent@@UEAAJHHE@Z @ 0x1805A13D0 (-StartSnapLaunch@CShellSnapComponent@@UEAAJHHE@Z.c)
 * Callees:
 *     ??$?RH@?$_Uhash_compare@HU?$hash@H@std@@U?$equal_to@H@2@@std@@QEBA_KAEBH@Z @ 0x1800AB80C (--$-RH@-$_Uhash_compare@HU-$hash@H@std@@U-$equal_to@H@2@@std@@QEBA_KAEBH@Z.c)
 *     ??$_Find_last@H@?$_Hash@V?$_Umap_traits@HURect@Foundation@Windows@@V?$_Uhash_compare@HU?$hash@H@std@@U?$equal_to@H@2@@std@@V?$allocator@U?$pair@$$CBHURect@Foundation@Windows@@@std@@@5@$0A@@std@@@std@@IEBA?AU?$_Hash_find_last_result@PEAU?$_List_node@U?$pair@$$CBHURect@Foundation@Windows@@@std@@PEAX@std@@@1@AEBH_K@Z @ 0x18016CD58 (--$_Find_last@H@-$_Hash@V-$_Umap_traits@HURect@Foundation@Windows@@V-$_Uhash_compare@HU-$hash@H@.c)
 */

_QWORD *__fastcall std::_Hash<std::_Umap_traits<int,Windows::Foundation::Rect,std::_Uhash_compare<int,std::hash<int>,std::equal_to<int>>,std::allocator<std::pair<int const,Windows::Foundation::Rect>>,0>>::find<void>(
        _QWORD *a1,
        _QWORD *a2,
        __int64 a3)
{
  __int64 v5; // rax
  _DWORD *v6; // rdx
  __int64 v7; // r8
  _QWORD v9[3]; // [rsp+20h] [rbp-18h] BYREF

  v5 = std::_Uhash_compare<int,std::hash<int>,std::equal_to<int>>::operator()<int>((__int64)a1, a3);
  v7 = std::_Hash<std::_Umap_traits<int,Windows::Foundation::Rect,std::_Uhash_compare<int,std::hash<int>,std::equal_to<int>>,std::allocator<std::pair<int const,Windows::Foundation::Rect>>,0>>::_Find_last<int>(
         a1,
         v9,
         v6,
         v5)[1];
  if ( !v7 )
    v7 = a1[1];
  *a2 = v7;
  return a2;
}
