/*
 * XREFs of ??1?$KernelInputConnection@U_MIT_INVALIDATE_INPUT_MESSAGE@@@@QEAA@XZ @ 0x1800ADAF0
 * Callers:
 *     ??1ForegroundManager@@UEAA@XZ @ 0x1800ADD20 (--1ForegroundManager@@UEAA@XZ.c)
 *     ??1RIMRawInputProvider@@MEAA@XZ @ 0x1800CFCA8 (--1RIMRawInputProvider@@MEAA@XZ.c)
 *     ??1Win32kInterop@@UEAA@XZ @ 0x1800EE5F0 (--1Win32kInterop@@UEAA@XZ.c)
 *     ??1InputConfigContextProvider@@EEAA@XZ @ 0x1801084B8 (--1InputConfigContextProvider@@EEAA@XZ.c)
 *     ??1?$CBaseInputObserverServer@$0L@@@MEAA@XZ @ 0x180137170 (--1-$CBaseInputObserverServer@$0L@@@MEAA@XZ.c)
 *     ??1InputDeliveryServer@@UEAA@XZ @ 0x18015C710 (--1InputDeliveryServer@@UEAA@XZ.c)
 *     ??1NonBamoInputDeliveryServer@@EEAA@XZ @ 0x18015CE3C (--1NonBamoInputDeliveryServer@@EEAA@XZ.c)
 *     ??1PenEventsDispatcherPrincipal@@UEAA@XZ @ 0x18018EDEC (--1PenEventsDispatcherPrincipal@@UEAA@XZ.c)
 *     ??1DWMInputRouter@@MEAA@XZ @ 0x180196F44 (--1DWMInputRouter@@MEAA@XZ.c)
 *     _PenEventsDispatcherPrincipal::PenEventsDispatcherPrincipal_::_1_::dtor$4 @ 0x1801C83C6 (_PenEventsDispatcherPrincipal--PenEventsDispatcherPrincipal_--_1_--dtor$4.c)
 *     _InputDeliveryServer::InputDeliveryServer_::_1_::dtor$3 @ 0x1801C85BE (_InputDeliveryServer--InputDeliveryServer_--_1_--dtor$3.c)
 *     _DWMInputRouter::DWMInputRouter_::_1_::dtor$17 @ 0x1801CA61D (_DWMInputRouter--DWMInputRouter_--_1_--dtor$17.c)
 *     _CBaseInputObserverServer_11_::CBaseInputObserverServer_11__::_1_::dtor$0 @ 0x1801CBF67 (_CBaseInputObserverServer_11_--CBaseInputObserverServer_11__--_1_--dtor$0.c)
 *     _NonBamoInputDeliveryServer::NonBamoInputDeliveryServer_::_1_::dtor$6 @ 0x1801D06BE (_NonBamoInputDeliveryServer--NonBamoInputDeliveryServer_--_1_--dtor$6.c)
 * Callees:
 *     ?_Tidy@?$_Func_class@XPEBU_MIT_KEYBOARD_INPUT_MESSAGE@@@std@@IEAAXXZ @ 0x18000A430 (-_Tidy@-$_Func_class@XPEBU_MIT_KEYBOARD_INPUT_MESSAGE@@@std@@IEAAXXZ.c)
 *     ?reset@?$unique_com_token@UIMessageSession@@_K$$A6AXPEAU1@_K@Z$1?IMessageSessionCloseEndpointFunction@details@wil@@YAX01@Z$0A@@wil@@QEAAXPEAUIMessageSession@@_K@Z @ 0x18000B6AC (-reset@-$unique_com_token@UIMessageSession@@_K$$A6AXPEAU1@_K@Z$1-IMessageSessionCloseEndpointFun.c)
 */

__int64 __fastcall KernelInputConnection<_MIT_INVALIDATE_INPUT_MESSAGE>::~KernelInputConnection<_MIT_INVALIDATE_INPUT_MESSAGE>(
        __int64 a1,
        __int64 a2)
{
  unsigned __int64 v3; // r8

  std::_Func_class<void,_MIT_KEYBOARD_INPUT_MESSAGE const *>::_Tidy(a1 + 64, a2);
  wil::unique_com_token<IMessageSession,unsigned __int64,void (IMessageSession *,unsigned __int64),&void wil::details::IMessageSessionCloseEndpointFunction(IMessageSession *,unsigned __int64),0>::reset(
    (wil::details **)(a1 + 8),
    0LL,
    v3);
  return Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)a1);
}
