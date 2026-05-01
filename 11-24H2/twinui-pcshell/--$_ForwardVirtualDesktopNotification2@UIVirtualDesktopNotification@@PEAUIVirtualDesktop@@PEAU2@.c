/*
 * XREFs of ??$_ForwardVirtualDesktopNotification2@UIVirtualDesktopNotification@@PEAUIVirtualDesktop@@PEAU2@@CVirtualDesktopNotifications@@IEAAJP8IVirtualDesktopNotification@@EAAJPEAUIVirtualDesktop@@0@Z00@Z @ 0x18054D2F0
 * Callers:
 *     ?CurrentVirtualDesktopChanged@?$VirtualDesktopNotificationForwarderHelper@VCVirtualDesktopNotifications@@@@UEAAJPEAUIVirtualDesktop@@0@Z @ 0x18054DEA0 (-CurrentVirtualDesktopChanged@-$VirtualDesktopNotificationForwarderHelper@VCVirtualDesktopNotifi.c)
 *     ?VirtualDesktopDestroyBegin@?$VirtualDesktopNotificationForwarderHelper@VCVirtualDesktopNotifications@@@@UEAAJPEAUIVirtualDesktop@@0@Z @ 0x18054DF70 (-VirtualDesktopDestroyBegin@-$VirtualDesktopNotificationForwarderHelper@VCVirtualDesktopNotifica.c)
 *     ?VirtualDesktopDestroyFailed@?$VirtualDesktopNotificationForwarderHelper@VCVirtualDesktopNotifications@@@@UEAAJPEAUIVirtualDesktop@@0@Z @ 0x18054DF90 (-VirtualDesktopDestroyFailed@-$VirtualDesktopNotificationForwarderHelper@VCVirtualDesktopNotific.c)
 *     ?VirtualDesktopDestroyed@?$VirtualDesktopNotificationForwarderHelper@VCVirtualDesktopNotifications@@@@UEAAJPEAUIVirtualDesktop@@0@Z @ 0x18054DFB0 (-VirtualDesktopDestroyed@-$VirtualDesktopNotificationForwarderHelper@VCVirtualDesktopNotificatio.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0?$tuple@V?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@V123@@std@@QEAA@$$QEAV01@@Z @ 0x1802B5E10 (--0-$tuple@V-$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@V123@@std@@QEAA@$$QEAV01@@Z.c)
 *     ??$AddRefCountWrappers@PEAUIVirtualDesktop@@PEAU1@@@YAJV?$tuple@PEAUIVirtualDesktop@@PEAU1@@std@@PEAV?$tuple@V?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@V123@@1@@Z @ 0x18054CCBC (--$AddRefCountWrappers@PEAUIVirtualDesktop@@PEAU1@@@YAJV-$tuple@PEAUIVirtualDesktop@@PEAU1@@std@.c)
 *     ??$_QueueNotification2@UIVirtualDesktopNotification@@PEAUIVirtualDesktop@@PEAU2@$$ZV?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@V345@@CVirtualDesktopNotifications@@AEAAJP8IVirtualDesktopNotification@@EAAJPEAUIVirtualDesktop@@0@ZV?$tuple@V?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@V123@@std@@@Z @ 0x18054D668 (--$_QueueNotification2@UIVirtualDesktopNotification@@PEAUIVirtualDesktop@@PEAU2@$$ZV-$ComPtr@UIV.c)
 *     ??1?$tuple@V?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@V123@@std@@QEAA@XZ @ 0x18054DA4C (--1-$tuple@V-$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@V123@@std@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CVirtualDesktopNotifications::_ForwardVirtualDesktopNotification2<IVirtualDesktopNotification,IVirtualDesktop *,IVirtualDesktop *>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  int v6; // eax
  unsigned int v7; // ebx
  _QWORD *v8; // rax
  _QWORD v10[2]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v11[3]; // [rsp+30h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  *(_OWORD *)v11 = 0LL;
  v10[0] = a4;
  v10[1] = a3;
  v6 = AddRefCountWrappers<IVirtualDesktop *,IVirtualDesktop *>((__int64)v10, v11);
  v7 = v6;
  if ( v6 >= 0 )
  {
    v8 = std::tuple<Microsoft::WRL::ComPtr<IVirtualDesktop>,Microsoft::WRL::ComPtr<IVirtualDesktop>>::tuple<Microsoft::WRL::ComPtr<IVirtualDesktop>,Microsoft::WRL::ComPtr<IVirtualDesktop>>(
           v10,
           v11);
    v7 = ____QueueNotification2_UIVirtualDesktopNotification__PEAUIVirtualDesktop__PEAU2___ZV__ComPtr_UIVirtualDesktop___WRL_Microsoft__V345__CVirtualDesktopNotifications__AEAAJP8IVirtualDesktopNotification__EAAJPEAUIVirtualDesktop__0_ZV__tuple_V__ComPtr_UIVirtualDesktop___WRL_Microsoft__V123__std___Z(
           a1,
           a2,
           v8);
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x11A,
      (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopnotifications.cpp",
      (const char *)(unsigned int)v6);
  }
  std::tuple<Microsoft::WRL::ComPtr<IVirtualDesktop>,Microsoft::WRL::ComPtr<IVirtualDesktop>>::~tuple<Microsoft::WRL::ComPtr<IVirtualDesktop>,Microsoft::WRL::ComPtr<IVirtualDesktop>>(v11);
  return v7;
}
