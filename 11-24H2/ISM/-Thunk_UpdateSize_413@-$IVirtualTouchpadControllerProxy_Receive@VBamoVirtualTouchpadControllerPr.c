/*
 * XREFs of ?Thunk_UpdateSize_413@?$IVirtualTouchpadControllerProxy_Receive@VBamoVirtualTouchpadControllerProxyImpl@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x180136CD0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall IVirtualTouchpadControllerProxy_Receive<BamoImpl::BamoVirtualTouchpadControllerProxyImpl>::Thunk_UpdateSize_413(
        BamoImpl::BamoVirtualTouchpadControllerProxyImpl *a1,
        const struct Windows::UI::Internal::Input::VirtualTouchpadSize **a2)
{
  return BamoImpl::BamoVirtualTouchpadControllerProxyImpl::UpdateSize(a1, 1, *a2);
}
