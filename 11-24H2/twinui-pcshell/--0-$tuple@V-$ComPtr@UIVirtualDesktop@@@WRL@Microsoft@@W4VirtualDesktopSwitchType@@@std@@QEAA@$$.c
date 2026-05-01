/*
 * XREFs of ??0?$tuple@V?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@W4VirtualDesktopSwitchType@@@std@@QEAA@$$QEAV01@@Z @ 0x18054D930
 * Callers:
 *     ??$Make@V?$CTaskWrapper@V_lambda_b8153d163d1a8f5f2be1ba9cdd1cb7ec_@@@ComTaskPool@Internal@Windows@@V_lambda_b8153d163d1a8f5f2be1ba9cdd1cb7ec_@@@Details@WRL@Microsoft@@YA?AV?$ComPtr@V?$CTaskWrapper@V_lambda_b8153d163d1a8f5f2be1ba9cdd1cb7ec_@@@ComTaskPool@Internal@Windows@@@12@$$QEAV_lambda_b8153d163d1a8f5f2be1ba9cdd1cb7ec_@@@Z @ 0x18054CFF4 (--$Make@V-$CTaskWrapper@V_lambda_b8153d163d1a8f5f2be1ba9cdd1cb7ec_@@@ComTaskPool@Internal@Window.c)
 *     ??$_QueueNotification2@UIVirtualDesktopNotification@@PEAUIVirtualDesktop@@W4VirtualDesktopSwitchType@@$$ZV?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@W43@@CVirtualDesktopNotifications@@AEAAJP8IVirtualDesktopNotification@@EAAJPEAUIVirtualDesktop@@W4VirtualDesktopSwitchType@@@ZV?$tuple@V?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@W4VirtualDesktopSwitchType@@@std@@@Z @ 0x18054D794 (--$_QueueNotification2@UIVirtualDesktopNotification@@PEAUIVirtualDesktop@@W4VirtualDesktopSwitch.c)
 *     ?VirtualDesktopSwitched@?$VirtualDesktopNotificationForwarderHelper@VCVirtualDesktopNotifications@@@@UEAAJPEAUIVirtualDesktop@@W4VirtualDesktopSwitchType@@@Z @ 0x18054E020 (-VirtualDesktopSwitched@-$VirtualDesktopNotificationForwarderHelper@VCVirtualDesktopNotification.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::tuple<Microsoft::WRL::ComPtr<IVirtualDesktop>,enum VirtualDesktopSwitchType>::tuple<Microsoft::WRL::ComPtr<IVirtualDesktop>,enum VirtualDesktopSwitchType>(
        __int64 a1,
        _DWORD *a2)
{
  _QWORD *v2; // rdx

  *(_DWORD *)a1 = *a2;
  v2 = a2 + 2;
  *(_QWORD *)(a1 + 8) = 0LL;
  if ( (_QWORD *)(a1 + 8) != v2 )
  {
    *(_QWORD *)(a1 + 8) = *v2;
    *v2 = 0LL;
  }
  return a1;
}
