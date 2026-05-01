/*
 * XREFs of ??0?$tuple@V?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@II@std@@QEAA@$$QEAV01@@Z @ 0x18054D8D0
 * Callers:
 *     ??$Make@V?$CTaskWrapper@V_lambda_7aa9acfd8aab90d02032eccdb335cb01_@@@ComTaskPool@Internal@Windows@@V_lambda_7aa9acfd8aab90d02032eccdb335cb01_@@@Details@WRL@Microsoft@@YA?AV?$ComPtr@V?$CTaskWrapper@V_lambda_7aa9acfd8aab90d02032eccdb335cb01_@@@ComTaskPool@Internal@Windows@@@12@$$QEAV_lambda_7aa9acfd8aab90d02032eccdb335cb01_@@@Z @ 0x18054CF40 (--$Make@V-$CTaskWrapper@V_lambda_7aa9acfd8aab90d02032eccdb335cb01_@@@ComTaskPool@Internal@Window.c)
 *     ??$_ForwardVirtualDesktopNotification2@UIVirtualDesktopNotification@@PEAUIVirtualDesktop@@II@CVirtualDesktopNotifications@@IEAAJP8IVirtualDesktopNotification@@EAAJPEAUIVirtualDesktop@@II@Z0II@Z @ 0x18054D254 (--$_ForwardVirtualDesktopNotification2@UIVirtualDesktopNotification@@PEAUIVirtualDesktop@@II@CVi.c)
 *     ??$_QueueNotification2@UIVirtualDesktopNotification@@PEAUIVirtualDesktop@@II$$ZV?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@II@CVirtualDesktopNotifications@@AEAAJP8IVirtualDesktopNotification@@EAAJPEAUIVirtualDesktop@@II@ZV?$tuple@V?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@II@std@@@Z @ 0x18054D52C (--$_QueueNotification2@UIVirtualDesktopNotification@@PEAUIVirtualDesktop@@II$$ZV-$ComPtr@UIVirtu.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::tuple<Microsoft::WRL::ComPtr<IVirtualDesktop>,unsigned int,unsigned int>::tuple<Microsoft::WRL::ComPtr<IVirtualDesktop>,unsigned int,unsigned int>(
        __int64 a1,
        _DWORD *a2)
{
  int v2; // eax
  _QWORD *v3; // rdx

  *(_DWORD *)a1 = *a2;
  v2 = a2[1];
  v3 = a2 + 2;
  *(_DWORD *)(a1 + 4) = v2;
  *(_QWORD *)(a1 + 8) = 0LL;
  if ( (_QWORD *)(a1 + 8) != v3 )
  {
    *(_QWORD *)(a1 + 8) = *v3;
    *v3 = 0LL;
  }
  return a1;
}
