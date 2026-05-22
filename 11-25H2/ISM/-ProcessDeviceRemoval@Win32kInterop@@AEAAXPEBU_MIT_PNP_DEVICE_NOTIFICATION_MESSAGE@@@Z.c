/*
 * XREFs of ?ProcessDeviceRemoval@Win32kInterop@@AEAAXPEBU_MIT_PNP_DEVICE_NOTIFICATION_MESSAGE@@@Z @ 0x1800505CC
 * Callers:
 *     _lambda_2b41a082a50d31d24644deaedcc451d5_::operator() @ 0x1800507DC (_lambda_2b41a082a50d31d24644deaedcc451d5_--operator().c)
 * Callees:
 *     ??$?RW4_Button@@@?$_Uhash_compare@W4_Button@@U?$hash@W4_Button@@@std@@U?$equal_to@W4_Button@@@3@@std@@QEBA_KAEBW4_Button@@@Z @ 0x180026F68 (--$-RW4_Button@@@-$_Uhash_compare@W4_Button@@U-$hash@W4_Button@@@std@@U-$equal_to@W4_Button@@@3@.c)
 *     ?IsDeviceAttached@Win32kInterop@@AEAA_NK_N@Z @ 0x180050A48 (-IsDeviceAttached@Win32kInterop@@AEAA_NK_N@Z.c)
 *     ??$_Erase@K@?$_Hash@V?$_Umap_traits@KV?$ComPtr@UIContextualProcessorBufferTarget@@@WRL@Microsoft@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKV?$ComPtr@UIContextualProcessorBufferTarget@@@WRL@Microsoft@@@std@@@5@$0A@@std@@@std@@AEAA_KAEBK@Z @ 0x180051548 (--$_Erase@K@-$_Hash@V-$_Umap_traits@KV-$ComPtr@UIContextualProcessorBufferTarget@@@WRL@Microsoft.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008DFBC (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$_Erase@K@?$_Hash@V?$_Umap_traits@KV?$unordered_map@KUTargetingInfo@Win32kInterop@@U?$hash@K@std@@U?$equal_to@K@4@V?$allocator@U?$pair@$$CBKUTargetingInfo@Win32kInterop@@@std@@@4@@std@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@2@V?$allocator@U?$pair@$$CBKV?$unordered_map@KUTargetingInfo@Win32kInterop@@U?$hash@K@std@@U?$equal_to@K@4@V?$allocator@U?$pair@$$CBKUTargetingInfo@Win32kInterop@@@std@@@4@@std@@@std@@@2@$0A@@std@@@std@@AEAA_KAEBK@Z @ 0x18008F6C8 (--$_Erase@K@-$_Hash@V-$_Umap_traits@KV-$unordered_map@KUTargetingInfo@Win32kInterop@@U-$hash@K@s.c)
 *     ??$_Freenode@V?$allocator@U?$_List_node@U?$pair@$$CBKV?$unique_ptr@ULegacyDeviceInfo@@U?$default_delete@ULegacyDeviceInfo@@@std@@@std@@@std@@PEAX@std@@@std@@@?$_List_node@U?$pair@$$CBKV?$unique_ptr@ULegacyDeviceInfo@@U?$default_delete@ULegacyDeviceInfo@@@std@@@std@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@U?$pair@$$CBKV?$unique_ptr@ULegacyDeviceInfo@@U?$default_delete@ULegacyDeviceInfo@@@std@@@std@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x180090080 (--$_Freenode@V-$allocator@U-$_List_node@U-$pair@$$CBKV-$unique_ptr@ULegacyDeviceInfo@@U-$default.c)
 *     ?ProcessDeviceRemoval@Win32kInterop@InputETW@@SAXK@Z @ 0x18009B60C (-ProcessDeviceRemoval@Win32kInterop@InputETW@@SAXK@Z.c)
 *     ??$erase@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKPEAVInputInfoValidator@@@std@@@std@@@std@@@std@@$0A@@?$_Hash@V?$_Umap_traits@KPEAVInputInfoValidator@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKPEAVInputInfoValidator@@@std@@@3@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKPEAVInputInfoValidator@@@std@@@std@@@std@@@1@V21@@Z @ 0x1800EE178 (--$erase@V-$_List_iterator@V-$_List_val@U-$_List_simple_types@U-$pair@$$CBKPEAVInputInfoValidato.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801D3010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall Win32kInterop::ProcessDeviceRemoval(
        Win32kInterop *this,
        const struct _MIT_PNP_DEVICE_NOTIFICATION_MESSAGE *a2)
{
  unsigned int v2; // edi
  __int64 v4; // rbp
  unsigned __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 *v10; // rbx
  __int64 *v11; // rax
  int v12; // eax
  __int64 v13; // r9
  unsigned __int64 i; // rcx
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // rdi
  __int64 v20; // rcx
  __int64 v21; // rax
  __int64 v22; // rcx
  __int64 v23; // rdx
  __int64 v24; // rax
  __int64 v25; // rcx
  int v26; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  unsigned int v28; // [rsp+48h] [rbp+10h] BYREF
  char v29; // [rsp+50h] [rbp+18h] BYREF

  v2 = *((_DWORD *)a2 + 1);
  v28 = v2;
  if ( Win32kInterop::IsDeviceAttached(this, v2, 0) )
  {
    InputETW::Win32kInterop::ProcessDeviceRemoval(v2);
    v4 = 0xCBF29CE484222325uLL;
    v5 = 0LL;
    v6 = 0xCBF29CE484222325uLL;
    do
    {
      v7 = *((unsigned __int8 *)&v28 + v5++);
      v6 = 0x100000001B3LL * (v7 ^ v6);
    }
    while ( v5 < 4 );
    v8 = *((_QWORD *)this + 11);
    v9 = 2 * (*((_QWORD *)this + 14) & v6);
    v10 = *(__int64 **)(v8 + 8 * v9 + 8);
    if ( v10 == *((__int64 **)this + 9) )
    {
LABEL_9:
      v10 = 0LL;
    }
    else
    {
      v11 = *(__int64 **)(v8 + 8 * v9);
      while ( v2 != *((_DWORD *)v10 + 4) )
      {
        if ( v10 == v11 )
          goto LABEL_9;
        v10 = (__int64 *)v10[1];
      }
    }
    if ( !v10 )
      v10 = (__int64 *)*((_QWORD *)this + 9);
    if ( v10 == *((__int64 **)this + 9) )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x239,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputhosts\\components\\win32kinterop\\lib\\win32kinterop.cpp",
        (const char *)0x80004005LL,
        v26);
    v12 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 7) + 56LL))(*((_QWORD *)this + 7), v10[3]);
    if ( v12 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x23D,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputhosts\\components\\win32kinterop\\lib\\win32kinterop.cpp",
        (const char *)(unsigned int)v12,
        v26);
    for ( i = 0LL; i < 4; ++i )
    {
      v15 = *((unsigned __int8 *)&v28 + i);
      v4 = 0x100000001B3LL * (v15 ^ v4);
    }
    v16 = *((_QWORD *)this + 19);
    v17 = *((_QWORD *)this + 17);
    v18 = *(_QWORD *)(v16 + 16 * (v4 & *((_QWORD *)this + 22)) + 8);
    if ( v18 == v17 )
    {
LABEL_23:
      v18 = 0LL;
    }
    else
    {
      v13 = *(_QWORD *)(v16 + 16 * (v4 & *((_QWORD *)this + 22)));
      while ( v2 != *(_DWORD *)(v18 + 16) )
      {
        if ( v18 == v13 )
          goto LABEL_23;
        v18 = *(_QWORD *)(v18 + 8);
      }
    }
    if ( !v18 )
      v18 = *((_QWORD *)this + 17);
    if ( v18 != v17 )
    {
      v19 = *(_QWORD *)(v18 + 24);
      std::_Hash<std::_Umap_traits<unsigned long,InputInfoValidator *,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,InputInfoValidator *>>,0>>::erase<std::_List_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned long const,InputInfoValidator *>>>>,0>(
        (char *)this + 128,
        &v29,
        v18,
        v13);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
    }
    std::_Hash<std::_Umap_traits<unsigned long,std::unordered_map<unsigned long,Win32kInterop::TargetingInfo>,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,std::unordered_map<unsigned long,Win32kInterop::TargetingInfo>>>,0>>::_Erase<unsigned long>(
      (char *)this + 288,
      &v28,
      v18,
      v13);
    std::_Hash<std::_Umap_traits<unsigned long,Microsoft::WRL::ComPtr<IContextualProcessorBufferTarget>,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,Microsoft::WRL::ComPtr<IContextualProcessorBufferTarget>>>,0>>::_Erase<unsigned long>(
      (char *)this + 352,
      &v28);
    v21 = std::_Uhash_compare<enum _Button,std::hash<enum _Button>,std::equal_to<enum _Button>>::operator()<enum _Button>(
            v20,
            (__int64)(v10 + 2));
    v22 = *((_QWORD *)this + 11);
    v23 = 2 * (*((_QWORD *)this + 14) & v21);
    if ( *(__int64 **)(v22 + 16 * (*((_QWORD *)this + 14) & v21) + 8) == v10 )
    {
      if ( *(__int64 **)(v22 + 16 * (*((_QWORD *)this + 14) & v21)) == v10 )
      {
        v24 = *((_QWORD *)this + 9);
        *(_QWORD *)(v22 + 8 * v23) = v24;
      }
      else
      {
        v24 = v10[1];
      }
      *(_QWORD *)(v22 + 8 * v23 + 8) = v24;
    }
    else if ( *(__int64 **)(v22 + 16 * (*((_QWORD *)this + 14) & v21)) == v10 )
    {
      *(_QWORD *)(v22 + 16 * (*((_QWORD *)this + 14) & v21)) = *v10;
    }
    v25 = *v10;
    --*((_QWORD *)this + 10);
    *(_QWORD *)v10[1] = v25;
    *(_QWORD *)(v25 + 8) = v10[1];
    std::_List_node<std::pair<unsigned long const,std::unique_ptr<LegacyDeviceInfo>>,void *>::_Freenode<std::allocator<std::_List_node<std::pair<unsigned long const,std::unique_ptr<LegacyDeviceInfo>>,void *>>>(
      v25,
      v10);
  }
}
