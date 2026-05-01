/*
 * XREFs of ?IsGroupVisibleOnDesktop@DesktopTaskGroupsSwitchItemController@implementation@DesktopTaskGroups@Shell@Internal@Windows@winrt@@AEAA_NAEBUTaskGroup@TaskGroups@4567@PEAUIVirtualDesktop@@@Z @ 0x180589EE8
 * Callers:
 *     ?IsVisibleOnDesktop@DesktopTaskGroupsSwitchItemController@implementation@DesktopTaskGroups@Shell@Internal@Windows@winrt@@QEAA_NAEBUISwitchItem@Multitasking@ComposableShell@567@AEBUIVirtualDesktop@9ComposableShell@567@@Z @ 0x18058A164 (-IsVisibleOnDesktop@DesktopTaskGroupsSwitchItemController@implementation@DesktopTaskGroups@Shell.c)
 *     ?IsVisibleOnDesktops@DesktopTaskGroupsSwitchItemController@implementation@DesktopTaskGroups@Shell@Internal@Windows@winrt@@QEAA_NAEBUISwitchItem@Multitasking@ComposableShell@567@AEBW4VirtualDesktopsScope@TaskGroups@4567@@Z @ 0x18058A264 (-IsVisibleOnDesktops@DesktopTaskGroupsSwitchItemController@implementation@DesktopTaskGroups@Shel.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18001D0F0 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002D354 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?reset@?$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ @ 0x18004D04C (-reset@-$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?SnapAssistSnappedWindows@?$consume_Windows_Internal_Shell_WindowSnapping_IGuidedSnapAssistCompletedArgs@UIGuidedSnapAssistCompletedArgs@WindowSnapping@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x18026F618 (-SnapAssistSnappedWindows@-$consume_Windows_Internal_Shell_WindowSnapping_IGuidedSnapAssistCompl.c)
 *     CoTaskMemFree_0 @ 0x1802D2C01 (CoTaskMemFree_0.c)
 *     ?check_hresult@winrt@@YA?AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z @ 0x1802DF798 (-check_hresult@winrt@@YA-AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
char __fastcall winrt::Windows::Internal::Shell::DesktopTaskGroups::implementation::DesktopTaskGroupsSwitchItemController::IsGroupVisibleOnDesktop(
        winrt::Windows::Internal::Shell::DesktopTaskGroups::implementation::DesktopTaskGroupsSwitchItemController *this,
        __int64 **a2,
        struct IVirtualDesktop *a3)
{
  winrt::Windows::Internal::Shell::DesktopTaskGroups::implementation::DesktopTaskGroupsSwitchItemController *v4; // rdi
  char *v5; // r15
  char *v6; // r12
  unsigned int v7; // ebx
  __int64 v8; // rsi
  __int64 (__fastcall *v9)(__int64, _QWORD, __int64 *); // rdi
  int v10; // eax
  int v11; // eax
  int v13; // [rsp+20h] [rbp-40h] BYREF
  __int64 v14; // [rsp+28h] [rbp-38h] BYREF
  LPVOID pv; // [rsp+30h] [rbp-30h] BYREF
  unsigned int v16; // [rsp+38h] [rbp-28h]
  int v17; // [rsp+40h] [rbp-20h] BYREF
  __int128 v18; // [rsp+48h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+28h]
  int v21; // [rsp+A8h] [rbp+48h] BYREF

  v4 = this;
  winrt::impl::consume_Windows_Internal_Shell_WindowSnapping_IGuidedSnapAssistCompletedArgs<winrt::Windows::Internal::Shell::WindowSnapping::IGuidedSnapAssistCompletedArgs>::SnapAssistSnappedWindows(
    a2,
    (__int64)&pv);
  v5 = (char *)pv;
  v6 = (char *)pv + 4 * v16;
  while ( 1 )
  {
    if ( v5 == v6 )
    {
      if ( pv )
        CoTaskMemFree_0(pv);
      return 1;
    }
    v7 = *(_DWORD *)v5;
    v14 = 0LL;
    v8 = *((_QWORD *)v4 + 3);
    v9 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v8 + 48LL);
    wil::com_ptr_t<IUwpWindowWrapperInternal,wil::err_exception_policy>::reset(&v14);
    v10 = v9(v8, v7, &v14);
    if ( v10 < 0 )
    {
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x4B,
        (int)"pcshell\\twinui\\taskgroups\\lib\\desktoptaskgroupsswitchitemcontroller.cpp",
        (const char *)(unsigned int)v10);
      goto LABEL_5;
    }
    v21 = 0;
    v17 = 0;
    v18 = 0LL;
    v11 = (*(__int64 (__fastcall **)(struct IVirtualDesktop *, __int64, int *))(*(_QWORD *)a3 + 24LL))(a3, v14, &v21);
    winrt::check_hresult(&v13, v11, (__int64)&v17);
    if ( !v21 )
      break;
LABEL_5:
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v14);
    v5 += 4;
    v4 = this;
  }
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v14);
  if ( pv )
    CoTaskMemFree_0(pv);
  return 0;
}
