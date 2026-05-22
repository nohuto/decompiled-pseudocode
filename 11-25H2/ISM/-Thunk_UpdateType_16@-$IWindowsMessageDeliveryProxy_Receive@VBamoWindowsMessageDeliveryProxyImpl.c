/*
 * XREFs of ?Thunk_UpdateType_16@?$IWindowsMessageDeliveryProxy_Receive@VBamoWindowsMessageDeliveryProxyImpl@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x18007A290
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall IWindowsMessageDeliveryProxy_Receive<BamoImpl::BamoWindowsMessageDeliveryProxyImpl>::Thunk_UpdateType_16(
        __int64 a1,
        _QWORD *a2)
{
  unsigned int *v2; // rax

  v2 = (unsigned int *)*a2;
  LOBYTE(a2) = 1;
  return BamoImpl::BamoWindowsMessageDeliveryProxyImpl::UpdateType(a1, (__int64)a2, *v2);
}
