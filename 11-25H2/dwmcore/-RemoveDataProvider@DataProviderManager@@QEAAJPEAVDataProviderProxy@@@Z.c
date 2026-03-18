/*
 * XREFs of ?RemoveDataProvider@DataProviderManager@@QEAAJPEAVDataProviderProxy@@@Z @ 0x180268A88
 * Callers:
 *     ?Unregister@DataProviderRegistrarPrincipal@@MEAAJPEAVBamoDataProviderRegistrarStub@@PEAVBamoDataProviderProxy@@@Z @ 0x18027B8F0 (-Unregister@DataProviderRegistrarPrincipal@@MEAAJPEAVBamoDataProviderRegistrarStub@@PEAVBamoData.c)
 *     ?OnDisconnected@DataProviderProxy@@MEAAJXZ @ 0x18027D860 (-OnDisconnected@DataProviderProxy@@MEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B2FCC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$?RPEAVCInteractionTracker@@@?$_Uhash_compare@PEAVCInteractionTracker@@U?$hash@PEAVCInteractionTracker@@@std@@U?$equal_to@PEAVCInteractionTracker@@@3@@std@@QEBA_KAEBQEAVCInteractionTracker@@@Z @ 0x1800C149C (--$-RPEAVCInteractionTracker@@@-$_Uhash_compare@PEAVCInteractionTracker@@U-$hash@PEAVCInteractio.c)
 *     ??$find@X@?$_Hash@V?$_Umap_traits@PEAVCInteractionTracker@@W4InteractionTrackerBindingModeFlags@@V?$_Uhash_compare@PEAVCInteractionTracker@@U?$hash@PEAVCInteractionTracker@@@std@@U?$equal_to@PEAVCInteractionTracker@@@3@@std@@V?$allocator@U?$pair@QEAVCInteractionTracker@@W4InteractionTrackerBindingModeFlags@@@std@@@4@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEAVCInteractionTracker@@W4InteractionTrackerBindingModeFlags@@@std@@@std@@@std@@@1@AEBQEAVCInteractionTracker@@@Z @ 0x1800F5C44 (--$find@X@-$_Hash@V-$_Umap_traits@PEAVCInteractionTracker@@W4InteractionTrackerBindingModeFlags@.c)
 *     ??$_Freenode@V?$allocator@U?$_List_node@U?$pair@$$CB_KV?$ComPtr@VDataProviderProxy@@@WRL@Microsoft@@@std@@PEAX@std@@@std@@@?$_List_node@U?$pair@$$CB_KV?$ComPtr@VDataProviderProxy@@@WRL@Microsoft@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@U?$pair@$$CB_KV?$ComPtr@VDataProviderProxy@@@WRL@Microsoft@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x180268778 (--$_Freenode@V-$allocator@U-$_List_node@U-$pair@$$CB_KV-$ComPtr@VDataProviderProxy@@@WRL@Microso.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall DataProviderManager::RemoveDataProvider(DataProviderManager *this, struct DataProviderProxy *a2)
{
  char *v2; // rdi
  int v4; // ebx
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 v8; // rax
  __int64 *v9; // r10
  __int64 v10; // r11
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v15; // [rsp+30h] [rbp+8h] BYREF
  __int64 v16; // [rsp+38h] [rbp+10h] BYREF

  v2 = (char *)a2 + 8;
  v4 = *(_DWORD *)(*(__int64 (__fastcall **)(char *))(*((_QWORD *)a2 + 1) + 72LL))((char *)a2 + 8);
  v5 = (*(__int64 (__fastcall **)(char *))(*(_QWORD *)v2 + 72LL))(v2);
  LODWORD(v15) = v4;
  HIDWORD(v15) = *(_DWORD *)(v5 + 4);
  std::_Hash<std::_Umap_traits<CInteractionTracker *,enum InteractionTrackerBindingModeFlags,std::_Uhash_compare<CInteractionTracker *,std::hash<CInteractionTracker *>,std::equal_to<CInteractionTracker *>>,std::allocator<std::pair<CInteractionTracker * const,enum InteractionTrackerBindingModeFlags>>,0>>::find<void>(
    (_QWORD *)this + 5,
    &v16,
    &v15);
  if ( v16 == *((_QWORD *)this + 6) )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x11F,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\dataprovidermanager.cpp",
      (const char *)0x8000000BLL);
    return 2147483659LL;
  }
  else
  {
    v8 = std::_Uhash_compare<CInteractionTracker *,std::hash<CInteractionTracker *>,std::equal_to<CInteractionTracker *>>::operator()<CInteractionTracker *>(
           v6,
           v16 + 16);
    v11 = *((_QWORD *)this + 8);
    v12 = 2 * (*((_QWORD *)this + 11) & v8);
    if ( *(__int64 **)(v11 + 16 * (*((_QWORD *)this + 11) & v8) + 8) == v9 )
    {
      if ( *(__int64 **)(v11 + 16 * (*((_QWORD *)this + 11) & v8)) == v9 )
        *(_QWORD *)(v11 + 16 * (*((_QWORD *)this + 11) & v8)) = v10;
      else
        v10 = v9[1];
      *(_QWORD *)(v11 + 8 * v12 + 8) = v10;
    }
    else if ( *(__int64 **)(v11 + 16 * (*((_QWORD *)this + 11) & v8)) == v9 )
    {
      *(_QWORD *)(v11 + 16 * (*((_QWORD *)this + 11) & v8)) = *v9;
    }
    v13 = *v9;
    --*((_QWORD *)this + 7);
    *(_QWORD *)v9[1] = v13;
    *(_QWORD *)(v13 + 8) = v9[1];
    std::_List_node<std::pair<unsigned __int64 const,Microsoft::WRL::ComPtr<DataProviderProxy>>,void *>::_Freenode<std::allocator<std::_List_node<std::pair<unsigned __int64 const,Microsoft::WRL::ComPtr<DataProviderProxy>>,void *>>>(
      v13,
      v9);
    return 0LL;
  }
}
