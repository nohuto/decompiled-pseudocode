/*
 * XREFs of ?StartAnimation@DragNDropProcessor@@QEAAJKPEAVBamoDragManagerClientProxy@@@Z @ 0x18014B864
 * Callers:
 *     ?StartAnimation@GestureServices@@MEAAJPEAVBamoGestureServicesStub@@IPEBQEAVBamoAnimationTargetClientProxy@@IPEAVBamoDragManagerClientProxy@@W4GestureProcessorType@@@Z @ 0x180141440 (-StartAnimation@GestureServices@@MEAAJPEAVBamoGestureServicesStub@@IPEBQEAVBamoAnimationTargetCl.c)
 * Callees:
 *     ??$find@X@?$_Hash@V?$_Umap_traits@KUPointerCache@EdgyProcessor@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKUPointerCache@EdgyProcessor@@@std@@@4@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUPointerCache@EdgyProcessor@@@std@@@std@@@std@@@1@AEBK@Z @ 0x180026F08 (--$find@X@-$_Hash@V-$_Umap_traits@KUPointerCache@EdgyProcessor@@V-$_Uhash_compare@KU-$hash@K@std.c)
 *     ?GetProcessId@BaseBamoPeer@Bamo@Microsoft@@QEBAIXZ @ 0x18003AF78 (-GetProcessId@BaseBamoPeer@Bamo@Microsoft@@QEBAIXZ.c)
 *     ?InternalRelease@?$ComPtr@VDataProviderRegistrarProxy@@@WRL@Microsoft@@IEAAKXZ @ 0x180058DC8 (-InternalRelease@-$ComPtr@VDataProviderRegistrarProxy@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18008DFDC (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008EFF4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetAnimationDataProvider@ISMStatics@@SAPEAUIAnimationDataProvider@@XZ @ 0x18009BE2C (-GetAnimationDataProvider@ISMStatics@@SAPEAUIAnimationDataProvider@@XZ.c)
 *     ??$_Try_emplace@AEBK$$V@?$_Hash@V?$_Umap_traits@KV?$ComPtr@VDataSourcePrincipal@@@WRL@Microsoft@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKV?$ComPtr@VDataSourcePrincipal@@@WRL@Microsoft@@@std@@@5@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_List_node@U?$pair@$$CBKV?$ComPtr@VDataSourcePrincipal@@@WRL@Microsoft@@@std@@PEAX@std@@_N@1@AEBK@Z @ 0x1801479B0 (--$_Try_emplace@AEBK$$V@-$_Hash@V-$_Umap_traits@KV-$ComPtr@VDataSourcePrincipal@@@WRL@Microsoft@.c)
 *     ??4?$ComPtr@VDataSourcePrincipal@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x1801487B4 (--4-$ComPtr@VDataSourcePrincipal@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?FeedAnimationDataIfNeeded@DragNDropProcessor@@AEAAXKUtagPOINT@@UtagPOINTF@@_N@Z @ 0x180149510 (-FeedAnimationDataIfNeeded@DragNDropProcessor@@AEAAXKUtagPOINT@@UtagPOINTF@@_N@Z.c)
 *     ?GetDragManagerInputSite@DragNDropProcessor@@AEAA?AV?$ComPtr@VInputSite@@@WRL@Microsoft@@UtagPOINT@@W4InputType@@PEAVBamoDragManagerClientProxy@@PEAUHitTestResult@@@Z @ 0x180149800 (-GetDragManagerInputSite@DragNDropProcessor@@AEAA-AV-$ComPtr@VInputSite@@@WRL@Microsoft@@UtagPOI.c)
 *     ?GetVelocityForPointerId@DragNDropProcessor@@AEAA?AUtagPOINTF@@K@Z @ 0x180149C50 (-GetVelocityForPointerId@DragNDropProcessor@@AEAA-AUtagPOINTF@@K@Z.c)
 *     ?StartAnimationCallBack@DragNDrop@InputETW@@SAX_K00@Z @ 0x18014BAE8 (-StartAnimationCallBack@DragNDrop@InputETW@@SAX_K00@Z.c)
 *     ?GetPositionRelativeToSite@PointerManipulationHelper@@SA?AUtagPOINT@@PEAVInputSite@@U2@@Z @ 0x1801993BC (-GetPositionRelativeToSite@PointerManipulationHelper@@SA-AUtagPOINT@@PEAVInputSite@@U2@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801D3010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall DragNDropProcessor::StartAnimation(
        DragNDropProcessor *this,
        unsigned int a2,
        struct BamoDragManagerClientProxy *a3)
{
  struct InputSite *v5; // rdi
  struct IAnimationDataProvider *AnimationDataProvider; // r14
  const char *v7; // r9
  unsigned __int64 v8; // r15
  unsigned int ProcessId; // r12d
  __int64 v10; // rax
  void (__fastcall ***v11)(_QWORD); // rbx
  __int64 (__fastcall *v12)(struct IAnimationDataProvider *, struct tagPOINTF *); // r12
  unsigned __int64 v13; // r14
  __int64 v14; // rbx
  struct tagPOINT PositionRelativeToSite; // rbx
  int v16; // eax
  unsigned int v17; // ebx
  struct InputSite *v18; // rcx
  struct InputSite *v20; // rcx
  __int64 v21[2]; // [rsp+30h] [rbp-20h] BYREF
  _BYTE v22[16]; // [rsp+40h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+38h]
  struct InputSite *v24; // [rsp+90h] [rbp+40h] BYREF
  unsigned int v25; // [rsp+98h] [rbp+48h] BYREF
  struct tagPOINTF v26; // [rsp+A8h] [rbp+58h] BYREF

  v25 = a2;
  std::_Hash<std::_Umap_traits<unsigned long,EdgyProcessor::PointerCache,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,EdgyProcessor::PointerCache>>,0>>::find<void>(
    (__int64)this + 112,
    (__int64)&v24,
    &v25);
  v5 = v24;
  if ( v24 == *((struct InputSite **)this + 15)
    || *((struct BamoDragManagerClientProxy **)v24 + 4) != a3
    || !*((_QWORD *)v24 + 4) )
  {
    return 0LL;
  }
  AnimationDataProvider = ISMStatics::GetAnimationDataProvider();
  v8 = (*(__int64 (__fastcall **)(struct IAnimationDataProvider *))(*(_QWORD *)AnimationDataProvider + 32LL))(AnimationDataProvider);
  if ( !v8 )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x47F,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\dragndrop\\system\\lib\\dragndropprocessor.cpp",
      v7);
  ProcessId = Microsoft::Bamo::BaseBamoPeer::GetProcessId(*(Microsoft::Bamo::BaseBamoPeer **)(*(_QWORD *)(*((_QWORD *)v5 + 4) + 32LL)
                                                                                            + 16LL));
  if ( *std::_Hash<std::_Umap_traits<unsigned long,EdgyProcessor::PointerCache,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,EdgyProcessor::PointerCache>>,0>>::find<void>(
          (__int64)this + 368,
          (__int64)&v26,
          &v25) == *((_QWORD *)this + 47) )
  {
    (*(void (__fastcall **)(struct IAnimationDataProvider *, struct tagPOINTF *, _QWORD))(*(_QWORD *)AnimationDataProvider
                                                                                        + 24LL))(
      AnimationDataProvider,
      &v26,
      ProcessId);
    v10 = std::_Hash<std::_Umap_traits<unsigned long,Microsoft::WRL::ComPtr<DataSourcePrincipal>,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,Microsoft::WRL::ComPtr<DataSourcePrincipal>>>,0>>::_Try_emplace<unsigned long const &,>(
            (float *)this + 92,
            (__int64)v21,
            &v25);
    Microsoft::WRL::ComPtr<DataSourcePrincipal>::operator=((__int64 *)(*(_QWORD *)v10 + 24LL), &v26);
    Microsoft::WRL::ComPtr<DataProviderRegistrarProxy>::InternalRelease((__int64 *)&v26);
  }
  v11 = *(void (__fastcall ****)(_QWORD))(*(_QWORD *)std::_Hash<std::_Umap_traits<unsigned long,Microsoft::WRL::ComPtr<DataSourcePrincipal>,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,Microsoft::WRL::ComPtr<DataSourcePrincipal>>>,0>>::_Try_emplace<unsigned long const &,>(
                                                       (float *)this + 92,
                                                       (__int64)v22,
                                                       &v25)
                                        + 24LL);
  v21[0] = (__int64)v11;
  if ( v11 )
    (**v11)(v11);
  v12 = *(__int64 (__fastcall **)(struct IAnimationDataProvider *, struct tagPOINTF *))(*(_QWORD *)AnimationDataProvider
                                                                                      + 40LL);
  v26 = (struct tagPOINTF)v11;
  if ( v11 )
    (**v11)(v11);
  v13 = v12(AnimationDataProvider, &v26);
  std::_Hash<std::_Umap_traits<unsigned long,EdgyProcessor::PointerCache,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,EdgyProcessor::PointerCache>>,0>>::find<void>(
    (__int64)this + 48,
    (__int64)&v26,
    &v25);
  v14 = *(_QWORD *)(*(_QWORD *)&v26 + 28LL);
  DragNDropProcessor::GetDragManagerInputSite(
    (__int64)this,
    (__int64 *)&v24,
    v14,
    *(_DWORD *)(*(_QWORD *)&v26 + 36LL),
    *((__int64 **)v5 + 4),
    0LL);
  if ( v24 )
  {
    PositionRelativeToSite = PointerManipulationHelper::GetPositionRelativeToSite(v24, (struct tagPOINT)v14);
    DragNDropProcessor::GetVelocityForPointerId(this, &v26, v25);
    DragNDropProcessor::FeedAnimationDataIfNeeded(this, v25, PositionRelativeToSite, v26, 0);
  }
  InputETW::DragNDrop::StartAnimationCallBack(v25, v8, v13);
  v16 = (*(__int64 (__fastcall **)(__int64, _QWORD, unsigned __int64, unsigned __int64))(*(_QWORD *)(*((_QWORD *)v5 + 4) + 8LL)
                                                                                       + 64LL))(
          *((_QWORD *)v5 + 4) + 8LL,
          v25,
          v8,
          v13);
  v17 = v16;
  if ( v16 >= 0 )
  {
    v20 = v24;
    if ( v24 )
    {
      v24 = 0LL;
      (*(void (__fastcall **)(struct InputSite *))(*(_QWORD *)v20 + 16LL))(v20);
    }
    Microsoft::WRL::ComPtr<DataProviderRegistrarProxy>::InternalRelease(v21);
    return 0LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x49A,
    (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\dragndrop\\system\\lib\\dragndropprocessor.cpp",
    (const char *)(unsigned int)v16);
  v18 = v24;
  if ( v24 )
  {
    v24 = 0LL;
    (*(void (__fastcall **)(struct InputSite *))(*(_QWORD *)v18 + 16LL))(v18);
  }
  Microsoft::WRL::ComPtr<DataProviderRegistrarProxy>::InternalRelease(v21);
  return v17;
}
