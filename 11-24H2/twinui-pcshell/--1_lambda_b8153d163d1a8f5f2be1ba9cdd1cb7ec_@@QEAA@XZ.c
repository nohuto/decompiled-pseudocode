/*
 * XREFs of ??1_lambda_b8153d163d1a8f5f2be1ba9cdd1cb7ec_@@QEAA@XZ @ 0x18054D9AC
 * Callers:
 *     ??$_QueueNotification2@UIVirtualDesktopNotification@@PEAUIVirtualDesktop@@II$$ZV?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@II@CVirtualDesktopNotifications@@AEAAJP8IVirtualDesktopNotification@@EAAJPEAUIVirtualDesktop@@II@ZV?$tuple@V?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@II@std@@@Z @ 0x18054D52C (--$_QueueNotification2@UIVirtualDesktopNotification@@PEAUIVirtualDesktop@@II$$ZV-$ComPtr@UIVirtu.c)
 *     ??$_QueueNotification2@UIVirtualDesktopNotification@@PEAUIVirtualDesktop@@W4VirtualDesktopSwitchType@@$$ZV?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@W43@@CVirtualDesktopNotifications@@AEAAJP8IVirtualDesktopNotification@@EAAJPEAUIVirtualDesktop@@W4VirtualDesktopSwitchType@@@ZV?$tuple@V?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@W4VirtualDesktopSwitchType@@@std@@@Z @ 0x18054D794 (--$_QueueNotification2@UIVirtualDesktopNotification@@PEAUIVirtualDesktop@@W4VirtualDesktopSwitch.c)
 *     ??1?$CTaskWrapper@V_lambda_7aa9acfd8aab90d02032eccdb335cb01_@@@ComTaskPool@Internal@Windows@@UEAA@XZ @ 0x18054DA24 (--1-$CTaskWrapper@V_lambda_7aa9acfd8aab90d02032eccdb335cb01_@@@ComTaskPool@Internal@Windows@@UEA.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 */

void __fastcall _lambda_b8153d163d1a8f5f2be1ba9cdd1cb7ec_::~_lambda_b8153d163d1a8f5f2be1ba9cdd1cb7ec_(
        _lambda_b8153d163d1a8f5f2be1ba9cdd1cb7ec_ *this)
{
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 3);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 1);
}
