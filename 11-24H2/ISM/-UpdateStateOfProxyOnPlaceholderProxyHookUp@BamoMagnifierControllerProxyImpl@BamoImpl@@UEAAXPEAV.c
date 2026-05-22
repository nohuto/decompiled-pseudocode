/*
 * XREFs of ?UpdateStateOfProxyOnPlaceholderProxyHookUp@BamoMagnifierControllerProxyImpl@BamoImpl@@UEAAXPEAVBamoProxyImpl@2Microsoft@@@Z @ 0x180158810
 * Callers:
 *     <none>
 * Callees:
 *     ?UpdateGesturesEnabled@BamoMagnifierControllerProxyImpl@BamoImpl@@QEAAJ_N0@Z @ 0x1801586E0 (-UpdateGesturesEnabled@BamoMagnifierControllerProxyImpl@BamoImpl@@QEAAJ_N0@Z.c)
 *     ?UpdateToggleEnabled@BamoMagnifierControllerProxyImpl@BamoImpl@@QEAAJ_N0@Z @ 0x180158858 (-UpdateToggleEnabled@BamoMagnifierControllerProxyImpl@BamoImpl@@QEAAJ_N0@Z.c)
 */

void __fastcall BamoImpl::BamoMagnifierControllerProxyImpl::UpdateStateOfProxyOnPlaceholderProxyHookUp(
        BamoImpl::BamoMagnifierControllerProxyImpl *this,
        struct Microsoft::BamoImpl::BamoProxyImpl *a2)
{
  __int64 v4; // r8

  BamoImpl::BamoMagnifierControllerProxyImpl::UpdateToggleEnabled(this, 0, *((_BYTE *)a2 + 32));
  LOBYTE(v4) = *((_BYTE *)a2 + 33);
  BamoImpl::BamoMagnifierControllerProxyImpl::UpdateGesturesEnabled(this, 0LL, v4);
  BamoImpl::BamoMagnifierControllerProxyImpl::UpdateUseInputSiteCoordinateSpace(this, 0, *((_BYTE *)a2 + 34));
}
