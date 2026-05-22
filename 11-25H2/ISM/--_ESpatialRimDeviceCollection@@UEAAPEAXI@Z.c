/*
 * XREFs of ??_ESpatialRimDeviceCollection@@UEAAPEAXI@Z @ 0x1800D2580
 * Callers:
 *     <none>
 * Callees:
 *     ?UpdateStateOfProxyOnPlaceholderProxyHookUp@BamoMPCConstantManagerClientProxyImpl@BamoImpl@@UEAAXPEAVBamoProxyImpl@2Microsoft@@@Z @ 0x18007AE50 (-UpdateStateOfProxyOnPlaceholderProxyHookUp@BamoMPCConstantManagerClientProxyImpl@BamoImpl@@UEAA.c)
 *     ??1SpatialRimDeviceCollection@@UEAA@XZ @ 0x1800D237C (--1SpatialRimDeviceCollection@@UEAA@XZ.c)
 */

SpatialRimDeviceCollection *__fastcall SpatialRimDeviceCollection::`vector deleting destructor'(
        SpatialRimDeviceCollection *this,
        void *a2)
{
  char v2; // di

  v2 = (char)a2;
  SpatialRimDeviceCollection::~SpatialRimDeviceCollection(this, a2);
  if ( (v2 & 1) != 0 )
  {
    if ( (v2 & 4) != 0 )
      BamoImpl::BamoMPCConstantManagerClientProxyImpl::UpdateStateOfProxyOnPlaceholderProxyHookUp(
        this,
        (struct Microsoft::BamoImpl::BamoProxyImpl *)0xBA8);
    else
      free(this);
  }
  return this;
}
