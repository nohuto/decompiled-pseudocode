/*
 * XREFs of ?DisableCloudPC@CloudPCComponent@implementation@Shell@Internal@Windows@winrt@@QEAAXAEBUhstring@6@00@Z @ 0x18063FDD8
 * Callers:
 *     ?DisableCloudPC@?$produce@UCloudPCComponent@implementation@Shell@Internal@Windows@winrt@@UIRemoteSystemProviderExtension@RemoteSystems@3456@@impl@winrt@@UEAAHPEAX00@Z @ 0x18063FD90 (-DisableCloudPC@-$produce@UCloudPCComponent@implementation@Shell@Internal@Windows@winrt@@UIRemot.c)
 *     ?EnableCloudPC@CloudPCComponent@implementation@Shell@Internal@Windows@winrt@@QEAAXAEBUhstring@6@000@Z @ 0x18063FFB0 (-EnableCloudPC@CloudPCComponent@implementation@Shell@Internal@Windows@winrt@@QEAAXAEBUhstring@6@.c)
 * Callees:
 *     ??0ThreadFailureCallbackHolder@details@wil@@QEAA@PEAUIFailureCallback@12@PEAUCallContextInfo@2@_N@Z @ 0x18003F64C (--0ThreadFailureCallbackHolder@details@wil@@QEAA@PEAUIFailureCallback@12@PEAUCallContextInfo@2@_.c)
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18004C5EC (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x180053844 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     ?c_str@hstring@winrt@@QEBAPEBGXZ @ 0x180056268 (-c_str@hstring@winrt@@QEBAPEBGXZ.c)
 *     ?complete_without_lock@?$shared_data@$00$0A@$0A@@details@tip2@@AEAAXXZ @ 0x180295BCC (-complete_without_lock@-$shared_data@$00$0A@$0A@@details@tip2@@AEAAXXZ.c)
 *     ??Hwinrt@@YA?AUhstring@0@AEBU10@0@Z @ 0x1802A350C (--Hwinrt@@YA-AUhstring@0@AEBU10@0@Z.c)
 *     ??Hwinrt@@YA?AUhstring@0@AEBU10@PEBG@Z @ 0x1802AAA38 (--Hwinrt@@YA-AUhstring@0@AEBU10@PEBG@Z.c)
 *     ?current@slim_source_location@impl@winrt@@SA?AU123@IQEBD0@Z @ 0x1802DDF04 (-current@slim_source_location@impl@winrt@@SA-AU123@IQEBD0@Z.c)
 *     ?check_hresult@winrt@@YA?AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z @ 0x1802DF798 (-check_hresult@winrt@@YA-AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z.c)
 *     ??1?$com_ptr_t@V?$merged_data@U_tip_EnableCloudPCTipTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18049C2B8 (--1-$com_ptr_t@V-$merged_data@U_tip_EnableCloudPCTipTest@@U1@@details@tip2@@Uerr_returncode_poli.c)
 *     ??1?$test_watcher@V?$merged_data@U_tip_AppThumbnailTest@@U1@@details@tip2@@@tip2@@QEAA@XZ @ 0x18049C38C (--1-$test_watcher@V-$merged_data@U_tip_AppThumbnailTest@@U1@@details@tip2@@@tip2@@QEAA@XZ.c)
 *     ??$create_and_initialize@URegistrationData@implementation@Shell@Internal@Windows@winrt@@AEBUhstring@6@AEBU76@AEAY00$$CBG@impl@winrt@@YAPEAURegistrationData@implementation@Shell@Internal@Windows@1@AEBUhstring@1@0AEAY00$$CBG@Z @ 0x18063C99C (--$create_and_initialize@URegistrationData@implementation@Shell@Internal@Windows@winrt@@AEBUhstr.c)
 *     ?start@?$tip_test@V?$merged_data@U_tip_DisableCloudPCTipTest@@U1@@details@tip2@@@tip2@@QEAA?AU_GUID@@XZ @ 0x180643734 (-start@-$tip_test@V-$merged_data@U_tip_DisableCloudPCTipTest@@U1@@details@tip2@@@tip2@@QEAA-AU_G.c)
 *     ?DeactivateDisabledRemoteDesktop@RemoteSessionWindowManager@implementation@Shell@Internal@Windows@winrt@@QEAAXAEBUhstring@6@@Z @ 0x18065A2CC (-DeactivateDisabledRemoteDesktop@RemoteSessionWindowManager@implementation@Shell@Internal@Window.c)
 *     ?UpdateRegistrationData@RemoteSystemProvider@implementation@Shell@Internal@Windows@winrt@@SAXAEBURegistrationData@3456@AEB_N@Z @ 0x1806610CC (-UpdateRegistrationData@RemoteSystemProvider@implementation@Shell@Internal@Windows@winrt@@SAXAEB.c)
 */

// Hidden C++ exception states: #wind=5
void __fastcall winrt::Windows::Internal::Shell::implementation::CloudPCComponent::DisableCloudPC(
        winrt::Windows::Internal::Shell::implementation::CloudPCComponent *this,
        const struct winrt::hstring *a2,
        const struct winrt::hstring *a3,
        const struct winrt::hstring *a4)
{
  __int64 v8; // r14
  __int64 *v9; // rax
  __int64 *v10; // rax
  winrt::hstring *v11; // rax
  const WCHAR *v12; // rax
  int v13; // eax
  volatile signed __int32 *v14; // rax
  volatile signed __int32 *v15; // [rsp+20h] [rbp-49h] BYREF
  volatile signed __int32 *v16[3]; // [rsp+28h] [rbp-41h] BYREF
  void **v17; // [rsp+40h] [rbp-29h] BYREF
  _BYTE v18[48]; // [rsp+48h] [rbp-21h] BYREF
  volatile signed __int32 *v19; // [rsp+78h] [rbp+Fh]
  _BYTE v20[64]; // [rsp+80h] [rbp+17h] BYREF
  int v21; // [rsp+D0h] [rbp+67h] BYREF
  volatile signed __int32 *v22; // [rsp+E0h] [rbp+77h] BYREF
  volatile signed __int32 *v23; // [rsp+E8h] [rbp+7Fh] BYREF

  v22 = 0LL;
  tip2::tip_test<tip2::details::merged_data<_tip_DisableCloudPCTipTest,_tip_DisableCloudPCTipTest>>::start(&v22, v16);
  v17 = &tip2::test_watcher<tip2::details::merged_data<_tip_SetPhysicalDeviceAccessRegKeyTipTest,_tip_SetPhysicalDeviceAccessRegKeyTipTest>>::`vftable';
  wil::details::ThreadFailureCallbackHolder::ThreadFailureCallbackHolder(
    (wil::details::ThreadFailureCallbackHolder *)v18,
    (struct wil::details::IFailureCallback *)&v17,
    0LL,
    1);
  v19 = v22;
  if ( v22 )
    _InterlockedIncrement(v22 + 68);
  wil::com_ptr_t<tip2::details::merged_data<_tip_EnableCloudPCTipTest,_tip_EnableCloudPCTipTest>,wil::err_returncode_policy>::~com_ptr_t<tip2::details::merged_data<_tip_EnableCloudPCTipTest,_tip_EnableCloudPCTipTest>,wil::err_returncode_policy>((void **)&v22);
  winrt::Windows::Internal::Shell::implementation::RemoteSessionWindowManager::DeactivateDisabledRemoteDesktop(
    (winrt::Windows::Internal::Shell::implementation::RemoteSessionWindowManager *)((*((_QWORD *)this + 13) - 16LL) & -(__int64)(*((_QWORD *)this + 13) != 0LL)),
    a4);
  v8 = winrt::impl::slim_source_location::current((__int64)v20);
  v9 = (__int64 *)winrt::operator+((volatile signed __int32 *)v16, (__int64 *)a2, (__int64 *)a3);
  v10 = (__int64 *)winrt::operator+((volatile signed __int32 *)&v15, v9, (__int64)L"\\");
  v11 = (winrt::hstring *)winrt::operator+((volatile signed __int32 *)&v23, v10, (__int64 *)a4);
  v12 = winrt::hstring::c_str(v11);
  v13 = RegDeleteKeyW(HKEY_CURRENT_USER, v12);
  if ( v13 > 0 )
    v13 = (unsigned __int16)v13 | 0x80070000;
  winrt::check_hresult(&v21, v13, v8);
  winrt::handle_type<winrt::impl::hstring_traits>::close(&v23);
  winrt::handle_type<winrt::impl::hstring_traits>::close(&v15);
  winrt::handle_type<winrt::impl::hstring_traits>::close(v16);
  LOBYTE(v21) = 0;
  v14 = winrt::impl::create_and_initialize<winrt::Windows::Internal::Shell::implementation::RegistrationData,winrt::hstring const &,winrt::hstring const &,unsigned short const (&)[1]>(
          a4,
          a3,
          (unsigned __int16 *)&pvData);
  v22 = (volatile signed __int32 *)((unsigned __int64)(v14 + 4) & -(__int64)(v14 != 0LL));
  winrt::Windows::Internal::Shell::implementation::RemoteSystemProvider::UpdateRegistrationData(
    (const struct winrt::Windows::Internal::Shell::RegistrationData *)&v22,
    (const bool *)&v21);
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v22);
  tip2::details::shared_data<1,0,0>::complete_without_lock((__int64)(v19 + 2));
  tip2::test_watcher<tip2::details::merged_data<_tip_AppThumbnailTest,_tip_AppThumbnailTest>>::~test_watcher<tip2::details::merged_data<_tip_AppThumbnailTest,_tip_AppThumbnailTest>>((__int64)&v17);
}
