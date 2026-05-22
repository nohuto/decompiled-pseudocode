/*
 * XREFs of ?StartAnimation@ResizeProcessor@@QEAAJKPEAVBamoResizeControllerClientProxy@@@Z @ 0x180151F6C
 * Callers:
 *     ?StartAnimation@ResizeControllerHost@@MEAAJPEAVBamoResizeContextualProcessorStub@@IPEAVBamoResizeControllerClientProxy@@@Z @ 0x18014F810 (-StartAnimation@ResizeControllerHost@@MEAAJPEAVBamoResizeContextualProcessorStub@@IPEAVBamoResiz.c)
 * Callees:
 *     ??$find@X@?$_Hash@V?$_Umap_traits@KUPointerCache@EdgyProcessor@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKUPointerCache@EdgyProcessor@@@std@@@4@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUPointerCache@EdgyProcessor@@@std@@@std@@@std@@@1@AEBK@Z @ 0x1800274C8 (--$find@X@-$_Hash@V-$_Umap_traits@KUPointerCache@EdgyProcessor@@V-$_Uhash_compare@KU-$hash@K@std.c)
 *     ?GetProcessId@BaseBamoPeer@Bamo@Microsoft@@QEBAIXZ @ 0x180037A08 (-GetProcessId@BaseBamoPeer@Bamo@Microsoft@@QEBAIXZ.c)
 *     ?InternalRelease@?$ComPtr@VDataProviderRegistrarProxy@@@WRL@Microsoft@@IEAAKXZ @ 0x180058BD8 (-InternalRelease@-$ComPtr@VDataProviderRegistrarProxy@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18008E73C (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008F754 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ScreenPointToRelative@CInputTransform@@SA?AUTransformedPoint@@AEBU2@AEBUtagINPUT_TRANSFORM@@@Z @ 0x180099824 (-ScreenPointToRelative@CInputTransform@@SA-AUTransformedPoint@@AEBU2@AEBUtagINPUT_TRANSFORM@@@Z.c)
 *     ?GetAnimationDataProvider@ISMStatics@@SAPEAUIAnimationDataProvider@@XZ @ 0x18009BFDC (-GetAnimationDataProvider@ISMStatics@@SAPEAUIAnimationDataProvider@@XZ.c)
 *     ??$_Try_emplace@AEBK$$V@?$_Hash@V?$_Umap_traits@KV?$ComPtr@VDataSourcePrincipal@@@WRL@Microsoft@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKV?$ComPtr@VDataSourcePrincipal@@@WRL@Microsoft@@@std@@@5@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_List_node@U?$pair@$$CBKV?$ComPtr@VDataSourcePrincipal@@@WRL@Microsoft@@@std@@PEAX@std@@_N@1@AEBK@Z @ 0x180149B80 (--$_Try_emplace@AEBK$$V@-$_Hash@V-$_Umap_traits@KV-$ComPtr@VDataSourcePrincipal@@@WRL@Microsoft@.c)
 *     ??4?$ComPtr@VDataSourcePrincipal@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x18014A984 (--4-$ComPtr@VDataSourcePrincipal@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ??$_Try_emplace@AEBK$$V@?$_Hash@V?$_Umap_traits@KUInitialPointerInfo@ResizeProcessor@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKUInitialPointerInfo@ResizeProcessor@@@std@@@4@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_List_node@U?$pair@$$CBKUInitialPointerInfo@ResizeProcessor@@@std@@PEAX@std@@_N@1@AEBK@Z @ 0x18014FCC4 (--$_Try_emplace@AEBK$$V@-$_Hash@V-$_Umap_traits@KUInitialPointerInfo@ResizeProcessor@@V-$_Uhash_.c)
 *     ?FeedAnimationDataIfNeeded@ResizeProcessor@@AEAAXKUtagPOINT@@@Z @ 0x180150AF0 (-FeedAnimationDataIfNeeded@ResizeProcessor@@AEAAXKUtagPOINT@@@Z.c)
 *     ?StartAnimationCallBack@Resize@InputETW@@SAX_K00@Z @ 0x180152234 (-StartAnimationCallBack@Resize@InputETW@@SAX_K00@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DB010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall ResizeProcessor::StartAnimation(
        ResizeProcessor *this,
        unsigned int a2,
        struct BamoResizeControllerClientProxy *a3)
{
  struct tagPOINT v5; // rdi
  unsigned int v6; // r14d
  struct IAnimationDataProvider *AnimationDataProvider; // rsi
  const char *v8; // r9
  unsigned __int64 v9; // r12
  unsigned int ProcessId; // r13d
  __int64 v11; // rax
  void (__fastcall ***v12)(_QWORD); // rbx
  __int64 (__fastcall *v13)(struct IAnimationDataProvider *, struct tagPOINT *); // r13
  unsigned __int64 v14; // rbx
  __int64 v15; // rsi
  __int64 v16; // rbx
  __int128 *v17; // r8
  float *v18; // rax
  int v19; // eax
  int v20; // ebx
  __int64 v22; // [rsp+38h] [rbp-48h] BYREF
  unsigned __int64 v23; // [rsp+40h] [rbp-40h]
  _BYTE v24[16]; // [rsp+48h] [rbp-38h] BYREF
  char v25[16]; // [rsp+58h] [rbp-28h] BYREF
  char v26[24]; // [rsp+68h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+38h]
  struct tagPOINT v28; // [rsp+C0h] [rbp+40h] BYREF
  unsigned int v29; // [rsp+C8h] [rbp+48h] BYREF
  void (__fastcall ***v30)(_QWORD); // [rsp+D8h] [rbp+58h] BYREF

  v29 = a2;
  std::_Hash<std::_Umap_traits<unsigned long,EdgyProcessor::PointerCache,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,EdgyProcessor::PointerCache>>,0>>::find<void>(
    (__int64)this + 24,
    (__int64)&v28,
    &v29);
  v5 = v28;
  if ( v28 != *((_QWORD *)this + 4) && *(struct BamoResizeControllerClientProxy **)(*(_QWORD *)&v28 + 24LL) == a3 )
  {
    v6 = 0;
    if ( *(_QWORD *)(*(_QWORD *)&v28 + 24LL) )
    {
      AnimationDataProvider = ISMStatics::GetAnimationDataProvider();
      v9 = (*(__int64 (__fastcall **)(struct IAnimationDataProvider *))(*(_QWORD *)AnimationDataProvider + 32LL))(AnimationDataProvider);
      if ( !v9 )
        wil::details::in1diag3::_FailFast_Unexpected(
          retaddr,
          (void *)0x13E,
          (int)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\resize\\system\\lib\\resizeprocessor.cpp",
          v8);
      ProcessId = Microsoft::Bamo::BaseBamoPeer::GetProcessId(*(Microsoft::Bamo::BaseBamoPeer **)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)&v5 + 24LL) + 32LL)
                                                                                                + 16LL));
      if ( *std::_Hash<std::_Umap_traits<unsigned long,EdgyProcessor::PointerCache,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,EdgyProcessor::PointerCache>>,0>>::find<void>(
              (__int64)this + 296,
              (__int64)&v28,
              &v29) == *((_QWORD *)this + 38) )
      {
        (*(void (__fastcall **)(struct IAnimationDataProvider *, struct tagPOINT *, _QWORD))(*(_QWORD *)AnimationDataProvider
                                                                                           + 24LL))(
          AnimationDataProvider,
          &v28,
          ProcessId);
        v11 = std::_Hash<std::_Umap_traits<unsigned long,Microsoft::WRL::ComPtr<DataSourcePrincipal>,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,Microsoft::WRL::ComPtr<DataSourcePrincipal>>>,0>>::_Try_emplace<unsigned long const &,>(
                (float *)this + 74,
                (__int64)v24,
                &v29);
        Microsoft::WRL::ComPtr<DataSourcePrincipal>::operator=((__int64 *)(*(_QWORD *)v11 + 24LL), &v28);
        Microsoft::WRL::ComPtr<DataProviderRegistrarProxy>::InternalRelease((__int64 *)&v28);
      }
      v12 = *(void (__fastcall ****)(_QWORD))(*(_QWORD *)std::_Hash<std::_Umap_traits<unsigned long,Microsoft::WRL::ComPtr<DataSourcePrincipal>,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,Microsoft::WRL::ComPtr<DataSourcePrincipal>>>,0>>::_Try_emplace<unsigned long const &,>(
                                                           (float *)this + 74,
                                                           (__int64)v25,
                                                           &v29)
                                            + 24LL);
      v30 = v12;
      if ( v12 )
        (**v12)(v12);
      v13 = *(__int64 (__fastcall **)(struct IAnimationDataProvider *, struct tagPOINT *))(*(_QWORD *)AnimationDataProvider
                                                                                         + 40LL);
      v28 = (struct tagPOINT)v12;
      if ( v12 )
        (**v12)(v12);
      v14 = v13(AnimationDataProvider, &v28);
      v23 = v14;
      std::_Hash<std::_Umap_traits<unsigned long,EdgyProcessor::PointerCache,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,EdgyProcessor::PointerCache>>,0>>::find<void>(
        (__int64)this + 88,
        (__int64)&v28,
        &v29);
      if ( v28 == *((_QWORD *)this + 12) )
        goto LABEL_17;
      v15 = *(_QWORD *)(*(_QWORD *)&v28 + 24LL);
      v28 = 0LL;
      if ( *std::_Hash<std::_Umap_traits<unsigned long,EdgyProcessor::PointerCache,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,EdgyProcessor::PointerCache>>,0>>::find<void>(
              (__int64)this + 168,
              (__int64)&v22,
              &v29) != *((_QWORD *)this + 22) )
      {
        v16 = *(_QWORD *)(*(_QWORD *)std::_Hash<std::_Umap_traits<unsigned long,ResizeProcessor::InitialPointerInfo,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,ResizeProcessor::InitialPointerInfo>>,0>>::_Try_emplace<unsigned long const &,>(
                                       (float *)this + 42,
                                       (__int64)v24,
                                       &v29)
                        + 20LL);
        v22 = v16;
        v17 = (__int128 *)(*(_QWORD *)std::_Hash<std::_Umap_traits<unsigned long,ResizeProcessor::InitialPointerInfo,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,ResizeProcessor::InitialPointerInfo>>,0>>::_Try_emplace<unsigned long const &,>(
                                        (float *)this + 42,
                                        (__int64)v26,
                                        &v29)
                         + 28LL);
        v28 = (struct tagPOINT)_mm_unpacklo_ps(
                                 (__m128)COERCE_UNSIGNED_INT((float)(int)v15),
                                 (__m128)COERCE_UNSIGNED_INT((float)SHIDWORD(v15))).m128_u64[0];
        v18 = (float *)CInputTransform::ScreenPointToRelative((__int64)v24, (float *)&v28, v17);
        v28.x = (int)*v18 - v16;
        v28.y = (int)v18[1] - HIDWORD(v22);
        v14 = v23;
      }
      ResizeProcessor::FeedAnimationDataIfNeeded(this, v29, v28);
      InputETW::Resize::StartAnimationCallBack(v29, v9, v14);
      v19 = (*(__int64 (__fastcall **)(__int64, _QWORD, unsigned __int64, unsigned __int64))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)&v5 + 24LL) + 8LL)
                                                                                           + 56LL))(
              *(_QWORD *)(*(_QWORD *)&v5 + 24LL) + 8LL,
              v29,
              v9,
              v14);
      v20 = v19;
      if ( v19 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x161,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\resize\\system\\lib\\resizeprocessor.cpp",
          (const char *)(unsigned int)v19);
        v6 = v20;
LABEL_17:
        Microsoft::WRL::ComPtr<DataProviderRegistrarProxy>::InternalRelease((__int64 *)&v30);
        return v6;
      }
      Microsoft::WRL::ComPtr<DataProviderRegistrarProxy>::InternalRelease((__int64 *)&v30);
    }
  }
  return 0LL;
}
