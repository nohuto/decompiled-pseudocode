/*
 * XREFs of ?UpdateStateOfProxyOnPlaceholderProxyHookUp@BamoDockableDeviceProxyImpl@BamoImpl@@UEAAXPEAVBamoProxyImpl@2Microsoft@@@Z @ 0x18012A130
 * Callers:
 *     <none>
 * Callees:
 *     ?UpdateDeviceId@BamoDockableDeviceProxyImpl@BamoImpl@@QEAAJ_NPEBUDockableDeviceIdentity@@@Z @ 0x1801260E8 (-UpdateDeviceId@BamoDockableDeviceProxyImpl@BamoImpl@@QEAAJ_NPEBUDockableDeviceIdentity@@@Z.c)
 *     ?UpdateDeviceType@BamoDockableDeviceProxyImpl@BamoImpl@@QEAAJ_NW4DockableDeviceObjectType@@@Z @ 0x18012620C (-UpdateDeviceType@BamoDockableDeviceProxyImpl@BamoImpl@@QEAAJ_NW4DockableDeviceObjectType@@@Z.c)
 *     ?UpdateInterfacePath@BamoDockableDeviceProxyImpl@BamoImpl@@QEAAJ_NPEBG@Z @ 0x1801287A8 (-UpdateInterfacePath@BamoDockableDeviceProxyImpl@BamoImpl@@QEAAJ_NPEBG@Z.c)
 *     ?UpdatePrimaryUsagePage@BamoDockableDeviceProxyImpl@BamoImpl@@QEAAJ_NG@Z @ 0x180129490 (-UpdatePrimaryUsagePage@BamoDockableDeviceProxyImpl@BamoImpl@@QEAAJ_NG@Z.c)
 */

void __fastcall BamoImpl::BamoDockableDeviceProxyImpl::UpdateStateOfProxyOnPlaceholderProxyHookUp(
        BamoImpl::BamoDockableDeviceProxyImpl *this,
        unsigned __int16 **a2)
{
  BamoImpl::BamoDockableDeviceProxyImpl::UpdateInterfacePath(this, 0, a2[4]);
  BamoImpl::BamoDockableDeviceProxyImpl::UpdateDeviceId(this, 0LL, (const struct DockableDeviceIdentity *)(a2 + 5));
  BamoImpl::BamoDockableDeviceProxyImpl::UpdateDeviceType((__int64)this, 0LL, *((unsigned int *)a2 + 14));
  BamoImpl::BamoDockableDeviceProxyImpl::UpdatePrimaryUsagePage(this, 0LL, *((unsigned __int16 *)a2 + 30));
  BamoImpl::BamoDockableDeviceProxyImpl::UpdatePrimaryUsageId(this, 0LL, *((unsigned __int16 *)a2 + 31));
}
