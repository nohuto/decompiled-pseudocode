/*
 * XREFs of ??$find@X@?$_Hash@V?$_Umap_traits@_KV?$shared_ptr@VGestureHandler@@@std@@V?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@2@V?$allocator@U?$pair@$$CB_KV?$shared_ptr@VGestureHandler@@@std@@@std@@@2@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KV?$shared_ptr@VGestureHandler@@@std@@@std@@@std@@@std@@@1@AEB_K@Z @ 0x180099CA0
 * Callers:
 *     ?OnManagerAnimationDataChange@GestureServices@@QEAAX_K0@Z @ 0x180099FD8 (-OnManagerAnimationDataChange@GestureServices@@QEAAX_K0@Z.c)
 *     ?OnFirstDataRead@DataSourcePrincipal@@UEAAJPEAVBamoDataSourceStub@@_K@Z @ 0x180105FA0 (-OnFirstDataRead@DataSourcePrincipal@@UEAAJPEAVBamoDataSourceStub@@_K@Z.c)
 *     ?OnNotify@DataProviderPrincipal@@UEAAJPEAVBamoDataProviderStub@@_KW4DataProviderNotificationEventArg@@@Z @ 0x180106040 (-OnNotify@DataProviderPrincipal@@UEAAJPEAVBamoDataProviderStub@@_KW4DataProviderNotificationEven.c)
 *     ?OnReaderConnected@DataProviderPrincipal@@UEAAJPEAVBamoDataProviderStub@@_K@Z @ 0x180106120 (-OnReaderConnected@DataProviderPrincipal@@UEAAJPEAVBamoDataProviderStub@@_K@Z.c)
 *     ?OnTargetAnimationDataChange@GestureServices@@QEAAXPEAVAnimationTargetClientProxy@@_K1@Z @ 0x180142E0C (-OnTargetAnimationDataChange@GestureServices@@QEAAXPEAVAnimationTargetClientProxy@@_K1@Z.c)
 *     ?TryResumeGestureHandler@GestureServices@@QEAA?AV?$weak_ptr@VGestureHandler@@@std@@_KI@Z @ 0x180143D48 (-TryResumeGestureHandler@GestureServices@@QEAA-AV-$weak_ptr@VGestureHandler@@@std@@_KI@Z.c)
 * Callees:
 *     ??$?RPEAUIInputTarget@@@?$_Uhash_compare@PEAUIInputTarget@@U?$hash@PEAUIInputTarget@@@std@@U?$equal_to@PEAUIInputTarget@@@3@@std@@QEBA_KAEBQEAUIInputTarget@@@Z @ 0x180023BDC (--$-RPEAUIInputTarget@@@-$_Uhash_compare@PEAUIInputTarget@@U-$hash@PEAUIInputTarget@@@std@@U-$eq.c)
 *     ??$_Find_last@_K@?$_Hash@V?$_Umap_traits@_KV?$shared_ptr@VGestureHandler@@@std@@V?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@2@V?$allocator@U?$pair@$$CB_KV?$shared_ptr@VGestureHandler@@@std@@@std@@@2@$0A@@std@@@std@@IEBA?AU?$_Hash_find_last_result@PEAU?$_List_node@U?$pair@$$CB_KV?$shared_ptr@VGestureHandler@@@std@@@std@@PEAX@std@@@1@AEB_K_K@Z @ 0x180062238 (--$_Find_last@_K@-$_Hash@V-$_Umap_traits@_KV-$shared_ptr@VGestureHandler@@@std@@V-$_Uhash_compar.c)
 */

_QWORD *__fastcall std::_Hash<std::_Umap_traits<unsigned __int64,std::shared_ptr<GestureHandler>,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,std::shared_ptr<GestureHandler>>>,0>>::find<void>(
        _QWORD *a1,
        _QWORD *a2,
        __int64 a3)
{
  __int64 v5; // rax
  _QWORD *v6; // rdx
  __int64 v7; // r8
  _QWORD v9[3]; // [rsp+20h] [rbp-18h] BYREF

  v5 = std::_Uhash_compare<IInputTarget *,std::hash<IInputTarget *>,std::equal_to<IInputTarget *>>::operator()<IInputTarget *>(
         (__int64)a1,
         a3);
  v7 = std::_Hash<std::_Umap_traits<unsigned __int64,std::shared_ptr<GestureHandler>,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,std::shared_ptr<GestureHandler>>>,0>>::_Find_last<unsigned __int64>(
         a1,
         v9,
         v6,
         v5)[1];
  if ( !v7 )
    v7 = a1[1];
  *a2 = v7;
  return a2;
}
