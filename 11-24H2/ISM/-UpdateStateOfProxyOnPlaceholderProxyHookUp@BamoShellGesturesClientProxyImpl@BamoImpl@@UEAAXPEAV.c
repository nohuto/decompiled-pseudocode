/*
 * XREFs of ?UpdateStateOfProxyOnPlaceholderProxyHookUp@BamoShellGesturesClientProxyImpl@BamoImpl@@UEAAXPEAVBamoProxyImpl@2Microsoft@@@Z @ 0x18015B1B0
 * Callers:
 *     <none>
 * Callees:
 *     ?UpdateTouchEnabled@BamoShellGesturesClientProxyImpl@BamoImpl@@QEAAJ_N0@Z @ 0x180082C20 (-UpdateTouchEnabled@BamoShellGesturesClientProxyImpl@BamoImpl@@QEAAJ_N0@Z.c)
 *     ?UpdateInputSinkData@BamoShellGesturesClientProxyImpl@BamoImpl@@QEAAJ_NPEBUInputSinkData@@@Z @ 0x180097258 (-UpdateInputSinkData@BamoShellGesturesClientProxyImpl@BamoImpl@@QEAAJ_NPEBUInputSinkData@@@Z.c)
 *     ?UpdateTouchpadEnabled@BamoShellGesturesClientProxyImpl@BamoImpl@@QEAAJ_N0@Z @ 0x180098580 (-UpdateTouchpadEnabled@BamoShellGesturesClientProxyImpl@BamoImpl@@QEAAJ_N0@Z.c)
 *     ?UpdateTouchpadSupportedGestures@BamoShellGesturesClientProxyImpl@BamoImpl@@QEAAJ_NW4TouchpadGlobalGestureKinds@Input@Internal@UI@Windows@@@Z @ 0x18015B3B4 (-UpdateTouchpadSupportedGestures@BamoShellGesturesClientProxyImpl@BamoImpl@@QEAAJ_NW4TouchpadGlo.c)
 */

void __fastcall BamoImpl::BamoShellGesturesClientProxyImpl::UpdateStateOfProxyOnPlaceholderProxyHookUp(
        BamoImpl::BamoShellGesturesClientProxyImpl *this,
        struct Microsoft::BamoImpl::BamoProxyImpl *a2,
        __int64 a3)
{
  __int64 v5; // r8

  LOBYTE(a3) = *((_BYTE *)a2 + 32);
  BamoImpl::BamoShellGesturesClientProxyImpl::UpdateTouchEnabled(this, 0LL, a3);
  LOBYTE(v5) = *((_BYTE *)a2 + 33);
  BamoImpl::BamoShellGesturesClientProxyImpl::UpdateTouchpadEnabled(this, 0LL, v5);
  BamoImpl::BamoShellGesturesClientProxyImpl::UpdateTouchpadSupportedGestures(this, 0LL, *((unsigned int *)a2 + 9));
  BamoImpl::BamoShellGesturesClientProxyImpl::UpdateInputSinkData(
    this,
    0LL,
    (struct Microsoft::BamoImpl::BamoProxyImpl *)((char *)a2 + 40));
  BamoImpl::BamoShellGesturesClientProxyImpl::UpdateSuppressionRegions(
    this,
    0,
    *((const struct tagRECT **)a2 + 11),
    *((_DWORD *)a2 + 24));
}
