/*
 * XREFs of ??$_Erase@K@?$_Hash@V?$_Umap_traits@KV?$unique_ptr@VTSSession@@U?$default_delete@VTSSession@@@std@@@std@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@2@V?$allocator@U?$pair@$$CBKV?$unique_ptr@VTSSession@@U?$default_delete@VTSSession@@@std@@@std@@@std@@@2@$0A@@std@@@std@@AEAA_KAEBK@Z @ 0x18003F328
 * Callers:
 *     ?TsSessionIdDeleteNotify@@YAJPEAUAUDIOPROTOCOLNOTIFY@@@Z @ 0x180015110 (-TsSessionIdDeleteNotify@@YAJPEAUAUDIOPROTOCOLNOTIFY@@@Z.c)
 *     ?TsSessionUpdateAudioProtocol@@YAXPEAVTSSession@@I@Z @ 0x18001C2D4 (-TsSessionUpdateAudioProtocol@@YAXPEAVTSSession@@I@Z.c)
 *     _lambda_458ffd326e5965d00ecb8a039a2797a1_::operator() @ 0x18004027C (_lambda_458ffd326e5965d00ecb8a039a2797a1_--operator().c)
 * Callees:
 *     ??$_Find_last@K@?$_Hash@V?$_Umap_traits@KV?$unique_ptr@VTSSession@@U?$default_delete@VTSSession@@@std@@@std@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@2@V?$allocator@U?$pair@$$CBKV?$unique_ptr@VTSSession@@U?$default_delete@VTSSession@@@std@@@std@@@std@@@2@$0A@@std@@@std@@IEBA?AU?$_Hash_find_last_result@PEAU?$_List_node@U?$pair@$$CBKV?$unique_ptr@VTSSession@@U?$default_delete@VTSSession@@@std@@@std@@@std@@PEAX@std@@@1@AEBK_K@Z @ 0x18000C580 (--$_Find_last@K@-$_Hash@V-$_Umap_traits@KV-$unique_ptr@VTSSession@@U-$default_delete@VTSSession@.c)
 *     ??$?RK@?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@QEBA_KAEBK@Z @ 0x180014A4C (--$-RK@-$_Uhash_compare@KU-$hash@K@std@@U-$equal_to@K@2@@std@@QEBA_KAEBK@Z.c)
 *     ??$_Freenode@V?$allocator@U?$_List_node@U?$pair@$$CBKV?$unique_ptr@VTSSession@@U?$default_delete@VTSSession@@@std@@@std@@@std@@PEAX@std@@@std@@@?$_List_node@U?$pair@$$CBKV?$unique_ptr@VTSSession@@U?$default_delete@VTSSession@@@std@@@std@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@U?$pair@$$CBKV?$unique_ptr@VTSSession@@U?$default_delete@VTSSession@@@std@@@std@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x18003F3C8 (--$_Freenode@V-$allocator@U-$_List_node@U-$pair@$$CBKV-$unique_ptr@VTSSession@@U-$default_delete.c)
 */

__int64 __fastcall std::_Hash<std::_Umap_traits<unsigned long,std::unique_ptr<TSSession>,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,std::unique_ptr<TSSession>>>,0>>::_Erase<unsigned long>(
        __int64 a1,
        __int64 a2)
{
  __int64 v2; // rax
  _DWORD *v3; // rdx
  __int64 v4; // rcx
  _QWORD *v5; // rdx
  __int64 v6; // r11
  __int64 v7; // r8
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // r8
  __int64 v12[3]; // [rsp+20h] [rbp-18h] BYREF

  v2 = std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>::operator()<unsigned long>(
         a1,
         a2);
  v5 = (_QWORD *)std::_Hash<std::_Umap_traits<unsigned long,std::unique_ptr<TSSession>,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,std::unique_ptr<TSSession>>>,0>>::_Find_last<unsigned long>(
                   v4,
                   v12,
                   v3,
                   v2)[1];
  if ( !v5 )
    return 0LL;
  v7 = qword_180067B38;
  v8 = 2 * (v6 & qword_180067B50);
  if ( *(_QWORD **)(qword_180067B38 + 16 * (v6 & qword_180067B50) + 8) == v5 )
  {
    if ( *(_QWORD **)(qword_180067B38 + 16 * (v6 & qword_180067B50)) == v5 )
    {
      v9 = qword_180067B28;
      *(_QWORD *)(qword_180067B38 + 16 * (v6 & qword_180067B50)) = qword_180067B28;
    }
    else
    {
      v9 = v5[1];
    }
    *(_QWORD *)(v7 + 8 * v8 + 8) = v9;
  }
  else if ( *(_QWORD **)(qword_180067B38 + 16 * (v6 & qword_180067B50)) == v5 )
  {
    *(_QWORD *)(qword_180067B38 + 16 * (v6 & qword_180067B50)) = *v5;
  }
  v10 = *v5;
  --qword_180067B30;
  *(_QWORD *)v5[1] = v10;
  *(_QWORD *)(v10 + 8) = v5[1];
  std::_List_node<std::pair<unsigned long const,std::unique_ptr<TSSession>>,void *>::_Freenode<std::allocator<std::_List_node<std::pair<unsigned long const,std::unique_ptr<TSSession>>,void *>>>();
  return 1LL;
}
