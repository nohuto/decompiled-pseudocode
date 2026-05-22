/*
 * XREFs of ?ClearAnimationDataForSource@DragManagerClientProxy@@QEAAX_K@Z @ 0x180027F68
 * Callers:
 *     ?UnregisterGestureDragClient@GestureServices@@MEAAJPEAVBamoGestureServicesStub@@_KPEAVBamoDragManagerClientProxy@@@Z @ 0x180027CE0 (-UnregisterGestureDragClient@GestureServices@@MEAAJPEAVBamoGestureServicesStub@@_KPEAVBamoDragMa.c)
 * Callees:
 *     ?GetBamoServerConnection@ISMStatics@@SAPEAVInputSystemServerConnection@@XZ @ 0x18002404C (-GetBamoServerConnection@ISMStatics@@SAPEAVInputSystemServerConnection@@XZ.c)
 *     ?OnManagerAnimationDataChange@GestureServices@@QEAAX_K0@Z @ 0x180099E08 (-OnManagerAnimationDataChange@GestureServices@@QEAAX_K0@Z.c)
 *     ??$erase@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KUGestureAnimationData@Input@Internal@UI@Windows@@@std@@@std@@@std@@@std@@$0A@@?$_Hash@V?$_Umap_traits@_KUGestureAnimationData@Input@Internal@UI@Windows@@V?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@std@@V?$allocator@U?$pair@$$CB_KUGestureAnimationData@Input@Internal@UI@Windows@@@std@@@7@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KUGestureAnimationData@Input@Internal@UI@Windows@@@std@@@std@@@std@@@1@V21@@Z @ 0x180142068 (--$erase@V-$_List_iterator@V-$_List_val@U-$_List_simple_types@U-$pair@$$CB_KUGestureAnimationDat.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801D3010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall DragManagerClientProxy::ClearAnimationDataForSource(DragManagerClientProxy *this, __int64 a2)
{
  char *v2; // rdi
  __int64 v3; // r8
  unsigned __int64 i; // r9
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // r8
  __int64 v8; // rax
  _QWORD *v9; // rbx
  struct InputSystemServerConnection *BamoServerConnection; // rax
  GestureServices *v11; // rax
  char v12; // [rsp+30h] [rbp+8h] BYREF
  __int64 v13; // [rsp+38h] [rbp+10h]

  v13 = a2;
  v2 = (char *)this + 80;
  v3 = 0xCBF29CE484222325uLL;
  for ( i = 0LL; i < 8; ++i )
  {
    v5 = *((unsigned __int8 *)&v13 + i);
    v3 = 0x100000001B3LL * (v5 ^ v3);
  }
  v6 = v3 & *((_QWORD *)this + 16);
  v7 = *((_QWORD *)this + 13);
  v8 = 2 * v6;
  v9 = *(_QWORD **)(v7 + 8 * v8 + 8);
  if ( v9 == *((_QWORD **)this + 11) )
  {
LABEL_4:
    v9 = 0LL;
  }
  else
  {
    while ( a2 != v9[2] )
    {
      if ( v9 == *(_QWORD **)(v7 + 8 * v8) )
        goto LABEL_4;
      v9 = (_QWORD *)v9[1];
    }
  }
  if ( !v9 )
    v9 = (_QWORD *)*((_QWORD *)this + 11);
  if ( v9 != *((_QWORD **)this + 11) )
  {
    BamoServerConnection = ISMStatics::GetBamoServerConnection();
    v11 = (GestureServices *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(*((_QWORD *)BamoServerConnection + 31)
                                                                            + 8LL)
                                                                + 88LL))(*((_QWORD *)BamoServerConnection + 31) + 8LL);
    GestureServices::OnManagerAnimationDataChange(v11, v9[3], 0LL);
    std::_Hash<std::_Umap_traits<unsigned __int64,Windows::UI::Internal::Input::GestureAnimationData,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,Windows::UI::Internal::Input::GestureAnimationData>>,0>>::erase<std::_List_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned __int64 const,Windows::UI::Internal::Input::GestureAnimationData>>>>,0>(
      v2,
      &v12,
      v9);
  }
}
