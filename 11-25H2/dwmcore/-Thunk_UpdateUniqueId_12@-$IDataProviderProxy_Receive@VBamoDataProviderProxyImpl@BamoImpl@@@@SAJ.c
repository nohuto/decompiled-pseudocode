/*
 * XREFs of ?Thunk_UpdateUniqueId_12@?$IDataProviderProxy_Receive@VBamoDataProviderProxyImpl@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x180255000
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall IDataProviderProxy_Receive<BamoImpl::BamoDataProviderProxyImpl>::Thunk_UpdateUniqueId_12(
        BamoImpl::BamoDataProviderProxyImpl *a1,
        const struct _LUID **a2)
{
  const struct _LUID *v2; // r8

  v2 = *a2;
  LOBYTE(a2) = 1;
  return BamoImpl::BamoDataProviderProxyImpl::UpdateUniqueId(a1, (__int64)a2, v2);
}
