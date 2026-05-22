/*
 * XREFs of ?UpdateStateOfProxyOnPlaceholderProxyHookUp@BamoControllerNavigationClientProxyImpl@BamoImpl@@UEAAXPEAVBamoProxyImpl@2Microsoft@@@Z @ 0x180178690
 * Callers:
 *     <none>
 * Callees:
 *     ?UpdateBounds@BamoControllerNavigationClientProxyImpl@BamoImpl@@QEAAJ_NPEBUtagRECT@@@Z @ 0x180177D64 (-UpdateBounds@BamoControllerNavigationClientProxyImpl@BamoImpl@@QEAAJ_NPEBUtagRECT@@@Z.c)
 *     ?UpdateEnabled@BamoControllerNavigationClientProxyImpl@BamoImpl@@QEAAJ_N0@Z @ 0x180177FB4 (-UpdateEnabled@BamoControllerNavigationClientProxyImpl@BamoImpl@@QEAAJ_N0@Z.c)
 *     ?UpdateFeatures@BamoControllerNavigationClientProxyImpl@BamoImpl@@QEAAJ_NI@Z @ 0x1801780D4 (-UpdateFeatures@BamoControllerNavigationClientProxyImpl@BamoImpl@@QEAAJ_NI@Z.c)
 *     ?UpdateStartPosition@BamoControllerNavigationClientProxyImpl@BamoImpl@@QEAAJ_NPEBUtagPOINT@@@Z @ 0x180178564 (-UpdateStartPosition@BamoControllerNavigationClientProxyImpl@BamoImpl@@QEAAJ_NPEBUtagPOINT@@@Z.c)
 */

void __fastcall BamoImpl::BamoControllerNavigationClientProxyImpl::UpdateStateOfProxyOnPlaceholderProxyHookUp(
        BamoImpl::BamoControllerNavigationClientProxyImpl *this,
        struct Microsoft::BamoImpl::BamoProxyImpl *a2,
        __int64 a3)
{
  LOBYTE(a3) = *((_BYTE *)a2 + 32);
  BamoImpl::BamoControllerNavigationClientProxyImpl::UpdateEnabled(this, 0LL, a3);
  BamoImpl::BamoControllerNavigationClientProxyImpl::UpdateFeatures(this, 0LL, *((unsigned int *)a2 + 9));
  BamoImpl::BamoControllerNavigationClientProxyImpl::UpdateBounds(this, 0LL, (const struct tagRECT *)((char *)a2 + 40));
  BamoImpl::BamoControllerNavigationClientProxyImpl::UpdateStartPosition(this, 0LL, (const struct tagPOINT *)a2 + 7);
  BamoImpl::BamoControllerNavigationClientProxyImpl::UpdateVisualReferenceId(this, 0, *((_QWORD *)a2 + 8));
}
