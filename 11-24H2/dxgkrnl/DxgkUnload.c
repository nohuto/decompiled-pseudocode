/*
 * XREFs of DxgkUnload @ 0x1401CBE90
 * Callers:
 *     <none>
 * Callees:
 *     ?MonitorCleanupGlobal@@YAJXZ @ 0x1400062AC (-MonitorCleanupGlobal@@YAJXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x140020540 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     DxgkEtwShutdown @ 0x140070DBC (DxgkEtwShutdown.c)
 *     ?DxgkDiagShutdown@@YAJXZ @ 0x140070EAC (-DxgkDiagShutdown@@YAJXZ.c)
 *     ?DxgkCleanupTelemetry@@YAXXZ @ 0x1400710F8 (-DxgkCleanupTelemetry@@YAXXZ.c)
 *     _guard_dispatch_icall @ 0x1400A1CA0 (_guard_dispatch_icall.c)
 *     wil_UninitializeFeatureStaging @ 0x1401CC05C (wil_UninitializeFeatureStaging.c)
 *     ?DestroyGlobal@DXGGLOBAL@@SAXXZ @ 0x1401D37FC (-DestroyGlobal@DXGGLOBAL@@SAXXZ.c)
 *     DpiCleanUpGlobalState @ 0x14023B6D8 (DpiCleanUpGlobalState.c)
 *     DxgkCleanupPower @ 0x14023C478 (DxgkCleanupPower.c)
 */

__int64 DxgkUnload()
{
  PsSetCreateProcessNotifyRoutineEx((PCREATE_PROCESS_NOTIFY_ROUTINE_EX)DxgkProcessNotify, 1u);
  WdLogSingleEntry0(2LL);
  WdLogGlobalForLineNumber = 1535;
  DxgkLogInternalTriageEvent(0LL, 0x40000LL, 0xFFFFFFFFLL, L"Dxgkrnl unloaded!", 1535LL, 0LL, 0LL, 0LL, 0LL);
  SMgrUnregisterSessionChangeCallout(DxgkNotifySessionStateChange);
  MonitorCleanupGlobal();
  if ( CCD_BTL::m_pGlobalBtl )
  {
    (*(void (__fastcall **)(struct CCD_BTL *, __int64))(*(_QWORD *)CCD_BTL::m_pGlobalBtl + 8LL))(
      CCD_BTL::m_pGlobalBtl,
      1LL);
    CCD_BTL::m_pGlobalBtl = 0LL;
  }
  DxgkCleanupPower();
  DpiCleanUpGlobalState();
  if ( byte_140160BD1 )
    KeDeregisterBugCheckReasonCallback(&CallbackRecord);
  if ( byte_140160BD0 )
  {
    KeDeregisterBugCheckReasonCallback(P);
    ExFreePoolWithTag(P, 0x4B677844u);
    P = 0LL;
    KtriageDumpDataArray = 0LL;
  }
  DxgkEtwShutdown();
  if ( gScreenStudyEventSubscription )
  {
    ExUnsubscribeWnfStateChange(gScreenStudyEventSubscription);
    gScreenStudyEventSubscription = 0LL;
  }
  DxgkCleanupTelemetry();
  DxgkDiagShutdown();
  if ( g_pDeviceObject )
  {
    IoUnregisterShutdownNotification(g_pDeviceObject);
    IoDeleteDevice(g_pDeviceObject);
    g_pDeviceObject = 0LL;
  }
  DXGGLOBAL::DestroyGlobal();
  PsTlsFree(g_DxgkThreadTlsId);
  g_DxgkThreadTlsId = -1;
  ExDeleteLookasideListEx(&g_DxgkThreadLookasideList);
  DXGQUOTAALLOCATOR<256,1835156294>::operator delete(g_RegistryPath.Buffer);
  g_RegistryPath = 0LL;
  return wil_UninitializeFeatureStaging();
}
