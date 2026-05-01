/*
 * XREFs of ??$MakeAndInitialize@VCompletionDelegate@?1???$WaitForCompletion@PEAUIAsyncAction@Foundation@Windows@ABI@@@details@wil@@YAJPEAUIAsyncAction@Foundation@Windows@ABI@@W4tagCOWAIT_FLAGS@@KPEA_N@Z@V1?1???$WaitForCompletion@PEAUIAsyncAction@Foundation@Windows@ABI@@@23@YAJ01K2@Z@$$V@Details@WRL@Microsoft@@YAJPEAPEAVCompletionDelegate@?1???$WaitForCompletion@PEAUIAsyncAction@Foundation@Windows@ABI@@@details@wil@@YAJPEAUIAsyncAction@Foundation@Windows@ABI@@W4tagCOWAIT_FLAGS@@KPEA_N@Z@@Z @ 0x1806B9844
 * Callers:
 *     ??$WaitForCompletion@PEAUIAsyncAction@Foundation@Windows@ABI@@@details@wil@@YAJPEAUIAsyncAction@Foundation@Windows@ABI@@W4tagCOWAIT_FLAGS@@KPEA_N@Z @ 0x1806B99A8 (--$WaitForCompletion@PEAUIAsyncAction@Foundation@Windows@ABI@@@details@wil@@YAJPEAUIAsyncAction@.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ??1?$MakeAllocator@VNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x18001522C (--1-$MakeAllocator@VNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@@Details@WR.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0FtmBase@WRL@Microsoft@@QEAA@XZ @ 0x1800305D0 (--0FtmBase@WRL@Microsoft@@QEAA@XZ.c)
 *     ?GetLastErrorFailHr@details@wil@@YAJXZ @ 0x18005D440 (-GetLastErrorFailHr@details@wil@@YAJXZ.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@_E$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x180064230 (-reset@-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@_E$1-CloseHandle@details@wil@@YAX0@ZU-$i.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1802D16C4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ___MakeAndInitialize_VCompletionDelegate__1____WaitForCompletion_PEAUIAsyncAction_Foundation_Windows_ABI___details_wil__YAJPEAUIAsyncAction_Foundation_Windows_ABI__W4tagCOWAIT_FLAGS__KPEA_N_Z_V1_1____WaitForCompletion_PEAUIAsyncAction_Foundation_Windows_ABI___23_YAJ01K2_Z___V_Details_WRL_Microsoft__YAJPEAPEAVCompletionDelegate__1____WaitForCompletion_PEAUIAsyncAction_Foundation_Windows_ABI___details_wil__YAJPEAUIAsyncAction_Foundation_Windows_ABI__W4tagCOWAIT_FLAGS__KPEA_N_Z__Z(
        __int64 *a1)
{
  _QWORD *v2; // rax
  __int64 v3; // rbx
  _QWORD *v5; // rdi
  wil::details *v6; // rcx
  wil::details *Event; // rbp
  signed int LastErrorFailHr; // eax
  unsigned int v9; // edi
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  void *v11; // [rsp+40h] [rbp+8h] BYREF
  __int64 v12; // [rsp+48h] [rbp+10h] BYREF

  *a1 = 0LL;
  v2 = operator new(0x40uLL, (const struct std::nothrow_t *)&std::nothrow);
  v3 = (__int64)v2;
  v11 = v2;
  if ( !v2 )
  {
    Microsoft::WRL::Details::MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>::~MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>(&v11);
    return 2147942414LL;
  }
  v5 = v2 + 1;
  Microsoft::WRL::FtmBase::FtmBase((Microsoft::WRL::FtmBase *)(v2 + 1));
  *(_DWORD *)(v3 + 44) = 1;
  *(_QWORD *)v3 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,ABI::Windows::Foundation::IAsyncActionCompletedHandler,Microsoft::WRL::FtmBase>::`vftable'{for `ABI::Windows::Foundation::IAsyncActionCompletedHandler'};
  *v5 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,ABI::Windows::Foundation::IAsyncActionCompletedHandler,Microsoft::WRL::FtmBase>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  *(_QWORD *)v3 = &`wil::details::WaitForCompletion<ABI::Windows::Foundation::IAsyncAction *>'::`2'::CompletionDelegate::`vftable';
  *v5 = `wil::details::WaitForCompletion<ABI::Windows::Foundation::IAsyncAction *>'::`2'::CompletionDelegate::`vftable';
  *(_DWORD *)(v3 + 48) = 0;
  *(_QWORD *)(v3 + 56) = 0LL;
  v12 = v3;
  v11 = 0LL;
  Event = (wil::details *)CreateEventExW(0LL, 0LL, 0, 0x1F0003u);
  if ( Event )
  {
    GetLastError();
    _reset___unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_CloseHandle_details_wil__YAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil__QEAAXPEAX_Z(
      (wil::details **)(v3 + 56),
      Event);
LABEL_7:
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 8LL))(v3);
    *a1 = v3;
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v12);
    Microsoft::WRL::Details::MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>::~MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>(&v11);
    return 0LL;
  }
  LastErrorFailHr = wil::details::GetLastErrorFailHr(v6);
  v9 = LastErrorFailHr;
  if ( LastErrorFailHr >= 0 )
    goto LABEL_7;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x63D,
    (int)"onecore\\internal\\sdk\\inc\\wil\\opensource/wil/winrt.h",
    (const char *)(unsigned int)LastErrorFailHr);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v12);
  Microsoft::WRL::Details::MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>::~MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>(&v11);
  return v9;
}
