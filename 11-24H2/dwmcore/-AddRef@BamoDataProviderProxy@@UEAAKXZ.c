/*
 * XREFs of ?AddRef@BamoDataProviderProxy@@UEAAKXZ @ 0x18024ECC0
 * Callers:
 *     ?AddRef@BamoList_uint_Proxy@dataprovider_AutoBamos@Lib@Bamo@Microsoft@@W7EAAKXZ @ 0x1802704E0 (-AddRef@BamoList_uint_Proxy@dataprovider_AutoBamos@Lib@Bamo@Microsoft@@W7EAAKXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall BamoDataProviderProxy::AddRef(BamoDataProviderProxy *this)
{
  return (**((__int64 (__fastcall ***)(char *))this + 2))((char *)this + 16);
}
