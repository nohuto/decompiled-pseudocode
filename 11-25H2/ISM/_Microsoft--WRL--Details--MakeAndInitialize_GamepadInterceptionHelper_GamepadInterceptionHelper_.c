/*
 * XREFs of _Microsoft::WRL::Details::MakeAndInitialize_GamepadInterceptionHelper_GamepadInterceptionHelper__::_1_::dtor$1 @ 0x1801CF569
 * Callers:
 *     <none>
 * Callees:
 *     ?UpdateStateOfProxyOnPlaceholderProxyHookUp@BamoMPCConstantManagerClientProxyImpl@BamoImpl@@UEAAXPEAVBamoProxyImpl@2Microsoft@@@Z @ 0x18007AE50 (-UpdateStateOfProxyOnPlaceholderProxyHookUp@BamoMPCConstantManagerClientProxyImpl@BamoImpl@@UEAA.c)
 */

void __fastcall Microsoft::WRL::Details::MakeAndInitialize_GamepadInterceptionHelper_GamepadInterceptionHelper__::_1_::dtor_1(
        __int64 a1,
        __int64 a2)
{
  BamoImpl::BamoMPCConstantManagerClientProxyImpl::UpdateStateOfProxyOnPlaceholderProxyHookUp(
    *(BamoImpl::BamoMPCConstantManagerClientProxyImpl **)(a2 + 80),
    *(struct Microsoft::BamoImpl::BamoProxyImpl **)(a2 + 72));
}
