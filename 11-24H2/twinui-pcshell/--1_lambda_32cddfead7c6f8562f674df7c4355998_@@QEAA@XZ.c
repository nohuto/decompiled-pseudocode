/*
 * XREFs of ??1_lambda_32cddfead7c6f8562f674df7c4355998_@@QEAA@XZ @ 0x18054D984
 * Callers:
 *     ??$_QueueNotification2@UIVirtualDesktopNotification@@PEAUIVirtualDesktop@@PEAU2@$$ZV?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@V345@@CVirtualDesktopNotifications@@AEAAJP8IVirtualDesktopNotification@@EAAJPEAUIVirtualDesktop@@0@ZV?$tuple@V?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@V123@@std@@@Z @ 0x18054D668 (--$_QueueNotification2@UIVirtualDesktopNotification@@PEAUIVirtualDesktop@@PEAU2@$$ZV-$ComPtr@UIV.c)
 *     ??1?$CTaskWrapper@V_lambda_32cddfead7c6f8562f674df7c4355998_@@@ComTaskPool@Internal@Windows@@UEAA@XZ @ 0x18054D9FC (--1-$CTaskWrapper@V_lambda_32cddfead7c6f8562f674df7c4355998_@@@ComTaskPool@Internal@Windows@@UEA.c)
 * Callees:
 *     ??1?$tuple@V?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@V123@@std@@QEAA@XZ @ 0x18054DA4C (--1-$tuple@V-$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@V123@@std@@QEAA@XZ.c)
 */

void __fastcall _lambda_32cddfead7c6f8562f674df7c4355998_::~_lambda_32cddfead7c6f8562f674df7c4355998_(
        _lambda_32cddfead7c6f8562f674df7c4355998_ *this)
{
  std::tuple<Microsoft::WRL::ComPtr<IVirtualDesktop>,Microsoft::WRL::ComPtr<IVirtualDesktop>>::~tuple<Microsoft::WRL::ComPtr<IVirtualDesktop>,Microsoft::WRL::ComPtr<IVirtualDesktop>>((char *)this + 16);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 1);
}
