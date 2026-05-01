/*
 * XREFs of ?VirtualDesktopSwitched@?$VirtualDesktopNotificationForwarderHelper@VCVirtualDesktopNotifications@@@@UEAAJPEAUIVirtualDesktop@@W4VirtualDesktopSwitchType@@@Z @ 0x18054E020
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$AddRefCountWrappers@PEAUIVirtualDesktop@@W4VirtualDesktopSwitchType@@@@YAJV?$tuple@PEAUIVirtualDesktop@@W4VirtualDesktopSwitchType@@@std@@PEAV?$tuple@V?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@W4VirtualDesktopSwitchType@@@1@@Z @ 0x18054CD48 (--$AddRefCountWrappers@PEAUIVirtualDesktop@@W4VirtualDesktopSwitchType@@@@YAJV-$tuple@PEAUIVirtu.c)
 *     ??$_QueueNotification2@UIVirtualDesktopNotification@@PEAUIVirtualDesktop@@W4VirtualDesktopSwitchType@@$$ZV?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@W43@@CVirtualDesktopNotifications@@AEAAJP8IVirtualDesktopNotification@@EAAJPEAUIVirtualDesktop@@W4VirtualDesktopSwitchType@@@ZV?$tuple@V?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@W4VirtualDesktopSwitchType@@@std@@@Z @ 0x18054D794 (--$_QueueNotification2@UIVirtualDesktopNotification@@PEAUIVirtualDesktop@@W4VirtualDesktopSwitch.c)
 *     ??0?$tuple@V?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@W4VirtualDesktopSwitchType@@@std@@QEAA@$$QEAV01@@Z @ 0x18054D930 (--0-$tuple@V-$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@W4VirtualDesktopSwitchType@@@std@@QEAA@$$.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall VirtualDesktopNotificationForwarderHelper<CVirtualDesktopNotifications>::VirtualDesktopSwitched(
        __int64 a1,
        __int64 a2,
        int a3)
{
  __int64 v3; // rdi
  int v4; // eax
  unsigned int v5; // ebx
  __int64 v6; // rax
  __int64 v7; // rdx
  int v9; // [rsp+20h] [rbp-28h] BYREF
  __int64 v10; // [rsp+28h] [rbp-20h] BYREF
  int v11; // [rsp+30h] [rbp-18h] BYREF
  __int64 v12; // [rsp+38h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v3 = a1 - 8;
  v9 = 0;
  v10 = 0LL;
  v11 = a3;
  v12 = a2;
  v4 = AddRefCountWrappers<IVirtualDesktop *,enum VirtualDesktopSwitchType>((__int64)&v11, (__int64)&v9);
  v5 = v4;
  if ( v4 >= 0 )
  {
    v6 = std::tuple<Microsoft::WRL::ComPtr<IVirtualDesktop>,enum VirtualDesktopSwitchType>::tuple<Microsoft::WRL::ComPtr<IVirtualDesktop>,enum VirtualDesktopSwitchType>(
           (__int64)&v11,
           &v9);
    v5 = ____QueueNotification2_UIVirtualDesktopNotification__PEAUIVirtualDesktop__W4VirtualDesktopSwitchType____ZV__ComPtr_UIVirtualDesktop___WRL_Microsoft__W43__CVirtualDesktopNotifications__AEAAJP8IVirtualDesktopNotification__EAAJPEAUIVirtualDesktop__W4VirtualDesktopSwitchType___ZV__tuple_V__ComPtr_UIVirtualDesktop___WRL_Microsoft__W4VirtualDesktopSwitchType___std___Z(
           v3,
           v7,
           v6);
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x11A,
      (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopnotifications.cpp",
      (const char *)(unsigned int)v4);
  }
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v10);
  return v5;
}
