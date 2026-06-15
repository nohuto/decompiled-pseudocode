/*
 * XREFs of ??$_Erase@K@?$_Hash@V?$_Umap_traits@KV?$unique_ptr@VTSSession@@U?$default_delete@VTSSession@@@std@@@std@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@2@V?$allocator@U?$pair@$$CBKV?$unique_ptr@VTSSession@@U?$default_delete@VTSSession@@@std@@@std@@@std@@@2@$0A@@std@@@std@@AEAA_KAEBK@Z @ 0x18003CB08
 * Callers:
 *     ?TsSessionIdDeleteNotify@@YAJPEAUAUDIOPROTOCOLNOTIFY@@@Z @ 0x1800045B0 (-TsSessionIdDeleteNotify@@YAJPEAUAUDIOPROTOCOLNOTIFY@@@Z.c)
 *     ?TsSessionUpdateAudioProtocol@@YAXPEAVTSSession@@I@Z @ 0x18001C404 (-TsSessionUpdateAudioProtocol@@YAXPEAVTSSession@@I@Z.c)
 *     _lambda_458ffd326e5965d00ecb8a039a2797a1_::operator() @ 0x18003DA5C (_lambda_458ffd326e5965d00ecb8a039a2797a1_--operator().c)
 * Callees:
 *     ??$_Find_last@K@?$_Hash@V?$_Umap_traits@KV?$unique_ptr@VTSSession@@U?$default_delete@VTSSession@@@std@@@std@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@2@V?$allocator@U?$pair@$$CBKV?$unique_ptr@VTSSession@@U?$default_delete@VTSSession@@@std@@@std@@@std@@@2@$0A@@std@@@std@@IEBA?AU?$_Hash_find_last_result@PEAU?$_List_node@U?$pair@$$CBKV?$unique_ptr@VTSSession@@U?$default_delete@VTSSession@@@std@@@std@@@std@@PEAX@std@@@1@AEBK_K@Z @ 0x18000D8B0 (--$_Find_last@K@-$_Hash@V-$_Umap_traits@KV-$unique_ptr@VTSSession@@U-$default_delete@VTSSession@.c)
 *     ??$?RK@?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@QEBA_KAEBK@Z @ 0x1800151CC (--$-RK@-$_Uhash_compare@KU-$hash@K@std@@U-$equal_to@K@2@@std@@QEBA_KAEBK@Z.c)
 *     ??$_Freenode@V?$allocator@U?$_List_node@U?$pair@$$CBKV?$unique_ptr@VTSSession@@U?$default_delete@VTSSession@@@std@@@std@@@std@@PEAX@std@@@std@@@?$_List_node@U?$pair@$$CBKV?$unique_ptr@VTSSession@@U?$default_delete@VTSSession@@@std@@@std@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@U?$pair@$$CBKV?$unique_ptr@VTSSession@@U?$default_delete@VTSSession@@@std@@@std@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x18003CBA8 (--$_Freenode@V-$allocator@U-$_List_node@U-$pair@$$CBKV-$unique_ptr@VTSSession@@U-$default_delete.c)
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
  v7 = qword_180064AB8;
  v8 = 2 * (v6 & qword_180064AD0);
  if ( *(_QWORD **)(qword_180064AB8 + 16 * (v6 & qword_180064AD0) + 8) == v5 )
  {
    if ( *(_QWORD **)(qword_180064AB8 + 16 * (v6 & qword_180064AD0)) == v5 )
    {
      v9 = qword_180064AA8;
      *(_QWORD *)(qword_180064AB8 + 16 * (v6 & qword_180064AD0)) = qword_180064AA8;
    }
    else
    {
      v9 = v5[1];
    }
    *(_QWORD *)(v7 + 8 * v8 + 8) = v9;
  }
  else if ( *(_QWORD **)(qword_180064AB8 + 16 * (v6 & qword_180064AD0)) == v5 )
  {
    *(_QWORD *)(qword_180064AB8 + 16 * (v6 & qword_180064AD0)) = *v5;
  }
  v10 = *v5;
  --qword_180064AB0;
  *(_QWORD *)v5[1] = v10;
  *(_QWORD *)(v10 + 8) = v5[1];
  std::_List_node<std::pair<unsigned long const,std::unique_ptr<TSSession>>,void *>::_Freenode<std::allocator<std::_List_node<std::pair<unsigned long const,std::unique_ptr<TSSession>>,void *>>>();
  return 1LL;
}
