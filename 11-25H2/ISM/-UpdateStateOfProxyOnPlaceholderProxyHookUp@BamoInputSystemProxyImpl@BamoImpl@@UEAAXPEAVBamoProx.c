/*
 * XREFs of ?UpdateStateOfProxyOnPlaceholderProxyHookUp@BamoInputSystemProxyImpl@BamoImpl@@UEAAXPEAVBamoProxyImpl@2Microsoft@@@Z @ 0x18012A450
 * Callers:
 *     <none>
 * Callees:
 *     ?UpdateActivationWatcher@BamoInputSystemProxyImpl@BamoImpl@@QEAAJ_NI@Z @ 0x1801254F8 (-UpdateActivationWatcher@BamoInputSystemProxyImpl@BamoImpl@@QEAAJ_NI@Z.c)
 *     ?UpdateControllerNavigationManager@BamoInputSystemProxyImpl@BamoImpl@@QEAAJ_NI@Z @ 0x180125D54 (-UpdateControllerNavigationManager@BamoInputSystemProxyImpl@BamoImpl@@QEAAJ_NI@Z.c)
 *     ?UpdateDeviceDockServer@BamoInputSystemProxyImpl@BamoImpl@@QEAAJ_NI@Z @ 0x180125F1C (-UpdateDeviceDockServer@BamoInputSystemProxyImpl@BamoImpl@@QEAAJ_NI@Z.c)
 *     ?UpdateEdgyControllerServer@BamoInputSystemProxyImpl@BamoImpl@@QEAAJ_NI@Z @ 0x18012657C (-UpdateEdgyControllerServer@BamoInputSystemProxyImpl@BamoImpl@@QEAAJ_NI@Z.c)
 *     ?UpdateGestureServices@BamoInputSystemProxyImpl@BamoImpl@@QEAAJ_NI@Z @ 0x180127270 (-UpdateGestureServices@BamoInputSystemProxyImpl@BamoImpl@@QEAAJ_NI@Z.c)
 *     ?UpdateHapticDeviceManager@BamoInputSystemProxyImpl@BamoImpl@@QEAAJ_NI@Z @ 0x180127560 (-UpdateHapticDeviceManager@BamoInputSystemProxyImpl@BamoImpl@@QEAAJ_NI@Z.c)
 *     ?UpdateHeatGripService@BamoInputSystemProxyImpl@BamoImpl@@QEAAJ_NI@Z @ 0x1801278F8 (-UpdateHeatGripService@BamoInputSystemProxyImpl@BamoImpl@@QEAAJ_NI@Z.c)
 *     ?UpdateInputDeliveryServer@BamoInputSystemProxyImpl@BamoImpl@@QEAAJ_NI@Z @ 0x180127F54 (-UpdateInputDeliveryServer@BamoInputSystemProxyImpl@BamoImpl@@QEAAJ_NI@Z.c)
 *     ?UpdateInputObserverManager@BamoInputSystemProxyImpl@BamoImpl@@QEAAJ_NI@Z @ 0x180128120 (-UpdateInputObserverManager@BamoInputSystemProxyImpl@BamoImpl@@QEAAJ_NI@Z.c)
 *     ?UpdateInputSiteManager@BamoInputSystemProxyImpl@BamoImpl@@QEAAJ_NI@Z @ 0x1801284B4 (-UpdateInputSiteManager@BamoInputSystemProxyImpl@BamoImpl@@QEAAJ_NI@Z.c)
 *     ?UpdatePenEventsDispatcher@BamoInputSystemProxyImpl@BamoImpl@@QEAAJ_NI@Z @ 0x18012919C (-UpdatePenEventsDispatcher@BamoInputSystemProxyImpl@BamoImpl@@QEAAJ_NI@Z.c)
 *     ?UpdateResizeContextualProcessor@BamoInputSystemProxyImpl@BamoImpl@@QEAAJ_NI@Z @ 0x180129870 (-UpdateResizeContextualProcessor@BamoInputSystemProxyImpl@BamoImpl@@QEAAJ_NI@Z.c)
 *     ?UpdateShellHandwritingHostServer@BamoInputSystemProxyImpl@BamoImpl@@QEAAJ_NI@Z @ 0x180129DA4 (-UpdateShellHandwritingHostServer@BamoInputSystemProxyImpl@BamoImpl@@QEAAJ_NI@Z.c)
 *     ?UpdateSystemCursorController@BamoInputSystemProxyImpl@BamoImpl@@QEAAJ_NI@Z @ 0x18012AC74 (-UpdateSystemCursorController@BamoInputSystemProxyImpl@BamoImpl@@QEAAJ_NI@Z.c)
 *     ?UpdateTestCommands@BamoInputSystemProxyImpl@BamoImpl@@QEAAJ_NI@Z @ 0x18012AE48 (-UpdateTestCommands@BamoInputSystemProxyImpl@BamoImpl@@QEAAJ_NI@Z.c)
 *     ?UpdateUIAHitTest@BamoInputSystemProxyImpl@BamoImpl@@QEAAJ_NI@Z @ 0x18012B818 (-UpdateUIAHitTest@BamoInputSystemProxyImpl@BamoImpl@@QEAAJ_NI@Z.c)
 */

void __fastcall BamoImpl::BamoInputSystemProxyImpl::UpdateStateOfProxyOnPlaceholderProxyHookUp(
        BamoImpl::BamoInputSystemProxyImpl *this,
        struct Microsoft::BamoImpl::BamoProxyImpl *a2)
{
  __int64 v2; // r8
  __int64 v5; // r8
  __int64 v6; // r8
  __int64 v7; // r8
  __int64 v8; // r8
  __int64 v9; // r8
  __int64 v10; // r8
  __int64 v11; // r8
  __int64 v12; // r8
  __int64 v13; // r8
  __int64 v14; // r8
  __int64 v15; // r8
  __int64 v16; // r8
  __int64 v17; // r8
  __int64 v18; // r8
  __int64 v19; // r8

  v2 = *((_QWORD *)a2 + 4);
  if ( v2 )
    BamoImpl::BamoInputSystemProxyImpl::UpdateActivationWatcher(this, 0LL, *(unsigned int *)(v2 + 40));
  v5 = *((_QWORD *)a2 + 5);
  if ( v5 )
    BamoImpl::BamoInputSystemProxyImpl::UpdateControllerNavigationManager(this, 0LL, *(unsigned int *)(v5 + 40));
  v6 = *((_QWORD *)a2 + 6);
  if ( v6 )
    BamoImpl::BamoInputSystemProxyImpl::UpdateDeviceDockServer(this, 0LL, *(unsigned int *)(v6 + 40));
  v7 = *((_QWORD *)a2 + 7);
  if ( v7 )
    BamoImpl::BamoInputSystemProxyImpl::UpdateEdgyControllerServer(this, 0LL, *(unsigned int *)(v7 + 40));
  v8 = *((_QWORD *)a2 + 8);
  if ( v8 )
    BamoImpl::BamoInputSystemProxyImpl::UpdateGestureServices(this, 0LL, *(unsigned int *)(v8 + 40));
  v9 = *((_QWORD *)a2 + 9);
  if ( v9 )
    BamoImpl::BamoInputSystemProxyImpl::UpdateHeatGripService(this, 0LL, *(unsigned int *)(v9 + 40));
  v10 = *((_QWORD *)a2 + 10);
  if ( v10 )
    BamoImpl::BamoInputSystemProxyImpl::UpdateInputDeliveryServer(this, 0LL, *(unsigned int *)(v10 + 40));
  v11 = *((_QWORD *)a2 + 11);
  if ( v11 )
    BamoImpl::BamoInputSystemProxyImpl::UpdateInputObserverManager(this, 0LL, *(unsigned int *)(v11 + 40));
  v12 = *((_QWORD *)a2 + 12);
  if ( v12 )
    BamoImpl::BamoInputSystemProxyImpl::UpdateInputSiteManager(this, 0LL, *(unsigned int *)(v12 + 40));
  v13 = *((_QWORD *)a2 + 13);
  if ( v13 )
    BamoImpl::BamoInputSystemProxyImpl::UpdateHapticDeviceManager(this, 0LL, *(unsigned int *)(v13 + 40));
  v14 = *((_QWORD *)a2 + 14);
  if ( v14 )
    BamoImpl::BamoInputSystemProxyImpl::UpdatePenEventsDispatcher(this, 0LL, *(unsigned int *)(v14 + 40));
  v15 = *((_QWORD *)a2 + 15);
  if ( v15 )
    BamoImpl::BamoInputSystemProxyImpl::UpdateResizeContextualProcessor(this, 0LL, *(unsigned int *)(v15 + 40));
  v16 = *((_QWORD *)a2 + 16);
  if ( v16 )
    BamoImpl::BamoInputSystemProxyImpl::UpdateShellHandwritingHostServer(this, 0LL, *(unsigned int *)(v16 + 40));
  v17 = *((_QWORD *)a2 + 17);
  if ( v17 )
    BamoImpl::BamoInputSystemProxyImpl::UpdateSystemCursorController(this, 0, *(_DWORD *)(v17 + 40));
  v18 = *((_QWORD *)a2 + 18);
  if ( v18 )
    BamoImpl::BamoInputSystemProxyImpl::UpdateTestCommands(this, 0, *(_DWORD *)(v18 + 40));
  v19 = *((_QWORD *)a2 + 19);
  if ( v19 )
    BamoImpl::BamoInputSystemProxyImpl::UpdateUIAHitTest(this, 0, *(_DWORD *)(v19 + 40));
}
