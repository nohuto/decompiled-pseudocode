/*
 * XREFs of ?UpdateStateOfProxyOnPlaceholderProxyHookUp@BamoContainerInfoInputObjectProxyImpl@BamoImpl@@UEAAXPEAVBamoProxyImpl@2Microsoft@@@Z @ 0x18012C0A0
 * Callers:
 *     <none>
 * Callees:
 *     ?UpdateContainerGuid@BamoContainerInfoInputObjectProxyImpl@BamoImpl@@QEAAJ_NPEBU_GUID@@@Z @ 0x1801275C4 (-UpdateContainerGuid@BamoContainerInfoInputObjectProxyImpl@BamoImpl@@QEAAJ_NPEBU_GUID@@@Z.c)
 */

void __fastcall BamoImpl::BamoContainerInfoInputObjectProxyImpl::UpdateStateOfProxyOnPlaceholderProxyHookUp(
        BamoImpl::BamoContainerInfoInputObjectProxyImpl *this,
        const struct _GUID *a2)
{
  BamoImpl::BamoContainerInfoInputObjectProxyImpl::UpdateContainerGuid(this, 0LL, a2 + 2);
  BamoImpl::BamoContainerInfoInputObjectProxyImpl::UpdateContainerId(this, 0LL, (const struct CONTAINER_ID *)&a2[3]);
}
