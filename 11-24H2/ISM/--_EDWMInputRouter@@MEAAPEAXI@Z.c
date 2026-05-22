/*
 * XREFs of ??_EDWMInputRouter@@MEAAPEAXI@Z @ 0x18019EB4C
 * Callers:
 *     ??_EDWMInputRouter@@OEI@EAAPEAXI@Z @ 0x18019EB00 (--_EDWMInputRouter@@OEI@EAAPEAXI@Z.c)
 * Callees:
 *     ?UpdateStateOfProxyOnPlaceholderProxyHookUp@BamoMPCConstantManagerClientProxyImpl@BamoImpl@@UEAAXPEAVBamoProxyImpl@2Microsoft@@@Z @ 0x18007A940 (-UpdateStateOfProxyOnPlaceholderProxyHookUp@BamoMPCConstantManagerClientProxyImpl@BamoImpl@@UEAA.c)
 *     ??1DWMInputRouter@@MEAA@XZ @ 0x18019E714 (--1DWMInputRouter@@MEAA@XZ.c)
 */

DWMInputRouter *__fastcall DWMInputRouter::`vector deleting destructor'(DWMInputRouter *this, char a2)
{
  DWMInputRouter::~DWMInputRouter(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      BamoImpl::BamoMPCConstantManagerClientProxyImpl::UpdateStateOfProxyOnPlaceholderProxyHookUp(
        this,
        (struct Microsoft::BamoImpl::BamoProxyImpl *)0x270);
    else
      free(this);
  }
  return this;
}
