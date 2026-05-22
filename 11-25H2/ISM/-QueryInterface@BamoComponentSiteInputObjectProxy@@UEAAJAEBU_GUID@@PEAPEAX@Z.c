/*
 * XREFs of ?QueryInterface@BamoComponentSiteInputObjectProxy@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18009C260
 * Callers:
 *     ?QueryInterface@BamoComponentSiteInputObjectProxy@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18011F620 (-QueryInterface@BamoComponentSiteInputObjectProxy@@W7EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall BamoComponentSiteInputObjectProxy::QueryInterface(
        void (__fastcall ***this)(_QWORD),
        _QWORD *a2,
        _QWORD *a3)
{
  return Microsoft::BamoImpl::Util::QueryInterface<BamoComponentSiteInputObjectProxy,IComponentSiteInputObjectProxy>(
           this,
           a2,
           a3);
}
