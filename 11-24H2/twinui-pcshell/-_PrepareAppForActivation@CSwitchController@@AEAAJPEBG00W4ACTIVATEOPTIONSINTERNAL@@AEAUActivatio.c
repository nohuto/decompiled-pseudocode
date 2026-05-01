/*
 * XREFs of ?_PrepareAppForActivation@CSwitchController@@AEAAJPEBG00W4ACTIVATEOPTIONSINTERNAL@@AEAUActivationData@1@@Z @ 0x1804E8638
 * Callers:
 *     ?SwitchToAppByIdWithArguments@CSwitchController@@UEAAJPEBG00PEBUSWITCH_TO_APP_OPTIONS@@@Z @ 0x1801CB650 (-SwitchToAppByIdWithArguments@CSwitchController@@UEAAJPEBG00PEBUSWITCH_TO_APP_OPTIONS@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180029F90 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_GetAppForSwitch@CSwitchController@@AEAAJPEBGW4GET_VIEW_FOR_SWITCH_TYPE@@PEAUIImmersiveMonitor@@PEAPEAUIImmersiveApplication@@@Z @ 0x1804E82F0 (-_GetAppForSwitch@CSwitchController@@AEAAJPEBGW4GET_VIEW_FOR_SWITCH_TYPE@@PEAUIImmersiveMonitor@.c)
 *     ?_PackageActivationArguments@CSwitchController@@AEAAJPEBG00PEAUIUnknown@@W4ACTIVATEOPTIONSINTERNAL@@_NPEAPEAUIDelayedAppActivation@@@Z @ 0x1804E83A4 (-_PackageActivationArguments@CSwitchController@@AEAAJPEBG00PEAUIUnknown@@W4ACTIVATEOPTIONSINTERN.c)
 */

__int64 __fastcall CSwitchController::_PrepareAppForActivation(
        __int64 a1,
        WCHAR *a2,
        __int64 a3,
        const WCHAR *a4,
        int a5,
        __int64 *a6)
{
  __int64 v10; // rbx
  __int64 v11; // rbx

  v10 = a6[3];
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(a6 + 2);
  CSwitchController::_GetAppForSwitch(a1, (__int64)a2, v10 != 0, a6[1], a6 + 2);
  v11 = a6[2];
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(a6 + 3);
  return CSwitchController::_PackageActivationArguments(
           a6[6],
           a2,
           a3,
           a4,
           a6[6],
           a5,
           v11 == 0,
           (CDelayedTileActivation *)(a6 + 3));
}
