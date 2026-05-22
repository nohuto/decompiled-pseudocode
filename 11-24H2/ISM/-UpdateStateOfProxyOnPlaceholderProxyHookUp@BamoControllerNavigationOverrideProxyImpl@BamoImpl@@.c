/*
 * XREFs of ?UpdateStateOfProxyOnPlaceholderProxyHookUp@BamoControllerNavigationOverrideProxyImpl@BamoImpl@@UEAAXPEAVBamoProxyImpl@2Microsoft@@@Z @ 0x180178700
 * Callers:
 *     <none>
 * Callees:
 *     ?UpdateBounds@BamoControllerNavigationOverrideProxyImpl@BamoImpl@@QEAAJ_NPEBUtagRECT@@@Z @ 0x180177E8C (-UpdateBounds@BamoControllerNavigationOverrideProxyImpl@BamoImpl@@QEAAJ_NPEBUtagRECT@@@Z.c)
 *     ?UpdateFeatures@BamoControllerNavigationOverrideProxyImpl@BamoImpl@@QEAAJ_NI@Z @ 0x1801781F8 (-UpdateFeatures@BamoControllerNavigationOverrideProxyImpl@BamoImpl@@QEAAJ_NI@Z.c)
 *     ?UpdatePaused@BamoControllerNavigationOverrideProxyImpl@BamoImpl@@QEAAJ_N0@Z @ 0x18017831C (-UpdatePaused@BamoControllerNavigationOverrideProxyImpl@BamoImpl@@QEAAJ_N0@Z.c)
 *     ?UpdateResumePosition@BamoControllerNavigationOverrideProxyImpl@BamoImpl@@QEAAJ_NPEBUtagPOINT@@@Z @ 0x18017843C (-UpdateResumePosition@BamoControllerNavigationOverrideProxyImpl@BamoImpl@@QEAAJ_NPEBUtagPOINT@@@.c)
 */

void __fastcall BamoImpl::BamoControllerNavigationOverrideProxyImpl::UpdateStateOfProxyOnPlaceholderProxyHookUp(
        BamoImpl::BamoControllerNavigationOverrideProxyImpl *this,
        struct Microsoft::BamoImpl::BamoProxyImpl *a2,
        __int64 a3)
{
  LOBYTE(a3) = *((_BYTE *)a2 + 32);
  BamoImpl::BamoControllerNavigationOverrideProxyImpl::UpdatePaused(this, 0LL, a3);
  BamoImpl::BamoControllerNavigationOverrideProxyImpl::UpdateFeatures(this, 0LL, *((unsigned int *)a2 + 9));
  BamoImpl::BamoControllerNavigationOverrideProxyImpl::UpdateBounds(
    this,
    0LL,
    (const struct tagRECT *)((char *)a2 + 40));
  BamoImpl::BamoControllerNavigationOverrideProxyImpl::UpdateResumePosition(this, 0LL, (const struct tagPOINT *)a2 + 7);
  BamoImpl::BamoControllerNavigationOverrideProxyImpl::UpdateVisualReferenceId(this, 0, *((_QWORD *)a2 + 8));
}
