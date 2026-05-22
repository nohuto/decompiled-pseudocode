/*
 * XREFs of ??1?$KernelInputConnection@U_MIT_HAPTIC_NOTIFICATION_MESSAGE@@@@QEAA@XZ @ 0x1800AC5F0
 * Callers:
 *     ??1ForegroundManager@@UEAA@XZ @ 0x1800AC820 (--1ForegroundManager@@UEAA@XZ.c)
 *     ??1RIMRawInputProvider@@MEAA@XZ @ 0x1800D2FF8 (--1RIMRawInputProvider@@MEAA@XZ.c)
 *     ??1Win32kInterop@@UEAA@XZ @ 0x1800EF8A0 (--1Win32kInterop@@UEAA@XZ.c)
 *     ??1InputConfigContextProvider@@EEAA@XZ @ 0x18010A3C8 (--1InputConfigContextProvider@@EEAA@XZ.c)
 *     ??1?$CBaseInputObserverServer@$0L@@@MEAA@XZ @ 0x180139340 (--1-$CBaseInputObserverServer@$0L@@@MEAA@XZ.c)
 *     ??1InputDeliveryServer@@UEAA@XZ @ 0x18015D540 (--1InputDeliveryServer@@UEAA@XZ.c)
 *     ??1NonBamoInputDeliveryServer@@EEAA@XZ @ 0x18015DC6C (--1NonBamoInputDeliveryServer@@EEAA@XZ.c)
 *     ??1PenEventsDispatcherPrincipal@@UEAA@XZ @ 0x180194A94 (--1PenEventsDispatcherPrincipal@@UEAA@XZ.c)
 *     ??1DWMInputRouter@@MEAA@XZ @ 0x18019E714 (--1DWMInputRouter@@MEAA@XZ.c)
 *     _PenEventsDispatcherPrincipal::PenEventsDispatcherPrincipal_::_1_::dtor$4 @ 0x1801CF866 (_PenEventsDispatcherPrincipal--PenEventsDispatcherPrincipal_--_1_--dtor$4.c)
 *     _InputDeliveryServer::InputDeliveryServer_::_1_::dtor$3 @ 0x1801CFA5E (_InputDeliveryServer--InputDeliveryServer_--_1_--dtor$3.c)
 *     _DWMInputRouter::DWMInputRouter_::_1_::dtor$16 @ 0x1801D261B (_DWMInputRouter--DWMInputRouter_--_1_--dtor$16.c)
 *     _CBaseInputObserverServer_11_::CBaseInputObserverServer_11__::_1_::dtor$0 @ 0x1801D3419 (_CBaseInputObserverServer_11_--CBaseInputObserverServer_11__--_1_--dtor$0.c)
 *     _RIMRawInputProvider::RIMRawInputProvider_::_1_::dtor$15 @ 0x1801D57BD (_RIMRawInputProvider--RIMRawInputProvider_--_1_--dtor$15.c)
 *     _NonBamoInputDeliveryServer::NonBamoInputDeliveryServer_::_1_::dtor$6 @ 0x1801D7EFE (_NonBamoInputDeliveryServer--NonBamoInputDeliveryServer_--_1_--dtor$6.c)
 * Callees:
 *     ??1?$_Func_class@X$$V@std@@QEAA@XZ @ 0x18000AB8C (--1-$_Func_class@X$$V@std@@QEAA@XZ.c)
 *     ?reset@?$unique_com_token@UIMessageSession@@_K$$A6AXPEAU1@_K@Z$1?IMessageSessionCloseEndpointFunction@details@wil@@YAX01@Z$0A@@wil@@QEAAXPEAUIMessageSession@@_K@Z @ 0x18000BE08 (-reset@-$unique_com_token@UIMessageSession@@_K$$A6AXPEAU1@_K@Z$1-IMessageSessionCloseEndpointFun.c)
 */

__int64 __fastcall KernelInputConnection<_MIT_HAPTIC_NOTIFICATION_MESSAGE>::~KernelInputConnection<_MIT_HAPTIC_NOTIFICATION_MESSAGE>(
        __int64 a1,
        __int64 a2)
{
  unsigned __int64 v3; // r8

  std::_Func_class<void,>::~_Func_class<void,>(a1 + 64, a2);
  wil::unique_com_token<IMessageSession,unsigned __int64,void (IMessageSession *,unsigned __int64),&void wil::details::IMessageSessionCloseEndpointFunction(IMessageSession *,unsigned __int64),0>::reset(
    (wil::details **)(a1 + 8),
    0LL,
    v3);
  return Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)a1);
}
