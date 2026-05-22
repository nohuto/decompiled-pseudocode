/*
 * XREFs of ?Thunk_UpdatePrimaryClickZone_418@?$IVirtualTouchpadControllerProxy_Receive@VBamoVirtualTouchpadControllerProxyImpl@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x180136C90
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall IVirtualTouchpadControllerProxy_Receive<BamoImpl::BamoVirtualTouchpadControllerProxyImpl>::Thunk_UpdatePrimaryClickZone_418(
        BamoImpl::BamoVirtualTouchpadControllerProxyImpl *a1,
        const struct Windows::UI::Internal::Input::PhysicalClickZone **a2)
{
  return BamoImpl::BamoVirtualTouchpadControllerProxyImpl::UpdatePrimaryClickZone(a1, 1, *a2);
}
