/*
 * XREFs of ?UpdateStateOfProxyOnPlaceholderProxyHookUp@BamoPenDeviceProxyImpl@BamoImpl@@UEAAXPEAVBamoProxyImpl@2Microsoft@@@Z @ 0x18012C6B0
 * Callers:
 *     <none>
 * Callees:
 *     ?UpdateHaptics@BamoPenDeviceProxyImpl@BamoImpl@@QEAAJ_NI@Z @ 0x180129634 (-UpdateHaptics@BamoPenDeviceProxyImpl@BamoImpl@@QEAAJ_NI@Z.c)
 *     ?UpdateUniqueId@BamoPenDeviceProxyImpl@BamoImpl@@QEAAJ_NPEBU_GUID@@@Z @ 0x18012DA90 (-UpdateUniqueId@BamoPenDeviceProxyImpl@BamoImpl@@QEAAJ_NPEBU_GUID@@@Z.c)
 */

void __fastcall BamoImpl::BamoPenDeviceProxyImpl::UpdateStateOfProxyOnPlaceholderProxyHookUp(
        BamoImpl::BamoPenDeviceProxyImpl *this,
        const struct _GUID *a2)
{
  __int64 v4; // r8

  BamoImpl::BamoPenDeviceProxyImpl::UpdateUniqueId(this, 0, a2 + 2);
  v4 = *(_QWORD *)&a2[3].Data1;
  if ( v4 )
    BamoImpl::BamoPenDeviceProxyImpl::UpdateHaptics(this, 0LL, *(unsigned int *)(v4 + 40));
}
