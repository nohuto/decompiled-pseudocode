/*
 * XREFs of ?SetupInteractionContext@DragNDropProcessor@@AEAAXKW4InputType@@PEAUHitTestResult@@UtagPOINT@@@Z @ 0x18014D870
 * Callers:
 *     ?OnHitTest@DragNDropProcessor@@UEAAJPEAUHitTestInfo@@PEAVInputContext@@PEAUContextualProcessorInitialState@@@Z @ 0x18014CA50 (-OnHitTest@DragNDropProcessor@@UEAAJPEAUHitTestInfo@@PEAVInputContext@@PEAUContextualProcessorIn.c)
 * Callees:
 *     ??4?$ComPtr@UIMPCFocusTarget@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x180021EFC (--4-$ComPtr@UIMPCFocusTarget@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ??$find@X@?$_Hash@V?$_Umap_traits@KUPointerCache@EdgyProcessor@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKUPointerCache@EdgyProcessor@@@std@@@4@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUPointerCache@EdgyProcessor@@@std@@@std@@@std@@@1@AEBK@Z @ 0x1800274C8 (--$find@X@-$_Hash@V-$_Umap_traits@KUPointerCache@EdgyProcessor@@V-$_Uhash_compare@KU-$hash@K@std.c)
 *     ?InternalRelease@?$ComPtr@VDataProviderRegistrarProxy@@@WRL@Microsoft@@IEAAKXZ @ 0x180058BD8 (-InternalRelease@-$ComPtr@VDataProviderRegistrarProxy@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??4?$ComPtr@VBamoDragSourceClientProxy@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x18007ED90 (--4-$ComPtr@VBamoDragSourceClientProxy@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ??$?4U?$default_delete@VDragGestureTracker@@@std@@$0A@@?$unique_ptr@VDragGestureTracker@@U?$default_delete@VDragGestureTracker@@@std@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x180148E90 (--$-4U-$default_delete@VDragGestureTracker@@@std@@$0A@@-$unique_ptr@VDragGestureTracker@@U-$defa.c)
 *     ??$_Try_emplace@AEBK$$V@?$_Hash@V?$_Umap_traits@KUMessageInfo@DragNDropProcessor@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKUMessageInfo@DragNDropProcessor@@@std@@@4@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_List_node@U?$pair@$$CBKUMessageInfo@DragNDropProcessor@@@std@@PEAX@std@@_N@1@AEBK@Z @ 0x180149848 (--$_Try_emplace@AEBK$$V@-$_Hash@V-$_Umap_traits@KUMessageInfo@DragNDropProcessor@@V-$_Uhash_comp.c)
 *     ??$make_unique@VDragGestureTracker@@_N$0A@@std@@YA?AV?$unique_ptr@VDragGestureTracker@@U?$default_delete@VDragGestureTracker@@@std@@@0@$$QEA_N@Z @ 0x18014A1D4 (--$make_unique@VDragGestureTracker@@_N$0A@@std@@YA-AV-$unique_ptr@VDragGestureTracker@@U-$defaul.c)
 *     ??1?$unique_ptr@VDragGestureTracker@@U?$default_delete@VDragGestureTracker@@@std@@@std@@QEAA@XZ @ 0x18014A79C (--1-$unique_ptr@VDragGestureTracker@@U-$default_delete@VDragGestureTracker@@@std@@@std@@QEAA@XZ.c)
 *     ??4?$ComPtr@VBamoDragManagerClientProxy@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x18014A934 (--4-$ComPtr@VBamoDragManagerClientProxy@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?HitTest@DragNDropProcessor@@AEAAJUtagPOINT@@W4InputType@@U_GUID@@_NPEAUHitTestResult@@PEAU2@PEA_K6PEAPEAXPEAPEAVBamoDragSourceClientProxy@@PEAPEAVBamoDragManagerClientProxy@@PEAPEAVInputSite@@PEAPEAV8@@Z @ 0x18014BF4C (-HitTest@DragNDropProcessor@@AEAAJUtagPOINT@@W4InputType@@U_GUID@@_NPEAUHitTestResult@@PEAU2@PEA.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DB010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall DragNDropProcessor::SetupInteractionContext(
        __int64 a1,
        int a2,
        unsigned int a3,
        unsigned __int8 *a4,
        __int64 a5)
{
  float *v8; // rsi
  __int64 result; // rax
  int v10; // eax
  __int64 v11; // rdi
  __int64 v12; // rsi
  __int64 *v13; // rax
  __int64 v14; // [rsp+78h] [rbp-1h] BYREF
  __int64 v15; // [rsp+80h] [rbp+7h] BYREF
  __int64 v16; // [rsp+88h] [rbp+Fh] BYREF
  __int64 v17; // [rsp+90h] [rbp+17h] BYREF
  GUID v18; // [rsp+98h] [rbp+1Fh] BYREF
  _BYTE v19[16]; // [rsp+A8h] [rbp+2Fh] BYREF
  __int64 v20; // [rsp+D8h] [rbp+5Fh] BYREF
  int v21; // [rsp+E0h] [rbp+67h] BYREF

  v21 = a2;
  v8 = (float *)(a1 + 112);
  std::_Hash<std::_Umap_traits<unsigned long,EdgyProcessor::PointerCache,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,EdgyProcessor::PointerCache>>,0>>::find<void>(
    a1 + 112,
    (__int64)&v20,
    &v21);
  result = *(_QWORD *)(a1 + 120);
  if ( v20 == result )
  {
    v15 = 0LL;
    v14 = 0LL;
    v17 = 0LL;
    v16 = 0LL;
    v18 = GUID_NULL;
    v10 = DragNDropProcessor::HitTest(a1, 0LL, a3, &v18, 0, a4, 0LL, 0LL, 0LL, 0LL, &v15, &v14, &v17, &v16);
    v11 = v15;
    if ( v10 >= 0 )
    {
      v12 = *(_QWORD *)std::_Hash<std::_Umap_traits<unsigned long,DragNDropProcessor::MessageInfo,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,DragNDropProcessor::MessageInfo>>,0>>::_Try_emplace<unsigned long const &,>(
                         v8,
                         (__int64)v19,
                         &v21);
      LOBYTE(v20) = 1;
      v13 = (__int64 *)std::make_unique<DragGestureTracker,bool,0>((DragGestureTracker **)&v18, (char *)&v20);
      std::unique_ptr<DragGestureTracker>::operator=<std::default_delete<DragGestureTracker>,0>(
        (__int64 *)(v12 + 64),
        v13);
      std::unique_ptr<DragGestureTracker>::~unique_ptr<DragGestureTracker>(&v18);
      if ( v11 )
      {
        if ( v14 )
        {
          Microsoft::WRL::ComPtr<BamoDragSourceClientProxy>::operator=((__int64 *)(v12 + 24), &v15);
          Microsoft::WRL::ComPtr<BamoDragManagerClientProxy>::operator=(
            (__int64 (__fastcall ****)(_QWORD))(v12 + 32),
            &v14);
          Microsoft::WRL::ComPtr<IMPCFocusTarget>::operator=((__int64 *)(v12 + 48), &v17);
          Microsoft::WRL::ComPtr<IMPCFocusTarget>::operator=((__int64 *)(v12 + 56), &v16);
          **(_DWORD **)(v12 + 64) = 2;
          *(_QWORD *)(v12 + 72) = a5;
        }
      }
    }
    if ( v16 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
    if ( v17 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
    result = Microsoft::WRL::ComPtr<DataProviderRegistrarProxy>::InternalRelease(&v14);
    if ( v11 )
      return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v11 + 8LL))(v11);
  }
  return result;
}
