/*
 * XREFs of ?OnFirstDataRead@DataSourcePrincipal@@UEAAJPEAVBamoDataSourceStub@@_K@Z @ 0x1801042A0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetBamoServerConnection@ISMStatics@@SAPEAVInputSystemServerConnection@@XZ @ 0x18002404C (-GetBamoServerConnection@ISMStatics@@SAPEAVInputSystemServerConnection@@XZ.c)
 *     ??$find@X@?$_Hash@V?$_Umap_traits@_KV?$shared_ptr@VGestureHandler@@@std@@V?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@2@V?$allocator@U?$pair@$$CB_KV?$shared_ptr@VGestureHandler@@@std@@@std@@@2@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KV?$shared_ptr@VGestureHandler@@@std@@@std@@@std@@@std@@@1@AEB_K@Z @ 0x180099AC8 (--$find@X@-$_Hash@V-$_Umap_traits@_KV-$shared_ptr@VGestureHandler@@@std@@V-$_Uhash_compare@_KU-$.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801D3010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall DataSourcePrincipal::OnFirstDataRead(
        DataSourcePrincipal *this,
        struct BamoDataSourceStub *a2,
        __int64 a3)
{
  struct InputSystemServerConnection *BamoServerConnection; // rax
  __int64 v6; // rdi
  __int64 v8; // [rsp+30h] [rbp+8h] BYREF
  __int64 v9; // [rsp+48h] [rbp+20h] BYREF

  BamoServerConnection = ISMStatics::GetBamoServerConnection();
  v6 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(*((_QWORD *)BamoServerConnection + 31) + 8LL) + 88LL))(*((_QWORD *)BamoServerConnection + 31) + 8LL);
  v8 = *(_QWORD *)(*(__int64 (__fastcall **)(char *))(*((_QWORD *)this + 1) + 96LL))((char *)this + 8);
  std::_Hash<std::_Umap_traits<unsigned __int64,std::shared_ptr<GestureHandler>,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,std::shared_ptr<GestureHandler>>>,0>>::find<void>(
    (_QWORD *)(v6 + 264),
    &v9,
    (__int64)&v8);
  if ( v9 != *(_QWORD *)(v6 + 272) )
    *(_QWORD *)(*(_QWORD *)(v9 + 24) + 104LL) = a3;
  return 0LL;
}
