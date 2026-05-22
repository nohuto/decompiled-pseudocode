/*
 * XREFs of ?Thunk_UpdateContainerId_52@?$IContainerInfoInputObjectProxy_Receive@VBamoContainerInfoInputObjectProxyImpl@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x1801265F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall IContainerInfoInputObjectProxy_Receive<BamoImpl::BamoContainerInfoInputObjectProxyImpl>::Thunk_UpdateContainerId_52(
        BamoImpl::BamoContainerInfoInputObjectProxyImpl *a1,
        const struct CONTAINER_ID **a2)
{
  return BamoImpl::BamoContainerInfoInputObjectProxyImpl::UpdateContainerId(a1, 1, *a2);
}
