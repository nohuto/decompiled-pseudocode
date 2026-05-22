/*
 * XREFs of ?StartGestureRecognition@ResizeProcessor@@AEAAXPEAUHitTestResult@@K@Z @ 0x1801522C0
 * Callers:
 *     ?OnHitTest@ResizeProcessor@@UEAAJPEAUHitTestInfo@@PEAVInputContext@@PEAUContextualProcessorInitialState@@@Z @ 0x1801515E0 (-OnHitTest@ResizeProcessor@@UEAAJPEAUHitTestInfo@@PEAVInputContext@@PEAUContextualProcessorIniti.c)
 * Callees:
 *     ??4?$ComPtr@UIMPCFocusTarget@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x180021EFC (--4-$ComPtr@UIMPCFocusTarget@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ??$find@X@?$_Hash@V?$_Umap_traits@KUPointerCache@EdgyProcessor@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKUPointerCache@EdgyProcessor@@@std@@@4@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUPointerCache@EdgyProcessor@@@std@@@std@@@std@@@1@AEBK@Z @ 0x1800274C8 (--$find@X@-$_Hash@V-$_Umap_traits@KUPointerCache@EdgyProcessor@@V-$_Uhash_compare@KU-$hash@K@std.c)
 *     ?InternalRelease@?$ComPtr@VDataProviderRegistrarProxy@@@WRL@Microsoft@@IEAAKXZ @ 0x180058BD8 (-InternalRelease@-$ComPtr@VDataProviderRegistrarProxy@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$?4U?$default_delete@VDragGestureTracker@@@std@@$0A@@?$unique_ptr@VDragGestureTracker@@U?$default_delete@VDragGestureTracker@@@std@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x180148E90 (--$-4U-$default_delete@VDragGestureTracker@@@std@@$0A@@-$unique_ptr@VDragGestureTracker@@U-$defa.c)
 *     ??$make_unique@VDragGestureTracker@@_N$0A@@std@@YA?AV?$unique_ptr@VDragGestureTracker@@U?$default_delete@VDragGestureTracker@@@std@@@0@$$QEA_N@Z @ 0x18014A1D4 (--$make_unique@VDragGestureTracker@@_N$0A@@std@@YA-AV-$unique_ptr@VDragGestureTracker@@U-$defaul.c)
 *     ??1?$unique_ptr@VDragGestureTracker@@U?$default_delete@VDragGestureTracker@@@std@@@std@@QEAA@XZ @ 0x18014A79C (--1-$unique_ptr@VDragGestureTracker@@U-$default_delete@VDragGestureTracker@@@std@@@std@@QEAA@XZ.c)
 *     ??4?$ComPtr@VBamoDragManagerClientProxy@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x18014A934 (--4-$ComPtr@VBamoDragManagerClientProxy@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ??$_Try_emplace@AEBK$$V@?$_Hash@V?$_Umap_traits@KUMessageInfo@ResizeProcessor@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKUMessageInfo@ResizeProcessor@@@std@@@4@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_List_node@U?$pair@$$CBKUMessageInfo@ResizeProcessor@@@std@@PEAX@std@@_N@1@AEBK@Z @ 0x18014FE50 (--$_Try_emplace@AEBK$$V@-$_Hash@V-$_Umap_traits@KUMessageInfo@ResizeProcessor@@V-$_Uhash_compare.c)
 *     ?HitTest@ResizeProcessor@@AEAAXPEAUHitTestResult@@PEAW4InputResizeRegion@Input@Internal@UI@Windows@@PEAPEAVBamoResizeControllerClientProxy@@PEAPEAVInputSite@@@Z @ 0x18015104C (-HitTest@ResizeProcessor@@AEAAXPEAUHitTestResult@@PEAW4InputResizeRegion@Input@Internal@UI@Windo.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DB010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall ResizeProcessor::StartGestureRecognition(ResizeProcessor *this, struct HitTestResult *a2, int a3)
{
  float *v5; // rdi
  ResizeProcessor *v6; // rcx
  __int64 v7; // rax
  __int64 v8; // rbx
  __int64 *v9; // rax
  struct InputSite *v10; // [rsp+30h] [rbp-20h] BYREF
  DragGestureTracker *v11; // [rsp+38h] [rbp-18h] BYREF
  _BYTE v12[16]; // [rsp+40h] [rbp-10h] BYREF
  __int64 v13; // [rsp+70h] [rbp+20h] BYREF
  int v14; // [rsp+80h] [rbp+30h] BYREF
  struct BamoResizeControllerClientProxy *v15; // [rsp+88h] [rbp+38h] BYREF

  v14 = a3;
  v5 = (float *)((char *)this + 24);
  std::_Hash<std::_Umap_traits<unsigned long,EdgyProcessor::PointerCache,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,EdgyProcessor::PointerCache>>,0>>::find<void>(
    (__int64)this + 24,
    (__int64)&v13,
    &v14);
  if ( v13 == *((_QWORD *)this + 4) )
  {
    v15 = 0LL;
    v10 = 0LL;
    LODWORD(v13) = 0;
    ResizeProcessor::HitTest(v6, a2, (enum Windows::UI::Internal::Input::InputResizeRegion *)&v13, &v15, &v10);
    v7 = std::_Hash<std::_Umap_traits<unsigned long,ResizeProcessor::MessageInfo,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,ResizeProcessor::MessageInfo>>,0>>::_Try_emplace<unsigned long const &,>(
           v5,
           (__int64)v12,
           &v14);
    if ( v15 )
    {
      v8 = *(_QWORD *)v7;
      Microsoft::WRL::ComPtr<BamoDragManagerClientProxy>::operator=(
        (__int64 (__fastcall ****)(_QWORD))(*(_QWORD *)v7 + 24LL),
        &v15);
      Microsoft::WRL::ComPtr<IMPCFocusTarget>::operator=((__int64 *)(v8 + 40), &v10);
      *(_DWORD *)(v8 + 56) = v13;
      LOBYTE(v13) = 1;
      v9 = (__int64 *)std::make_unique<DragGestureTracker,bool,0>(&v11, (char *)&v13);
      std::unique_ptr<DragGestureTracker>::operator=<std::default_delete<DragGestureTracker>,0>(
        (__int64 *)(v8 + 48),
        v9);
      std::unique_ptr<DragGestureTracker>::~unique_ptr<DragGestureTracker>(&v11);
      **(_DWORD **)(v8 + 48) = 2;
    }
    else
    {
      Microsoft::WRL::ComPtr<DataProviderRegistrarProxy>::InternalRelease((__int64 *)(*(_QWORD *)v7 + 24LL));
    }
    if ( v10 )
      (*(void (__fastcall **)(struct InputSite *))(*(_QWORD *)v10 + 16LL))(v10);
    Microsoft::WRL::ComPtr<DataProviderRegistrarProxy>::InternalRelease((__int64 *)&v15);
  }
}
