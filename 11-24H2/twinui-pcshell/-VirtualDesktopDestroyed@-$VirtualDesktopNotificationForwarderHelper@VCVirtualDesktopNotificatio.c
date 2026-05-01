/*
 * XREFs of ?VirtualDesktopDestroyed@?$VirtualDesktopNotificationForwarderHelper@VCVirtualDesktopNotifications@@@@UEAAJPEAUIVirtualDesktop@@0@Z @ 0x18054DFB0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall VirtualDesktopNotificationForwarderHelper<CVirtualDesktopNotifications>::VirtualDesktopDestroyed(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  return CVirtualDesktopNotifications::_ForwardVirtualDesktopNotification2<IVirtualDesktopNotification,IVirtualDesktop *,IVirtualDesktop *>(
           a1 - 8,
           (__int64) IVirtualDesktopNotificationServicePrivate::`vcall'{48,{flat}},
           a2,
           a3);
}
