/*
 * XREFs of ?ClientStateChanged@ControllerNavigationManager@@QEAAXPEAVBamoControllerNavigationClientProxy@@@Z @ 0x180174940
 * Callers:
 *     ?OnEnabledChanged@ControllerNavigationClientProxy@@MEAAJXZ @ 0x180176AE0 (-OnEnabledChanged@ControllerNavigationClientProxy@@MEAAJXZ.c)
 * Callees:
 *     ??$find@X@?$_Hash@V?$_Umap_traits@KUPointerCache@EdgyProcessor@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKUPointerCache@EdgyProcessor@@@std@@@4@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUPointerCache@EdgyProcessor@@@std@@@std@@@std@@@1@AEBK@Z @ 0x180026F08 (--$find@X@-$_Hash@V-$_Umap_traits@KUPointerCache@EdgyProcessor@@V-$_Uhash_compare@KU-$hash@K@std.c)
 *     ?GetProcessId@BaseBamoPeer@Bamo@Microsoft@@QEBAIXZ @ 0x18003AF78 (-GetProcessId@BaseBamoPeer@Bamo@Microsoft@@QEBAIXZ.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18008DFDC (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?SetCurrentStateWithClient@ControllerNavigationManager@@AEAAXPEAVBamoControllerNavigationClientProxy@@@Z @ 0x1800993F4 (-SetCurrentStateWithClient@ControllerNavigationManager@@AEAAXPEAVBamoControllerNavigationClientP.c)
 *     ?ClientStateChanged@ControllerNavigationManager@InputETW@@SAXKUtagRECT@@UtagPOINT@@@Z @ 0x180174A14 (-ClientStateChanged@ControllerNavigationManager@InputETW@@SAXKUtagRECT@@UtagPOINT@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801D3010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall ControllerNavigationManager::ClientStateChanged(
        ControllerNavigationManager *this,
        struct BamoControllerNavigationClientProxy *a2)
{
  unsigned int v4; // ebp
  const char *v5; // r9
  struct tagRECT v6; // xmm6
  struct tagPOINT *v7; // rax
  struct tagRECT v8; // [rsp+20h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  unsigned int ProcessId; // [rsp+60h] [rbp+8h] BYREF
  __int64 v11; // [rsp+68h] [rbp+10h] BYREF

  ProcessId = Microsoft::Bamo::BaseBamoPeer::GetProcessId(*(Microsoft::Bamo::BaseBamoPeer **)(*((_QWORD *)a2 + 4) + 16LL));
  v4 = ProcessId;
  std::_Hash<std::_Umap_traits<unsigned long,EdgyProcessor::PointerCache,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,EdgyProcessor::PointerCache>>,0>>::find<void>(
    (__int64)this + 128,
    (__int64)&v11,
    &ProcessId);
  if ( v11 == *((_QWORD *)this + 17) || *(struct BamoControllerNavigationClientProxy **)(v11 + 24) != a2 )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x157,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\controller\\lib\\controllernavigationmanager.cpp",
      v5);
  v6 = *(struct tagRECT *)(*(__int64 (__fastcall **)(char *))(*((_QWORD *)a2 + 1) + 48LL))((char *)a2 + 8);
  v7 = (struct tagPOINT *)(*(__int64 (__fastcall **)(char *))(*((_QWORD *)a2 + 1) + 56LL))((char *)a2 + 8);
  v8 = v6;
  InputETW::ControllerNavigationManager::ClientStateChanged(v4, &v8, *v7);
  if ( *((_DWORD *)this + 56) == v4 )
    ControllerNavigationManager::SetCurrentStateWithClient(this, a2);
}
