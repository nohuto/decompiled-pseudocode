/*
 * XREFs of ?Win32KDriverUnload@@YAXPEAU_DRIVER_OBJECT@@@Z @ 0x1C0134430
 * Callers:
 *     Win32kBaseDriverEntry @ 0x1C02DEBC0 (Win32kBaseDriverEntry.c)
 * Callees:
 *     ??1CTempW32ThreadNonPaged@@QEAA@XZ @ 0x1C0037ECC (--1CTempW32ThreadNonPaged@@QEAA@XZ.c)
 *     Win32FreePool @ 0x1C0038570 (Win32FreePool.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0050ECC (WPP_RECORDER_AND_TRACE_SF_.c)
 *     DCompositionSessionUninitialize @ 0x1C0083D38 (DCompositionSessionUninitialize.c)
 *     ??0CTempW32ThreadNonPaged@@QEAA@XZ @ 0x1C008BA00 (--0CTempW32ThreadNonPaged@@QEAA@XZ.c)
 *     ?FreePagedLookasideList@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C008C41C (-FreePagedLookasideList@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     ?Destroy@?$TypeIsolationFactory@V?$CTypeIsolation@$0JAAA@$0JA@@NSInstrumentation@@V?$CTypeIsolation@$0KAAA@$0KA@@2@V?$CTypeIsolation@$0BFAAA@$0BFA@@2@V?$CTypeIsolation@$0BEAAA@$0KA@@2@V?$CTypeIsolation@$0GAAA@$0GA@@2@V?$CTypeIsolation@$0HAAA@$0HA@@2@@@SAXPEAPEAE@Z @ 0x1C0091404 (-Destroy@-$TypeIsolationFactory@V-$CTypeIsolation@$0JAAA@$0JA@@NSInstrumentation@@V-$CTypeIsolat.c)
 *     UnloadWin32kCall @ 0x1C00A5E04 (UnloadWin32kCall.c)
 *     MultiUserNtGreCleanup @ 0x1C00A8AE8 (MultiUserNtGreCleanup.c)
 *     ?IsSessionGlobalsAreaAllocated@Base@Gre@@YA_NXZ @ 0x1C00A95E0 (-IsSessionGlobalsAreaAllocated@Base@Gre@@YA_NXZ.c)
 *     ??1COPM@@QEAA@XZ @ 0x1C00A96BC (--1COPM@@QEAA@XZ.c)
 *     ?OPMFreeMemory@OPM@@YAXPEAX@Z @ 0x1C00A9840 (-OPMFreeMemory@OPM@@YAXPEAX@Z.c)
 *     UninitializeTelemetryAssertsKM @ 0x1C00ADE88 (UninitializeTelemetryAssertsKM.c)
 *     ?Win32kNtUserCleanup@@YAHXZ @ 0x1C00B1AE4 (-Win32kNtUserCleanup@@YAHXZ.c)
 *     InputUnInitialize @ 0x1C00B72FC (InputUnInitialize.c)
 *     ?CleanupDomainLocks@@YAXXZ @ 0x1C00BC1F4 (-CleanupDomainLocks@@YAXXZ.c)
 *     CoreMsgUninitialize @ 0x1C00C115C (CoreMsgUninitialize.c)
 *     ?FreeWin32KSyscallFilter@@YAXXZ @ 0x1C00C14E8 (-FreeWin32KSyscallFilter@@YAXXZ.c)
 *     RIMUnInitialize @ 0x1C00C1D30 (RIMUnInitialize.c)
 *     ?UninitializeBaseWppLog@@YAXXZ @ 0x1C00C2990 (-UninitializeBaseWppLog@@YAXXZ.c)
 *     ??_GCAsyncKeyEventMonitor@@QEAAPEAXI@Z @ 0x1C00C4400 (--_GCAsyncKeyEventMonitor@@QEAAPEAXI@Z.c)
 *     IsUserkTraceLoggingSupported @ 0x1C00C49BC (IsUserkTraceLoggingSupported.c)
 *     IsTelemetryAssertsSupported @ 0x1C00C49E8 (IsTelemetryAssertsSupported.c)
 *     ?UnInitialize@EnterLeaveCritMitRitHandOffHazard@@SAXXZ @ 0x1C00C5304 (-UnInitialize@EnterLeaveCritMitRitHandOffHazard@@SAXXZ.c)
 *     McGenEventUnregister_EtwUnregister @ 0x1C00C53A4 (McGenEventUnregister_EtwUnregister.c)
 *     ?GetOutstandingPoolTags@CLeakTrackingAllocator@NSInstrumentation@@QEBA_KPEAI_KPEA_K@Z @ 0x1C00C581C (-GetOutstandingPoolTags@CLeakTrackingAllocator@NSInstrumentation@@QEBA_KPEAI_KPEA_K@Z.c)
 *     ?Destroy@CLeakTrackingAllocator@NSInstrumentation@@SAXPEAV12@@Z @ 0x1C00C5850 (-Destroy@CLeakTrackingAllocator@NSInstrumentation@@SAXPEAV12@@Z.c)
 *     __security_check_cookie @ 0x1C00CDBD0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D6930 (_guard_dispatch_icall_nop.c)
 *     FreeIndex @ 0x1C0131DA4 (FreeIndex.c)
 *     ?PoolLeakCaptureLiveDump@@YAX_KPEAK0@Z @ 0x1C014FD38 (-PoolLeakCaptureLiveDump@@YAX_KPEAK0@Z.c)
 *     ?Enumerate@?$CSortedVector@PEAXPEAX@NSInstrumentation@@QEAAXP6AXPEAX00@Z0@Z @ 0x1C016E358 (-Enumerate@-$CSortedVector@PEAXPEAX@NSInstrumentation@@QEAAXP6AXPEAX00@Z0@Z.c)
 *     ?Enumerate@CPointerHashTable@NSInstrumentation@@QEAAXP6AXPEAX00@Z0@Z @ 0x1C016F0FC (-Enumerate@CPointerHashTable@NSInstrumentation@@QEAAXP6AXPEAX00@Z0@Z.c)
 *     TlgUnregisterAggregateProvider @ 0x1C02BF740 (TlgUnregisterAggregateProvider.c)
 *     WppCleanupKm @ 0x1C02BFC08 (WppCleanupKm.c)
 */

void __fastcall Win32KDriverUnload(struct _DRIVER_OBJECT *a1)
{
  __int64 v1; // rdx
  __int64 v2; // r8
  PDEVICE_OBJECT v3; // rcx
  Gre::Base *v4; // rcx
  Gre::Base *v5; // rcx
  __int64 v6; // rdi
  OPM *v7; // rbx
  void *v8; // rdx
  char *v9; // rcx
  char *v10; // rbx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  void (*i)(void); // rdi
  unsigned int v15; // ebx
  NSInstrumentation::CLeakTrackingAllocator *v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  void *v19; // rdx
  PVOID v20; // rcx
  REGHANDLE v21; // rcx
  REGHANDLE v22; // rcx
  REGHANDLE v23; // rcx
  REGHANDLE v24; // rcx
  REGHANDLE v25; // rcx
  NSInstrumentation::CLeakTrackingAllocator *v26; // rcx
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // r9
  __int64 v31; // rdx
  CAsyncKeyEventMonitor *v32; // rcx
  __int64 v33; // r8
  __int64 v34; // r9
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // r8
  __int64 v38; // r9
  __int64 v39; // rdx
  __int64 v40; // r8
  __int64 v41; // r9
  PVOID v42; // rcx
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // r8
  __int64 v46; // r9
  __int64 v47; // rdx
  __int64 v48; // r8
  __int64 v49; // r9
  NSInstrumentation::CLeakTrackingAllocator *v50; // rcx
  unsigned __int64 OutstandingPoolTags; // rax
  unsigned __int64 v52; // rbx
  unsigned int *Pool2; // rax
  unsigned int *v54; // rdi
  NSInstrumentation::CLeakTrackingAllocator *v55; // rbx
  NSInstrumentation::CPointerHashTable *v56; // rcx
  __int64 v57; // rcx
  __int64 v58; // rdx
  __int64 v59; // rcx
  __int64 v60; // r8
  __int64 v61; // r9
  PVOID v62; // rbx
  unsigned __int64 v63; // [rsp+40h] [rbp-F8h] BYREF
  _BYTE v64[208]; // [rsp+50h] [rbp-E8h] BYREF

  CTempW32ThreadNonPaged::CTempW32ThreadNonPaged((CTempW32ThreadNonPaged *)v64);
  v3 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x2000) == 0
    || (LOBYTE(v1) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
  {
    LOBYTE(v1) = 0;
  }
  LOBYTE(v2) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( (_BYTE)v1 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      v1,
      v2,
      WPP_MAIN_CB.Queue.ListEntry.Flink,
      4,
      14,
      15,
      (__int64)&WPP_ac18f6c865c032c1f7ac00466daa9397_Traceguids);
  if ( qword_1C02961A0 && (int)qword_1C02961A0(v3, v1, v2) >= 0 && qword_1C02961A8 )
    qword_1C02961A8();
  if ( qword_1C02950F8 && (int)qword_1C02950F8(v3, v1, v2) >= 0 && qword_1C0295100 )
    qword_1C0295100();
  DCompositionSessionUninitialize((__int64)v3, v1);
  if ( qword_1C0295118 && (int)qword_1C0295118() >= 0 && qword_1C0295120 )
    qword_1C0295120();
  if ( Gre::Base::IsSessionGlobalsAreaAllocated(v4) )
  {
    v6 = *(_QWORD *)(SGDGetSessionState(v5) + 24);
    v7 = *(OPM **)(v6 + 3824);
    if ( v7 )
    {
      COPM::~COPM(*(COPM **)(v6 + 3824));
      OPM::OPMFreeMemory(v7, v8);
    }
    *(_QWORD *)(v6 + 3824) = 0LL;
  }
  gdwHydraHint |= 0x80u;
  MultiUserNtGreCleanup(v5);
  gdwHydraHint |= 0x100u;
  if ( gpepCSRSS )
  {
    ObfDereferenceObject(gpepCSRSS);
    gpepCSRSS = 0LL;
  }
  if ( gpDispInfo )
  {
    v9 = (char *)*((_QWORD *)gpDispInfo + 3);
    if ( v9 )
    {
      do
      {
        v10 = *(char **)v9;
        Win32FreePool(v9);
        v9 = v10;
      }
      while ( v10 );
      *((_QWORD *)gpDispInfo + 3) = 0LL;
    }
  }
  InputUnInitialize();
  Win32kNtUserCleanup(v12, v11, v13);
  if ( qword_1C028FE68 )
  {
    gbInDestroyHandleTableObjects = 1;
    for ( i = (void (*)(void))DestroyHandleFirstPass; ; i = (void (*)(void))DestroyHandleSecondPass )
    {
      v15 = 0;
      do
      {
        if ( *((_BYTE *)qword_1C028FE68 + 32 * v15 + 24) )
          i();
        ++v15;
      }
      while ( v15 <= giheLast );
      if ( (char *)i != (char *)DestroyHandleFirstPass )
        break;
    }
    gbInDestroyHandleTableObjects = 0;
  }
  if ( qword_1C0295750 && (int)qword_1C0295750() >= 0 && qword_1C0295758 )
    qword_1C0295758();
  CleanupDomainLocks();
  EnterLeaveCritMitRitHandOffHazard::UnInitialize();
  v19 = gpStackRefLookAside;
  gdwHydraHint |= 0x200u;
  if ( gpStackRefLookAside )
    NSInstrumentation::CLeakTrackingAllocator::FreePagedLookasideList(v16, (char *)gpStackRefLookAside);
  if ( WPP_MAIN_CB.Dpc.ProcessorHistory )
  {
    TypeIsolationFactory<NSInstrumentation::CTypeIsolation<36864,144>,NSInstrumentation::CTypeIsolation<40960,160>,NSInstrumentation::CTypeIsolation<86016,336>,NSInstrumentation::CTypeIsolation<81920,160>,NSInstrumentation::CTypeIsolation<24576,96>,NSInstrumentation::CTypeIsolation<28672,112>>::Destroy();
    ExFreePoolWithTag((PVOID)WPP_MAIN_CB.Dpc.ProcessorHistory, 0);
    WPP_MAIN_CB.Dpc.ProcessorHistory = 0LL;
  }
  if ( CsrApiPort )
  {
    ObfDereferenceObject(CsrApiPort);
    CsrApiPort = 0LL;
  }
  if ( ghSectionShared )
  {
    gpsi = 0LL;
    if ( gpvSharedBase )
    {
      RtlDestroyHeap(gpvSharedAlloc);
      MmUnmapViewInSessionSpace(gpvSharedBase);
    }
    ObfDereferenceObject(ghSectionShared);
  }
  if ( gpDispInfo )
    Win32FreePool((char *)gpDispInfo);
  v20 = gpkdiStatic;
  if ( gpkdiStatic )
    Win32FreePool((char *)gpkdiStatic);
  if ( ghSectionKernelHandleTable )
  {
    if ( gpKernelHandleTable )
      MmUnmapViewInSessionSpace(gpKernelHandleTable);
    ObfDereferenceObject(ghSectionKernelHandleTable);
  }
  if ( qword_1C0295128 && (int)qword_1C0295128() >= 0 && qword_1C0295130 )
    qword_1C0295130(&gMagnContext);
  if ( gbTraceLoggingInitialized )
  {
    if ( (int)IsUserkTraceLoggingSupported() >= 0 && qword_1C02961C0 )
      qword_1C02961C0();
    v21 = qword_1C02883F8;
    qword_1C02883F8 = 0LL;
    dword_1C02883D8 = 0;
    EtwUnregister(v21);
    v22 = qword_1C02883C0;
    qword_1C02883C0 = 0LL;
    dword_1C02883A0 = 0;
    EtwUnregister(v22);
    v23 = qword_1C0288350;
    qword_1C0288350 = 0LL;
    dword_1C0288330 = 0;
    EtwUnregister(v23);
    v24 = qword_1C0288318;
    qword_1C0288318 = 0LL;
    dword_1C02882F8 = 0;
    EtwUnregister(v24);
    v25 = qword_1C0289830;
    qword_1C0289830 = 0LL;
    dword_1C0289810 = 0;
    EtwUnregister(v25);
    if ( WPP_MAIN_CB.Dpc.SystemArgument2 )
    {
      NSInstrumentation::CLeakTrackingAllocator::FreePagedLookasideList(v26, (char *)WPP_MAIN_CB.Dpc.SystemArgument2);
      WPP_MAIN_CB.Dpc.SystemArgument2 = 0LL;
    }
    TlgUnregisterAggregateProvider(&dword_1C0288368);
    TlgUnregisterAggregateProvider(&dword_1C0283098);
  }
  if ( *(_QWORD *)(SGDGetUserSessionState(v20, v19, v17, v18) + 14152) )
  {
    v32 = *(CAsyncKeyEventMonitor **)(SGDGetUserSessionState(v28, v27, v29, v30) + 14152);
    if ( v32 )
      CAsyncKeyEventMonitor::`scalar deleting destructor'(v32);
    *(_QWORD *)(SGDGetUserSessionState(v32, v31, v33, v34) + 14152) = 0LL;
  }
  McGenEventUnregister_EtwUnregister();
  if ( qword_1C0295138 && (int)qword_1C0295138() >= 0 && qword_1C0295140 )
    qword_1C0295140();
  CoreMsgUninitialize();
  RIMUnInitialize(v36, v35, v37, v38);
  v42 = gpW32FastMutex;
  if ( gpW32FastMutex )
  {
    ExFreePoolWithTag(gpW32FastMutex, 0);
    gpW32FastMutex = 0LL;
  }
  if ( !*(_DWORD *)SGDGetUserSessionState(v42, v39, v40, v41) )
    KeRemoveSystemServiceTable(1LL);
  if ( !*(_DWORD *)SGDGetUserSessionState(v44, v43, v45, v46) )
    KeRemoveSystemServiceTable(2LL);
  if ( gpCountTable )
  {
    ExFreePoolWithTag(gpCountTable, 0);
    gpCountTable = 0LL;
  }
  FreeWin32KSyscallFilter();
  v50 = gpLeakTrackingAllocator;
  if ( gpLeakTrackingAllocator )
  {
    v63 = 0LL;
    OutstandingPoolTags = NSInstrumentation::CLeakTrackingAllocator::GetOutstandingPoolTags(
                            gpLeakTrackingAllocator,
                            0LL,
                            0LL,
                            0LL);
    v52 = OutstandingPoolTags;
    if ( OutstandingPoolTags )
    {
      Pool2 = (unsigned int *)ExAllocatePool2(64LL, 4 * OutstandingPoolTags, 1953264469LL);
      v54 = Pool2;
      if ( Pool2 )
      {
        NSInstrumentation::CLeakTrackingAllocator::GetOutstandingPoolTags(gpLeakTrackingAllocator, Pool2, v52, &v63);
        PoolLeakCaptureLiveDump(v63, v54, v52);
        ExFreePoolWithTag(v54, 0);
      }
    }
    v55 = gpLeakTrackingAllocator;
    v56 = (NSInstrumentation::CPointerHashTable *)*((_QWORD *)gpLeakTrackingAllocator + 11);
    if ( v56 )
      NSInstrumentation::CPointerHashTable::Enumerate(
        v56,
        (void (*)(void *, void *, void *))NSInstrumentation::CLeakTrackingAllocator::CleanupCallback,
        gpLeakTrackingAllocator);
    v57 = *((_QWORD *)v55 + 12);
    if ( v57 )
      NSInstrumentation::CSortedVector<void *,void *>::Enumerate(
        v57,
        NSInstrumentation::CLeakTrackingAllocator::CleanupCallback,
        v55);
    NSInstrumentation::CLeakTrackingAllocator::Destroy(gpLeakTrackingAllocator);
    gpLeakTrackingAllocator = 0LL;
  }
  v59 = *(unsigned int *)SGDGetUserSessionState(v50, v47, v48, v49);
  if ( (_DWORD)v59 == gServiceSessionId && !gServiceSessionId )
    FreeIndex(v59, v58, v60, v61);
  if ( gpxsGlobals )
  {
    MmUnmapViewInSessionSpace(gpxsGlobals);
    gpxsGlobals = 0LL;
  }
  if ( gxsSection )
  {
    ObfDereferenceObject(gxsSection);
    gxsSection = 0LL;
  }
  if ( gxsSectionHandle )
  {
    ZwClose(gxsSectionHandle);
    gxsSectionHandle = 0LL;
  }
  UninitializeTelemetryAssertsKM();
  v62 = gpWin32kDriverObject;
  if ( gpWin32kDriverObject )
  {
    UninitializeBaseWppLog();
    if ( qword_1C0296D68 )
      qword_1C0296D68(v62);
    WppCleanupKm(v62);
  }
  if ( (int)IsTelemetryAssertsSupported() >= 0 && qword_1C02961D8 )
    qword_1C02961D8();
  UnloadWin32kCall();
  if ( g_wil_details_featureChangeNotification )
  {
    RtlUnregisterFeatureConfigurationChangeNotification();
    g_wil_details_featureChangeNotification = 0LL;
  }
  g_wil_details_isFeatureStagingInitialized = 0;
  CTempW32ThreadNonPaged::~CTempW32ThreadNonPaged((CTempW32ThreadNonPaged *)v64);
}
