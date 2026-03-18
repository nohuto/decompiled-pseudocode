/*
 * XREFs of DxgkUnload @ 0x1401C6C00
 * Callers:
 *     <none>
 * Callees:
 *     ?MonitorCleanupGlobal@@YAJXZ @ 0x1400062AC (-MonitorCleanupGlobal@@YAJXZ.c)
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x1400110B0 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     DxgkEtwShutdown @ 0x14007043C (DxgkEtwShutdown.c)
 *     ?DxgkDiagShutdown@@YAJXZ @ 0x14007052C (-DxgkDiagShutdown@@YAJXZ.c)
 *     ?DxgkCleanupTelemetry@@YAXXZ @ 0x140070778 (-DxgkCleanupTelemetry@@YAXXZ.c)
 *     _guard_dispatch_icall @ 0x14009F940 (_guard_dispatch_icall.c)
 *     wil_UninitializeFeatureStaging @ 0x1401C6DCC (wil_UninitializeFeatureStaging.c)
 *     ?DestroyGlobal@DXGGLOBAL@@SAXXZ @ 0x1401CE4AC (-DestroyGlobal@DXGGLOBAL@@SAXXZ.c)
 *     DpiCleanUpGlobalState @ 0x140234CF8 (DpiCleanUpGlobalState.c)
 *     DxgkCleanupPower @ 0x140235A98 (DxgkCleanupPower.c)
 */

__int64 DxgkUnload()
{
  PsSetCreateProcessNotifyRoutineEx((PCREATE_PROCESS_NOTIFY_ROUTINE_EX)DxgkProcessNotify, 1u);
  WdLogSingleEntry0(2LL);
  WdLogGlobalForLineNumber = 1552;
  DxgkLogInternalTriageEvent(0LL, 0x40000, 0xFFFFFFFFLL, L"Dxgkrnl unloaded!", 1552LL, 0LL, 0LL, 0LL, 0LL);
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
  if ( byte_14015DBED )
    KeDeregisterBugCheckReasonCallback(&CallbackRecord);
  if ( byte_14015DBEC )
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
