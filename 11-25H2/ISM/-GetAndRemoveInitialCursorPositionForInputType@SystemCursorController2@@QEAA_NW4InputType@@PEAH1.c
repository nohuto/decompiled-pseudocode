/*
 * XREFs of ?GetAndRemoveInitialCursorPositionForInputType@SystemCursorController2@@QEAA_NW4InputType@@PEAH1@Z @ 0x1800F5728
 * Callers:
 *     ?OnCursorCreated@SystemCursorService2@@UEAAJUCursorId@@UCursorCreateData@@@Z @ 0x1800F87B0 (-OnCursorCreated@SystemCursorService2@@UEAAJUCursorId@@UCursorCreateData@@@Z.c)
 * Callees:
 *     ??$?RW4_Button@@@?$_Uhash_compare@W4_Button@@U?$hash@W4_Button@@@std@@U?$equal_to@W4_Button@@@3@@std@@QEBA_KAEBW4_Button@@@Z @ 0x180026F68 (--$-RW4_Button@@@-$_Uhash_compare@W4_Button@@U-$hash@W4_Button@@@std@@U-$equal_to@W4_Button@@@3@.c)
 *     ??$_Find_last@K@?$_Hash@V?$_Umap_traits@KPEAUIRawInputProvider@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKPEAUIRawInputProvider@@@std@@@3@$0A@@std@@@std@@IEBA?AU?$_Hash_find_last_result@PEAU?$_List_node@U?$pair@$$CBKPEAUIRawInputProvider@@@std@@PEAX@std@@@1@AEBK_K@Z @ 0x18003DF60 (--$_Find_last@K@-$_Hash@V-$_Umap_traits@KPEAUIRawInputProvider@@V-$_Uhash_compare@KU-$hash@K@std.c)
 *     ??$_Erase@K@?$_Hash@V?$_Umap_traits@KPEAUIRawInputProvider@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKPEAUIRawInputProvider@@@std@@@3@$0A@@std@@@std@@AEAA_KAEBK@Z @ 0x18003F9A0 (--$_Erase@K@-$_Hash@V-$_Umap_traits@KPEAUIRawInputProvider@@V-$_Uhash_compare@KU-$hash@K@std@@U-.c)
 *     ??$_Try_emplace@AEBW4InputType@@$$V@?$_Hash@V?$_Umap_traits@W4InputType@@UtagPOINT@@V?$_Uhash_compare@W4InputType@@U?$hash@W4InputType@@@std@@U?$equal_to@W4InputType@@@3@@std@@V?$allocator@U?$pair@$$CBW4InputType@@UtagPOINT@@@std@@@4@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_List_node@U?$pair@$$CBW4InputType@@UtagPOINT@@@std@@PEAX@std@@_N@1@AEBW4InputType@@@Z @ 0x1800F4474 (--$_Try_emplace@AEBW4InputType@@$$V@-$_Hash@V-$_Umap_traits@W4InputType@@UtagPOINT@@V-$_Uhash_co.c)
 */

char __fastcall SystemCursorController2::GetAndRemoveInitialCursorPositionForInputType(
        __int64 a1,
        int a2,
        _DWORD *a3,
        _DWORD *a4)
{
  float *v4; // rbx
  __int64 v7; // rax
  __int64 *v8; // rcx
  __int64 v9; // r10
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 *v13[3]; // [rsp+20h] [rbp-18h] BYREF
  int v14; // [rsp+48h] [rbp+10h] BYREF

  v14 = a2;
  *a3 = 0;
  *a4 = 0;
  v4 = (float *)(a1 + 96);
  v7 = std::_Uhash_compare<enum _Button,std::hash<enum _Button>,std::equal_to<enum _Button>>::operator()<enum _Button>(
         a1,
         (__int64)&v14);
  v8 = std::_Hash<std::_Umap_traits<unsigned long,IRawInputProvider *,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,IRawInputProvider *>>,0>>::_Find_last<unsigned long>(
         v4,
         v13,
         &v14,
         v7)[1];
  if ( !v8 )
    v8 = (__int64 *)*((_QWORD *)v4 + 1);
  if ( v8 == *(__int64 **)(v9 + 104) )
    return 0;
  v10 = std::_Hash<std::_Umap_traits<enum InputType,tagPOINT,std::_Uhash_compare<enum InputType,std::hash<enum InputType>,std::equal_to<enum InputType>>,std::allocator<std::pair<enum InputType const,tagPOINT>>,0>>::_Try_emplace<enum InputType const &,>(
          v4,
          (__int64)v13,
          &v14);
  v11 = *(_QWORD *)v10;
  *a3 = *(_DWORD *)(*(_QWORD *)v10 + 20LL);
  *a4 = *(_DWORD *)(v11 + 24);
  std::_Hash<std::_Umap_traits<unsigned long,IRawInputProvider *,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,IRawInputProvider *>>,0>>::_Erase<unsigned long>(
    (__int64)v4,
    (__int64)&v14);
  return 1;
}
