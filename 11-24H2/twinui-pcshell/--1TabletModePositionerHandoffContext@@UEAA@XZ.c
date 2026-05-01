/*
 * XREFs of ??1TabletModePositionerHandoffContext@@UEAA@XZ @ 0x1802EE340
 * Callers:
 *     ??_GCMonitorNotificationHelper@@UEAAPEAXI@Z @ 0x1802EE3E0 (--_GCMonitorNotificationHelper@@UEAAPEAXI@Z.c)
 *     ??_G?$DelegateInvokeHelper@U?$ITypedEventHandler@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIViewEventArgs@2345@@Foundation@Windows@@V_lambda_e70cde33cb0c7d1a2119e2b787893688_@@$0?0PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@3@PEAUIViewEventArgs@6783@@?$DelegateArgTraits@P8?$ITypedEventHandler_impl@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIViewEventArgs@2345@@Foundation@Windows@@EAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@3@PEAUIViewEventArgs@5673@@Z@Details@WRL@Microsoft@@UEAAPEAXI@Z @ 0x1803B7070 (--_G-$DelegateInvokeHelper@U-$ITypedEventHandler@PEAUIViewWrapper@ViewManagerIntero_ea_1803B7070.c)
 *     ??_GTabletModePositionerHandoffContext@@UEAAPEAXI@Z @ 0x18045D4C0 (--_GTabletModePositionerHandoffContext@@UEAAPEAXI@Z.c)
 *     ??_GCAppLayoutItemEnum@@UEAAPEAXI@Z @ 0x1806C35D0 (--_GCAppLayoutItemEnum@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 */

void __fastcall TabletModePositionerHandoffContext::~TabletModePositionerHandoffContext(
        TabletModePositionerHandoffContext *this)
{
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 2);
  *((_DWORD *)this + 3) = -1073741823;
}
