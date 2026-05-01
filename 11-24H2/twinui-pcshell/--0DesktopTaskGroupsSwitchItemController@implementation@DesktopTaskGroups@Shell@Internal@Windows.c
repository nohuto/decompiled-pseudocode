/*
 * XREFs of ??0DesktopTaskGroupsSwitchItemController@implementation@DesktopTaskGroups@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x1802A4F30
 * Callers:
 *     ??$make@UDesktopTaskGroupsSwitchItemController@implementation@DesktopTaskGroups@Shell@Internal@Windows@winrt@@$$V@winrt@@YA?A_PXZ @ 0x1802A4EC8 (--$make@UDesktopTaskGroupsSwitchItemController@implementation@DesktopTaskGroups@Shell@Internal@W.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ @ 0x180047190 (-unconditional_release_ref@-$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ.c)
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18004C5EC (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?reset@?$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ @ 0x18004D04C (-reset@-$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ.c)
 *     ??4ShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@QEAAAEAU01234@$$QEAU01234@@Z @ 0x180051814 (--4ShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@QEAAAEAU01234@$$QEAU01234@@Z.c)
 *     ??$create_instance@UIServiceProvider@@@winrt@@YA?A_PAEBUguid@0@IPEAX@Z @ 0x180210C8C (--$create_instance@UIServiceProvider@@@winrt@@YA-A_PAEBUguid@0@IPEAX@Z.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     ?check_hresult@winrt@@YA?AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z @ 0x1802DF798 (-check_hresult@winrt@@YA-AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=8
winrt::Windows::Internal::Shell::DesktopTaskGroups::implementation::DesktopTaskGroupsSwitchItemController *__fastcall winrt::Windows::Internal::Shell::DesktopTaskGroups::implementation::DesktopTaskGroupsSwitchItemController::DesktopTaskGroupsSwitchItemController(
        winrt::Windows::Internal::Shell::DesktopTaskGroups::implementation::DesktopTaskGroupsSwitchItemController *this)
{
  __int64 *v2; // rsi
  __int64 *v3; // r14
  __int64 *v4; // r15
  __int64 v5; // rbx
  __int64 (__fastcall *v6)(__int64, GUID *, GUID *, __int64 *); // rdi
  unsigned int v7; // eax
  unsigned int v8; // eax
  unsigned int v9; // eax
  void (__fastcall *v10)(__int64, SID *, GUID *, __int64 *); // rdi
  __int64 v11; // rcx
  void (__fastcall *v12)(__int64, SID *, GUID *, __int64 *); // rdi
  __int64 v13; // rcx
  __int64 v15; // [rsp+38h] [rbp-29h] BYREF
  __int64 (__fastcall ***v16)(_QWORD, __int64 *, __int64 *); // [rsp+40h] [rbp-21h] BYREF
  __int64 v17; // [rsp+48h] [rbp-19h] BYREF
  __int64 v18; // [rsp+50h] [rbp-11h] BYREF
  int v19; // [rsp+58h] [rbp-9h] BYREF
  __int128 v20; // [rsp+60h] [rbp-1h]
  _BYTE v21[4]; // [rsp+74h] [rbp+13h] BYREF
  winrt::Windows::Internal::Shell::DesktopTaskGroups::implementation::DesktopTaskGroupsSwitchItemController *v22; // [rsp+78h] [rbp+17h]
  GUID v23; // [rsp+80h] [rbp+1Fh] BYREF

  v22 = this;
  *((_QWORD *)this + 2) = &winrt::impl::produce<winrt::Windows::Internal::Shell::DesktopTaskGroups::implementation::DesktopTaskGroupsSwitchItemController,winrt::Windows::Internal::Shell::TaskGroups::IPlatformTaskGroupsSwitchItemController>::`vftable';
  _InterlockedIncrement(&`winrt::get_module_lock'::`2'::s_lock);
  *((_QWORD *)this + 1) = 1LL;
  *(_QWORD *)this = &winrt::impl::heap_implements<winrt::Windows::Internal::Shell::DesktopTaskGroups::implementation::DesktopTaskGroupsSwitchItemController>::`vftable';
  v2 = (__int64 *)((char *)this + 24);
  *((_QWORD *)this + 3) = 0LL;
  v3 = (__int64 *)((char *)this + 32);
  *((_QWORD *)this + 4) = 0LL;
  v4 = (__int64 *)((char *)this + 40);
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 6) = 0LL;
  v23 = CLSID_ImmersiveShell;
  winrt::create_instance<IServiceProvider>((__int64)&v18, (int)&v23);
  v19 = 0;
  v20 = 0LL;
  v5 = v18;
  v6 = *(__int64 (__fastcall **)(__int64, GUID *, GUID *, __int64 *))(*(_QWORD *)v18 + 24LL);
  wil::com_ptr_t<IUwpWindowWrapperInternal,wil::err_exception_policy>::reset(v2);
  v7 = v6(v5, &GUID_1841c6d7_4f9d_42c0_af41_8747538f10e5, &GUID_1841c6d7_4f9d_42c0_af41_8747538f10e5, v2);
  winrt::check_hresult(v21, v7, &v19);
  v16 = 0LL;
  v19 = 0;
  v20 = 0LL;
  v8 = (*(__int64 (__fastcall **)(__int64, GUID *, GUID *, __int64 (__fastcall ****)(_QWORD, __int64 *, __int64 *)))(*(_QWORD *)v5 + 24LL))(
         v5,
         &GUID_716be2a0_d1cd_4fdb_9528_785c2866c6a5,
         &GUID_fc4801a3_2ba9_11cf_a229_00aa003d7352,
         &v16);
  winrt::check_hresult(&v17, v8, &v19);
  if ( v16 )
  {
    v17 = 0LL;
    v19 = 0;
    v20 = 0LL;
    v9 = (**v16)(
           v16,
           &winrt::impl::guid_v<winrt::Windows::Internal::Shell::DesktopTaskGroups::ITaskGroupsComponent>,
           &v17);
    winrt::check_hresult(&v15, v9, &v19);
    v15 = v17;
  }
  else
  {
    v15 = 0LL;
  }
  winrt::WindowsUdk::UI::Shell::ShellViewCoordinator::operator=((__int64 *)this + 6, &v15);
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v15);
  v10 = *(void (__fastcall **)(__int64, SID *, GUID *, __int64 *))(*(_QWORD *)v5 + 24LL);
  v11 = *v3;
  *v3 = 0LL;
  if ( v11 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
  v10(v5, &SID_VirtualDesktopManager, &GUID_4970ba3d_fd4e_4647_bea3_d89076ef4b9c, v3);
  v12 = *(void (__fastcall **)(__int64, SID *, GUID *, __int64 *))(*(_QWORD *)v5 + 24LL);
  v13 = *v4;
  *v4 = 0LL;
  if ( v13 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
  v12(v5, &SID_VirtualDesktopPinnedApps, &GUID_4ce81583_1e4c_4632_a621_07a53543148f, v4);
  if ( v16 )
    winrt::com_ptr<ISnapComponent>::unconditional_release_ref((__int64 *)&v16);
  if ( v5 )
    winrt::com_ptr<ISnapComponent>::unconditional_release_ref(&v18);
  return this;
}
