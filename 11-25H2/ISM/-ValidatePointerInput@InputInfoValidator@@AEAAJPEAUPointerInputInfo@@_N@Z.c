/*
 * XREFs of ?ValidatePointerInput@InputInfoValidator@@AEAAJPEAUPointerInputInfo@@_N@Z @ 0x180194EA8
 * Callers:
 *     ?OnInputReport@InputInfoValidator@@QEAAJPEAUInputInfo@@_N@Z @ 0x180194DE0 (-OnInputReport@InputInfoValidator@@QEAAJPEAUInputInfo@@_N@Z.c)
 * Callees:
 *     ??$find@X@?$_Hash@V?$_Umap_traits@KUPointerCache@EdgyProcessor@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKUPointerCache@EdgyProcessor@@@std@@@4@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUPointerCache@EdgyProcessor@@@std@@@std@@@std@@@1@AEBK@Z @ 0x180026F08 (--$find@X@-$_Hash@V-$_Umap_traits@KUPointerCache@EdgyProcessor@@V-$_Uhash_compare@KU-$hash@K@std.c)
 *     ??$?RW4_Button@@@?$_Uhash_compare@W4_Button@@U?$hash@W4_Button@@@std@@U?$equal_to@W4_Button@@@3@@std@@QEBA_KAEBW4_Button@@@Z @ 0x180026F68 (--$-RW4_Button@@@-$_Uhash_compare@W4_Button@@U-$hash@W4_Button@@@std@@U-$equal_to@W4_Button@@@3@.c)
 *     ??$_Find_last@K@?$_Hash@V?$_Umap_traits@KV?$ComPtr@VBamoControllerNavigationClientProxy@@@WRL@Microsoft@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKV?$ComPtr@VBamoControllerNavigationClientProxy@@@WRL@Microsoft@@@std@@@5@$0A@@std@@@std@@IEBA?AU?$_Hash_find_last_result@PEAU?$_List_node@U?$pair@$$CBKV?$ComPtr@VBamoControllerNavigationClientProxy@@@WRL@Microsoft@@@std@@PEAX@std@@@1@AEBK_K@Z @ 0x1800515EC (--$_Find_last@K@-$_Hash@V-$_Umap_traits@KV-$ComPtr@VBamoControllerNavigationClientProxy@@@WRL@Mi.c)
 *     ??1?$_Hash@V?$_Umap_traits@KPEAUIRawInputProvider@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKPEAUIRawInputProvider@@@std@@@3@$0A@@std@@@std@@QEAA@XZ @ 0x1800904A8 (--1-$_Hash@V-$_Umap_traits@KPEAUIRawInputProvider@@V-$_Uhash_compare@KU-$hash@K@std@@U-$equal_to.c)
 *     ??0?$unordered_map@K_KU?$hash@K@std@@U?$equal_to@K@2@V?$allocator@U?$pair@$$CBK_K@std@@@2@@std@@QEAA@XZ @ 0x1801481FC (--0-$unordered_map@K_KU-$hash@K@std@@U-$equal_to@K@2@V-$allocator@U-$pair@$$CBK_K@std@@@2@@std@@.c)
 *     ??$_Insert_or_assign@AEBKAEAUPointerState@InputInfoValidator@@@?$unordered_map@KUPointerState@InputInfoValidator@@U?$hash@K@std@@U?$equal_to@K@4@V?$allocator@U?$pair@$$CBKUPointerState@InputInfoValidator@@@std@@@4@@std@@AEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUPointerState@InputInfoValidator@@@std@@@std@@@std@@@std@@_N@1@AEBKAEAUPointerState@InputInfoValidator@@@Z @ 0x180194BF4 (--$_Insert_or_assign@AEBKAEAUPointerState@InputInfoValidator@@@-$unordered_map@KUPointerState@In.c)
 *     ?clear@?$_Hash@V?$_Umap_traits@KPEAUDeviceInfo@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKPEAUDeviceInfo@@@std@@@3@$0A@@std@@@std@@QEAAXXZ @ 0x18019518C (-clear@-$_Hash@V-$_Umap_traits@KPEAUDeviceInfo@@V-$_Uhash_compare@KU-$hash@K@std@@U-$equal_to@K@.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall InputInfoValidator::ValidatePointerInput(
        InputInfoValidator *this,
        struct PointerInputInfo *a2,
        char a3)
{
  __int64 v5; // rcx
  unsigned int v6; // esi
  unsigned int i; // r14d
  int v8; // r13d
  int v9; // edi
  int v10; // ebx
  char v11; // di
  __int64 ***v13; // rdi
  __int64 **j; // rbx
  __int64 v15; // rax
  _DWORD *v16; // rdx
  _QWORD *v17; // rax
  __int64 *v18; // rdi
  __int64 *k; // rbx
  __int64 v20; // [rsp+20h] [rbp-60h] BYREF
  int v21; // [rsp+28h] [rbp-58h]
  _QWORD v22[2]; // [rsp+30h] [rbp-50h] BYREF
  __int64 v23; // [rsp+40h] [rbp-40h] BYREF
  __int64 *v24; // [rsp+48h] [rbp-38h]
  __int64 v25; // [rsp+C8h] [rbp+48h] BYREF
  int v26; // [rsp+D0h] [rbp+50h] BYREF
  __int64 *v27; // [rsp+D8h] [rbp+58h] BYREF

  LOBYTE(v26) = a3;
  std::unordered_map<unsigned long,unsigned __int64>::unordered_map<unsigned long,unsigned __int64>((__int64)&v23);
  v6 = 0;
  for ( i = 0; i < *((_DWORD *)a2 + 79); ++i )
  {
    v8 = *((_DWORD *)a2 + 36 * i + 81);
    LODWORD(v25) = v8;
    v9 = *((_DWORD *)a2 + 36 * i + 83);
    HIDWORD(v25) = v9;
    v26 = v8;
    std::_Hash<std::_Umap_traits<unsigned long,EdgyProcessor::PointerCache,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,EdgyProcessor::PointerCache>>,0>>::find<void>(
      (__int64)&v23,
      (__int64)&v27,
      &v26);
    if ( v27 != v24 )
      goto LABEL_6;
    v10 = v9 & 2;
    if ( (v9 & 4) != 0 )
    {
      v11 = 1;
      if ( !v10 )
        goto LABEL_6;
    }
    else
    {
      v11 = 0;
    }
    v26 = v8;
    std::_Hash<std::_Umap_traits<unsigned long,EdgyProcessor::PointerCache,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,EdgyProcessor::PointerCache>>,0>>::find<void>(
      (__int64)this + 16,
      (__int64)&v20,
      &v26);
    if ( (v20 == *((_QWORD *)this + 3)
       || (*(_QWORD *)(v20 + 20) & 0x200000000LL) == 0 && (*(_QWORD *)(v20 + 20) & 0x400000000LL) == 0)
      && !v10
      && !v11 )
    {
LABEL_6:
      v6 = -2147467259;
      goto LABEL_7;
    }
    v26 = v8;
    std::unordered_map<unsigned long,InputInfoValidator::PointerState>::_Insert_or_assign<unsigned long const &,InputInfoValidator::PointerState &>(
      &v23,
      (__int64)v22,
      &v26,
      &v25);
  }
  v13 = (__int64 ***)*((_QWORD *)this + 3);
  for ( j = *v13; j != (__int64 **)v13; j = (__int64 **)*j )
  {
    v15 = std::_Uhash_compare<enum _Button,std::hash<enum _Button>,std::equal_to<enum _Button>>::operator()<enum _Button>(
            v5,
            (__int64)j + 20);
    v17 = std::_Hash<std::_Umap_traits<unsigned long,Microsoft::WRL::ComPtr<BamoControllerNavigationClientProxy>,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,Microsoft::WRL::ComPtr<BamoControllerNavigationClientProxy>>>,0>>::_Find_last<unsigned long>(
            &v23,
            v22,
            v16,
            v15);
    if ( ((_BYTE)j[3] & 2) != 0 && !v17[1] )
      goto LABEL_6;
  }
  std::_Hash<std::_Umap_traits<unsigned long,DeviceInfo *,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,DeviceInfo *>>,0>>::clear((char *)this + 16);
  v18 = v24;
  for ( k = (__int64 *)*v24; k != v18; k = (__int64 *)*k )
  {
    v20 = k[2];
    v21 = *((_DWORD *)k + 6);
    std::unordered_map<unsigned long,InputInfoValidator::PointerState>::_Insert_or_assign<unsigned long const &,InputInfoValidator::PointerState &>(
      (_QWORD *)this + 2,
      (__int64)v22,
      (_DWORD *)&v20 + 1,
      (__int64 *)((char *)&v20 + 4));
  }
LABEL_7:
  std::_Hash<std::_Umap_traits<unsigned long,IRawInputProvider *,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,IRawInputProvider *>>,0>>::~_Hash<std::_Umap_traits<unsigned long,IRawInputProvider *,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,IRawInputProvider *>>,0>>((__int64)&v23);
  return v6;
}
