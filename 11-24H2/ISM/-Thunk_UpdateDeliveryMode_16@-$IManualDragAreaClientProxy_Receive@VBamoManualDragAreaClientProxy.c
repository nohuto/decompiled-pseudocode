/*
 * XREFs of ?Thunk_UpdateDeliveryMode_16@?$IManualDragAreaClientProxy_Receive@VBamoManualDragAreaClientProxyImpl@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x180148BD0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall IManualDragAreaClientProxy_Receive<BamoImpl::BamoManualDragAreaClientProxyImpl>::Thunk_UpdateDeliveryMode_16(
        __int64 a1,
        unsigned int **a2)
{
  unsigned int *v2; // rax

  v2 = *a2;
  LOBYTE(a2) = 1;
  return BamoImpl::BamoManualDragAreaClientProxyImpl::UpdateDeliveryMode(a1, a2, *v2);
}
