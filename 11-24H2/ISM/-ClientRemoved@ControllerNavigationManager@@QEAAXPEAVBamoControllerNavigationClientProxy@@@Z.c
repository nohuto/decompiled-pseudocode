/*
 * XREFs of ?ClientRemoved@ControllerNavigationManager@@QEAAXPEAVBamoControllerNavigationClientProxy@@@Z @ 0x1801756EC
 * Callers:
 *     ?OnDisconnected@ControllerNavigationClientProxy@@MEAAJXZ @ 0x1801778D0 (-OnDisconnected@ControllerNavigationClientProxy@@MEAAJXZ.c)
 * Callees:
 *     ??$find@X@?$_Hash@V?$_Umap_traits@KUPointerCache@EdgyProcessor@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKUPointerCache@EdgyProcessor@@@std@@@4@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUPointerCache@EdgyProcessor@@@std@@@std@@@std@@@1@AEBK@Z @ 0x1800274C8 (--$find@X@-$_Hash@V-$_Umap_traits@KUPointerCache@EdgyProcessor@@V-$_Uhash_compare@KU-$hash@K@std.c)
 *     ??$?RW4_Button@@@?$_Uhash_compare@W4_Button@@U?$hash@W4_Button@@@std@@U?$equal_to@W4_Button@@@3@@std@@QEBA_KAEBW4_Button@@@Z @ 0x180027528 (--$-RW4_Button@@@-$_Uhash_compare@W4_Button@@U-$hash@W4_Button@@@std@@U-$equal_to@W4_Button@@@3@.c)
 *     ?DisableNavigation@ControllerNavigationManager@@AEAAXXZ @ 0x180036254 (-DisableNavigation@ControllerNavigationManager@@AEAAXXZ.c)
 *     ?GetProcessId@BaseBamoPeer@Bamo@Microsoft@@QEBAIXZ @ 0x180037A08 (-GetProcessId@BaseBamoPeer@Bamo@Microsoft@@QEBAIXZ.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18008E73C (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

void __fastcall ControllerNavigationManager::ClientRemoved(
        ControllerNavigationManager *this,
        struct BamoControllerNavigationClientProxy *a2)
{
  int v4; // esi
  __int64 v5; // rcx
  const char *v6; // r9
  __int64 *v7; // rbx
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rax
  __int64 v12; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  int ProcessId; // [rsp+40h] [rbp+8h] BYREF
  __int64 v15; // [rsp+48h] [rbp+10h] BYREF

  ProcessId = Microsoft::Bamo::BaseBamoPeer::GetProcessId(*(Microsoft::Bamo::BaseBamoPeer **)(*((_QWORD *)a2 + 4) + 16LL));
  v4 = ProcessId;
  std::_Hash<std::_Umap_traits<unsigned long,EdgyProcessor::PointerCache,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,EdgyProcessor::PointerCache>>,0>>::find<void>(
    (__int64)this + 128,
    (__int64)&v15,
    &ProcessId);
  v7 = (__int64 *)v15;
  if ( v15 == *((_QWORD *)this + 17) || *(struct BamoControllerNavigationClientProxy **)(v15 + 24) != a2 )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x15A,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\controller\\lib\\controllernavigationmanager.cpp",
      v6);
  if ( *((_DWORD *)this + 56) == v4 )
    ControllerNavigationManager::DisableNavigation(this);
  v8 = std::_Uhash_compare<enum _Button,std::hash<enum _Button>,std::equal_to<enum _Button>>::operator()<enum _Button>(
         v5,
         (__int64)(v7 + 2));
  v9 = *((_QWORD *)this + 19);
  v10 = 2 * (*((_QWORD *)this + 22) & v8);
  if ( *(__int64 **)(v9 + 16 * (*((_QWORD *)this + 22) & v8) + 8) == v7 )
  {
    if ( *(__int64 **)(v9 + 16 * (*((_QWORD *)this + 22) & v8)) == v7 )
    {
      v11 = *((_QWORD *)this + 17);
      *(_QWORD *)(v9 + 8 * v10) = v11;
    }
    else
    {
      v11 = v7[1];
    }
    *(_QWORD *)(v9 + 8 * v10 + 8) = v11;
  }
  else if ( *(__int64 **)(v9 + 16 * (*((_QWORD *)this + 22) & v8)) == v7 )
  {
    *(_QWORD *)(v9 + 16 * (*((_QWORD *)this + 22) & v8)) = *v7;
  }
  v12 = *v7;
  --*((_QWORD *)this + 18);
  *(_QWORD *)v7[1] = v12;
  *(_QWORD *)(v12 + 8) = v7[1];
  std::_List_node<std::pair<unsigned long const,Microsoft::WRL::ComPtr<BamoControllerNavigationClientProxy>>,void *>::_Freenode<std::allocator<std::_List_node<std::pair<unsigned long const,Microsoft::WRL::ComPtr<BamoControllerNavigationClientProxy>>,void *>>>(
    v12,
    (__int64)v7);
}
