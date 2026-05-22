/*
 * XREFs of ?UpdateStateOfProxyOnPlaceholderProxyHookUp@BamoDropTargetClientProxyImpl@BamoImpl@@UEAAXPEAVBamoProxyImpl@2Microsoft@@@Z @ 0x18012A220
 * Callers:
 *     <none>
 * Callees:
 *     ?UpdateId@BamoDropTargetClientProxyImpl@BamoImpl@@QEAAJ_N_K@Z @ 0x1800792AC (-UpdateId@BamoDropTargetClientProxyImpl@BamoImpl@@QEAAJ_N_K@Z.c)
 */

void __fastcall BamoImpl::BamoDropTargetClientProxyImpl::UpdateStateOfProxyOnPlaceholderProxyHookUp(
        BamoImpl::BamoDropTargetClientProxyImpl *this,
        struct Microsoft::BamoImpl::BamoProxyImpl *a2)
{
  BamoImpl::BamoDropTargetClientProxyImpl::UpdateId(this, 0LL, *((_QWORD *)a2 + 4));
  BamoImpl::BamoDropTargetClientProxyImpl::UpdateType(this, 0LL, (const struct _GUID *)((char *)a2 + 40));
}
