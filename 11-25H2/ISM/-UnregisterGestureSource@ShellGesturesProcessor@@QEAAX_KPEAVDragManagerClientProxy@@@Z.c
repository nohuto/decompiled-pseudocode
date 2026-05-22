/*
 * XREFs of ?UnregisterGestureSource@ShellGesturesProcessor@@QEAAX_KPEAVDragManagerClientProxy@@@Z @ 0x180028038
 * Callers:
 *     ?UnregisterGestureDragClient@GestureServices@@MEAAJPEAVBamoGestureServicesStub@@_KPEAVBamoDragManagerClientProxy@@@Z @ 0x180027CE0 (-UnregisterGestureDragClient@GestureServices@@MEAAJPEAVBamoGestureServicesStub@@_KPEAVBamoDragMa.c)
 *     ?RegisterGestureSource@ShellGesturesProcessor@@QEAAX_KW4InputGestureSourceType@Input@Internal@UI@Windows@@W4InputType@3456@PEAVDragManagerClientProxy@@@Z @ 0x180027DEC (-RegisterGestureSource@ShellGesturesProcessor@@QEAAX_KW4InputGestureSourceType@Input@Internal@UI.c)
 * Callees:
 *     std::remove_if_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_ShellGesturesProcessor::GestureRegistration_______lambda_28cbbaafa351dff69488e6a008c133d8___ @ 0x1800280F4 (std--remove_if_std--_Vector_iterator_std--_Vector_val_std--_Simple_types_ShellGesturesProcessor-.c)
 *     ??$erase@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBW4EdgyLocation@ShellEdgyRecognizer@@V?$vector@UGestureRegistration@ShellGesturesProcessor@@V?$allocator@UGestureRegistration@ShellGesturesProcessor@@@std@@@std@@@std@@@std@@@std@@@std@@$0A@@?$_Hash@V?$_Umap_traits@W4EdgyLocation@ShellEdgyRecognizer@@V?$vector@UGestureRegistration@ShellGesturesProcessor@@V?$allocator@UGestureRegistration@ShellGesturesProcessor@@@std@@@std@@V?$_Uhash_compare@W4EdgyLocation@ShellEdgyRecognizer@@U?$hash@W4EdgyLocation@ShellEdgyRecognizer@@@std@@U?$equal_to@W4EdgyLocation@ShellEdgyRecognizer@@@4@@4@V?$allocator@U?$pair@$$CBW4EdgyLocation@ShellEdgyRecognizer@@V?$vector@UGestureRegistration@ShellGesturesProcessor@@V?$allocator@UGestureRegistration@ShellGesturesProcessor@@@std@@@std@@@std@@@4@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBW4EdgyLocation@ShellEdgyRecognizer@@V?$vector@UGestureRegistration@ShellGesturesProcessor@@V?$allocator@UGestureRegistration@ShellGesturesProcessor@@@std@@@std@@@std@@@std@@@std@@@1@V21@@Z @ 0x1800281A8 (--$erase@V-$_List_iterator@V-$_List_val@U-$_List_simple_types@U-$pair@$$CBW4EdgyLocation@ShellEd.c)
 *     ??$_Move_unchecked@PEAUGestureRegistration@ShellGesturesProcessor@@PEAU12@@std@@YAPEAUGestureRegistration@ShellGesturesProcessor@@PEAU12@00@Z @ 0x18002841C (--$_Move_unchecked@PEAUGestureRegistration@ShellGesturesProcessor@@PEAU12@@std@@YAPEAUGestureReg.c)
 *     ??$_Destroy_range@V?$allocator@UGestureRegistration@ShellGesturesProcessor@@@std@@@std@@YAXPEAUGestureRegistration@ShellGesturesProcessor@@QEAU12@AEAV?$allocator@UGestureRegistration@ShellGesturesProcessor@@@0@@Z @ 0x180028564 (--$_Destroy_range@V-$allocator@UGestureRegistration@ShellGesturesProcessor@@@std@@@std@@YAXPEAUG.c)
 */

void __fastcall ShellGesturesProcessor::UnregisterGestureSource(
        ShellGesturesProcessor *this,
        __int64 a2,
        struct DragManagerClientProxy *a3)
{
  _QWORD *i; // rbx
  __int64 v7; // rdi
  __int64 v8; // rdx
  _QWORD *v9; // rax
  __int64 v10; // rdi
  __int128 v11; // [rsp+20h] [rbp-38h]
  __int128 v12; // [rsp+30h] [rbp-28h] BYREF
  char v13; // [rsp+60h] [rbp+8h] BYREF
  char v14; // [rsp+68h] [rbp+10h] BYREF

  i = (_QWORD *)*((_QWORD *)this + 5);
LABEL_2:
  for ( i = (_QWORD *)*i;
        i != *((_QWORD **)this + 5);
        i = *(_QWORD **)std::_Hash<std::_Umap_traits<enum ShellEdgyRecognizer::EdgyLocation,std::vector<ShellGesturesProcessor::GestureRegistration>,std::_Uhash_compare<enum ShellEdgyRecognizer::EdgyLocation,std::hash<enum ShellEdgyRecognizer::EdgyLocation>,std::equal_to<enum ShellEdgyRecognizer::EdgyLocation>>,std::allocator<std::pair<enum ShellEdgyRecognizer::EdgyLocation const,std::vector<ShellGesturesProcessor::GestureRegistration>>>,0>>::erase<std::_List_iterator<std::_List_val<std::_List_simple_types<std::pair<enum ShellEdgyRecognizer::EdgyLocation const,std::vector<ShellGesturesProcessor::GestureRegistration>>>>>,0>(
                          (char *)this + 32,
                          &v14,
                          i) )
  {
    v7 = i[4];
    v8 = i[3];
    *(_QWORD *)&v11 = a2;
    *((_QWORD *)&v11 + 1) = a3;
    v12 = v11;
    v9 = (_QWORD *)((__int64 (__fastcall *)(char *, __int64, __int64, __int128 *, __int64, struct DragManagerClientProxy *))std::remove_if_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_ShellGesturesProcessor::GestureRegistration_______lambda_28cbbaafa351dff69488e6a008c133d8___)(
                     &v13,
                     v8,
                     v7,
                     &v12,
                     a2,
                     a3);
    if ( *v9 != v7 )
    {
      v10 = std::_Move_unchecked<ShellGesturesProcessor::GestureRegistration *,ShellGesturesProcessor::GestureRegistration *>(
              v7,
              i[4],
              *v9);
      std::_Destroy_range<std::allocator<ShellGesturesProcessor::GestureRegistration>>(v10, i[4]);
      i[4] = v10;
    }
    if ( i[3] != i[4] )
      goto LABEL_2;
  }
}
