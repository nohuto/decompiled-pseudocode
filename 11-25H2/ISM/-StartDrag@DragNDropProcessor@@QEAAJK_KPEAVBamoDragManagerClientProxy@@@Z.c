/*
 * XREFs of ?StartDrag@DragNDropProcessor@@QEAAJK_KPEAVBamoDragManagerClientProxy@@@Z @ 0x18014BB74
 * Callers:
 *     ?StartOperation@GestureServices@@MEAAJPEAVBamoGestureServicesStub@@I_N_K2PEAVBamoDragManagerClientProxy@@W4GestureProcessorType@@@Z @ 0x1801418C0 (-StartOperation@GestureServices@@MEAAJPEAVBamoGestureServicesStub@@I_N_K2PEAVBamoDragManagerClie.c)
 * Callees:
 *     ??4?$ComPtr@UIMPCFocusTarget@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x18002192C (--4-$ComPtr@UIMPCFocusTarget@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ??$find@X@?$_Hash@V?$_Umap_traits@KUPointerCache@EdgyProcessor@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKUPointerCache@EdgyProcessor@@@std@@@4@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUPointerCache@EdgyProcessor@@@std@@@std@@@std@@@1@AEBK@Z @ 0x180026F08 (--$find@X@-$_Hash@V-$_Umap_traits@KUPointerCache@EdgyProcessor@@V-$_Uhash_compare@KU-$hash@K@std.c)
 *     ?InternalAddRef@?$ComPtr@VBamoDragSourceClientProxy@@@WRL@Microsoft@@IEBAXXZ @ 0x1800284CC (-InternalAddRef@-$ComPtr@VBamoDragSourceClientProxy@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@VDataProviderRegistrarProxy@@@WRL@Microsoft@@IEAAKXZ @ 0x180058DC8 (-InternalRelease@-$ComPtr@VDataProviderRegistrarProxy@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??4?$ComPtr@VBamoDragSourceClientProxy@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x18007EF60 (--4-$ComPtr@VBamoDragSourceClientProxy@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     __security_check_cookie @ 0x18009D480 (__security_check_cookie.c)
 *     ??$?4U?$default_delete@VDragGestureTracker@@@std@@$0A@@?$unique_ptr@VDragGestureTracker@@U?$default_delete@VDragGestureTracker@@@std@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x180146CC0 (--$-4U-$default_delete@VDragGestureTracker@@@std@@$0A@@-$unique_ptr@VDragGestureTracker@@U-$defa.c)
 *     ??$_Erase@K@?$_Hash@V?$_Umap_traits@KPEAVControllerProcessor@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKPEAVControllerProcessor@@@std@@@3@$0A@@std@@@std@@AEAA_KAEBK@Z @ 0x1801471E0 (--$_Erase@K@-$_Hash@V-$_Umap_traits@KPEAVControllerProcessor@@V-$_Uhash_compare@KU-$hash@K@std@@.c)
 *     ??$_Try_emplace@AEBK$$V@?$_Hash@V?$_Umap_traits@KUMessageInfo@DragNDropProcessor@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKUMessageInfo@DragNDropProcessor@@@std@@@4@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_List_node@U?$pair@$$CBKUMessageInfo@DragNDropProcessor@@@std@@PEAX@std@@_N@1@AEBK@Z @ 0x180147678 (--$_Try_emplace@AEBK$$V@-$_Hash@V-$_Umap_traits@KUMessageInfo@DragNDropProcessor@@V-$_Uhash_comp.c)
 *     ??$emplace@AEAIAEA_K@?$_Hash@V?$_Umap_traits@I_KV?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@U?$pair@$$CBI_K@std@@@2@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBI_K@std@@@std@@@std@@@std@@_N@1@AEAIAEA_K@Z @ 0x180147BA4 (--$emplace@AEAIAEA_K@-$_Hash@V-$_Umap_traits@I_KV-$_Uhash_compare@IU-$hash@I@std@@U-$equal_to@I@.c)
 *     ??$make_unique@VDragGestureTracker@@_N$0A@@std@@YA?AV?$unique_ptr@VDragGestureTracker@@U?$default_delete@VDragGestureTracker@@@std@@@0@$$QEA_N@Z @ 0x180148004 (--$make_unique@VDragGestureTracker@@_N$0A@@std@@YA-AV-$unique_ptr@VDragGestureTracker@@U-$defaul.c)
 *     ??1?$unique_ptr@VDragGestureTracker@@U?$default_delete@VDragGestureTracker@@@std@@@std@@QEAA@XZ @ 0x1801485CC (--1-$unique_ptr@VDragGestureTracker@@U-$default_delete@VDragGestureTracker@@@std@@@std@@QEAA@XZ.c)
 *     ??4?$ComPtr@VBamoDragManagerClientProxy@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x180148764 (--4-$ComPtr@VBamoDragManagerClientProxy@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?DragCancelled@InputGesture@InputETW@@SAXPEBGKPEAUtagPOINT@@11_KW4VirtualKeyModifiers@System@Windows@@2@Z @ 0x180148D68 (-DragCancelled@InputGesture@InputETW@@SAXPEBGKPEAUtagPOINT@@11_KW4VirtualKeyModifiers@System@Win.c)
 *     ?DragStarted@InputGesture@InputETW@@SAXPEBGKPEAUtagPOINT@@11_KW4VirtualKeyModifiers@System@Windows@@2I22@Z @ 0x180149134 (-DragStarted@InputGesture@InputETW@@SAXPEBGKPEAUtagPOINT@@11_KW4VirtualKeyModifiers@System@Windo.c)
 *     ?GetDragManagerInputSite@DragNDropProcessor@@AEAA?AV?$ComPtr@VInputSite@@@WRL@Microsoft@@UtagPOINT@@W4InputType@@PEAVBamoDragManagerClientProxy@@PEAUHitTestResult@@@Z @ 0x180149800 (-GetDragManagerInputSite@DragNDropProcessor@@AEAA-AV-$ComPtr@VInputSite@@@WRL@Microsoft@@UtagPOI.c)
 *     ?GetDragSourceInputSite@DragNDropProcessor@@AEAAXUtagPOINT@@W4InputType@@PEAVBamoDragManagerClientProxy@@PEAPEAVBamoDragSourceClientProxy@@PEAPEAVInputSite@@@Z @ 0x180149A18 (-GetDragSourceInputSite@DragNDropProcessor@@AEAAXUtagPOINT@@W4InputType@@PEAVBamoDragManagerClie.c)
 *     ?GetVelocityForPointerId@DragNDropProcessor@@AEAA?AUtagPOINTF@@K@Z @ 0x180149C50 (-GetVelocityForPointerId@DragNDropProcessor@@AEAA-AUtagPOINTF@@K@Z.c)
 *     ?HitTest@DragNDropProcessor@@AEAAJUtagPOINT@@W4InputType@@U_GUID@@_NPEAUHitTestResult@@PEAU2@PEA_K6PEAPEAXPEAPEAVBamoDragSourceClientProxy@@PEAPEAVBamoDragManagerClientProxy@@PEAPEAVInputSite@@PEAPEAV8@@Z @ 0x180149D7C (-HitTest@DragNDropProcessor@@AEAAJUtagPOINT@@W4InputType@@U_GUID@@_NPEAUHitTestResult@@PEAU2@PEA.c)
 *     ?GetInputType@PointerManipulationHelper@@SA?AW4InputType@Input@Internal@UI@Windows@@W42@@Z @ 0x180199380 (-GetInputType@PointerManipulationHelper@@SA-AW4InputType@Input@Internal@UI@Windows@@W42@@Z.c)
 *     ?GetPositionRelativeToSite@PointerManipulationHelper@@SA?AUtagPOINT@@PEAVInputSite@@U2@@Z @ 0x1801993BC (-GetPositionRelativeToSite@PointerManipulationHelper@@SA-AUtagPOINT@@PEAVInputSite@@U2@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801D3010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall DragNDropProcessor::StartDrag(
        DragNDropProcessor *this,
        unsigned int a2,
        DragGestureTracker *a3,
        struct BamoDragManagerClientProxy *a4)
{
  char v7; // r14
  __int64 v8; // rbx
  unsigned int v9; // ebx
  const WCHAR *v10; // rax
  __int64 v11; // rdi
  unsigned int v12; // r14d
  struct InputSite *v13; // rbx
  int v14; // esi
  unsigned int InputType; // r12d
  unsigned int v16; // esi
  const WCHAR *v17; // rax
  __int64 v18; // r15
  __int64 v19; // r14
  __int64 v20; // r14
  __int64 *v21; // rax
  struct InputSite *v22; // rcx
  __int64 v24; // [rsp+30h] [rbp-D0h]
  __int64 v25; // [rsp+48h] [rbp-B8h]
  __int64 v26; // [rsp+50h] [rbp-B0h]
  unsigned int v27; // [rsp+70h] [rbp-90h] BYREF
  char v28[8]; // [rsp+78h] [rbp-88h] BYREF
  unsigned int v29[2]; // [rsp+80h] [rbp-80h] BYREF
  struct tagPOINT v30; // [rsp+88h] [rbp-78h] BYREF
  struct tagPOINT PositionRelativeToSite; // [rsp+90h] [rbp-70h] BYREF
  unsigned int v32; // [rsp+98h] [rbp-68h]
  struct tagPOINT v33; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v34; // [rsp+A8h] [rbp-58h] BYREF
  __int64 v35; // [rsp+B0h] [rbp-50h] BYREF
  struct InputSite *v36; // [rsp+B8h] [rbp-48h] BYREF
  __int64 (__fastcall ***v37)(_QWORD); // [rsp+C0h] [rbp-40h] BYREF
  _QWORD *v38; // [rsp+C8h] [rbp-38h]
  struct InputSite *v39; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v40; // [rsp+D8h] [rbp-28h] BYREF
  DragGestureTracker *v41[2]; // [rsp+E0h] [rbp-20h] BYREF
  __int128 v42; // [rsp+F0h] [rbp-10h] BYREF
  __int128 v43; // [rsp+100h] [rbp+0h] BYREF
  __int64 v44; // [rsp+110h] [rbp+10h]

  v41[0] = a3;
  v27 = a2;
  v37 = (__int64 (__fastcall ***)(_QWORD))a4;
  Microsoft::WRL::ComPtr<BamoDragSourceClientProxy>::InternalAddRef(&v37);
  v7 = 0;
  std::_Hash<std::_Umap_traits<unsigned long,EdgyProcessor::PointerCache,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,EdgyProcessor::PointerCache>>,0>>::find<void>(
    (__int64)this + 48,
    (__int64)&v34,
    &v27);
  v8 = v34;
  if ( v34 == *((_QWORD *)this + 7) )
  {
    v38 = (_QWORD *)((char *)this + 240);
LABEL_4:
    v7 = 1;
    goto LABEL_6;
  }
  v38 = (_QWORD *)((char *)this + 240);
  if ( *std::_Hash<std::_Umap_traits<unsigned long,EdgyProcessor::PointerCache,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,EdgyProcessor::PointerCache>>,0>>::find<void>(
          (__int64)this + 240,
          (__int64)&v34,
          &v27) != *((_QWORD *)this + 31) )
    goto LABEL_4;
  v38 = (_QWORD *)((char *)this + 240);
LABEL_6:
  *(_QWORD *)v29 = 0LL;
  v35 = 0LL;
  v34 = 0LL;
  v30 = 0LL;
  v33 = 0LL;
  PositionRelativeToSite = 0LL;
  v43 = 0LL;
  v44 = 0LL;
  if ( v7 )
  {
    v9 = v27;
    v10 = (const WCHAR *)(*(__int64 (__fastcall **)(DragNDropProcessor *))(*(_QWORD *)this + 48LL))(this);
    InputETW::InputGesture::DragCancelled(
      v10,
      v9,
      (int *)&PositionRelativeToSite,
      (int *)&v33,
      (int *)&v30,
      0LL,
      v24,
      0LL);
    (*(void (__fastcall **)(char *, _QWORD, struct tagPOINT *, struct tagPOINT *, struct tagPOINT *, __int128 *, _QWORD, _DWORD, _QWORD))(*((_QWORD *)a4 + 1) + 48LL))(
      (char *)a4 + 8,
      v27,
      &PositionRelativeToSite,
      &v33,
      &v30,
      &v43,
      0LL,
      0,
      0LL);
    std::_Hash<std::_Umap_traits<unsigned long,ControllerProcessor *,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,ControllerProcessor *>>,0>>::_Erase<unsigned long>(
      (_QWORD *)this + 38,
      (__int64)&v27);
  }
  else
  {
    v11 = *(_QWORD *)(v8 + 28);
    *(_QWORD *)v29 = v11;
    v32 = *(_DWORD *)(v8 + 40);
    v12 = *(_DWORD *)(v8 + 36);
    DragNDropProcessor::GetDragManagerInputSite((__int64)this, (__int64 *)&v36, v11, v12, (__int64 *)a4, 0LL);
    if ( v36 )
      PositionRelativeToSite = PointerManipulationHelper::GetPositionRelativeToSite(v36, (struct tagPOINT)v11);
    v39 = 0LL;
    v40 = 0LL;
    DragNDropProcessor::GetDragSourceInputSite((__int64)this, v11, v12, (__int64 *)a4, &v40, (__int64 *)&v39);
    v13 = v39;
    if ( v39 )
      v30 = PointerManipulationHelper::GetPositionRelativeToSite(v39, (struct tagPOINT)v11);
    *(float *)&v43 = (float)(int)v29[0];
    *((float *)&v43 + 1) = (float)(int)v29[1];
    v44 = **(_QWORD **)&DragNDropProcessor::GetVelocityForPointerId(this, v29, v27);
    *(_QWORD *)v29 = (char *)a4 + 8;
    v42 = *(_OWORD *)(*(__int64 (__fastcall **)(char *))(*((_QWORD *)a4 + 1) + 80LL))((char *)a4 + 8);
    v14 = DragNDropProcessor::HitTest(
            (__int64)this,
            (struct tagPOINT)v11,
            v12,
            &v42,
            0,
            0LL,
            &v33,
            &v35,
            &v34,
            0LL,
            0LL,
            0LL,
            0LL,
            0LL);
    if ( v14 >= 0 )
    {
      InputType = PointerManipulationHelper::GetInputType(v12);
      v16 = v27;
      v17 = (const WCHAR *)(*(__int64 (__fastcall **)(DragNDropProcessor *))(*(_QWORD *)this + 48LL))(this);
      v25 = (__int64)a3;
      v18 = v34;
      v19 = v35;
      InputETW::InputGesture::DragStarted(
        v17,
        v16,
        (int *)&PositionRelativeToSite,
        (int *)&v33,
        (int *)&v30,
        v35,
        v32,
        v34,
        InputType,
        v25,
        v26);
      v14 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, struct tagPOINT *, struct tagPOINT *, struct tagPOINT *, __int128 *, __int64, unsigned int, __int64, unsigned int, DragGestureTracker *, _QWORD, _DWORD))(**(_QWORD **)v29 + 24LL))(
              *(_QWORD *)v29,
              v27,
              &PositionRelativeToSite,
              &v33,
              &v30,
              &v43,
              v19,
              v32,
              v18,
              InputType,
              v41[0],
              0LL,
              0);
    }
    v35 = 0LL;
    std::_Hash<std::_Umap_traits<unsigned int,unsigned __int64,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,unsigned __int64>>,0>>::emplace<unsigned int &,unsigned __int64 &>(
      v38,
      (__int64)&v42,
      &v27,
      &v35);
    if ( v14 >= 0 )
    {
      v20 = *(_QWORD *)std::_Hash<std::_Umap_traits<unsigned long,DragNDropProcessor::MessageInfo,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,DragNDropProcessor::MessageInfo>>,0>>::_Try_emplace<unsigned long const &,>(
                         (float *)this + 28,
                         (__int64)&v42,
                         &v27);
      Microsoft::WRL::ComPtr<BamoDragManagerClientProxy>::operator=((__int64 (__fastcall ****)(_QWORD))(v20 + 32), &v37);
      Microsoft::WRL::ComPtr<IMPCFocusTarget>::operator=((__int64 *)(v20 + 56), &v36);
      v28[0] = 1;
      v21 = (__int64 *)std::make_unique<DragGestureTracker,bool,0>(v41, v28);
      std::unique_ptr<DragGestureTracker>::operator=<std::default_delete<DragGestureTracker>,0>(
        (__int64 *)(v20 + 64),
        v21);
      std::unique_ptr<DragGestureTracker>::~unique_ptr<DragGestureTracker>(v41);
      **(_DWORD **)(v20 + 64) = 4;
      Microsoft::WRL::ComPtr<BamoDragSourceClientProxy>::operator=((__int64 *)(v20 + 24), &v40);
      Microsoft::WRL::ComPtr<IMPCFocusTarget>::operator=((__int64 *)(v20 + 48), &v39);
      *(_QWORD *)(v20 + 72) = v11;
    }
    if ( v40 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v40 + 8LL))(v40);
    if ( v13 )
      (*(void (__fastcall **)(struct InputSite *))(*(_QWORD *)v13 + 16LL))(v13);
    v22 = v36;
    if ( v36 )
    {
      v36 = 0LL;
      (*(void (__fastcall **)(struct InputSite *))(*(_QWORD *)v22 + 16LL))(v22);
    }
  }
  Microsoft::WRL::ComPtr<DataProviderRegistrarProxy>::InternalRelease((__int64 *)&v37);
  return 0LL;
}
