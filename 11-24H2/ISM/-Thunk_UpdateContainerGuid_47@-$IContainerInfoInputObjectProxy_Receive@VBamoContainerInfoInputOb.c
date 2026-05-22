/*
 * XREFs of ?Thunk_UpdateContainerGuid_47@?$IContainerInfoInputObjectProxy_Receive@VBamoContainerInfoInputObjectProxyImpl@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x1801265E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall IContainerInfoInputObjectProxy_Receive<BamoImpl::BamoContainerInfoInputObjectProxyImpl>::Thunk_UpdateContainerGuid_47(
        BamoImpl::BamoContainerInfoInputObjectProxyImpl *a1,
        const struct _GUID **a2)
{
  return BamoImpl::BamoContainerInfoInputObjectProxyImpl::UpdateContainerGuid(a1, 1, *a2);
}
