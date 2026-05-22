/*
 * XREFs of ?ProcessResult@DragNDropProcessor@@QEAAJKAEBUDragOperationResult@Input@Internal@UI@Windows@@PEAVBamoDragManagerClientProxy@@@Z @ 0x18014B518
 * Callers:
 *     ?ProcessResult@GestureServices@@MEAAJPEAVBamoGestureServicesStub@@IAEBUDragOperationResult@Input@Internal@UI@Windows@@PEAVBamoDragManagerClientProxy@@@Z @ 0x180140EA0 (-ProcessResult@GestureServices@@MEAAJPEAVBamoGestureServicesStub@@IAEBUDragOperationResult@Input.c)
 * Callees:
 *     ??$?RW4_Button@@@?$_Uhash_compare@W4_Button@@U?$hash@W4_Button@@@std@@U?$equal_to@W4_Button@@@3@@std@@QEBA_KAEBW4_Button@@@Z @ 0x180026F68 (--$-RW4_Button@@@-$_Uhash_compare@W4_Button@@U-$hash@W4_Button@@@std@@U-$equal_to@W4_Button@@@3@.c)
 *     ??$_Find_last@K@?$_Hash@V?$_Umap_traits@KV?$ComPtr@VBamoControllerNavigationClientProxy@@@WRL@Microsoft@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKV?$ComPtr@VBamoControllerNavigationClientProxy@@@WRL@Microsoft@@@std@@@5@$0A@@std@@@std@@IEBA?AU?$_Hash_find_last_result@PEAU?$_List_node@U?$pair@$$CBKV?$ComPtr@VBamoControllerNavigationClientProxy@@@WRL@Microsoft@@@std@@PEAX@std@@@1@AEBK_K@Z @ 0x1800515EC (--$_Find_last@K@-$_Hash@V-$_Umap_traits@KV-$ComPtr@VBamoControllerNavigationClientProxy@@@WRL@Mi.c)
 *     ??$_Erase@K@?$_Hash@V?$_Umap_traits@KUResultInfo@DragNDropProcessor@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKUResultInfo@DragNDropProcessor@@@std@@@4@$0A@@std@@@std@@AEAA_KAEBK@Z @ 0x18014713C (--$_Erase@K@-$_Hash@V-$_Umap_traits@KUResultInfo@DragNDropProcessor@@V-$_Uhash_compare@KU-$hash@.c)
 *     ?TryActivate@ActivationProcessor@@QEAA_NUActivationInformation@@@Z @ 0x18019D460 (-TryActivate@ActivationProcessor@@QEAA_NUActivationInformation@@@Z.c)
 */

__int64 __fastcall DragNDropProcessor::ProcessResult(
        DragNDropProcessor *this,
        int a2,
        const struct Windows::UI::Internal::Input::DragOperationResult *a3,
        struct BamoDragManagerClientProxy *a4)
{
  _QWORD *v6; // rbx
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  _QWORD v11[3]; // [rsp+20h] [rbp-18h] BYREF
  int v12; // [rsp+48h] [rbp+10h] BYREF

  v12 = a2;
  v6 = (_QWORD *)((char *)this + 176);
  v7 = std::_Uhash_compare<enum _Button,std::hash<enum _Button>,std::equal_to<enum _Button>>::operator()<enum _Button>(
         (__int64)this,
         (__int64)&v12);
  v8 = std::_Hash<std::_Umap_traits<unsigned long,Microsoft::WRL::ComPtr<BamoControllerNavigationClientProxy>,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,Microsoft::WRL::ComPtr<BamoControllerNavigationClientProxy>>>,0>>::_Find_last<unsigned long>(
         v6,
         v11,
         &v12,
         v7)[1];
  if ( !v8 )
    v8 = v6[1];
  if ( v8 != *((_QWORD *)this + 23) )
  {
    if ( *(_BYTE *)a3 && *(_QWORD *)(v8 + 40) )
    {
      v11[0] = *(_QWORD *)(v8 + 40);
      v11[1] = *((unsigned int *)a3 + 1);
      ActivationProcessor::TryActivate(v9, v11);
    }
    std::_Hash<std::_Umap_traits<unsigned long,DragNDropProcessor::ResultInfo,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,DragNDropProcessor::ResultInfo>>,0>>::_Erase<unsigned long>(
      v6,
      (__int64)&v12);
  }
  return 0LL;
}
