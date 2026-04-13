/*
 * XREFs of ?ProcessContainer@LayoutResolver@TargetedContentLayoutHelpers@CreativeFramework@@AEAAXPEAUITargetedContentContainer@TargetedContent@Services@Windows@@PEAUHSTRING__@@PEAUITargetedContentIdAliasStore@Internal@567@@Z @ 0x1800ADB9C
 * Callers:
 *     ?RetrieveLayoutAndItems@LayoutResolver@TargetedContentLayoutHelpers@CreativeFramework@@AEAAXPEAUITargetedContentIdAliasStore@Internal@TargetedContent@Services@Windows@@V1ShellPlacementTelemetry@Logging@3@@Z @ 0x1800AE954 (-RetrieveLayoutAndItems@LayoutResolver@TargetedContentLayoutHelpers@CreativeFramework@@AEAAXPEAU.c)
 * Callees:
 *     ??1?$com_ptr_t@UIStorageFolder@Storage@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18002A34C (--1-$com_ptr_t@UIStorageFolder@Storage@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003DC1C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?FindLayout@LayoutResolver@TargetedContentLayoutHelpers@CreativeFramework@@AEAAXPEAUITargetedContentCollection@TargetedContent@Services@Windows@@PEAUHSTRING__@@PEAUITargetedContentIdAliasStore@Internal@567@@Z @ 0x1800AC714 (-FindLayout@LayoutResolver@TargetedContentLayoutHelpers@CreativeFramework@@AEAAXPEAUITargetedCon.c)
 *     ?RetrieveItemsFromCollection@LayoutResolver@TargetedContentLayoutHelpers@CreativeFramework@@AEAAXPEAUITargetedContentCollection@TargetedContent@Services@Windows@@PEAUHSTRING__@@I@Z @ 0x1800AE428 (-RetrieveItemsFromCollection@LayoutResolver@TargetedContentLayoutHelpers@CreativeFramework@@AEAA.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800BD010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall CreativeFramework::TargetedContentLayoutHelpers::LayoutResolver::ProcessContainer(
        HSTRING *this,
        struct Windows::Services::TargetedContent::ITargetedContentContainer *a2,
        HSTRING a3,
        struct Windows::Services::TargetedContent::Internal::ITargetedContentIdAliasStore *a4)
{
  __int64 v7; // rax
  int v8; // eax
  int v9; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct Windows::Services::TargetedContent::ITargetedContentCollection *v11; // [rsp+38h] [rbp+10h] BYREF

  v7 = *(_QWORD *)a2;
  v11 = 0LL;
  v8 = (*(__int64 (__fastcall **)(struct Windows::Services::TargetedContent::ITargetedContentContainer *, struct Windows::Services::TargetedContent::ITargetedContentCollection **))(v7 + 72))(
         a2,
         &v11);
  if ( v8 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x193,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\targetedcontentlayoutresolver\\layoutresolver.cpp",
      (const char *)(unsigned int)v8,
      v9);
  if ( !*this )
    CreativeFramework::TargetedContentLayoutHelpers::LayoutResolver::FindLayout(this, v11, a3, a4);
  CreativeFramework::TargetedContentLayoutHelpers::LayoutResolver::RetrieveItemsFromCollection(
    (CreativeFramework::TargetedContentLayoutHelpers::LayoutResolver *)this,
    v11,
    a3,
    0);
  wil::com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>::~com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>((__int64 *)&v11);
}
