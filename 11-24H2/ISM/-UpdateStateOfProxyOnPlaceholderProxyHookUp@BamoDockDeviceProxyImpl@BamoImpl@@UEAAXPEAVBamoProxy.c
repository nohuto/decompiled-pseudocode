/*
 * XREFs of ?UpdateStateOfProxyOnPlaceholderProxyHookUp@BamoDockDeviceProxyImpl@BamoImpl@@UEAAXPEAVBamoProxyImpl@2Microsoft@@@Z @ 0x18012C160
 * Callers:
 *     <none>
 * Callees:
 *     ?UpdateDisplayOcclusionSupported@BamoDockDeviceProxyImpl@BamoImpl@@QEAAJ_N0@Z @ 0x18012835C (-UpdateDisplayOcclusionSupported@BamoDockDeviceProxyImpl@BamoImpl@@QEAAJ_N0@Z.c)
 *     ?UpdatePanelId@BamoDockDeviceProxyImpl@BamoImpl@@QEAAJ_NPEBG@Z @ 0x18012AF7C (-UpdatePanelId@BamoDockDeviceProxyImpl@BamoImpl@@QEAAJ_NPEBG@Z.c)
 */

void __fastcall BamoImpl::BamoDockDeviceProxyImpl::UpdateStateOfProxyOnPlaceholderProxyHookUp(
        BamoImpl::BamoDockDeviceProxyImpl *this,
        struct Microsoft::BamoImpl::BamoProxyImpl *a2)
{
  __int64 v4; // r8

  BamoImpl::BamoDockDeviceProxyImpl::UpdatePanelId(this, 0, *((unsigned __int16 **)a2 + 4));
  LOBYTE(v4) = *((_BYTE *)a2 + 40);
  BamoImpl::BamoDockDeviceProxyImpl::UpdateDisplayOcclusionSupported(this, 0LL, v4);
  BamoImpl::BamoDockDeviceProxyImpl::UpdateDisplayOcclusionLogicalRange(
    this,
    0LL,
    (const struct tagRECT *)((char *)a2 + 44));
}
