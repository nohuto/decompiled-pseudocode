/*
 * XREFs of ?FeedAnimationDataIfNeeded@DragNDropProcessor@@AEAAXKUtagPOINT@@UtagPOINTF@@_N@Z @ 0x180149510
 * Callers:
 *     ?OnInput@DragNDropProcessor@@UEAAJPEAUInputInfo@@PEAVInputContext@@PEAUContextualProcessorResponse@@@Z @ 0x18014A8E0 (-OnInput@DragNDropProcessor@@UEAAJPEAUInputInfo@@PEAVInputContext@@PEAUContextualProcessorRespon.c)
 *     ?StartAnimation@DragNDropProcessor@@QEAAJKPEAVBamoDragManagerClientProxy@@@Z @ 0x18014B864 (-StartAnimation@DragNDropProcessor@@QEAAJKPEAVBamoDragManagerClientProxy@@@Z.c)
 * Callees:
 *     ??$find@X@?$_Hash@V?$_Umap_traits@KUPointerCache@EdgyProcessor@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKUPointerCache@EdgyProcessor@@@std@@@4@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUPointerCache@EdgyProcessor@@@std@@@std@@@std@@@1@AEBK@Z @ 0x180026F08 (--$find@X@-$_Hash@V-$_Umap_traits@KUPointerCache@EdgyProcessor@@V-$_Uhash_compare@KU-$hash@K@std.c)
 *     ?InternalRelease@?$ComPtr@VDataProviderRegistrarProxy@@@WRL@Microsoft@@IEAAKXZ @ 0x180058DC8 (-InternalRelease@-$ComPtr@VDataProviderRegistrarProxy@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008DFBC (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetAnimationDataProvider@ISMStatics@@SAPEAUIAnimationDataProvider@@XZ @ 0x18009BE2C (-GetAnimationDataProvider@ISMStatics@@SAPEAUIAnimationDataProvider@@XZ.c)
 *     ?FeedAnimationData@DragNDrop@InputETW@@SAX_K00UtagPOINT@@UVector2@Numerics@Foundation@Windows@@_N@Z @ 0x180149400 (-FeedAnimationData@DragNDrop@InputETW@@SAX_K00UtagPOINT@@UVector2@Numerics@Foundation@Windows@@_.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801D3010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=5
void __fastcall DragNDropProcessor::FeedAnimationDataIfNeeded(
        DragNDropProcessor *this,
        unsigned int a2,
        struct tagPOINT a3,
        struct tagPOINTF a4,
        unsigned __int8 a5)
{
  __int64 v6; // r15
  void (__fastcall ***v8)(_QWORD); // rbx
  struct IAnimationDataProvider *AnimationDataProvider; // rsi
  void (__fastcall *v10)(struct IAnimationDataProvider *, __int64 *, void (__fastcall ****)(_QWORD)); // r14
  __int64 (__fastcall *v11)(struct IAnimationDataProvider *, void (__fastcall ****)(_QWORD)); // r14
  __int64 v12; // rbx
  __int64 v13; // rax
  unsigned __int8 v14; // si
  int v15; // eax
  int v16; // eax
  __int64 v17; // r8
  int v18; // eax
  __int64 v19; // rcx
  void (__fastcall ***v21)(_QWORD); // [rsp+38h] [rbp-40h] BYREF
  void (__fastcall ***v22)(_QWORD); // [rsp+40h] [rbp-38h] BYREF
  void (__fastcall ***v23)(_QWORD); // [rsp+48h] [rbp-30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+30h]
  __int64 v25; // [rsp+B0h] [rbp+38h] BYREF
  unsigned int v26; // [rsp+B8h] [rbp+40h] BYREF
  struct tagPOINT v27; // [rsp+C0h] [rbp+48h]

  v27 = a3;
  v26 = a2;
  v6 = a2;
  std::_Hash<std::_Umap_traits<unsigned long,EdgyProcessor::PointerCache,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,EdgyProcessor::PointerCache>>,0>>::find<void>(
    (__int64)this + 368,
    (__int64)&v25,
    &v26);
  if ( v25 != *((_QWORD *)this + 47) )
  {
    v8 = *(void (__fastcall ****)(_QWORD))(v25 + 24);
    v23 = v8;
    if ( v8 )
      (**v8)(v8);
    AnimationDataProvider = ISMStatics::GetAnimationDataProvider();
    v10 = *(void (__fastcall **)(struct IAnimationDataProvider *, __int64 *, void (__fastcall ****)(_QWORD)))(*(_QWORD *)AnimationDataProvider + 48LL);
    v21 = v8;
    if ( v8 )
      (**v8)(v8);
    v10(AnimationDataProvider, &v25, &v21);
    v11 = *(__int64 (__fastcall **)(struct IAnimationDataProvider *, void (__fastcall ****)(_QWORD)))(*(_QWORD *)AnimationDataProvider + 40LL);
    v22 = v8;
    if ( v8 )
      (**v8)(v8);
    v12 = v11(AnimationDataProvider, &v22);
    v13 = (*(__int64 (__fastcall **)(struct IAnimationDataProvider *))(*(_QWORD *)AnimationDataProvider + 32LL))(AnimationDataProvider);
    v14 = a5;
    InputETW::DragNDrop::FeedAnimationData(
      v6,
      v13,
      v12,
      *(_QWORD *)&a3,
      _mm_unpacklo_ps((__m128)LODWORD(a4.x), (__m128)LODWORD(a4.y)).m128_i64[0],
      a5);
    v15 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)(v25 + 8) + 48LL))(v25 + 8, 1LL);
    if ( v15 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x4CE,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\dragndrop\\system\\lib\\dragndropprocessor.cpp",
        (const char *)(unsigned int)v15,
        0);
    v16 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)(v25 + 8) + 48LL))(v25 + 8, 2LL);
    if ( v16 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x4CF,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\dragndrop\\system\\lib\\dragndropprocessor.cpp",
        (const char *)(unsigned int)v16,
        0);
    LOBYTE(v17) = v14;
    v18 = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)(v25 + 8) + 24LL))(v25 + 8, 3LL, v17);
    if ( v18 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x4D0,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\dragndrop\\system\\lib\\dragndropprocessor.cpp",
        (const char *)(unsigned int)v18,
        0);
    v19 = v25;
    if ( v25 )
    {
      v25 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 8LL))(v19);
    }
    Microsoft::WRL::ComPtr<DataProviderRegistrarProxy>::InternalRelease((__int64 *)&v23);
  }
}
