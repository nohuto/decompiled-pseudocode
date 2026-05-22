/*
 * XREFs of ?UpdateStateOfProxyOnPlaceholderProxyHookUp@BamoDragManagerClientProxyImpl@BamoImpl@@UEAAXPEAVBamoProxyImpl@2Microsoft@@@Z @ 0x180143910
 * Callers:
 *     <none>
 * Callees:
 *     ?UpdateSourceType@BamoDragManagerClientProxyImpl@BamoImpl@@QEAAJ_NPEBU_GUID@@@Z @ 0x18007C688 (-UpdateSourceType@BamoDragManagerClientProxyImpl@BamoImpl@@QEAAJ_NPEBU_GUID@@@Z.c)
 */

void __fastcall BamoImpl::BamoDragManagerClientProxyImpl::UpdateStateOfProxyOnPlaceholderProxyHookUp(
        BamoImpl::BamoDragManagerClientProxyImpl *this,
        struct Microsoft::BamoImpl::BamoProxyImpl *a2)
{
  BamoImpl::BamoDragManagerClientProxyImpl::UpdateSourceType(this, 0LL, (const struct _GUID *)a2 + 2);
  BamoImpl::BamoDragManagerClientProxyImpl::UpdateSuppressionRegions(
    this,
    0,
    *((const struct tagRECT **)a2 + 6),
    *((_DWORD *)a2 + 14));
}
