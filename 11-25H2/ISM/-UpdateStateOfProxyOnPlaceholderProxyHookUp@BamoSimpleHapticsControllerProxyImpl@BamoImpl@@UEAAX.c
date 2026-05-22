/*
 * XREFs of ?UpdateStateOfProxyOnPlaceholderProxyHookUp@BamoSimpleHapticsControllerProxyImpl@BamoImpl@@UEAAXPEAVBamoProxyImpl@2Microsoft@@@Z @ 0x18012A700
 * Callers:
 *     <none>
 * Callees:
 *     ?UpdateIsIntensitySupported@BamoSimpleHapticsControllerProxyImpl@BamoImpl@@QEAAJ_N0@Z @ 0x180128930 (-UpdateIsIntensitySupported@BamoSimpleHapticsControllerProxyImpl@BamoImpl@@QEAAJ_N0@Z.c)
 *     ?UpdateIsPlayCountSupported@BamoSimpleHapticsControllerProxyImpl@BamoImpl@@QEAAJ_N0@Z @ 0x180128A54 (-UpdateIsPlayCountSupported@BamoSimpleHapticsControllerProxyImpl@BamoImpl@@QEAAJ_N0@Z.c)
 *     ?UpdateIsPlayDurationSupported@BamoSimpleHapticsControllerProxyImpl@BamoImpl@@QEAAJ_N0@Z @ 0x180128B7C (-UpdateIsPlayDurationSupported@BamoSimpleHapticsControllerProxyImpl@BamoImpl@@QEAAJ_N0@Z.c)
 *     ?UpdateSupportedFeedback@BamoSimpleHapticsControllerProxyImpl@BamoImpl@@QEAAJ_NI@Z @ 0x18012A7C4 (-UpdateSupportedFeedback@BamoSimpleHapticsControllerProxyImpl@BamoImpl@@QEAAJ_NI@Z.c)
 */

void __fastcall BamoImpl::BamoSimpleHapticsControllerProxyImpl::UpdateStateOfProxyOnPlaceholderProxyHookUp(
        BamoImpl::BamoSimpleHapticsControllerProxyImpl *this,
        struct Microsoft::BamoImpl::BamoProxyImpl *a2)
{
  __int64 v2; // r8
  __int64 v5; // r8
  __int64 v6; // r8
  __int64 v7; // r8

  v2 = *((_QWORD *)a2 + 4);
  if ( v2 )
    BamoImpl::BamoSimpleHapticsControllerProxyImpl::UpdateSupportedFeedback(this, 0, *(_DWORD *)(v2 + 40));
  LOBYTE(v2) = *((_BYTE *)a2 + 40);
  BamoImpl::BamoSimpleHapticsControllerProxyImpl::UpdateIsIntensitySupported(this, 0LL, v2);
  LOBYTE(v5) = *((_BYTE *)a2 + 41);
  BamoImpl::BamoSimpleHapticsControllerProxyImpl::UpdateIsPlayCountSupported(this, 0LL, v5);
  LOBYTE(v6) = *((_BYTE *)a2 + 42);
  BamoImpl::BamoSimpleHapticsControllerProxyImpl::UpdateIsPlayDurationSupported(this, 0LL, v6);
  LOBYTE(v7) = *((_BYTE *)a2 + 43);
  BamoImpl::BamoSimpleHapticsControllerProxyImpl::UpdateIsReplayPauseIntervalSupported(this, 0LL, v7);
}
