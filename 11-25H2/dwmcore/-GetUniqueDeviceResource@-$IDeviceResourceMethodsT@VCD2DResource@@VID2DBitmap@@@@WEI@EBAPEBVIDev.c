/*
 * XREFs of ?GetUniqueDeviceResource@?$IDeviceResourceMethodsT@VCD2DResource@@VID2DBitmap@@@@WEI@EBAPEBVIDeviceResource@@XZ @ 0x1802D67C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct Microsoft::BamoImpl::BamoPrincipalImpl *__fastcall IDeviceResourceMethodsT<CD2DResource,ID2DBitmap>::GetUniqueDeviceResource(
        __int64 a1)
{
  return Microsoft::BamoImpl::BamoPrincipalImpl::AsPrincipal((Microsoft::BamoImpl::BamoPrincipalImpl *)(a1 - 72));
}
