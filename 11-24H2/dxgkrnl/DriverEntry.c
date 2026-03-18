/*
 * XREFs of DriverEntry @ 0x140435078
 * Callers:
 *     GsDriverEntry @ 0x140435010 (GsDriverEntry.c)
 * Callees:
 *     ?MonitorCleanupGlobal@@YAJXZ @ 0x1400062AC (-MonitorCleanupGlobal@@YAJXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x140012444 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140015A70 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x140015D30 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x140020540 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1400224A0 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     McGenEventRegister_EtwRegister @ 0x140064560 (McGenEventRegister_EtwRegister.c)
 *     ?DxgkInitializeTelemetry@@YAXXZ @ 0x14007180C (-DxgkInitializeTelemetry@@YAXXZ.c)
 *     InitializeTelemetryAssertsKMByDriverObject @ 0x1400A117C (InitializeTelemetryAssertsKMByDriverObject.c)
 *     wil_UninitializeFeatureStaging @ 0x1401CC05C (wil_UninitializeFeatureStaging.c)
 *     ?TdrInit@@YAXXZ @ 0x1401CFC24 (-TdrInit@@YAXXZ.c)
 *     ?CreateGlobal@DXGGLOBAL@@SAJXZ @ 0x1401D3328 (-CreateGlobal@DXGGLOBAL@@SAJXZ.c)
 *     ?DestroyGlobal@DXGGLOBAL@@SAXXZ @ 0x1401D37FC (-DestroyGlobal@DXGGLOBAL@@SAXXZ.c)
 *     ?DxgkInitTest@@YAXXZ @ 0x140202614 (-DxgkInitTest@@YAXXZ.c)
 *     DxgkCleanupPower @ 0x14023C478 (DxgkCleanupPower.c)
 *     DxgkInitialPower @ 0x14023C538 (DxgkInitialPower.c)
 *     ?CreateGlobal@CCD_BTL@@SAJXZ @ 0x14026B0A4 (-CreateGlobal@CCD_BTL@@SAJXZ.c)
 *     ?MonitorInitializeGlobal@@YAJXZ @ 0x14026EA80 (-MonitorInitializeGlobal@@YAJXZ.c)
 *     ?SysMmInitializeGlobal@@YAXXZ @ 0x1402873BC (-SysMmInitializeGlobal@@YAXXZ.c)
 *     ?DxgDbgInit@@YAXXZ @ 0x1403F3A04 (-DxgDbgInit@@YAXXZ.c)
 *     WdmlibIoCreateDeviceSecure @ 0x140406EC8 (WdmlibIoCreateDeviceSecure.c)
 *     wil_InitializeFeatureStaging @ 0x140435814 (wil_InitializeFeatureStaging.c)
 *     DpiInitializeGlobalState @ 0x1404359E8 (DpiInitializeGlobalState.c)
 */

NTSTATUS __stdcall DriverEntry(_DRIVER_OBJECT *DriverObject, PUNICODE_STRING RegistryPath)
{
  unsigned __int64 MaximumLength; // rcx
  __int64 v5; // rdi
  int v6; // eax
  const wchar_t *v7; // r9
  NTSTATUS v8; // eax
  int ProcessNotifyRoutineEx2; // eax
  __int64 v10; // rbx
  unsigned __int8 v11; // al
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  int v17; // eax
  __int64 v18; // rdx
  __int64 v19; // rbx
  __int64 v20; // rcx
  __int64 v21; // r8
  NTSTATUS v22; // eax
  int v23; // eax
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  int v28; // eax
  int v29; // eax
  NTSTATUS v30; // eax
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // rcx
  __int64 v34; // r8
  BOOLEAN Size; // [rsp+28h] [rbp-D8h]
  int v36; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v37; // [rsp+58h] [rbp-A8h]
  char v38; // [rsp+60h] [rbp-A0h]
  _QWORD v39[2]; // [rsp+68h] [rbp-98h] BYREF
  UNICODE_STRING DefaultSDDLString; // [rsp+78h] [rbp-88h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+88h] [rbp-78h] BYREF
  __int64 v42; // [rsp+A0h] [rbp-60h] BYREF
  int v43; // [rsp+A8h] [rbp-58h]
  const wchar_t *v44; // [rsp+B0h] [rbp-50h]
  unsigned __int8 *v45; // [rsp+B8h] [rbp-48h]
  int v46; // [rsp+C0h] [rbp-40h]
  unsigned __int8 *v47; // [rsp+C8h] [rbp-38h]
  int v48; // [rsp+D0h] [rbp-30h]
  __int64 v49; // [rsp+D8h] [rbp-28h]
  int v50; // [rsp+E0h] [rbp-20h]
  __int64 v51; // [rsp+E8h] [rbp-18h]
  __int128 v52; // [rsp+F0h] [rbp-10h]
  __int128 v53; // [rsp+100h] [rbp+0h]
  __int64 SystemInformation; // [rsp+130h] [rbp+30h] BYREF

  wil_InitializeFeatureStaging();
  MaximumLength = RegistryPath->MaximumLength;
  g_pDriverObject = (PDEVICE_OBJECT)DriverObject;
  g_RegistryPath.Buffer = (wchar_t *)operator new[](MaximumLength, 0x4B677844u, 256LL);
  if ( !g_RegistryPath.Buffer )
  {
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 303;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"Failed to allocate registry path buffer.",
      303LL,
      0LL,
      0LL,
      0LL,
      0LL);
    LODWORD(v5) = -1073741801;
LABEL_16:
    wil_UninitializeFeatureStaging();
    return v5;
  }
  g_RegistryPath.MaximumLength = RegistryPath->MaximumLength;
  RtlCopyUnicodeString(&g_RegistryPath, RegistryPath);
  v6 = PsTlsAlloc(DxgkThreadPsTslCallback, 0LL, &g_DxgkThreadTlsId);
  v5 = v6;
  if ( v6 < 0 )
  {
    WdLogSingleEntry1(2LL, v6);
    v7 = L"Failed to allocate a PsTls slot for DxgkThread, returning 0x%I64x.";
    WdLogGlobalForLineNumber = 317;
LABEL_5:
    DxgkLogInternalTriageEvent(0LL, 0x40000LL, 0xFFFFFFFFLL, v7, v5, 0LL, 0LL, 0LL, 0LL);
    goto LABEL_16;
  }
  v8 = ExInitializeLookasideListEx(&g_DxgkThreadLookasideList, 0LL, 0LL, (POOL_TYPE)512, 0, 0x40uLL, 0x54677844u, 0);
  v5 = v8;
  if ( v8 < 0 )
  {
    PsTlsFree(g_DxgkThreadTlsId);
    WdLogSingleEntry1(2LL, v5);
    v7 = L"Failed to initialize the lookaside list for DXGTHREAD, returning 0x%I64x";
    WdLogGlobalForLineNumber = 333;
    goto LABEL_5;
  }
  ProcessNotifyRoutineEx2 = PsSetCreateProcessNotifyRoutineEx2(0LL, DxgkProcessNotify, 0LL);
  if ( ProcessNotifyRoutineEx2 < 0 )
  {
    v10 = ProcessNotifyRoutineEx2;
    WdLogSingleEntry1(2LL, ProcessNotifyRoutineEx2);
    WdLogGlobalForLineNumber = 345;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"PsSetCreateProcessNotifyRoutineEx failed 0x%I64x",
      v10,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  SystemInformation = 8LL;
  if ( ZwQuerySystemInformation(MaxSystemInfoClass|SystemProcessInformation, &SystemInformation, 8u, 0LL) < 0
    || (v11 = 1, (SystemInformation & 0x200000000LL) == 0) )
  {
    v11 = 0;
  }
  g_OSTestSigningEnabled = v11;
  v42 = 0LL;
  v43 = 288;
  v46 = 67108868;
  v44 = L"IsInternalRelease";
  v48 = 4;
  v45 = &g_IsInternalRelease;
  v47 = &g_IsInternalRelease;
  v49 = 0LL;
  v50 = 0;
  v51 = 0LL;
  v52 = 0LL;
  v53 = 0LL;
  RtlQueryRegistryValuesEx(2LL, L"GraphicsDrivers", &v42, 0LL, 0LL);
  g_IsInternalRelease = g_IsInternalRelease != 0;
  g_IsInternalReleaseOrDbg = g_IsInternalRelease;
  g_bSkuSupportMultipleUsers = (RtlGetSuiteMask() & 0x110) == 16;
  InitializeTelemetryAssertsKMByDriverObject((__int64)DriverObject);
  WdInitialize();
  LODWORD(v5) = DXGGLOBAL::CreateGlobal(v13, v12, v14, v15);
  if ( (int)v5 < 0 )
    goto LABEL_16;
  LODWORD(v5) = DpiInitializeGlobalState();
  if ( (int)v5 < 0 )
    goto LABEL_16;
  LODWORD(v5) = CCD_BTL::CreateGlobal();
  if ( (int)v5 < 0 )
    goto LABEL_16;
  DxgkInitializeTelemetry();
  Size = 0;
  v17 = ExSubscribeWnfStateChange(&gScreenStudyEventSubscription, &WNF_SRUM_SCREENONSTUDY_SESSION, 1LL);
  if ( v17 < 0 )
  {
    v19 = v17;
    WdLogSingleEntry1(2LL, v17);
    WdLogGlobalForLineNumber = 453;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"ExSubscribeWnfStateChange failed, returing 0x%I64x",
      v19,
      0LL,
      0LL,
      0LL,
      0LL);
    gScreenStudyEventSubscription = 0LL;
  }
  bTracingEnabled = 0;
  McGenEventRegister_EtwRegister(&DxgkControlGuid, v18, &DxgkControlGuid_Context, (ULONGLONG *)&DxgkControlGuid_Context);
  v36 = -1;
  v37 = 0LL;
  if ( (qword_14015E4B0 & 2) != 0 )
  {
    v38 = 1;
    v36 = 0;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v20, (__int64)&EventProfilerEnter, v21, 0);
  }
  else
  {
    v38 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v36, 0);
  v39[0] = &DxgkControlGuid;
  v39[1] = &Dxgk_WDI_NotifyUser;
  WdDiagInit(v39);
  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, L"\\Device\\DxgKrnl");
  DriverObject->MajorFunction[0] = (PDRIVER_DISPATCH)DxgkCreateClose;
  DriverObject->MajorFunction[2] = (PDRIVER_DISPATCH)DxgkCreateClose;
  DriverObject->MajorFunction[14] = (PDRIVER_DISPATCH)DxgkDeviceIoctl;
  DriverObject->MajorFunction[15] = (PDRIVER_DISPATCH)DxgkInternalDeviceIoctl;
  DriverObject->MajorFunction[16] = (PDRIVER_DISPATCH)DxgkShutdown;
  DriverObject->DriverUnload = (PDRIVER_UNLOAD)DxgkUnload;
  DefaultSDDLString = 0LL;
  RtlInitUnicodeString(&DefaultSDDLString, L"D:P(A;;GRGW;;;S-1-5-83-0)");
  v22 = WdmlibIoCreateDeviceSecure(
          DriverObject,
          0,
          &DestinationString,
          0x22u,
          0x100u,
          Size,
          &DefaultSDDLString,
          &GUID_SD_DXGKRNL_DRIVER_OBJECT,
          &g_pDeviceObject);
  LODWORD(v5) = v22;
  if ( v22 < 0 )
  {
    WdLogSingleEntry1(3LL, v22);
    WdLogGlobalForLineNumber = 506;
LABEL_34:
    DxgkCleanupPower();
    MonitorCleanupGlobal();
    if ( g_pDeviceObject )
    {
      IoDeleteDevice(g_pDeviceObject);
      g_pDeviceObject = 0LL;
    }
    if ( g_RegistryPath.Buffer )
    {
      DXGQUOTAALLOCATOR<256,1835156294>::operator delete(g_RegistryPath.Buffer);
      g_RegistryPath = 0LL;
    }
    DXGGLOBAL::DestroyGlobal();
    PsTlsFree(g_DxgkThreadTlsId);
    ExDeleteLookasideListEx(&g_DxgkThreadLookasideList);
    wil_UninitializeFeatureStaging();
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v36);
    if ( v38 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v31, (__int64)&EventProfilerExit, v32, v36);
    }
    return v5;
  }
  v23 = DxgkInitialPower();
  LODWORD(v5) = v23;
  if ( v23 < 0 )
  {
    WdLogSingleEntry1(3LL, v23);
    WdLogGlobalForLineNumber = 519;
    goto LABEL_34;
  }
  v28 = MonitorInitializeGlobal(v25, v24, v26, v27);
  LODWORD(v5) = v28;
  if ( v28 < 0 )
  {
    WdLogSingleEntry1(3LL, v28);
    WdLogGlobalForLineNumber = 532;
    goto LABEL_34;
  }
  SysMmInitializeGlobal();
  DxgkInitTest();
  DxgDbgInit();
  TdrInit();
  v29 = SMgrRegisterSessionChangeCallout(DxgkNotifySessionStateChange);
  v5 = v29;
  if ( v29 < 0 )
  {
    WdLogSingleEntry1(2LL, v29);
    WdLogGlobalForLineNumber = 565;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"Could not register session change callout with session manager, returning 0x%I64x.",
      v5,
      0LL,
      0LL,
      0LL,
      0LL);
    goto LABEL_34;
  }
  v30 = IoRegisterShutdownNotification(g_pDeviceObject);
  v5 = v30;
  if ( v30 < 0 )
  {
    WdLogSingleEntry1(2LL, v30);
    WdLogGlobalForLineNumber = 575;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"Could not register for shutdown notification, returning 0x%I64x.",
      v5,
      0LL,
      0LL,
      0LL,
      0LL);
    SMgrUnregisterSessionChangeCallout(DxgkNotifySessionStateChange);
    goto LABEL_34;
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v36);
  if ( v38 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v33, (__int64)&EventProfilerExit, v34, v36);
  return 0;
}
