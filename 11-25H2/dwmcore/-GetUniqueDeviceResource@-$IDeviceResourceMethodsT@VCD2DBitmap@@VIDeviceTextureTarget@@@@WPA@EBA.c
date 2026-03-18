/*
 * XREFs of ?GetUniqueDeviceResource@?$IDeviceResourceMethodsT@VCD2DBitmap@@VIDeviceTextureTarget@@@@WPA@EBAPEBVIDeviceResource@@XZ @ 0x1802D6DB0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct Microsoft::BamoImpl::BamoPrincipalImpl *__fastcall IDeviceResourceMethodsT<CD2DBitmap,IDeviceTextureTarget>::GetUniqueDeviceResource(
        __int64 a1)
{
  return Microsoft::BamoImpl::BamoPrincipalImpl::AsPrincipal((Microsoft::BamoImpl::BamoPrincipalImpl *)(a1 - 240));
}
