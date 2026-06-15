/*
 * XREFs of ??1?$unique_storage@U?$resource_policy@PEAUCO_DEVICE_CATALOG_COOKIE__@@P6AJPEAU1@@Z$1?CoRevokeDeviceCatalog@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x14004CEB8
 * Callers:
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUCO_DEVICE_CATALOG_COOKIE__@@P6AJPEAU1@@Z$1?CoRevokeDeviceCatalog@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x1400589A8 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAUCO_DEVICE_CATALOG_COOKIE__@@P6AJPEAU1.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall wil::details::unique_storage<wil::details::resource_policy<CO_DEVICE_CATALOG_COOKIE__ *,long (*)(CO_DEVICE_CATALOG_COOKIE__ *),&long CoRevokeDeviceCatalog(CO_DEVICE_CATALOG_COOKIE__ *),wistd::integral_constant<unsigned __int64,0>,CO_DEVICE_CATALOG_COOKIE__ *,CO_DEVICE_CATALOG_COOKIE__ *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<CO_DEVICE_CATALOG_COOKIE__ *,long (*)(CO_DEVICE_CATALOG_COOKIE__ *),&long CoRevokeDeviceCatalog(CO_DEVICE_CATALOG_COOKIE__ *),wistd::integral_constant<unsigned __int64,0>,CO_DEVICE_CATALOG_COOKIE__ *,CO_DEVICE_CATALOG_COOKIE__ *,0,std::nullptr_t>>(
        __int64 *a1)
{
  __int64 v1; // rcx
  __int64 result; // rax

  v1 = *a1;
  if ( v1 )
    return CoRevokeDeviceCatalog(v1);
  return result;
}
