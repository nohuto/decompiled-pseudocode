/*
 * XREFs of DriverEntry @ 0x140433078
 * Callers:
 *     GsDriverEntry @ 0x140433010 (GsDriverEntry.c)
 * Callees:
 *     ?MonitorCleanupGlobal@@YAJXZ @ 0x1400062AC (-MonitorCleanupGlobal@@YAJXZ.c)
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x1400110B0 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x140013010 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x140015644 (McTemplateK0q_EtwWriteTransfer.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140021A60 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x140021D20 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     McGenEventRegister_EtwRegister @ 0x140064940 (McGenEventRegister_EtwRegister.c)
 *     ?DxgkInitializeTelemetry@@YAXXZ @ 0x140070E8C (-DxgkInitializeTelemetry@@YAXXZ.c)
 *     InitializeTelemetryAssertsKMByDriverObject @ 0x14009EE1C (InitializeTelemetryAssertsKMByDriverObject.c)
 *     wil_UninitializeFeatureStaging @ 0x1401C6DCC (wil_UninitializeFeatureStaging.c)
 *     ?TdrInit@@YAXXZ @ 0x1401CA994 (-TdrInit@@YAXXZ.c)
 *     ?CreateGlobal@DXGGLOBAL@@SAJXZ @ 0x1401CDFDC (-CreateGlobal@DXGGLOBAL@@SAJXZ.c)
 *     ?DestroyGlobal@DXGGLOBAL@@SAXXZ @ 0x1401CE4AC (-DestroyGlobal@DXGGLOBAL@@SAXXZ.c)
 *     ?DxgkInitTest@@YAXXZ @ 0x1401FBF04 (-DxgkInitTest@@YAXXZ.c)
 *     DxgkCleanupPower @ 0x140235A98 (DxgkCleanupPower.c)
 *     DxgkInitialPower @ 0x140235B58 (DxgkInitialPower.c)
 *     ?CreateGlobal@CCD_BTL@@SAJXZ @ 0x1402641A4 (-CreateGlobal@CCD_BTL@@SAJXZ.c)
 *     ?MonitorInitializeGlobal@@YAJXZ @ 0x140267B20 (-MonitorInitializeGlobal@@YAJXZ.c)
 *     ?SysMmInitializeGlobal@@YAXXZ @ 0x14027FF1C (-SysMmInitializeGlobal@@YAXXZ.c)
 *     ?DxgDbgInit@@YAXXZ @ 0x1403F9C24 (-DxgDbgInit@@YAXXZ.c)
 *     WdmlibIoCreateDeviceSecure @ 0x14040E03C (WdmlibIoCreateDeviceSecure.c)
 *     wil_InitializeFeatureStaging @ 0x140433814 (wil_InitializeFeatureStaging.c)
 *     DpiInitializeGlobalState @ 0x1404339E8 (DpiInitializeGlobalState.c)
 */

NTSTATUS __stdcall DriverEntry(_DRIVER_OBJECT *DriverObject, PUNICODE_STRING RegistryPath)
{
  unsigned __int64 MaximumLength; // rcx
  __int64 v5; // r9
  __int64 v6; // rdi
  int v7; // eax
  const wchar_t *v8; // r9
  NTSTATUS v9; // eax
  int ProcessNotifyRoutineEx2; // eax
  __int64 v11; // rbx
  unsigned __int8 v12; // al
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  int v22; // eax
  __int64 v23; // rdx
  __int64 v24; // rbx
  __int64 v25; // rcx
  __int64 v26; // r8
  NTSTATUS v27; // eax
  int v28; // eax
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // r9
  int v33; // eax
  int v34; // eax
  NTSTATUS v35; // eax
  __int64 v36; // rcx
  __int64 v37; // r8
  __int64 v38; // rcx
  __int64 v39; // r8
  BOOLEAN Size; // [rsp+28h] [rbp-D8h]
  int v41; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v42; // [rsp+58h] [rbp-A8h]
  char v43; // [rsp+60h] [rbp-A0h]
  _QWORD v44[2]; // [rsp+68h] [rbp-98h] BYREF
  UNICODE_STRING DefaultSDDLString; // [rsp+78h] [rbp-88h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+88h] [rbp-78h] BYREF
  __int64 v47; // [rsp+A0h] [rbp-60h] BYREF
  int v48; // [rsp+A8h] [rbp-58h]
  const wchar_t *v49; // [rsp+B0h] [rbp-50h]
  unsigned __int8 *v50; // [rsp+B8h] [rbp-48h]
  int v51; // [rsp+C0h] [rbp-40h]
  unsigned __int8 *v52; // [rsp+C8h] [rbp-38h]
  int v53; // [rsp+D0h] [rbp-30h]
  __int64 v54; // [rsp+D8h] [rbp-28h]
  int v55; // [rsp+E0h] [rbp-20h]
  __int64 v56; // [rsp+E8h] [rbp-18h]
  __int128 v57; // [rsp+F0h] [rbp-10h]
  __int128 v58; // [rsp+100h] [rbp+0h]
  __int64 SystemInformation; // [rsp+130h] [rbp+30h] BYREF

  wil_InitializeFeatureStaging();
  MaximumLength = RegistryPath->MaximumLength;
  g_pDriverObject = (PDEVICE_OBJECT)DriverObject;
  g_RegistryPath.Buffer = (wchar_t *)operator new[](MaximumLength, 0x4B677844u, 256LL, v5);
  if ( !g_RegistryPath.Buffer )
  {
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 303;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      0xFFFFFFFFLL,
      L"Failed to allocate registry path buffer.",
      303LL,
      0LL,
      0LL,
      0LL,
      0LL);
    LODWORD(v6) = -1073741801;
LABEL_16:
    wil_UninitializeFeatureStaging();
    return v6;
  }
  g_RegistryPath.MaximumLength = RegistryPath->MaximumLength;
  RtlCopyUnicodeString(&g_RegistryPath, RegistryPath);
  v7 = PsTlsAlloc(DxgkThreadPsTslCallback, 0LL, &g_DxgkThreadTlsId);
  v6 = v7;
  if ( v7 < 0 )
  {
    WdLogSingleEntry1(2LL, v7);
    v8 = L"Failed to allocate a PsTls slot for DxgkThread, returning 0x%I64x.";
    WdLogGlobalForLineNumber = 317;
LABEL_5:
    DxgkLogInternalTriageEvent(0LL, 0x40000, 0xFFFFFFFFLL, v8, v6, 0LL, 0LL, 0LL, 0LL);
    goto LABEL_16;
  }
  v9 = ExInitializeLookasideListEx(&g_DxgkThreadLookasideList, 0LL, 0LL, (POOL_TYPE)512, 0, 0x40uLL, 0x54677844u, 0);
  v6 = v9;
  if ( v9 < 0 )
  {
    PsTlsFree(g_DxgkThreadTlsId);
    WdLogSingleEntry1(2LL, v6);
    v8 = L"Failed to initialize the lookaside list for DXGTHREAD, returning 0x%I64x";
    WdLogGlobalForLineNumber = 333;
    goto LABEL_5;
  }
  ProcessNotifyRoutineEx2 = PsSetCreateProcessNotifyRoutineEx2(0LL, DxgkProcessNotify, 0LL);
  if ( ProcessNotifyRoutineEx2 < 0 )
  {
    v11 = ProcessNotifyRoutineEx2;
    WdLogSingleEntry1(2LL, ProcessNotifyRoutineEx2);
    WdLogGlobalForLineNumber = 345;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      0xFFFFFFFFLL,
      L"PsSetCreateProcessNotifyRoutineEx failed 0x%I64x",
      v11,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  SystemInformation = 8LL;
  if ( ZwQuerySystemInformation(MaxSystemInfoClass|SystemProcessInformation, &SystemInformation, 8u, 0LL) < 0
    || (v12 = 1, (SystemInformation & 0x200000000LL) == 0) )
  {
    v12 = 0;
  }
  g_OSTestSigningEnabled = v12;
  v47 = 0LL;
  v48 = 288;
  v51 = 67108868;
  v49 = L"IsInternalRelease";
  v53 = 4;
  v50 = &g_IsInternalRelease;
  v52 = &g_IsInternalRelease;
  v54 = 0LL;
  v55 = 0;
  v56 = 0LL;
  v57 = 0LL;
  v58 = 0LL;
  RtlQueryRegistryValuesEx(2LL, L"GraphicsDrivers", &v47, 0LL, 0LL);
  g_IsInternalRelease = g_IsInternalRelease != 0;
  g_IsInternalReleaseOrDbg = g_IsInternalRelease;
  g_bSkuSupportMultipleUsers = (RtlGetSuiteMask() & 0x110) == 16;
  InitializeTelemetryAssertsKMByDriverObject((__int64)DriverObject);
  WdInitialize();
  LODWORD(v6) = DXGGLOBAL::CreateGlobal(v14, v13, v15, v16);
  if ( (int)v6 < 0 )
    goto LABEL_16;
  LODWORD(v6) = DpiInitializeGlobalState();
  if ( (int)v6 < 0 )
    goto LABEL_16;
  LODWORD(v6) = CCD_BTL::CreateGlobal(v18, v17, v19, v20);
  if ( (int)v6 < 0 )
    goto LABEL_16;
  DxgkInitializeTelemetry();
  Size = 0;
  v22 = ExSubscribeWnfStateChange(&gScreenStudyEventSubscription, &WNF_SRUM_SCREENONSTUDY_SESSION, 1LL);
  if ( v22 < 0 )
  {
    v24 = v22;
    WdLogSingleEntry1(2LL, v22);
    WdLogGlobalForLineNumber = 453;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      0xFFFFFFFFLL,
      L"ExSubscribeWnfStateChange failed, returing 0x%I64x",
      v24,
      0LL,
      0LL,
      0LL,
      0LL);
    gScreenStudyEventSubscription = 0LL;
  }
  bTracingEnabled = 0;
  McGenEventRegister_EtwRegister(&DxgkControlGuid, v23, &DxgkControlGuid_Context, (ULONGLONG *)&DxgkControlGuid_Context);
  v41 = -1;
  v42 = 0LL;
  if ( (qword_14015B4C0 & 2) != 0 )
  {
    v43 = 1;
    v41 = 0;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v25, (__int64)&EventProfilerEnter, v26, 0);
  }
  else
  {
    v43 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v41, 0);
  v44[0] = &DxgkControlGuid;
  v44[1] = &Dxgk_WDI_NotifyUser;
  WdDiagInit(v44);
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
  v27 = WdmlibIoCreateDeviceSecure(
          DriverObject,
          0,
          &DestinationString,
          0x22u,
          0x100u,
          Size,
          &DefaultSDDLString,
          &GUID_SD_DXGKRNL_DRIVER_OBJECT,
          &g_pDeviceObject);
  LODWORD(v6) = v27;
  if ( v27 < 0 )
  {
    WdLogSingleEntry1(3LL, v27);
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
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v41);
    if ( v43 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v36, (__int64)&EventProfilerExit, v37, v41);
    }
    return v6;
  }
  v28 = DxgkInitialPower();
  LODWORD(v6) = v28;
  if ( v28 < 0 )
  {
    WdLogSingleEntry1(3LL, v28);
    WdLogGlobalForLineNumber = 519;
    goto LABEL_34;
  }
  v33 = MonitorInitializeGlobal(v30, v29, v31, v32);
  LODWORD(v6) = v33;
  if ( v33 < 0 )
  {
    WdLogSingleEntry1(3LL, v33);
    WdLogGlobalForLineNumber = 532;
    goto LABEL_34;
  }
  SysMmInitializeGlobal();
  DxgkInitTest();
  DxgDbgInit();
  TdrInit();
  v34 = SMgrRegisterSessionChangeCallout(DxgkNotifySessionStateChange);
  v6 = v34;
  if ( v34 < 0 )
  {
    WdLogSingleEntry1(2LL, v34);
    WdLogGlobalForLineNumber = 565;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      0xFFFFFFFFLL,
      L"Could not register session change callout with session manager, returning 0x%I64x.",
      v6,
      0LL,
      0LL,
      0LL,
      0LL);
    goto LABEL_34;
  }
  v35 = IoRegisterShutdownNotification(g_pDeviceObject);
  v6 = v35;
  if ( v35 < 0 )
  {
    WdLogSingleEntry1(2LL, v35);
    WdLogGlobalForLineNumber = 575;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      0xFFFFFFFFLL,
      L"Could not register for shutdown notification, returning 0x%I64x.",
      v6,
      0LL,
      0LL,
      0LL,
      0LL);
    SMgrUnregisterSessionChangeCallout(DxgkNotifySessionStateChange);
    goto LABEL_34;
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v41);
  if ( v43 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v38, (__int64)&EventProfilerExit, v39, v41);
  return 0;
}
