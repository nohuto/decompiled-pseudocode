/*
 * XREFs of ?OnNotify@DataProviderPrincipal@@UEAAJPEAVBamoDataProviderStub@@_KW4DataProviderNotificationEventArg@@@Z @ 0x180106040
 * Callers:
 *     <none>
 * Callees:
 *     ?GetBamoServerConnection@ISMStatics@@SAPEAVInputSystemServerConnection@@XZ @ 0x18002461C (-GetBamoServerConnection@ISMStatics@@SAPEAVInputSystemServerConnection@@XZ.c)
 *     ?CleanupAnimationDataIfNeeded@GestureHandler@@AEAAXXZ @ 0x180058408 (-CleanupAnimationDataIfNeeded@GestureHandler@@AEAAXXZ.c)
 *     ??$find@X@?$_Hash@V?$_Umap_traits@_KV?$shared_ptr@VGestureHandler@@@std@@V?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@2@V?$allocator@U?$pair@$$CB_KV?$shared_ptr@VGestureHandler@@@std@@@std@@@2@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KV?$shared_ptr@VGestureHandler@@@std@@@std@@@std@@@std@@@1@AEB_K@Z @ 0x180099CA0 (--$find@X@-$_Hash@V-$_Umap_traits@_KV-$shared_ptr@VGestureHandler@@@std@@V-$_Uhash_compare@_KU-$.c)
 *     ?SendAnimationEndedIfNeeded@GestureHandler@@AEAAXXZ @ 0x180146D34 (-SendAnimationEndedIfNeeded@GestureHandler@@AEAAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DB010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall DataProviderPrincipal::OnNotify(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  struct InputSystemServerConnection *BamoServerConnection; // rax
  __int64 v7; // rax
  __int64 v8; // rbx
  GestureHandler *v9; // rbx
  _QWORD v11[3]; // [rsp+20h] [rbp-18h] BYREF
  __int64 v12; // [rsp+50h] [rbp+18h] BYREF

  BamoServerConnection = ISMStatics::GetBamoServerConnection();
  v7 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(*((_QWORD *)BamoServerConnection + 31) + 8LL) + 88LL))(*((_QWORD *)BamoServerConnection + 31) + 8LL);
  v12 = a3;
  v8 = v7;
  std::_Hash<std::_Umap_traits<unsigned __int64,std::shared_ptr<GestureHandler>,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,std::shared_ptr<GestureHandler>>>,0>>::find<void>(
    (_QWORD *)(v7 + 264),
    v11,
    (__int64)&v12);
  if ( v11[0] != *(_QWORD *)(v8 + 272) )
  {
    v9 = *(GestureHandler **)(v11[0] + 24LL);
    if ( *((_BYTE *)v9 + 240) )
    {
      if ( a4 == 1 )
      {
        GestureHandler::SendAnimationEndedIfNeeded(*(GestureHandler **)(v11[0] + 24LL));
        GestureHandler::CleanupAnimationDataIfNeeded(v9);
      }
    }
  }
  return 0LL;
}
