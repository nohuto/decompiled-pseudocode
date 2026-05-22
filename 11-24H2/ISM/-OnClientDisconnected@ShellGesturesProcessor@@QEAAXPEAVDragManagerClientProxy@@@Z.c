/*
 * XREFs of ?OnClientDisconnected@ShellGesturesProcessor@@QEAAXPEAVDragManagerClientProxy@@@Z @ 0x180028C90
 * Callers:
 *     ?OnDisconnected@DragManagerClientProxy@@MEAAJXZ @ 0x180028130 (-OnDisconnected@DragManagerClientProxy@@MEAAJXZ.c)
 * Callees:
 *     ??$erase@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBW4EdgyLocation@ShellEdgyRecognizer@@V?$vector@UGestureRegistration@ShellGesturesProcessor@@V?$allocator@UGestureRegistration@ShellGesturesProcessor@@@std@@@std@@@std@@@std@@@std@@@std@@$0A@@?$_Hash@V?$_Umap_traits@W4EdgyLocation@ShellEdgyRecognizer@@V?$vector@UGestureRegistration@ShellGesturesProcessor@@V?$allocator@UGestureRegistration@ShellGesturesProcessor@@@std@@@std@@V?$_Uhash_compare@W4EdgyLocation@ShellEdgyRecognizer@@U?$hash@W4EdgyLocation@ShellEdgyRecognizer@@@std@@U?$equal_to@W4EdgyLocation@ShellEdgyRecognizer@@@4@@4@V?$allocator@U?$pair@$$CBW4EdgyLocation@ShellEdgyRecognizer@@V?$vector@UGestureRegistration@ShellGesturesProcessor@@V?$allocator@UGestureRegistration@ShellGesturesProcessor@@@std@@@std@@@std@@@4@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBW4EdgyLocation@ShellEdgyRecognizer@@V?$vector@UGestureRegistration@ShellGesturesProcessor@@V?$allocator@UGestureRegistration@ShellGesturesProcessor@@@std@@@std@@@std@@@std@@@std@@@1@V21@@Z @ 0x180028768 (--$erase@V-$_List_iterator@V-$_List_val@U-$_List_simple_types@U-$pair@$$CBW4EdgyLocation@ShellEd.c)
 *     ?erase@?$vector@UGestureRegistration@ShellGesturesProcessor@@V?$allocator@UGestureRegistration@ShellGesturesProcessor@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@UGestureRegistration@ShellGesturesProcessor@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@UGestureRegistration@ShellGesturesProcessor@@@std@@@std@@@2@0@Z @ 0x180028DB8 (-erase@-$vector@UGestureRegistration@ShellGesturesProcessor@@V-$allocator@UGestureRegistration@S.c)
 *     ?lock@?$weak_ptr@VSystemCursorService2@@@std@@QEBA?AV?$shared_ptr@VSystemCursorService2@@@2@XZ @ 0x1800582F8 (-lock@-$weak_ptr@VSystemCursorService2@@@std@@QEBA-AV-$shared_ptr@VSystemCursorService2@@@2@XZ.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180058904 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??4?$ComPtr@VBamoInputAttemptedDeliveryClientProxy@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z @ 0x180146654 (--4-$ComPtr@VBamoInputAttemptedDeliveryClientProxy@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z.c)
 *     ?RemoveGestureClient@GestureHandler@@QEAAXPEAVDragManagerClientProxy@@@Z @ 0x180146C80 (-RemoveGestureClient@GestureHandler@@QEAAXPEAVDragManagerClientProxy@@@Z.c)
 */

void __fastcall ShellGesturesProcessor::OnClientDisconnected(
        ShellGesturesProcessor *this,
        struct DragManagerClientProxy *a2)
{
  _QWORD *i; // rbx
  __int64 v5; // rbp
  __int64 j; // rdi
  _QWORD *v7; // rdi
  _QWORD *m; // rbx
  __int64 k; // rsi
  __int64 v10; // rcx
  GestureHandler *v11; // [rsp+20h] [rbp-38h] BYREF
  std::_Ref_count_base *v12; // [rsp+28h] [rbp-30h]
  char v13; // [rsp+60h] [rbp+8h] BYREF
  __int64 v14; // [rsp+68h] [rbp+10h] BYREF

  i = (_QWORD *)*((_QWORD *)this + 5);
LABEL_2:
  for ( i = (_QWORD *)*i;
        i != *((_QWORD **)this + 5);
        i = (_QWORD *)*std::_Hash<std::_Umap_traits<enum ShellEdgyRecognizer::EdgyLocation,std::vector<ShellGesturesProcessor::GestureRegistration>,std::_Uhash_compare<enum ShellEdgyRecognizer::EdgyLocation,std::hash<enum ShellEdgyRecognizer::EdgyLocation>,std::equal_to<enum ShellEdgyRecognizer::EdgyLocation>>,std::allocator<std::pair<enum ShellEdgyRecognizer::EdgyLocation const,std::vector<ShellGesturesProcessor::GestureRegistration>>>,0>>::erase<std::_List_iterator<std::_List_val<std::_List_simple_types<std::pair<enum ShellEdgyRecognizer::EdgyLocation const,std::vector<ShellGesturesProcessor::GestureRegistration>>>>>,0>(
                         (_QWORD *)this + 4,
                         &v14,
                         (__int64)i) )
  {
    v5 = i[4];
    for ( j = i[3]; j != v5 && *(struct DragManagerClientProxy **)(j + 16) != a2; j += 32LL )
      ;
    if ( j != v5 )
    {
      for ( k = j + 32; k != v5; k += 32LL )
      {
        if ( *(struct DragManagerClientProxy **)(k + 16) != a2 )
        {
          *(_QWORD *)j = *(_QWORD *)k;
          *(_DWORD *)(j + 8) = *(_DWORD *)(k + 8);
          Microsoft::WRL::ComPtr<BamoInputAttemptedDeliveryClientProxy>::operator=(j + 16, k + 16);
          *(_BYTE *)(j + 24) = *(_BYTE *)(k + 24);
          j += 32LL;
        }
      }
    }
    std::vector<ShellGesturesProcessor::GestureRegistration>::erase(i + 3, &v13, j, v5);
    if ( i[3] != i[4] )
      goto LABEL_2;
  }
  v7 = (_QWORD *)*((_QWORD *)this + 17);
  for ( m = (_QWORD *)*v7; m != v7; m = (_QWORD *)*m )
  {
    v10 = m[3];
    if ( *(_BYTE *)(v10 + 456) )
    {
      std::weak_ptr<SystemCursorService2>::lock(v10 + 440, &v11);
      if ( v11 )
        GestureHandler::RemoveGestureClient(v11, a2);
      if ( v12 )
        std::_Ref_count_base::_Decref(v12);
    }
  }
}
