/*
 * XREFs of ?OnRemoveDevice@InjectionRawInputProvider@@QEAAJPEAVInputInjectionClientProxy@@@Z @ 0x1800E24D4
 * Callers:
 *     ?OnDisconnected@InputInjectionClientProxy@@MEAAJXZ @ 0x18019D800 (-OnDisconnected@InputInjectionClientProxy@@MEAAJXZ.c)
 * Callees:
 *     ??$find@X@?$_Hash@V?$_Umap_traits@KUPointerCache@EdgyProcessor@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKUPointerCache@EdgyProcessor@@@std@@@4@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUPointerCache@EdgyProcessor@@@std@@@std@@@std@@@1@AEBK@Z @ 0x1800274C8 (--$find@X@-$_Hash@V-$_Umap_traits@KUPointerCache@EdgyProcessor@@V-$_Uhash_compare@KU-$hash@K@std.c)
 *     ??$?RW4_Button@@@?$_Uhash_compare@W4_Button@@U?$hash@W4_Button@@@std@@U?$equal_to@W4_Button@@@3@@std@@QEBA_KAEBW4_Button@@@Z @ 0x180027528 (--$-RW4_Button@@@-$_Uhash_compare@W4_Button@@U-$hash@W4_Button@@@std@@U-$equal_to@W4_Button@@@3@.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008F754 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$_Freenode@V?$allocator@U?$_List_node@U?$pair@$$CBKV?$unique_ptr@ULegacyDeviceInfo@@U?$default_delete@ULegacyDeviceInfo@@@std@@@std@@@std@@PEAX@std@@@std@@@?$_List_node@U?$pair@$$CBKV?$unique_ptr@ULegacyDeviceInfo@@U?$default_delete@ULegacyDeviceInfo@@@std@@@std@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@U?$pair@$$CBKV?$unique_ptr@ULegacyDeviceInfo@@U?$default_delete@ULegacyDeviceInfo@@@std@@@std@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x180090390 (--$_Freenode@V-$allocator@U-$_List_node@U-$pair@$$CBKV-$unique_ptr@ULegacyDeviceInfo@@U-$default.c)
 *     ??$_Freenode@V?$allocator@U?$_List_node@U?$pair@$$CBKV?$unique_ptr@VInputInfoValidator@@U?$default_delete@VInputInfoValidator@@@std@@@std@@@std@@PEAX@std@@@std@@@?$_List_node@U?$pair@$$CBKV?$unique_ptr@VInputInfoValidator@@U?$default_delete@VInputInfoValidator@@@std@@@std@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@U?$pair@$$CBKV?$unique_ptr@VInputInfoValidator@@U?$default_delete@VInputInfoValidator@@@std@@@std@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x1800E16D8 (--$_Freenode@V-$allocator@U-$_List_node@U-$pair@$$CBKV-$unique_ptr@VInputInfoValidator@@U-$defau.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DB010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall InjectionRawInputProvider::OnRemoveDevice(
        InjectionRawInputProvider *this,
        struct InputInjectionClientProxy *a2)
{
  __int64 *v3; // rbx
  __int64 v4; // rcx
  __int64 v5; // rax
  __int64 *v6; // r10
  __int64 v7; // r11
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rcx
  int v11; // eax
  __int64 v12; // rcx
  unsigned int v13; // esi
  __int64 v15; // rax
  __int64 v16; // rcx
  __int64 v17; // rdx
  __int64 v18; // rax
  __int64 v19; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v21; // [rsp+30h] [rbp+8h] BYREF
  __int64 v22; // [rsp+38h] [rbp+10h] BYREF

  LODWORD(v21) = *((_DWORD *)a2 + 10);
  std::_Hash<std::_Umap_traits<unsigned long,EdgyProcessor::PointerCache,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,EdgyProcessor::PointerCache>>,0>>::find<void>(
    (__int64)this + 40,
    (__int64)&v22,
    &v21);
  v3 = (__int64 *)v22;
  if ( v22 != *((_QWORD *)this + 6) )
  {
    std::_Hash<std::_Umap_traits<unsigned long,EdgyProcessor::PointerCache,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,EdgyProcessor::PointerCache>>,0>>::find<void>(
      (__int64)this + 104,
      (__int64)&v21,
      *(_DWORD **)(v22 + 24));
    if ( v21 != *((_QWORD *)this + 14) )
    {
      v5 = std::_Uhash_compare<enum _Button,std::hash<enum _Button>,std::equal_to<enum _Button>>::operator()<enum _Button>(
             v4,
             v21 + 16);
      v8 = *((_QWORD *)this + 16);
      v9 = 2 * (*((_QWORD *)this + 19) & v5);
      if ( *(__int64 **)(v8 + 16 * (*((_QWORD *)this + 19) & v5) + 8) == v6 )
      {
        if ( *(__int64 **)(v8 + 16 * (*((_QWORD *)this + 19) & v5)) == v6 )
          *(_QWORD *)(v8 + 16 * (*((_QWORD *)this + 19) & v5)) = v7;
        else
          v7 = v6[1];
        *(_QWORD *)(v8 + 8 * v9 + 8) = v7;
      }
      else if ( *(__int64 **)(v8 + 16 * (*((_QWORD *)this + 19) & v5)) == v6 )
      {
        *(_QWORD *)(v8 + 16 * (*((_QWORD *)this + 19) & v5)) = *v6;
      }
      v10 = *v6;
      --*((_QWORD *)this + 15);
      *(_QWORD *)v6[1] = v10;
      *(_QWORD *)(v10 + 8) = v6[1];
      std::_List_node<std::pair<unsigned long const,std::unique_ptr<InputInfoValidator>>,void *>::_Freenode<std::allocator<std::_List_node<std::pair<unsigned long const,std::unique_ptr<InputInfoValidator>>,void *>>>(
        v10,
        (char *)v6);
    }
    v11 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 3) + 64LL))(*((_QWORD *)this + 3), v3[3]);
    v13 = v11;
    if ( v11 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x9B,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\injection\\lib\\injectionrawinputprovider.cpp",
        (const char *)(unsigned int)v11);
      return v13;
    }
    v15 = std::_Uhash_compare<enum _Button,std::hash<enum _Button>,std::equal_to<enum _Button>>::operator()<enum _Button>(
            v12,
            (__int64)(v3 + 2));
    v16 = *((_QWORD *)this + 8);
    v17 = 2 * (*((_QWORD *)this + 11) & v15);
    if ( *(__int64 **)(v16 + 16 * (*((_QWORD *)this + 11) & v15) + 8) == v3 )
    {
      if ( *(__int64 **)(v16 + 16 * (*((_QWORD *)this + 11) & v15)) == v3 )
      {
        v18 = *((_QWORD *)this + 6);
        *(_QWORD *)(v16 + 8 * v17) = v18;
      }
      else
      {
        v18 = v3[1];
      }
      *(_QWORD *)(v16 + 8 * v17 + 8) = v18;
    }
    else if ( *(__int64 **)(v16 + 16 * (*((_QWORD *)this + 11) & v15)) == v3 )
    {
      *(_QWORD *)(v16 + 16 * (*((_QWORD *)this + 11) & v15)) = *v3;
    }
    v19 = *v3;
    --*((_QWORD *)this + 7);
    *(_QWORD *)v3[1] = v19;
    *(_QWORD *)(v19 + 8) = v3[1];
    std::_List_node<std::pair<unsigned long const,std::unique_ptr<LegacyDeviceInfo>>,void *>::_Freenode<std::allocator<std::_List_node<std::pair<unsigned long const,std::unique_ptr<LegacyDeviceInfo>>,void *>>>(
      v19,
      (char *)v3);
  }
  return 0LL;
}
