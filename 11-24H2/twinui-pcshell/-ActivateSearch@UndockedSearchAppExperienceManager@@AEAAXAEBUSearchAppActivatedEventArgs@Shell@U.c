/*
 * XREFs of ?ActivateSearch@UndockedSearchAppExperienceManager@@AEAAXAEBUSearchAppActivatedEventArgs@Shell@UI@WindowsUdk@winrt@@_N@Z @ 0x1802439A0
 * Callers:
 *     ?ActivateAppAsync@UndockedSearchAppExperienceManager@@AEAAX_NW4ShellExperienceViewFocusOptions@Experience@Shell@Internal@Windows@@AEBUhstring@winrt@@W4SearchAppActivationMode@4UI@WindowsUdk@8@PEBG@Z @ 0x1802430DC (-ActivateAppAsync@UndockedSearchAppExperienceManager@@AEAAX_NW4ShellExperienceViewFocusOptions@E.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002D354 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??B?$ComPtrRef@VWeakRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVWeakRef@23@XZ @ 0x18003CD84 (--B-$ComPtrRef@VWeakRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVWeakRef@23@XZ.c)
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18004C5EC (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?InternalAddRef@?$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@IEBAXXZ @ 0x18004C654 (-InternalAddRef@-$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800A59D8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$AsWeak@VUndockedSearchAppExperienceManager@@@WRL@Microsoft@@YAJPEAVUndockedSearchAppExperienceManager@@PEAVWeakRef@01@@Z @ 0x180187508 (--$AsWeak@VUndockedSearchAppExperienceManager@@@WRL@Microsoft@@YAJPEAVUndockedSearchAppExperienc.c)
 *     ?IsSystemProvided@?$consume_WindowsUdk_UI_Shell_IWebSearchProvider@UIWebSearchProvider@Shell@UI@WindowsUdk@winrt@@@impl@winrt@@QEBA@XZ @ 0x1801CA780 (-IsSystemProvided@-$consume_WindowsUdk_UI_Shell_IWebSearchProvider@UIWebSearchProvider@Shell@UI@.c)
 *     ?Activate@UndockedSearchAppExperienceManager@@AEAAXAEBUSearchAppActivatedEventArgs@Shell@UI@WindowsUdk@winrt@@_N@Z @ 0x180242D8C (-Activate@UndockedSearchAppExperienceManager@@AEAAXAEBUSearchAppActivatedEventArgs@Shell@UI@Wind.c)
 *     ?check_hresult@winrt@@YA?AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z @ 0x1802DF798 (-check_hresult@winrt@@YA-AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_e40398d42ff5cb66d230c2cd21ebd5c8___ @ 0x1803AF4D8 (Windows--Internal--ComTaskPool--QueueTask__lambda_e40398d42ff5cb66d230c2cd21ebd5c8___.c)
 *     _lambda_e40398d42ff5cb66d230c2cd21ebd5c8_::__lambda_e40398d42ff5cb66d230c2cd21ebd5c8_ @ 0x1803B5300 (_lambda_e40398d42ff5cb66d230c2cd21ebd5c8_--__lambda_e40398d42ff5cb66d230c2cd21ebd5c8_.c)
 *     ?DetectAndMitigateSpartanSubdomainIssue@UndockedSearchAppExperienceManager@@AEAAJXZ @ 0x1803B7EAC (-DetectAndMitigateSpartanSubdomainIssue@UndockedSearchAppExperienceManager@@AEAAJXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall UndockedSearchAppExperienceManager::ActivateSearch(
        UndockedSearchAppExperienceManager *this,
        const struct winrt::WindowsUdk::UI::Shell::SearchAppActivatedEventArgs *a2,
        char a3)
{
  int v6; // eax
  __int64 (__fastcall ***v7)(_QWORD, __int64 *, __int64 **); // rcx
  unsigned int v8; // eax
  char IsSystemProvided; // bl
  __int64 *v10; // rax
  unsigned int v11; // eax
  __int64 v12; // rdx
  __int64 *v13; // rcx
  int v14; // ebx
  int v15; // [rsp+20h] [rbp-20h] BYREF
  __int128 v16; // [rsp+28h] [rbp-18h] BYREF
  UndockedSearchAppExperienceManager *v17; // [rsp+38h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+18h]
  __int64 **v19; // [rsp+68h] [rbp+28h] BYREF
  __int64 *v20; // [rsp+78h] [rbp+38h] BYREF

  v6 = UndockedSearchAppExperienceManager::DetectAndMitigateSpartanSubdomainIssue(this);
  if ( v6 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0xBD6,
      (int)"pcshell\\twinui\\experiencemanagers\\lib\\undockedsearchappexperiencemanager.cpp",
      (const char *)(unsigned int)v6);
  v7 = *(__int64 (__fastcall ****)(_QWORD, __int64 *, __int64 **))a2;
  if ( *(_QWORD *)a2 )
  {
    v20 = 0LL;
    v15 = 0;
    v16 = 0LL;
    v8 = (**v7)(
           v7,
           &winrt::impl::guid_v<winrt::Windows::ApplicationModel::Activation::IPrelaunchActivatedEventArgs>,
           &v20);
    winrt::check_hresult(&v19, v8, &v15);
    v19 = (__int64 **)v20;
  }
  else
  {
    v19 = 0LL;
  }
  IsSystemProvided = winrt::impl::consume_WindowsUdk_UI_Shell_IWebSearchProvider<winrt::WindowsUdk::UI::Shell::IWebSearchProvider>::IsSystemProvided((__int64 *)&v19);
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v19);
  if ( IsSystemProvided || !a3 )
  {
    UndockedSearchAppExperienceManager::Activate(this, a2, a3);
  }
  else
  {
    v20 = 0LL;
    v15 = 0;
    v16 = 0LL;
    v19 = &v20;
    v10 = Microsoft::WRL::Details::ComPtrRef<Microsoft::WRL::WeakRef>::operator Microsoft::WRL::WeakRef *((__int64 **)&v19);
    v11 = Microsoft::WRL::AsWeak<UndockedSearchAppExperienceManager>((__int64)this, v10);
    winrt::check_hresult(&v19, v11, &v15);
    LOBYTE(v15) = a3;
    *(_QWORD *)&v16 = *(_QWORD *)a2;
    Microsoft::WRL::ComPtr<IAppLayoutOperationItem>::InternalAddRef((__int64 *)&v16);
    v13 = v20;
    *((_QWORD *)&v16 + 1) = v20;
    if ( v20 )
      (*(void (__fastcall **)(__int64 *))(*v20 + 8))(v20);
    v17 = this;
    v14 = Windows::Internal::ComTaskPool::QueueTask__lambda_e40398d42ff5cb66d230c2cd21ebd5c8___(
            v13,
            v12,
            *((unsigned int *)this + 40),
            &v15);
    lambda_e40398d42ff5cb66d230c2cd21ebd5c8_::__lambda_e40398d42ff5cb66d230c2cd21ebd5c8_(&v15);
    if ( v14 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0xBFF,
        (int)"pcshell\\twinui\\experiencemanagers\\lib\\undockedsearchappexperiencemanager.cpp",
        (const char *)(unsigned int)v14,
        v15);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v20);
  }
}
