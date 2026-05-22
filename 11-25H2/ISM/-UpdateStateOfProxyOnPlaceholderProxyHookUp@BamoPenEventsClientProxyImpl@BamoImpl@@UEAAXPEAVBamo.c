/*
 * XREFs of ?UpdateStateOfProxyOnPlaceholderProxyHookUp@BamoPenEventsClientProxyImpl@BamoImpl@@UEAAXPEAVBamoProxyImpl@2Microsoft@@@Z @ 0x180191190
 * Callers:
 *     <none>
 * Callees:
 *     ?UpdateTailButtonLongPressedEventsRequired@BamoPenEventsClientProxyImpl@BamoImpl@@QEAAJ_N0@Z @ 0x18007A914 (-UpdateTailButtonLongPressedEventsRequired@BamoPenEventsClientProxyImpl@BamoImpl@@QEAAJ_N0@Z.c)
 *     ?UpdateTailButtonDoubleClickedEventsRequired@BamoPenEventsClientProxyImpl@BamoImpl@@QEAAJ_N0@Z @ 0x18007E208 (-UpdateTailButtonDoubleClickedEventsRequired@BamoPenEventsClientProxyImpl@BamoImpl@@QEAAJ_N0@Z.c)
 *     ?UpdateDockedEventsRequired@BamoPenEventsClientProxyImpl@BamoImpl@@QEAAJ_N0@Z @ 0x1800982F8 (-UpdateDockedEventsRequired@BamoPenEventsClientProxyImpl@BamoImpl@@QEAAJ_N0@Z.c)
 *     ?UpdateIsShell@BamoPenEventsClientProxyImpl@BamoImpl@@QEAAJ_N0@Z @ 0x180191064 (-UpdateIsShell@BamoPenEventsClientProxyImpl@BamoImpl@@QEAAJ_N0@Z.c)
 *     ?UpdateTailButtonClickedEventsRequired@BamoPenEventsClientProxyImpl@BamoImpl@@QEAAJ_N0@Z @ 0x180191210 (-UpdateTailButtonClickedEventsRequired@BamoPenEventsClientProxyImpl@BamoImpl@@QEAAJ_N0@Z.c)
 *     ?UpdateUndockedEventsRequired@BamoPenEventsClientProxyImpl@BamoImpl@@QEAAJ_N0@Z @ 0x180191330 (-UpdateUndockedEventsRequired@BamoPenEventsClientProxyImpl@BamoImpl@@QEAAJ_N0@Z.c)
 */

void __fastcall BamoImpl::BamoPenEventsClientProxyImpl::UpdateStateOfProxyOnPlaceholderProxyHookUp(
        BamoImpl::BamoPenEventsClientProxyImpl *this,
        struct Microsoft::BamoImpl::BamoProxyImpl *a2)
{
  __int64 v4; // r8
  __int64 v5; // r8
  __int64 v6; // r8
  __int64 v7; // r8
  __int64 v8; // r8

  BamoImpl::BamoPenEventsClientProxyImpl::UpdateTailButtonClickedEventsRequired(this, 0, *((_BYTE *)a2 + 32));
  LOBYTE(v4) = *((_BYTE *)a2 + 33);
  BamoImpl::BamoPenEventsClientProxyImpl::UpdateTailButtonDoubleClickedEventsRequired(this, 0LL, v4);
  LOBYTE(v5) = *((_BYTE *)a2 + 34);
  BamoImpl::BamoPenEventsClientProxyImpl::UpdateTailButtonLongPressedEventsRequired(this, 0LL, v5);
  LOBYTE(v6) = *((_BYTE *)a2 + 35);
  BamoImpl::BamoPenEventsClientProxyImpl::UpdateDockedEventsRequired(this, 0LL, v6);
  BamoImpl::BamoPenEventsClientProxyImpl::UpdateUndockedEventsRequired(this, 0, *((_BYTE *)a2 + 36));
  LOBYTE(v7) = *((_BYTE *)a2 + 37);
  BamoImpl::BamoPenEventsClientProxyImpl::UpdateIsShell(this, 0LL, v7);
  LOBYTE(v8) = *((_BYTE *)a2 + 38);
  BamoImpl::BamoPenEventsClientProxyImpl::UpdateTipToGlassEventsRequired(this, 0LL, v8);
}
