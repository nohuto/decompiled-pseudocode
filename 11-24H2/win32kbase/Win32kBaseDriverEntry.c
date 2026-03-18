/*
 * XREFs of Win32kBaseDriverEntry @ 0x1402E25E0
 * Callers:
 *     <none>
 * Callees:
 *     W32GetCurrentWin32kSessionId @ 0x140017AD4 (W32GetCurrentWin32kSessionId.c)
 *     UserSessionSwitchLeaveCritWithNonPaged @ 0x140023070 (UserSessionSwitchLeaveCritWithNonPaged.c)
 *     RIMInitialize @ 0x14004FCC0 (RIMInitialize.c)
 *     ??1CTempW32ThreadNonPaged@@QEAA@XZ @ 0x14005A930 (--1CTempW32ThreadNonPaged@@QEAA@XZ.c)
 *     ??0CTempW32ThreadNonPaged@@QEAA@XZ @ 0x14005AAB0 (--0CTempW32ThreadNonPaged@@QEAA@XZ.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x14005DE1C (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     InitSmartObjectRefLookaside @ 0x1400792B0 (InitSmartObjectRefLookaside.c)
 *     ?AllocatePagedLookasideList@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_KIII@Z @ 0x140079318 (-AllocatePagedLookasideList@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_KIII@Z.c)
 *     DestroyDeferredUnlockObjectAssignmentList @ 0x1400A42D0 (DestroyDeferredUnlockObjectAssignmentList.c)
 *     RtlLoadStringOrError @ 0x1400F3D80 (RtlLoadStringOrError.c)
 *     CoreMsgInitialize @ 0x1400FBD48 (CoreMsgInitialize.c)
 *     InitializeWin32KSyscallFilter @ 0x1401005C0 (InitializeWin32KSyscallFilter.c)
 *     ?InitializeWppLogging@@YAJPEAU_DRIVER_OBJECT@@@Z @ 0x140100A20 (-InitializeWppLogging@@YAJPEAU_DRIVER_OBJECT@@@Z.c)
 *     IsCurrentSessionHostServiceSession @ 0x140100C78 (IsCurrentSessionHostServiceSession.c)
 *     IsHostServiceSession @ 0x140100C94 (IsHostServiceSession.c)
 *     ?InitializeUserTypeIsolation@@YA_NXZ @ 0x140119300 (-InitializeUserTypeIsolation@@YA_NXZ.c)
 *     ?CheckInitialSessions@@YAJXZ @ 0x14012A8C0 (-CheckInitialSessions@@YAJXZ.c)
 *     IsServiceSession @ 0x14012AA64 (IsServiceSession.c)
 *     CreateKernelEvent @ 0x140131DB0 (CreateKernelEvent.c)
 *     CreateKernelSemaphore @ 0x140136430 (CreateKernelSemaphore.c)
 *     CreateWin32kApiSetTable @ 0x14013D6E8 (CreateWin32kApiSetTable.c)
 *     DCEInUseCountTelemetryInit @ 0x140144944 (DCEInUseCountTelemetryInit.c)
 *     InitializeTelemetryAssertsKMByName @ 0x1401463D0 (InitializeTelemetryAssertsKMByName.c)
 *     ?HYDRA_HINT@@YAXW4HydraHint@@@Z @ 0x1401483DC (-HYDRA_HINT@@YAXW4HydraHint@@@Z.c)
 *     CreateKernelEventObject @ 0x14014A22C (CreateKernelEventObject.c)
 *     ?VerifyDWMApiSetImplementation@@YAJXZ @ 0x14014A2E4 (-VerifyDWMApiSetImplementation@@YAJXZ.c)
 *     ?InitializePowerGlobals@@YAJXZ @ 0x14014AB68 (-InitializePowerGlobals@@YAJXZ.c)
 *     IsCurrentSessionInServerSilo @ 0x14014C424 (IsCurrentSessionInServerSilo.c)
 *     CreatePerSessionWin32kCall @ 0x14014F3A8 (CreatePerSessionWin32kCall.c)
 *     ?InitializeCursorGlobals@@YAJXZ @ 0x1401517D8 (-InitializeCursorGlobals@@YAJXZ.c)
 *     OPMInitialize @ 0x1401538D4 (OPMInitialize.c)
 *     ?EnsureRequiredApiSetExtensions@@YAXXZ @ 0x140154660 (-EnsureRequiredApiSetExtensions@@YAXXZ.c)
 *     ?InitializeWin32SiloGlobals@@YAJW4SiloGlobalAccess@@@Z @ 0x140154D80 (-InitializeWin32SiloGlobals@@YAJW4SiloGlobalAccess@@@Z.c)
 *     RetrieveCurrentDisplayState @ 0x140156F58 (RetrieveCurrentDisplayState.c)
 *     ?Create@CLeakTrackingAllocator@NSInstrumentation@@SAPEAV12@PEAX_N@Z @ 0x1401570EC (-Create@CLeakTrackingAllocator@NSInstrumentation@@SAPEAV12@PEAX_N@Z.c)
 *     McGenEventRegister_EtwRegister @ 0x1401593F0 (McGenEventRegister_EtwRegister.c)
 *     ?InitializeDCEGlobals@@YAJXZ @ 0x14015BC68 (-InitializeDCEGlobals@@YAJXZ.c)
 *     ?Win32KBaseDriverUnload@@YAXPEAU_DRIVER_OBJECT@@@Z @ 0x140164AC0 (-Win32KBaseDriverUnload@@YAXPEAU_DRIVER_OBJECT@@@Z.c)
 *     DestroySharedUserCritDeferredUnlockList @ 0x14016ABF4 (DestroySharedUserCritDeferredUnlockList.c)
 *     ?InitializeProcessThreadGlobals@@YAJXZ @ 0x140173E3C (-InitializeProcessThreadGlobals@@YAJXZ.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019C14C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     FreeWin32kApiSetTable @ 0x14019DBC4 (FreeWin32kApiSetTable.c)
 *     Feature_Win32ProcessCapabilities__private_IsEnabledDeviceUsageNoInline @ 0x1401A3E34 (Feature_Win32ProcessCapabilities__private_IsEnabledDeviceUsageNoInline.c)
 *     ?Initialize@CoreMessagingKPort@@SAJXZ @ 0x1401A7EC0 (-Initialize@CoreMessagingKPort@@SAJXZ.c)
 *     UserCritInternal::_anonymous_namespace_::EnterCritInternal @ 0x1401A8FE8 (UserCritInternal--_anonymous_namespace_--EnterCritInternal.c)
 *     UserCritInternal::_anonymous_namespace_::IsValidGuiContext @ 0x1401A9084 (UserCritInternal--_anonymous_namespace_--IsValidGuiContext.c)
 *     ?ReportUsageForAllVelocityKeys@@YAXXZ @ 0x1401B0FF4 (-ReportUsageForAllVelocityKeys@@YAXXZ.c)
 *     ?IsWin32kRefreshed@@YA_NXZ @ 0x1401BF4B4 (-IsWin32kRefreshed@@YA_NXZ.c)
 *     InputInitialize @ 0x140218A5C (InputInitialize.c)
 *     __security_check_cookie @ 0x14023F3B0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 *     TlgRegisterAggregateProviderEx @ 0x1402C405C (TlgRegisterAggregateProviderEx.c)
 *     TraceLoggingRegisterEx_EtwRegister_EtwSetInformation @ 0x1402C42B4 (TraceLoggingRegisterEx_EtwRegister_EtwSetInformation.c)
 *     wil_InitializeFeatureStaging @ 0x1402E3C00 (wil_InitializeFeatureStaging.c)
 *     InitCreateUserCrit @ 0x1402E5784 (InitCreateUserCrit.c)
 *     Win32UserInitialize @ 0x1402E5DE4 (Win32UserInitialize.c)
 *     InitializeGre @ 0x1402E6D50 (InitializeGre.c)
 */

__int64 __fastcall Win32kBaseDriverEntry(_QWORD *a1)
{
  _QWORD *UniqueProcess; // r12
  unsigned int v2; // r15d
  __int64 v3; // rcx
  char v4; // r13
  unsigned __int8 v5; // si
  int v6; // eax
  __int64 SessionState; // rax
  int Win32kApiSetTable; // eax
  __int64 v9; // rcx
  __int64 v10; // rax
  ULONG_PTR v11; // rdi
  __int64 v12; // rcx
  __int64 v13; // rax
  int v14; // eax
  __int64 v15; // rcx
  NTSTATUS v16; // eax
  __int64 v17; // rcx
  __int64 UserSessionState; // rax
  __int64 SecurityDescriptor_low; // rcx
  __int64 v20; // rcx
  BOOL v21; // eax
  NTSTATUS v22; // eax
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // rcx
  __int64 v26; // rbx
  __int64 v27; // rcx
  __int64 v28; // rcx
  struct _DRIVER_OBJECT *v29; // rcx
  char v30; // bl
  __int64 v31; // rdx
  __int64 v32; // rcx
  int (*v33)(void); // rax
  __int64 v34; // rdx
  void (*v35)(void); // rax
  int v36; // eax
  __int64 Pool2; // rbx
  __int64 v38; // rcx
  __int64 v39; // rax
  __int64 v40; // r8
  unsigned int v41; // r9d
  CTouchProcessor *v42; // rcx
  bool v43; // si
  __int64 v44; // rax
  int v45; // r8d
  int v46; // edx
  bool v47; // bl
  __int64 v48; // rax
  int v49; // r8d
  int v50; // edx
  char v52; // al
  __int64 QuadPart; // rcx
  int v54; // eax
  __int64 v55; // rcx
  int v56; // eax
  __int64 v57; // rcx
  int v58; // eax
  __int64 v59; // rdx
  __int64 v60; // rcx
  int (*v61)(void); // rax
  __int64 v62; // rdx
  __int64 v63; // rcx
  void (*v64)(void); // rax
  __int64 v65; // rcx
  __int64 v66; // rcx
  __int64 v67; // rax
  _BYTE *PagedLookasideList; // rax
  _UNKNOWN **v69; // rcx
  bool v70; // r15
  bool v71; // r12
  __int64 v72; // rax
  int v73; // r8d
  int v74; // edx
  int v75; // eax
  __int64 v76; // rdx
  __int64 v77; // rcx
  __int64 v78; // rcx
  int (*v79)(void); // rax
  __int64 v80; // rdx
  void (*v81)(void); // rax
  __int64 v82; // rax
  NTSTATUS v83; // eax
  __int64 v84; // rcx
  __int64 v85; // rcx
  __int64 v86; // rdx
  __int64 v87; // rcx
  int (*v88)(void); // rax
  __int64 v89; // rdx
  __int64 v90; // rcx
  void (__fastcall *v91)(__int64); // rax
  int v92; // eax
  __int64 v93; // rcx
  __int64 v94; // rcx
  __int64 v95; // rdx
  __int64 v96; // rcx
  void (__fastcall *v97)(_QWORD); // rax
  unsigned __int64 v98; // rbx
  __int64 v99; // rcx
  __int64 v100; // rcx
  __int64 v101; // rcx
  __int64 v102; // rcx
  __int64 v103; // rcx
  __int64 v104; // rcx
  _QWORD *v105; // rbx
  __int64 v106; // rax
  int v107; // eax
  __int64 v108; // rdx
  __int64 v109; // rcx
  void (*v110)(void); // rax
  __int64 v111; // rcx
  __int64 v112; // rcx
  __int64 v113; // rdx
  __int64 v114; // rcx
  __int64 v115; // r8
  int v116; // eax
  __int64 v117; // rdx
  __int64 v118; // rcx
  int v119; // eax
  __int64 v120; // rcx
  int (*v121)(void); // rax
  __int64 v122; // rdx
  void (*v123)(void); // rax
  __int64 v124; // rcx
  __int64 v125; // rcx
  __int64 v126; // rcx
  __int64 v127; // rcx
  __int64 v128; // rcx
  __int64 v129; // rcx
  __int64 v130; // rcx
  __int64 v131; // rcx
  __int64 v132; // rcx
  __int64 v133; // rcx
  __int64 v134; // rcx
  __int64 v135; // rcx
  __int64 v136; // rcx
  __int64 v137; // rcx
  __int64 v138; // rcx
  __int64 v139; // rcx
  __int64 v140; // rcx
  __int64 v141; // rcx
  __int64 v142; // rcx
  __int64 v143; // rcx
  __int64 v144; // rcx
  __int64 v145; // rcx
  __int64 v146; // rcx
  __int64 v147; // rcx
  __int64 v148; // rcx
  __int64 v149; // rax
  int v150; // eax
  __int64 v151; // rcx
  NTSTATUS v152; // eax
  __int64 v153; // rcx
  __int64 v154; // rcx
  NTSTATUS CurrentDisplayState; // eax
  __int64 v156; // rcx
  struct _EX_RUNDOWN_REF *v157; // rax
  int v158; // eax
  __int64 v159; // rcx
  int v160; // eax
  __int64 v161; // rdx
  __int64 v162; // rcx
  __int64 v163; // rdx
  __int64 v164; // rcx
  int (*v165)(void); // rax
  __int64 (*v166)(void); // rax
  __int64 v167; // rdx
  __int64 v168; // rcx
  int (*v169)(void); // rax
  __int64 (*v170)(void); // rax
  int (*v171)(void); // rax
  __int64 v172; // rdx
  __int64 v173; // rcx
  __int64 (*v174)(void); // rax
  __int64 v175; // rcx
  __int64 v176; // rax
  __int64 v177; // rcx
  int SystemInformation; // [rsp+58h] [rbp-B0h] BYREF
  int v179; // [rsp+5Ch] [rbp-ACh]
  __int64 v180; // [rsp+60h] [rbp-A8h] BYREF
  struct _CLIENT_ID ClientId; // [rsp+68h] [rbp-A0h] BYREF
  struct _OBJECT_ATTRIBUTES v182; // [rsp+78h] [rbp-90h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+A8h] [rbp-60h] BYREF
  _BYTE v184[256]; // [rsp+B8h] [rbp-50h] BYREF
  char v185[160]; // [rsp+1B8h] [rbp+B0h] BYREF

  UniqueProcess = a1;
  ClientId.UniqueProcess = a1;
  CTempW32ThreadNonPaged::CTempW32ThreadNonPaged((CTempW32ThreadNonPaged *)v184);
  if ( (unsigned int)W32GetDebugState() )
    KeBugCheckEx(0x164u, 0x3AuLL, 0LL, 0LL, 0LL);
  LODWORD(v180) = W32GetCurrentWin32kSessionId();
  v2 = v180;
  v4 = 1;
  if ( IsHostServiceSession(v180) )
  {
    v5 = 1;
    v6 = wil_InitializeFeatureStaging();
    if ( v6 < 0 )
      KeBugCheckEx(0x164u, 0x3EuLL, v6, 0LL, 0LL);
  }
  else
  {
    v5 = 0;
  }
  SessionState = W32GetSessionState(v3);
  Win32kApiSetTable = CreateWin32kApiSetTable((__int64 *)(SessionState + 152));
  if ( Win32kApiSetTable < 0 )
  {
    if ( v5 )
      KeBugCheckEx(0x164u, 0x3EuLL, Win32kApiSetTable, 0LL, 0LL);
    v10 = W32GetSessionState(v9);
    FreeWin32kApiSetTable((PVOID **)(v10 + 152));
    LODWORD(v11) = -1073741823;
LABEL_58:
    CTempW32ThreadNonPaged::~CTempW32ThreadNonPaged((CTempW32ThreadNonPaged *)v184);
    return (unsigned int)v11;
  }
  *(_DWORD *)(W32GetUserGdiSessionState(v9) + 28) = 1;
  v13 = W32GetSessionState(v12);
  v14 = CreatePerSessionWin32kCall((__int64 *)(v13 + 152));
  LODWORD(v11) = v14;
  if ( v14 < 0 )
  {
    if ( v5 )
      KeBugCheckEx(0x164u, 0x3EuLL, v14, 0LL, 0LL);
    goto LABEL_58;
  }
  if ( IsCurrentSessionInServerSilo() )
  {
    memset(&v182, 0, 40);
    v16 = ZwQueryInformationJobObject(0LL, JobObjectEndOfJobTimeInformation|0x20, &v182, 0x28u, 0LL);
    if ( v16 < 0 )
      KeBugCheckEx(0x164u, v16, 0LL, 0LL, 0LL);
    UserSessionState = W32GetUserSessionState(v17);
    SecurityDescriptor_low = LODWORD(v182.SecurityDescriptor);
    *(_DWORD *)(UserSessionState + 71432) = v182.SecurityDescriptor;
  }
  else
  {
    SecurityDescriptor_low = W32GetUserSessionState(v15);
    *(_DWORD *)(SecurityDescriptor_low + 71432) = MEMORY[0xFFFFF78000000260];
  }
  if ( *(_DWORD *)(W32GetUserSessionState(SecurityDescriptor_low) + 71432) < 0x4F7Cu
    || *(_DWORD *)(W32GetUserSessionState(v20) + 71432) >= 0x55F0u )
  {
    *(_WORD *)(W32GetUserSessionState(v20) + 71436) = 0;
  }
  else
  {
    *(_WORD *)(W32GetUserSessionState(v20) + 71436) = 320;
  }
  if ( v5 )
    InitializeTelemetryAssertsKMByName();
  v21 = IsServiceSession(v2);
  v22 = InitializeWin32SiloGlobals(!v21);
  LODWORD(v11) = v22;
  if ( v22 < 0 )
  {
    if ( v5 )
      KeBugCheckEx(0x164u, 0x3EuLL, v22, 0LL, 0LL);
    goto LABEL_58;
  }
  EnsureRequiredApiSetExtensions(v24, v23);
  v26 = W32GetUserSessionState(v25) + 14080;
  *(_QWORD *)(W32GetUserSessionState(v27) + 14064) = v26;
  *(_QWORD *)(W32GetUserSessionState(v28) + 14200) = &ausMouseVKey;
  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, L"\\Driver\\Win32k");
  v30 = 0;
  if ( v5 )
  {
    IoCreateDriver(&DestinationString, Win32kPnPDriverEntry);
    v29 = *(struct _DRIVER_OBJECT **)(W32GetWin32kBaseApiSetTable(v32, v31) + 48);
    v33 = (int (*)(void))v29[12].MajorFunction[24];
    if ( v33 )
    {
      if ( v33() >= 0 )
      {
        v29 = *(struct _DRIVER_OBJECT **)(W32GetWin32kBaseApiSetTable(v29, v34) + 48);
        v35 = (void (*)(void))v29[12].MajorFunction[25];
        if ( v35 )
          v35();
      }
    }
    v30 = 0;
  }
  v36 = InitializeWppLogging(v29);
  v11 = v36;
  if ( v36 < 0 )
  {
    SystemInformation = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 2088);
    LOBYTE(Pool2) = 0;
    if ( v5 )
      KeBugCheckEx(0x164u, 0x3EuLL, v11, 0LL, 0LL);
    goto LABEL_112;
  }
  if ( (unsigned int)IsCurrentSessionHostServiceSession() )
    v30 = IsWin32kRefreshed();
  v39 = W32GetUserSessionState(v38);
  NSInstrumentation::CLeakTrackingAllocator::Create(
    (struct NSInstrumentation::CLeakTrackingAllocator *)(v39 + 72288),
    v30,
    v40,
    v41);
  LOBYTE(Pool2) = 0;
  if ( !(unsigned int)InitCreateUserCrit() )
  {
    LODWORD(v11) = -1073741801;
    if ( v5 )
      goto LABEL_142;
    goto LABEL_41;
  }
  if ( v5 )
  {
    v179 = 0;
    SystemInformation = 8;
    if ( ZwQuerySystemInformation(MaxSystemInfoClass|SystemProcessInformation, &SystemInformation, 8u, 0LL) < 0
      || (v52 = 1, (v179 & 2) == 0) )
    {
      v52 = 0;
    }
    gbOSTestSigningEnabled = v52;
    if ( ZwPowerInformation(ProcessorInformation|0x40, 0LL, 0, &gPlatformRole, 4u) < 0 )
    {
      gPlatformRole = PlatformRoleDesktop;
      WdInitialize();
LABEL_66:
      TlgRegisterAggregateProviderEx(&dword_14029ADF8);
      KeQueryPerformanceCounter(&gliQpcFreq);
      QuadPart = gliQpcFreq.QuadPart;
      WPP_MAIN_CB.DeviceObjectExtension = (struct _DEVOBJ_EXTENSION *)(gliQpcFreq.QuadPart / 0x3E8uLL);
      WPP_MAIN_CB.Reserved = (PVOID)(3600 * gliQpcFreq.QuadPart);
      goto LABEL_67;
    }
  }
  WdInitialize();
  if ( v5 )
    goto LABEL_66;
LABEL_67:
  v54 = InitializeDCEGlobals(QuadPart);
  LODWORD(v11) = v54;
  if ( v54 < 0 )
  {
    if ( v5 )
      KeBugCheckEx(0x164u, 0x3EuLL, v54, 0LL, 0LL);
    goto LABEL_41;
  }
  v56 = InitializeCursorGlobals(v55);
  LODWORD(v11) = v56;
  if ( v56 < 0 )
  {
    if ( v5 )
      KeBugCheckEx(0x164u, 0x3EuLL, v56, 0LL, 0LL);
    goto LABEL_41;
  }
  v58 = InitializeProcessThreadGlobals(v57);
  LODWORD(v11) = v58;
  if ( v58 < 0 )
  {
    if ( v5 )
      KeBugCheckEx(0x164u, 0x3EuLL, v58, 0LL, 0LL);
    goto LABEL_41;
  }
  if ( v5 )
  {
    McGenEventRegister_EtwRegister();
    DCEInUseCountTelemetryInit();
    v61 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v60, v59) + 48) + 4312LL);
    if ( v61 )
    {
      if ( v61() >= 0 )
      {
        v64 = *(void (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v63, v62) + 48) + 4320LL);
        if ( v64 )
          v64();
      }
    }
    if ( (int)TraceLoggingRegisterEx_EtwRegister_EtwSetInformation(
                (char *)&dword_14029AF48,
                (__int64)W32kTraceLoggingEnableCallback,
                0LL) < 0 )
    {
      SystemInformation = 0x20000;
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 2245);
    }
    if ( (int)TraceLoggingRegisterEx_EtwRegister_EtwSetInformation((char *)&dword_14029AF10, 0LL, 0LL) < 0 )
    {
      SystemInformation = 0x20000;
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 2250);
    }
    if ( (int)TraceLoggingRegisterEx_EtwRegister_EtwSetInformation((char *)&dword_14029AEA0, 0LL, 0LL) < 0 )
    {
      SystemInformation = 0x20000;
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 2255);
    }
    if ( (int)TraceLoggingRegisterEx_EtwRegister_EtwSetInformation(
                (char *)&dword_14029AE68,
                (__int64)W32kBaseInputEnableCallback,
                0LL) < 0 )
    {
      SystemInformation = 0x20000;
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 2260);
    }
    if ( (int)TraceLoggingRegisterEx_EtwRegister_EtwSetInformation(
                (char *)&dword_14029AE30,
                (__int64)InputCoreProviderCallback,
                0LL) < 0 )
    {
      SystemInformation = 0x20000;
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 2265);
    }
    TlgRegisterAggregateProviderEx(&dword_14029AED8);
  }
  else
  {
    DCEInUseCountTelemetryInit();
  }
  Pool2 = W32GetUserSessionState(v65);
  v67 = W32GetUserSessionState(v66);
  PagedLookasideList = NSInstrumentation::CLeakTrackingAllocator::AllocatePagedLookasideList(
                         (NSInstrumentation::CPointerHashTable **)(v67 + 72288),
                         0x48uLL,
                         0x616C7355u,
                         0x696C7455u,
                         0x10u);
  *(_QWORD *)(Pool2 + 19400) = PagedLookasideList;
  v69 = (_UNKNOWN **)PagedLookasideList;
  LOBYTE(Pool2) = 0;
  if ( PagedLookasideList )
  {
    LODWORD(v11) = 0;
  }
  else
  {
    LODWORD(v11) = -1073741801;
    v70 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
       && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x2000) != 0
       && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 2u;
    v69 = &WPP_RECORDER_INITIALIZED;
    v71 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v70 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v72 = W32GetUserSessionState(&WPP_RECORDER_INITIALIZED);
      LOBYTE(v73) = v71;
      LOBYTE(v74) = v70;
      WPP_RECORDER_AND_TRACE_SF_d(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v74,
        v73,
        *(_QWORD *)(v72 + 69400),
        2,
        14,
        13,
        (__int64)&WPP_9723802cc44d3ab29e76f6ade2a2f4e4_Traceguids,
        23);
    }
    if ( v5 )
      KeBugCheckEx(0x164u, 0x3EuLL, 0xFFFFFFFFC0000017uLL, 0LL, 0LL);
    v2 = v180;
    LOBYTE(Pool2) = 0;
    UniqueProcess = ClientId.UniqueProcess;
  }
  *(_DWORD *)(W32GetUserSessionState(v69) + 70120) = 1;
  if ( v5 )
  {
    W32PageEntireDriver(Win32kBaseDriverEntry);
    hModuleWinKernel = (PVOID)0x140000000LL;
  }
  if ( (v11 & 0x80000000) == 0LL )
  {
    v75 = InitializeGraphicsInfrastructure(hModuleWinKernel);
    LODWORD(v11) = v75;
    if ( v75 < 0 )
    {
      if ( v5 )
        KeBugCheckEx(0x164u, 0x3EuLL, v75, 0LL, 0LL);
    }
  }
LABEL_112:
  HYDRA_HINT(1LL);
  if ( v5 )
    gpvWin32kImageBase = (PVOID)UniqueProcess[3];
  v78 = *(_QWORD *)(W32GetWin32kBaseApiSetTable(v77, v76) + 48);
  v79 = *(int (**)(void))(v78 + 344);
  if ( v79 )
  {
    if ( v79() >= 0 )
    {
      v78 = *(_QWORD *)(W32GetWin32kBaseApiSetTable(v78, v80) + 48);
      v81 = *(void (**)(void))(v78 + 352);
      if ( v81 )
        v81();
    }
  }
  v82 = W32GetUserSessionState(v78);
  v83 = BCryptGenRandom(0LL, (PUCHAR)(v82 + 42608), 1u, 2u);
  if ( v83 < 0 )
  {
    if ( v5 )
      KeBugCheckEx(0x164u, 0x3EuLL, v83, 0LL, 0LL);
    goto LABEL_41;
  }
  Pool2 = *(_QWORD *)(W32GetUserSessionState(v84) + 42608) & 0x7FFFFFFFFFFFFFFFLL;
  *(_QWORD *)(W32GetUserSessionState(v85) + 42608) = Pool2;
  LOBYTE(Pool2) = 0;
  v88 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v87, v86) + 48) + 424LL);
  if ( v88 )
  {
    if ( v88() >= 0 )
    {
      v91 = *(void (__fastcall **)(__int64))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v90, v89) + 48) + 432LL);
      if ( v91 )
        v91(1LL);
    }
  }
  if ( (v11 & 0x80000000) != 0LL )
  {
    if ( v5 )
      KeBugCheckEx(0x164u, 0x3EuLL, (int)v11, 0LL, 0LL);
    goto LABEL_41;
  }
  v92 = CheckInitialSessions();
  LODWORD(v11) = v92;
  if ( v92 && v92 != -1073741771 )
  {
    if ( v5 )
      KeBugCheckEx(0x164u, 0x3EuLL, v92, 0LL, 0LL);
    if ( v92 >= 0 )
      LODWORD(v11) = -1073741823;
    goto LABEL_41;
  }
  if ( !*(_DWORD *)(W32GetUserSessionState(v93) + 68868) || *(_DWORD *)(W32GetUserSessionState(v94) + 68876) )
    RtlSetActiveConsoleId(v2);
  if ( v5 )
  {
    v97 = *(void (__fastcall **)(_QWORD))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v96, v95)
                                                    + 24LL
                                                    * ext_ms_win_moderncore_win32k_base_sysentry_l1_ApiSetTableIndex)
                                        + 96LL);
    if ( v97 )
      v97(Win32KBaseDriverUnload);
  }
  v98 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
  *(_DWORD *)(W32GetUserSessionState(0xFFFFF78000000004uLL) + 57624) = v98;
  Pool2 = ExAllocatePool2(64LL, 56LL, 1716220757LL);
  *(_QWORD *)(W32GetUserSessionState(v99) + 42600) = Pool2;
  LOBYTE(Pool2) = 0;
  if ( !*(_QWORD *)(W32GetUserSessionState(v100) + 42600)
    || (v102 = *(_QWORD *)(W32GetUserSessionState(v101) + 42600),
        *(_DWORD *)v102 = 1,
        *(_QWORD *)(v102 + 8) = 0LL,
        *(_DWORD *)(v102 + 16) = 0,
        KeInitializeEvent((PRKEVENT)(v102 + 24), SynchronizationEvent, 0),
        !(unsigned int)InitSmartObjectRefLookaside(v103))
    || !InitializeUserTypeIsolation() )
  {
LABEL_141:
    LODWORD(v11) = -1073741801;
    if ( v5 )
LABEL_142:
      KeBugCheckEx(0x164u, 0x3EuLL, 0xFFFFFFFFC0000017uLL, 0LL, 0LL);
LABEL_41:
    v42 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x2000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 2u )
    {
      LOBYTE(Pool2) = 1;
    }
    v43 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( (_BYTE)Pool2 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v44 = W32GetUserSessionState(WPP_GLOBAL_Control);
      LOBYTE(v45) = v43;
      LOBYTE(v46) = Pool2;
      WPP_RECORDER_AND_TRACE_SF_d(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v46,
        v45,
        *(_QWORD *)(v44 + 69400),
        2,
        14,
        14,
        (__int64)&WPP_9723802cc44d3ab29e76f6ade2a2f4e4_Traceguids,
        v11);
    }
    if ( *(_QWORD *)(W32GetUserSessionState(v42) + 69400) )
    {
      if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x2000) == 0
        || *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u )
      {
        v4 = 0;
      }
      v47 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v4 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v48 = W32GetUserSessionState(WPP_GLOBAL_Control);
        LOBYTE(v49) = v47;
        LOBYTE(v50) = v4;
        WPP_RECORDER_AND_TRACE_SF_d(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v50,
          v49,
          *(_QWORD *)(v48 + 69400),
          2,
          14,
          15,
          (__int64)&WPP_9723802cc44d3ab29e76f6ade2a2f4e4_Traceguids,
          v11);
      }
    }
    Win32KBaseDriverUnload(0LL);
    if ( (_DWORD)v11 == -1073741822 )
      LODWORD(v11) = -1073741637;
    goto LABEL_58;
  }
  v105 = (_QWORD *)W32GetUserSessionState(v104);
  v106 = UserCritInternal::_anonymous_namespace_::EnterCritInternal(
           v105,
           1,
           0,
           (void (__fastcall *)(_QWORD, __int64))_lambda_63b61c2369133a205197eda5bd671ee7_::_lambda_invoker_cdecl_);
  v105[3] = v106;
  if ( v106 && UserCritInternal::_anonymous_namespace_::IsValidGuiContext(v106) )
  {
    DestroySharedUserCritDeferredUnlockList((__int64)(v105 + 2468));
    DestroyDeferredUnlockObjectAssignmentList(v105 + 2475);
    DestroyDeferredUnlockObjectAssignmentList(v105 + 2473);
  }
  v107 = InitializeWin32KSyscallFilter();
  LODWORD(Pool2) = 0;
  LODWORD(v11) = v107;
  if ( v107 < 0 )
  {
    if ( v5 )
      KeBugCheckEx(0x164u, 0x3EuLL, v107, 0LL, 0LL);
    UserSessionSwitchLeaveCritWithNonPaged();
    goto LABEL_41;
  }
  UserSessionSwitchLeaveCritWithNonPaged();
  if ( v5 )
  {
    v110 = *(void (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v109, v108)
                                        + 24LL * ext_ms_win_moderncore_win32k_base_sysentry_l1_ApiSetTableIndex)
                            + 72LL);
    if ( v110 )
      v110();
    DbgkLkmdRegisterCallback(W32pLkmdDataCollectionCallback, 0LL, 5LL);
  }
  if ( (int)RtlIsApiSetImplemented("ext-ms-win-composition-init-l1-1-0") >= 0
    && (int)VerifyDWMApiSetImplementation() >= 0 )
  {
    LODWORD(Pool2) = 1;
  }
  *(_DWORD *)(W32GetUserSessionState(v111) + 19152) = Pool2;
  RIMInitialize(v112);
  v116 = CoreMsgInitialize(v114, v113, v115);
  LOBYTE(Pool2) = 0;
  LODWORD(v11) = v116;
  if ( v116 < 0 )
  {
    if ( v5 )
      KeBugCheckEx(0x164u, 0x3EuLL, v116, 0LL, 0LL);
    goto LABEL_41;
  }
  if ( (unsigned int)Feature_Win32ProcessCapabilities__private_IsEnabledDeviceUsageNoInline() )
  {
    if ( v5 )
    {
      v119 = CoreMessagingKPort::Initialize(v118);
      if ( v119 < 0 )
        KeBugCheckEx(0x164u, 0x3EuLL, v119, 0LL, 0LL);
      goto LABEL_167;
    }
  }
  else if ( v5 )
  {
LABEL_167:
    TraceLoggingRegisterEx_EtwRegister_EtwSetInformation((char *)&dword_14029B1B0, 0LL, 0LL);
  }
  v120 = *(_QWORD *)(W32GetWin32kBaseApiSetTable(v118, v117) + 48);
  v121 = *(int (**)(void))(v120 + 376);
  if ( v121 )
  {
    if ( v121() >= 0 )
    {
      v120 = *(_QWORD *)(W32GetWin32kBaseApiSetTable(v120, v122) + 48);
      v123 = *(void (**)(void))(v120 + 384);
      if ( v123 )
        v123();
    }
  }
  Pool2 = (__int64)CreateKernelEventObject(v120, 0);
  *(_QWORD *)(W32GetUserSessionState(v124) + 16824) = Pool2;
  LOBYTE(Pool2) = 0;
  if ( !*(_QWORD *)(W32GetUserSessionState(v125) + 16824) )
    goto LABEL_141;
  Pool2 = (__int64)CreateKernelEventObject(v126, 0);
  *(_QWORD *)(W32GetUserSessionState(v127) + 19496) = Pool2;
  LOBYTE(Pool2) = 0;
  if ( !*(_QWORD *)(W32GetUserSessionState(v128) + 19496) )
    goto LABEL_141;
  Pool2 = (__int64)CreateKernelEvent(NotificationEvent, 0);
  *(_QWORD *)(W32GetUserSessionState(v129) + 68640) = Pool2;
  LOBYTE(Pool2) = 0;
  if ( !*(_QWORD *)(W32GetUserSessionState(v130) + 68640) )
    goto LABEL_141;
  Pool2 = (__int64)CreateKernelEvent(NotificationEvent, 0);
  *(_QWORD *)(W32GetUserSessionState(v131) + 68648) = Pool2;
  LOBYTE(Pool2) = 0;
  if ( !*(_QWORD *)(W32GetUserSessionState(v132) + 68648) )
    goto LABEL_141;
  Pool2 = (__int64)CreateKernelEvent(NotificationEvent, 1u);
  *(_QWORD *)(W32GetUserSessionState(v133) + 68656) = Pool2;
  LOBYTE(Pool2) = 0;
  if ( !*(_QWORD *)(W32GetUserSessionState(v134) + 68656) )
    goto LABEL_141;
  Pool2 = (__int64)CreateKernelEvent(NotificationEvent, 0);
  *(_QWORD *)(W32GetUserSessionState(v135) + 18760) = Pool2;
  LOBYTE(Pool2) = 0;
  if ( !*(_QWORD *)(W32GetUserSessionState(v136) + 18760) )
    goto LABEL_141;
  *(_BYTE *)(W32GetUserGdiSessionState(v137) + 1) = 0;
  Pool2 = (__int64)CreateKernelEvent(NotificationEvent, 1u);
  *(_QWORD *)(W32GetUserGdiSessionState(v138) + 8) = Pool2;
  LOBYTE(Pool2) = 0;
  if ( !*(_QWORD *)(W32GetUserGdiSessionState(v139) + 8) )
    goto LABEL_141;
  *(_DWORD *)(W32GetUserSessionState(v140) + 69136) = 0;
  W32GetUserSessionState(v141);
  Pool2 = (__int64)CreateKernelSemaphore(0, 0x7FFFFFFF);
  *(_QWORD *)(W32GetUserSessionState(v142) + 69128) = Pool2;
  W32GetUserSessionState(v143);
  LOBYTE(Pool2) = 0;
  if ( !*(_QWORD *)(W32GetUserSessionState(v144) + 69128) )
    goto LABEL_141;
  *(_DWORD *)(W32GetUserSessionState(v145) + 18840) = 0;
  Pool2 = (__int64)CreateKernelSemaphore(0, 0x7FFFFFFF);
  *(_QWORD *)(W32GetUserSessionState(v146) + 18832) = Pool2;
  LOBYTE(Pool2) = 0;
  if ( !*(_QWORD *)(W32GetUserSessionState(v147) + 18832) )
    goto LABEL_141;
  RtlLoadStringOrError(0x268u, v185, 80, 0);
  if ( v5 )
    hModuleWin = (void *)MmUserProbeAddress;
  if ( !(unsigned __int8)InitializeGre() )
    goto LABEL_141;
  v149 = W32GetUserSessionState(v148);
  *(_WORD *)(v149 + 20662) = 1;
  *(_QWORD *)(v149 + 20608) = v149 + 20576;
  v150 = Win32UserInitialize(v5);
  LODWORD(v11) = v150;
  if ( v150 < 0 )
  {
    if ( v5 )
      KeBugCheckEx(0x164u, 0x3EuLL, v150, 0LL, 0LL);
    goto LABEL_41;
  }
  Pool2 = MEMORY[0xFFFFF78000000008];
  *(_QWORD *)(W32GetUserSessionState(v151) + 63504) = Pool2;
  v152 = InitializePowerGlobals();
  LOBYTE(Pool2) = 0;
  LODWORD(v11) = v152;
  if ( v152 < 0 )
  {
    if ( v5 )
      KeBugCheckEx(0x164u, 0x3EuLL, v152, 0LL, 0LL);
    goto LABEL_41;
  }
  if ( !*(_DWORD *)(W32GetUserSessionState(v153) + 68868) || *(_DWORD *)(W32GetUserSessionState(v154) + 68876) )
  {
    CurrentDisplayState = RetrieveCurrentDisplayState(v154);
    LODWORD(v11) = CurrentDisplayState;
    if ( CurrentDisplayState < 0 )
    {
      if ( v5 )
        KeBugCheckEx(0x164u, 0x3EuLL, CurrentDisplayState, 0LL, 0LL);
      goto LABEL_41;
    }
    LODWORD(v180) = *(_DWORD *)(W32GetUserSessionState(v156) + 2756) != 0 ? 3 : 0;
    ZwUpdateWnfStateData(&WNF_PO_PRIMARY_DISPLAY_LOGICAL_STATE, &v180, 4LL, 0LL, 0LL);
  }
  v157 = (struct _EX_RUNDOWN_REF *)W32GetUserSessionState(v154);
  ExInitializeRundownProtection(v157 + 7946);
  v158 = InputInitialize();
  LODWORD(v11) = v158;
  if ( v158 < 0 )
  {
    if ( v5 )
      KeBugCheckEx(0x164u, 0x3EuLL, v158, 0LL, 0LL);
    goto LABEL_41;
  }
  v160 = OPMInitialize(v159);
  LODWORD(v11) = v160;
  if ( v160 < 0 )
  {
    if ( v5 )
      KeBugCheckEx(0x164u, 0x3EuLL, v160, 0LL, 0LL);
    goto LABEL_41;
  }
  v164 = *(_QWORD *)(W32GetWin32kBaseApiSetTable(v162, v161) + 48);
  v165 = *(int (**)(void))(v164 + 392);
  if ( v165 && v165() >= 0 )
  {
    v166 = *(__int64 (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v164, v163) + 48) + 400LL);
    if ( !v166 )
    {
      LODWORD(v11) = -1073741637;
      goto LABEL_206;
    }
    LODWORD(v11) = v166();
    if ( (v11 & 0x80000000) != 0LL )
    {
LABEL_206:
      if ( v5 )
        KeBugCheckEx(0x164u, 0x3EuLL, (int)v11, 0LL, 0LL);
      goto LABEL_41;
    }
  }
  v168 = *(_QWORD *)(W32GetWin32kBaseApiSetTable(v164, v163) + 48);
  v169 = *(int (**)(void))(v168 + 408);
  if ( v169 && v169() >= 0 )
  {
    v170 = *(__int64 (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v168, v167) + 48) + 416LL);
    if ( !v170 )
    {
      LODWORD(v11) = -1073741637;
      goto LABEL_214;
    }
    LODWORD(v11) = v170();
    if ( (v11 & 0x80000000) != 0LL )
    {
LABEL_214:
      if ( v5 )
        KeBugCheckEx(0x164u, 0x3EuLL, (int)v11, 0LL, 0LL);
      goto LABEL_41;
    }
  }
  v171 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v168, v167) + 48) + 4280LL);
  if ( v171 && v171() >= 0 )
  {
    v174 = *(__int64 (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v173, v172) + 48) + 4288LL);
    if ( !v174 )
    {
      LODWORD(v11) = -1073741637;
      goto LABEL_222;
    }
    LODWORD(v11) = v174();
    if ( (v11 & 0x80000000) != 0LL )
    {
LABEL_222:
      if ( v5 )
        KeBugCheckEx(0x164u, 0x3EuLL, (int)v11, 0LL, 0LL);
      goto LABEL_41;
    }
  }
  if ( !v5 )
  {
    *(_QWORD *)&v182.Length = 48LL;
    *(_OWORD *)&v182.SecurityDescriptor = 0LL;
    *(_QWORD *)&v182.Attributes = 512LL;
    v182.RootDirectory = 0LL;
    v182.ObjectName = 0LL;
    ClientId.UniqueProcess = PsGetCurrentProcessId();
    ClientId.UniqueThread = 0LL;
    v176 = W32GetUserSessionState(v175);
    if ( ZwOpenProcess((PHANDLE)(v176 + 36448), 0x1000u, &v182, &ClientId) < 0 )
      *(_QWORD *)(W32GetUserSessionState(v177) + 36448) = 0LL;
  }
  ReportUsageForAllVelocityKeys();
  CTempW32ThreadNonPaged::~CTempW32ThreadNonPaged((CTempW32ThreadNonPaged *)v184);
  return 0LL;
}
