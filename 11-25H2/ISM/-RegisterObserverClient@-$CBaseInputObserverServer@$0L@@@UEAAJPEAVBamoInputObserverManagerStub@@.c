/*
 * XREFs of ?RegisterObserverClient@?$CBaseInputObserverServer@$0L@@@UEAAJPEAVBamoInputObserverManagerStub@@PEAVBamoInputObserverClientProxy@@@Z @ 0x1801376B0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalAddRef@?$ComPtr@VBamoDragSourceClientProxy@@@WRL@Microsoft@@IEBAXXZ @ 0x1800284CC (-InternalAddRef@-$ComPtr@VBamoDragSourceClientProxy@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180091A84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$find@X@?$_Hash@V?$_Uset_traits@PEAUIHeatSystemContextClient@@V?$_Uhash_compare@PEAUIHeatSystemContextClient@@U?$hash@PEAUIHeatSystemContextClient@@@std@@U?$equal_to@PEAUIHeatSystemContextClient@@@3@@std@@V?$allocator@PEAUIHeatSystemContextClient@@@3@$0A@@std@@@std@@QEAA?AV?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@PEAUIHeatSystemContextClient@@@std@@@std@@@1@AEBQEAUIHeatSystemContextClient@@@Z @ 0x180099A74 (--$find@X@-$_Hash@V-$_Uset_traits@PEAUIHeatSystemContextClient@@V-$_Uhash_compare@PEAUIHeatSyste.c)
 *     ??$_Try_emplace@AEB_K$$V@?$_Hash@V?$_Umap_traits@_KUInputObserverClient@?$CBaseInputObserverServer@$0L@@@V?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@std@@V?$allocator@U?$pair@$$CB_KUInputObserverClient@?$CBaseInputObserverServer@$0L@@@@std@@@4@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_List_node@U?$pair@$$CB_KUInputObserverClient@?$CBaseInputObserverServer@$0L@@@@std@@PEAX@std@@_N@1@AEB_K@Z @ 0x180136FE0 (--$_Try_emplace@AEB_K$$V@-$_Hash@V-$_Umap_traits@_KUInputObserverClient@-$CBaseInputObserverServ.c)
 *     ?CheckClientCapability@@YAJPEBVBamoInputObserverClientProxy@@PEBG@Z @ 0x180137364 (-CheckClientCapability@@YAJPEBVBamoInputObserverClientProxy@@PEBG@Z.c)
 *     ?GetClientId@@YA_KPEAVBamoInputObserverClientProxy@@@Z @ 0x1801375A8 (-GetClientId@@YA_KPEAVBamoInputObserverClientProxy@@@Z.c)
 *     ?UpdateObservationState@?$CBaseInputObserverServer@$0L@@@AEAAXXZ @ 0x180137890 (-UpdateObservationState@-$CBaseInputObserverServer@$0L@@@AEAAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801D3010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CBaseInputObserverServer<11>::RegisterObserverClient(
        __int64 a1,
        __int64 a2,
        struct BamoInputObserverClientProxy *a3)
{
  char **v5; // rax
  char *v6; // rdx
  int v7; // eax
  __int64 v8; // rax
  __int64 v9; // rbx
  __int64 v10; // rcx
  char v12[24]; // [rsp+30h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  __int64 ClientId; // [rsp+50h] [rbp+8h] BYREF
  struct BamoInputObserverClientProxy *v15; // [rsp+68h] [rbp+20h] BYREF

  ClientId = GetClientId(a3);
  v5 = (char **)std::_Hash<std::_Uset_traits<IHeatSystemContextClient *,std::_Uhash_compare<IHeatSystemContextClient *,std::hash<IHeatSystemContextClient *>,std::equal_to<IHeatSystemContextClient *>>,std::allocator<IHeatSystemContextClient *>,0>>::find<void>(
                  (_QWORD *)(a1 + 160),
                  &v15,
                  (__int64)&ClientId);
  v6 = *(char **)(a1 + 168);
  if ( *v5 == v6 )
  {
    v7 = CheckClientCapability(a3, v6);
    if ( v7 >= 0 )
    {
      *((_DWORD *)a3 + 14) = *(_DWORD *)(a1 + 228);
      v15 = a3;
      Microsoft::WRL::ComPtr<BamoDragSourceClientProxy>::InternalAddRef((__int64 (__fastcall ****)(_QWORD))&v15);
      v8 = std::_Hash<std::_Umap_traits<unsigned __int64,CBaseInputObserverServer<11>::InputObserverClient,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,CBaseInputObserverServer<11>::InputObserverClient>>,0>>::_Try_emplace<unsigned __int64 const &,>(
             (float *)(a1 + 160),
             (__int64)v12,
             &ClientId);
      v9 = *(_QWORD *)v8;
      v10 = *(_QWORD *)(*(_QWORD *)v8 + 24LL);
      *(_QWORD *)(*(_QWORD *)v8 + 24LL) = a3;
      if ( v10 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 8LL))(v10);
      *(_DWORD *)(v9 + 32) = 2;
      CBaseInputObserverServer<11>::UpdateObservationState(a1);
    }
    else
    {
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x43,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\components\\inputobservers\\server\\BaseInputObserverServer.cpp",
        (const char *)(unsigned int)v7);
    }
  }
  return 0LL;
}
