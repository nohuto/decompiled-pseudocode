/*
 * XREFs of ?Thunk_UpdateHwnd_0@?$IWindowsMessageDeliveryProxy_Receive@VBamoWindowsMessageDeliveryProxyImpl@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x18007AE10
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall IWindowsMessageDeliveryProxy_Receive<BamoImpl::BamoWindowsMessageDeliveryProxyImpl>::Thunk_UpdateHwnd_0(
        BamoImpl::BamoWindowsMessageDeliveryProxyImpl *a1,
        unsigned __int64 **a2)
{
  unsigned __int64 *v2; // rax

  v2 = *a2;
  LOBYTE(a2) = 1;
  return BamoImpl::BamoWindowsMessageDeliveryProxyImpl::UpdateHwnd(a1, (__int64)a2, *v2);
}
