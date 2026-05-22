/*
 * XREFs of ?ClearAnimationDataForAllSources@DragManagerClientProxy@@AEAAXXZ @ 0x180027C5C
 * Callers:
 *     ?OnDisconnected@DragManagerClientProxy@@MEAAJXZ @ 0x180027B70 (-OnDisconnected@DragManagerClientProxy@@MEAAJXZ.c)
 *     ?SetAnimationDataForSource@DragManagerClientProxy@@QEAAX_KAEBUGestureAnimationData@Input@Internal@UI@Windows@@@Z @ 0x180143830 (-SetAnimationDataForSource@DragManagerClientProxy@@QEAAX_KAEBUGestureAnimationData@Input@Interna.c)
 * Callees:
 *     ?GetBamoServerConnection@ISMStatics@@SAPEAVInputSystemServerConnection@@XZ @ 0x18002404C (-GetBamoServerConnection@ISMStatics@@SAPEAVInputSystemServerConnection@@XZ.c)
 *     ?OnManagerAnimationDataChange@GestureServices@@QEAAX_K0@Z @ 0x180099E08 (-OnManagerAnimationDataChange@GestureServices@@QEAAX_K0@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801D3010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall DragManagerClientProxy::ClearAnimationDataForAllSources(DragManagerClientProxy *this)
{
  struct InputSystemServerConnection *BamoServerConnection; // rax
  char *v3; // rsi
  GestureServices *v4; // rbp
  _QWORD *v5; // rdi
  _QWORD *i; // rbx

  BamoServerConnection = ISMStatics::GetBamoServerConnection();
  v3 = (char *)this + 80;
  v4 = (GestureServices *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(*((_QWORD *)BamoServerConnection + 31) + 8LL)
                                                             + 88LL))(*((_QWORD *)BamoServerConnection + 31) + 8LL);
  v5 = (_QWORD *)*((_QWORD *)this + 11);
  for ( i = (_QWORD *)*v5; i != v5; i = (_QWORD *)*i )
    GestureServices::OnManagerAnimationDataChange(v4, i[3], 0LL);
  std::_Hash<std::_Umap_traits<unsigned __int64,Windows::UI::Internal::Input::GestureAnimationData,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,Windows::UI::Internal::Input::GestureAnimationData>>,0>>::clear(v3);
}
