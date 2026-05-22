/*
 * XREFs of ?UpdateStateOfProxyOnPlaceholderProxyHookUp@BamoManualDragAreaClientProxyImpl@BamoImpl@@UEAAXPEAVBamoProxyImpl@2Microsoft@@@Z @ 0x180146B60
 * Callers:
 *     <none>
 * Callees:
 *     ?UpdateType@BamoManualDragAreaClientProxyImpl@BamoImpl@@QEAAJ_NPEBU_GUID@@@Z @ 0x180146B9C (-UpdateType@BamoManualDragAreaClientProxyImpl@BamoImpl@@QEAAJ_NPEBU_GUID@@@Z.c)
 */

void __fastcall BamoImpl::BamoManualDragAreaClientProxyImpl::UpdateStateOfProxyOnPlaceholderProxyHookUp(
        BamoImpl::BamoManualDragAreaClientProxyImpl *this,
        const struct _GUID *a2)
{
  BamoImpl::BamoManualDragAreaClientProxyImpl::UpdateType(this, 0, a2 + 2);
  BamoImpl::BamoManualDragAreaClientProxyImpl::UpdateDeliveryMode((__int64)this, 0LL, a2[3].Data1);
}
