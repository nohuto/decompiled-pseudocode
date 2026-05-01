/*
 * XREFs of ??1_lambda_fb189054ea513898645e6db750f42f18_@@QEAA@XZ @ 0x180291754
 * Callers:
 *     ??1?$CTaskWrapper@V_lambda_fb189054ea513898645e6db750f42f18_@@@ComTaskPool@Internal@Windows@@UEAA@XZ @ 0x18029172C (--1-$CTaskWrapper@V_lambda_fb189054ea513898645e6db750f42f18_@@@ComTaskPool@Internal@Windows@@UEA.c)
 *     ??$_QueueNotification2@UIVirtualDesktopNotification@@PEAUIVirtualDesktop@@$$ZV?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@@CVirtualDesktopNotifications@@AEAAJP8IVirtualDesktopNotification@@EAAJPEAUIVirtualDesktop@@@ZV?$tuple@V?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@@std@@@Z @ 0x18054D388 (--$_QueueNotification2@UIVirtualDesktopNotification@@PEAUIVirtualDesktop@@$$ZV-$ComPtr@UIVirtual.c)
 * Callees:
 *     ??1?$ComPtr@UIPackage@StateRepository@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x18001C8F0 (--1-$ComPtr@UIPackage@StateRepository@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ.c)
 */

void __fastcall _lambda_fb189054ea513898645e6db750f42f18_::~_lambda_fb189054ea513898645e6db750f42f18_(
        _lambda_fb189054ea513898645e6db750f42f18_ *this)
{
  Microsoft::WRL::ComPtr<Windows::Internal::StateRepository::IPackage>::~ComPtr<Windows::Internal::StateRepository::IPackage>((__int64 *)this + 2);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 1);
}
