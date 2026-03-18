/*
 * XREFs of ?Thunk_UpdateUniqueId_12@?$IDataSourceProxy_Receive@VBamoDataSourceProxyImpl@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x18024E340
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall IDataSourceProxy_Receive<BamoImpl::BamoDataSourceProxyImpl>::Thunk_UpdateUniqueId_12(
        BamoImpl::BamoDataSourceProxyImpl *a1,
        const struct _LUID **a2)
{
  const struct _LUID *v2; // r8

  v2 = *a2;
  LOBYTE(a2) = 1;
  return BamoImpl::BamoDataSourceProxyImpl::UpdateUniqueId(a1, (__int64)a2, v2);
}
