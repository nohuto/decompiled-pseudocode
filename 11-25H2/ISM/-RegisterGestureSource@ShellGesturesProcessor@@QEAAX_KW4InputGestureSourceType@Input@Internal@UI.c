/*
 * XREFs of ?RegisterGestureSource@ShellGesturesProcessor@@QEAAX_KW4InputGestureSourceType@Input@Internal@UI@Windows@@W4InputType@3456@PEAVDragManagerClientProxy@@@Z @ 0x180027DEC
 * Callers:
 *     ?RegisterGestureDragClient@GestureServices@@MEAAJPEAVBamoGestureServicesStub@@_KW4InputGestureSourceType@Input@Internal@UI@Windows@@W4InputType@4567@PEAVBamoDragManagerClientProxy@@@Z @ 0x180027D60 (-RegisterGestureDragClient@GestureServices@@MEAAJPEAVBamoGestureServicesStub@@_KW4InputGestureSo.c)
 * Callees:
 *     ?UnregisterGestureSource@ShellGesturesProcessor@@QEAAX_KPEAVDragManagerClientProxy@@@Z @ 0x180028038 (-UnregisterGestureSource@ShellGesturesProcessor@@QEAAX_KPEAVDragManagerClientProxy@@@Z.c)
 *     ??$_Try_emplace@AEBW4EdgyLocation@ShellEdgyRecognizer@@$$V@?$_Hash@V?$_Umap_traits@W4EdgyLocation@ShellEdgyRecognizer@@V?$vector@UGestureRegistration@ShellGesturesProcessor@@V?$allocator@UGestureRegistration@ShellGesturesProcessor@@@std@@@std@@V?$_Uhash_compare@W4EdgyLocation@ShellEdgyRecognizer@@U?$hash@W4EdgyLocation@ShellEdgyRecognizer@@@std@@U?$equal_to@W4EdgyLocation@ShellEdgyRecognizer@@@4@@4@V?$allocator@U?$pair@$$CBW4EdgyLocation@ShellEdgyRecognizer@@V?$vector@UGestureRegistration@ShellGesturesProcessor@@V?$allocator@UGestureRegistration@ShellGesturesProcessor@@@std@@@std@@@std@@@4@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_List_node@U?$pair@$$CBW4EdgyLocation@ShellEdgyRecognizer@@V?$vector@UGestureRegistration@ShellGesturesProcessor@@V?$allocator@UGestureRegistration@ShellGesturesProcessor@@@std@@@std@@@std@@PEAX@std@@_N@1@AEBW4EdgyLocation@ShellEdgyRecognizer@@@Z @ 0x180028244 (--$_Try_emplace@AEBW4EdgyLocation@ShellEdgyRecognizer@@$$V@-$_Hash@V-$_Umap_traits@W4EdgyLocatio.c)
 *     ??0GestureRegistration@ShellGesturesProcessor@@QEAA@AEBU01@@Z @ 0x180028484 (--0GestureRegistration@ShellGesturesProcessor@@QEAA@AEBU01@@Z.c)
 *     ??$_Emplace_reallocate@AEBUGestureRegistration@ShellGesturesProcessor@@@?$vector@UGestureRegistration@ShellGesturesProcessor@@V?$allocator@UGestureRegistration@ShellGesturesProcessor@@@std@@@std@@AEAAPEAUGestureRegistration@ShellGesturesProcessor@@QEAU23@AEBU23@@Z @ 0x1800285B4 (--$_Emplace_reallocate@AEBUGestureRegistration@ShellGesturesProcessor@@@-$vector@UGestureRegistr.c)
 *     ??$IsShellClient@VDragManagerClientProxy@@@@YA_NPEAVDragManagerClientProxy@@@Z @ 0x180093940 (--$IsShellClient@VDragManagerClientProxy@@@@YA_NPEAVDragManagerClientProxy@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801D3010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall ShellGesturesProcessor::RegisterGestureSource(
        ShellGesturesProcessor *a1,
        unsigned __int64 a2,
        int a3,
        int a4,
        struct DragManagerClientProxy *a5)
{
  struct DragManagerClientProxy *v9; // r14
  struct DragManagerClientProxy *v10; // rsi
  __int64 result; // rax
  __int64 v12; // rax
  __int64 v13; // rbx
  ShellGesturesProcessor::GestureRegistration *v14; // rax
  int v15; // edi
  int v16; // edi
  _BYTE v17[16]; // [rsp+20h] [rbp-30h] BYREF
  unsigned __int64 v18; // [rsp+30h] [rbp-20h] BYREF
  int v19; // [rsp+38h] [rbp-18h]
  int v20; // [rsp+3Ch] [rbp-14h]
  struct DragManagerClientProxy *v21; // [rsp+40h] [rbp-10h]
  bool v22; // [rsp+48h] [rbp-8h]
  int v23; // [rsp+49h] [rbp-7h]
  __int16 v24; // [rsp+4Dh] [rbp-3h]
  char v25; // [rsp+4Fh] [rbp-1h]
  int v26; // [rsp+90h] [rbp+40h] BYREF

  v9 = a5;
  ShellGesturesProcessor::UnregisterGestureSource(a1, a2, a5);
  v19 = 0;
  v20 = 0;
  v10 = 0LL;
  v21 = 0LL;
  v22 = 0;
  v23 = 0;
  v24 = 0;
  v25 = 0;
  v18 = a2;
  if ( v9 )
  {
    (**(void (__fastcall ***)(struct DragManagerClientProxy *))v9)(v9);
    v10 = v9;
    v21 = v9;
  }
  v19 = a4;
  result = IsShellClient<DragManagerClientProxy>(v9);
  v22 = (_BYTE)result == 0;
  if ( !a3 )
  {
    v26 = 1;
    goto LABEL_5;
  }
  v15 = a3 - 1;
  if ( !v15 )
  {
    v26 = 2;
LABEL_5:
    v12 = std::_Hash<std::_Umap_traits<enum ShellEdgyRecognizer::EdgyLocation,std::vector<ShellGesturesProcessor::GestureRegistration>,std::_Uhash_compare<enum ShellEdgyRecognizer::EdgyLocation,std::hash<enum ShellEdgyRecognizer::EdgyLocation>,std::equal_to<enum ShellEdgyRecognizer::EdgyLocation>>,std::allocator<std::pair<enum ShellEdgyRecognizer::EdgyLocation const,std::vector<ShellGesturesProcessor::GestureRegistration>>>,0>>::_Try_emplace<enum ShellEdgyRecognizer::EdgyLocation const &,>(
            (char *)a1 + 32,
            v17,
            &v26);
    v13 = *(_QWORD *)v12;
    v14 = *(ShellGesturesProcessor::GestureRegistration **)(*(_QWORD *)v12 + 32LL);
    if ( v14 == *(ShellGesturesProcessor::GestureRegistration **)(v13 + 40) )
    {
      result = std::vector<ShellGesturesProcessor::GestureRegistration>::_Emplace_reallocate<ShellGesturesProcessor::GestureRegistration const &>(
                 v13 + 24,
                 v14,
                 &v18);
      v10 = v21;
    }
    else
    {
      result = ShellGesturesProcessor::GestureRegistration::GestureRegistration(
                 v14,
                 (const struct ShellGesturesProcessor::GestureRegistration *)&v18);
      *(_QWORD *)(v13 + 32) += 32LL;
    }
    goto LABEL_7;
  }
  v16 = v15 - 1;
  if ( !v16 )
  {
    v26 = 4;
    goto LABEL_5;
  }
  if ( v16 == 1 )
  {
    v26 = 8;
    goto LABEL_5;
  }
  v26 = 0;
LABEL_7:
  if ( v10 )
    return (*(__int64 (__fastcall **)(struct DragManagerClientProxy *))(*(_QWORD *)v10 + 8LL))(v10);
  return result;
}
