/*
 * XREFs of ?OnRemoteDesktopConnected@CVirtualDesktopManager@@AEAAJPEAUIInspectable@@PEAUIRemoteDesktopConnectedEventArgs@Shell@Internal@Windows@@@Z @ 0x180554560
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?unconditional_release_ref@?$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ @ 0x180047190 (-unconditional_release_ref@-$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     ?FindDesktop@CVirtualDesktopManager@@UEAAJAEBU_GUID@@PEAPEAUIVirtualDesktop@@@Z @ 0x1805537A0 (-FindDesktop@CVirtualDesktopManager@@UEAAJAEBU_GUID@@PEAPEAUIVirtualDesktop@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CVirtualDesktopManager::OnRemoteDesktopConnected(
        CVirtualDesktopManager *this,
        struct IInspectable *a2,
        struct Windows::Internal::Shell::IRemoteDesktopConnectedEventArgs *a3)
{
  int v4; // eax
  int Desktop; // ebx
  __int64 v7; // rdx
  struct IVirtualDesktop *v8; // [rsp+20h] [rbp-20h] BYREF
  struct _GUID v9; // [rsp+28h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+8h]

  v9 = 0LL;
  v4 = (*(__int64 (__fastcall **)(struct Windows::Internal::Shell::IRemoteDesktopConnectedEventArgs *, struct _GUID *))(*(_QWORD *)a3 + 48LL))(
         a3,
         &v9);
  Desktop = v4;
  if ( v4 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x66F,
      (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopmanager.cpp",
      (const char *)(unsigned int)v4);
    return (unsigned int)Desktop;
  }
  v8 = 0LL;
  Desktop = CVirtualDesktopManager::FindDesktop((CVirtualDesktopManager *)((char *)this + 8), &v9, &v8);
  if ( Desktop < 0 )
  {
    v7 = 1649LL;
    goto LABEL_6;
  }
  Desktop = (*(__int64 (__fastcall **)(_QWORD, struct IVirtualDesktop *))(**((_QWORD **)this + 16) + 104LL))(
              *((_QWORD *)this + 16),
              v8);
  if ( Desktop < 0 )
  {
    v7 = 1650LL;
LABEL_6:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v7,
      (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopmanager.cpp",
      (const char *)(unsigned int)Desktop);
    if ( v8 )
      winrt::com_ptr<ISnapComponent>::unconditional_release_ref((__int64 *)&v8);
    return (unsigned int)Desktop;
  }
  if ( v8 )
    winrt::com_ptr<ISnapComponent>::unconditional_release_ref((__int64 *)&v8);
  return 0LL;
}
