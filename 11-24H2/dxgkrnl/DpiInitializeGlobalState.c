/*
 * XREFs of DpiInitializeGlobalState @ 0x1404359E8
 * Callers:
 *     DriverEntry @ 0x140435078 (DriverEntry.c)
 * Callees:
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x14002D590 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     Feature_ForceConnectionDetectionOnDcToAc__private_IsEnabledDeviceUsageNoInline @ 0x14007C80C (Feature_ForceConnectionDetectionOnDcToAc__private_IsEnabledDeviceUsageNoInline.c)
 *     ?DpiCreateNtObjectTypes@@YAJXZ @ 0x14007C92C (-DpiCreateNtObjectTypes@@YAJXZ.c)
 *     ?Init@DISPLAY_MUX_MGR@@QEAAJXZ @ 0x140085064 (-Init@DISPLAY_MUX_MGR@@QEAAJXZ.c)
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400A1CA0 (_guard_dispatch_icall.c)
 *     memset @ 0x1400A2000 (memset.c)
 *     DpiIndirectDisplayInitialStartTracker @ 0x14024F7EC (DpiIndirectDisplayInitialStartTracker.c)
 *     DpiKsrRestore @ 0x140250FC0 (DpiKsrRestore.c)
 *     ?DxgkCreateFeatureDatabase@@YAJPEBU_UNICODE_STRING@@PEBU_DXGKDDI_FEATURE_INTERFACE@@_N2PEAPEAUDXGK_FEATURE_DATABASE@@@Z @ 0x1402884A0 (-DxgkCreateFeatureDatabase@@YAJPEBU_UNICODE_STRING@@PEBU_DXGKDDI_FEATURE_INTERFACE@@_N2PEAPEAUDX.c)
 */

__int64 DpiInitializeGlobalState()
{
  char v0; // si
  char v1; // di
  int v2; // eax
  int v3; // eax
  int v4; // eax
  int v5; // eax
  NTSTATUS v6; // eax
  NTSTATUS v7; // eax
  __int64 v8; // rbx
  NTSTATUS v9; // eax
  PPHYSICAL_MEMORY_RANGE PhysicalMemoryRanges; // rax
  PPHYSICAL_MEMORY_RANGE v11; // r8
  LARGE_INTEGER *p_NumberOfBytes; // rax
  int v13; // r9d
  LONGLONG QuadPart; // rcx
  PHYSICAL_ADDRESS *p_BaseAddress; // rdx
  __int64 v16; // rdx
  struct _KMUTANT *Pool2; // rax
  struct _KMUTANT *v18; // rax
  NTSTATUS v19; // eax
  int v20; // eax
  __int64 v21; // rax
  int v22; // eax
  int NtObjectTypes; // eax
  int v25; // [rsp+40h] [rbp-478h] BYREF
  int v26; // [rsp+44h] [rbp-474h] BYREF
  int v27; // [rsp+48h] [rbp-470h] BYREF
  unsigned int v28; // [rsp+4Ch] [rbp-46Ch] BYREF
  int v29; // [rsp+50h] [rbp-468h] BYREF
  int v30; // [rsp+54h] [rbp-464h] BYREF
  int v31; // [rsp+58h] [rbp-460h] BYREF
  int v32; // [rsp+5Ch] [rbp-45Ch] BYREF
  int v33; // [rsp+60h] [rbp-458h] BYREF
  int v34; // [rsp+64h] [rbp-454h] BYREF
  void *KeyHandle; // [rsp+68h] [rbp-450h] BYREF
  int v36; // [rsp+70h] [rbp-448h] BYREF
  int v37; // [rsp+74h] [rbp-444h] BYREF
  int Data; // [rsp+78h] [rbp-440h] BYREF
  int v39; // [rsp+7Ch] [rbp-43Ch] BYREF
  int v40; // [rsp+80h] [rbp-438h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+88h] [rbp-430h] BYREF
  int v42; // [rsp+98h] [rbp-420h] BYREF
  _QWORD v43[2]; // [rsp+A0h] [rbp-418h] BYREF
  _QWORD v44[2]; // [rsp+B0h] [rbp-408h] BYREF
  UNICODE_STRING SourceString; // [rsp+C0h] [rbp-3F8h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+D0h] [rbp-3E8h] BYREF
  struct _UNICODE_STRING UnicodeString; // [rsp+100h] [rbp-3B8h] BYREF
  __int64 v48; // [rsp+110h] [rbp-3A8h] BYREF
  int v49; // [rsp+118h] [rbp-3A0h]
  const wchar_t *v50; // [rsp+120h] [rbp-398h]
  int *v51; // [rsp+128h] [rbp-390h]
  int v52; // [rsp+130h] [rbp-388h]
  int *v53; // [rsp+138h] [rbp-380h]
  int v54; // [rsp+140h] [rbp-378h]
  __int64 v55; // [rsp+148h] [rbp-370h]
  int v56; // [rsp+150h] [rbp-368h]
  __int64 v57; // [rsp+158h] [rbp-360h]
  __int128 v58; // [rsp+160h] [rbp-358h]
  __int128 v59; // [rsp+170h] [rbp-348h]
  __int64 v60; // [rsp+180h] [rbp-338h] BYREF
  int v61; // [rsp+188h] [rbp-330h]
  const wchar_t *v62; // [rsp+190h] [rbp-328h]
  int *v63; // [rsp+198h] [rbp-320h]
  int v64; // [rsp+1A0h] [rbp-318h]
  int *v65; // [rsp+1A8h] [rbp-310h]
  int v66; // [rsp+1B0h] [rbp-308h]
  __int64 v67; // [rsp+1B8h] [rbp-300h]
  int v68; // [rsp+1C0h] [rbp-2F8h]
  __int64 v69; // [rsp+1C8h] [rbp-2F0h]
  __int128 v70; // [rsp+1D0h] [rbp-2E8h]
  __int128 v71; // [rsp+1E0h] [rbp-2D8h]
  __int64 v72; // [rsp+1F0h] [rbp-2C8h] BYREF
  int v73; // [rsp+1F8h] [rbp-2C0h]
  const wchar_t *v74; // [rsp+200h] [rbp-2B8h]
  int *v75; // [rsp+208h] [rbp-2B0h]
  int v76; // [rsp+210h] [rbp-2A8h]
  int *v77; // [rsp+218h] [rbp-2A0h]
  int v78; // [rsp+220h] [rbp-298h]
  __int64 v79; // [rsp+228h] [rbp-290h]
  int v80; // [rsp+230h] [rbp-288h]
  const wchar_t *v81; // [rsp+238h] [rbp-280h]
  int *v82; // [rsp+240h] [rbp-278h]
  int v83; // [rsp+248h] [rbp-270h]
  int *v84; // [rsp+250h] [rbp-268h]
  int v85; // [rsp+258h] [rbp-260h]
  __int64 v86; // [rsp+260h] [rbp-258h]
  int v87; // [rsp+268h] [rbp-250h]
  const wchar_t *v88; // [rsp+270h] [rbp-248h]
  int *v89; // [rsp+278h] [rbp-240h]
  int v90; // [rsp+280h] [rbp-238h]
  int *v91; // [rsp+288h] [rbp-230h]
  int v92; // [rsp+290h] [rbp-228h]
  __int64 v93; // [rsp+298h] [rbp-220h]
  int v94; // [rsp+2A0h] [rbp-218h]
  __int64 v95; // [rsp+2A8h] [rbp-210h]
  __int128 v96; // [rsp+2B0h] [rbp-208h]
  __int128 v97; // [rsp+2C0h] [rbp-1F8h]
  __int64 v98; // [rsp+2D0h] [rbp-1E8h] BYREF
  int v99; // [rsp+2D8h] [rbp-1E0h]
  const wchar_t *v100; // [rsp+2E0h] [rbp-1D8h]
  unsigned int *v101; // [rsp+2E8h] [rbp-1D0h]
  int v102; // [rsp+2F0h] [rbp-1C8h]
  unsigned int *v103; // [rsp+2F8h] [rbp-1C0h]
  int v104; // [rsp+300h] [rbp-1B8h]
  __int64 v105; // [rsp+308h] [rbp-1B0h]
  int v106; // [rsp+310h] [rbp-1A8h]
  const wchar_t *v107; // [rsp+318h] [rbp-1A0h]
  int *v108; // [rsp+320h] [rbp-198h]
  int v109; // [rsp+328h] [rbp-190h]
  int *v110; // [rsp+330h] [rbp-188h]
  int v111; // [rsp+338h] [rbp-180h]
  __int64 v112; // [rsp+340h] [rbp-178h]
  int v113; // [rsp+348h] [rbp-170h]
  const wchar_t *v114; // [rsp+350h] [rbp-168h]
  int *v115; // [rsp+358h] [rbp-160h]
  int v116; // [rsp+360h] [rbp-158h]
  int *v117; // [rsp+368h] [rbp-150h]
  int v118; // [rsp+370h] [rbp-148h]
  __int64 v119; // [rsp+378h] [rbp-140h]
  int v120; // [rsp+380h] [rbp-138h]
  __int64 v121; // [rsp+388h] [rbp-130h]
  __int128 v122; // [rsp+390h] [rbp-128h]
  __int128 v123; // [rsp+3A0h] [rbp-118h]
  __int64 v124; // [rsp+3B0h] [rbp-108h] BYREF
  int v125; // [rsp+3B8h] [rbp-100h]
  const wchar_t *v126; // [rsp+3C0h] [rbp-F8h]
  int *v127; // [rsp+3C8h] [rbp-F0h]
  int v128; // [rsp+3D0h] [rbp-E8h]
  int *v129; // [rsp+3D8h] [rbp-E0h]
  int v130; // [rsp+3E0h] [rbp-D8h]
  __int64 v131; // [rsp+3E8h] [rbp-D0h]
  int v132; // [rsp+3F0h] [rbp-C8h]
  const wchar_t *v133; // [rsp+3F8h] [rbp-C0h]
  int *v134; // [rsp+400h] [rbp-B8h]
  int v135; // [rsp+408h] [rbp-B0h]
  int *v136; // [rsp+410h] [rbp-A8h]
  int v137; // [rsp+418h] [rbp-A0h]
  __int64 v138; // [rsp+420h] [rbp-98h]
  int v139; // [rsp+428h] [rbp-90h]
  const wchar_t *v140; // [rsp+430h] [rbp-88h]
  int *v141; // [rsp+438h] [rbp-80h]
  int v142; // [rsp+440h] [rbp-78h]
  int *v143; // [rsp+448h] [rbp-70h]
  int v144; // [rsp+450h] [rbp-68h]
  __int64 v145; // [rsp+458h] [rbp-60h]
  int v146; // [rsp+460h] [rbp-58h]
  __int64 v147; // [rsp+468h] [rbp-50h]
  __int128 v148; // [rsp+470h] [rbp-48h]
  __int128 v149; // [rsp+480h] [rbp-38h]

  v43[0] = 3932218LL;
  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  v43[1] = L"Kernel-OneCore-DeviceFamilyID";
  KeyHandle = 0LL;
  Data = 0;
  v39 = 0;
  v37 = 0;
  v36 = 0;
  UnicodeString = 0LL;
  v0 = 0;
  v1 = 0;
  DestinationString = 0LL;
  v2 = ZwQueryLicenseValue(v43, &v37, &dword_140161378, 4LL, &v36);
  if ( v2 < 0 )
  {
    WdLogSingleEntry1(2LL, v2);
    WdLogGlobalForLineNumber = 4348;
    dword_140161378 = 3;
  }
  v44[0] = 2490404LL;
  v44[1] = L"Kernel-ProductInfo";
  v3 = ZwQueryLicenseValue(v44, &v37, &dword_14016137C, 4LL, &v36);
  if ( v3 < 0 )
  {
    WdLogSingleEntry1(2LL, v3);
    WdLogGlobalForLineNumber = 4364;
    dword_14016137C = 0;
  }
  if ( RtlCheckRegistryKey(2u, (PWSTR)L"GraphicsDrivers\\DisableUSWC") >= 0 )
    byte_140160D10 = 1;
  g_bDMgrIsSetupRunning = DMgrIsSetupRunning();
  if ( g_bDMgrIsSetupRunning == 1 )
    byte_140160D11 = 1;
  if ( (unsigned __int8)ExIsSoftBoot() )
    DpiKsrRestore();
  dword_1401611E4 = 7236;
  v76 = 67108868;
  v83 = 67108868;
  v90 = 67108868;
  v74 = L"MiracastDefaultRtspPort";
  v25 = 0;
  v75 = &dword_1401611E4;
  v77 = &dword_1401611E4;
  v26 = 500000;
  v81 = L"PlatformSupportMiracast";
  v72 = 0LL;
  v82 = &v25;
  v84 = &v25;
  v88 = L"SuspendAdapterTimerPeriod";
  v89 = &v26;
  v91 = &v26;
  v73 = 288;
  v78 = 4;
  v79 = 0LL;
  v80 = 288;
  v85 = 4;
  v86 = 0LL;
  v87 = 288;
  v92 = 4;
  v93 = 0LL;
  v94 = 0;
  v95 = 0LL;
  v96 = 0LL;
  v97 = 0LL;
  v4 = RtlQueryRegistryValuesEx(2LL, L"GraphicsDrivers", &v72, 0LL, 0LL);
  if ( (v4 < 0 || !dword_1401611E4) && (dword_1401611E4 = 7236, v4 < 0) || (byte_140160D16 = 1, !v25) )
    byte_140160D16 = 0;
  v27 = 0;
  DueTime.QuadPart = -v26;
  v48 = 0LL;
  v50 = L"SupportMultipleIntegratedDisplays";
  v49 = 288;
  v51 = &v27;
  v52 = 67108868;
  v53 = &v27;
  v54 = 4;
  v55 = 0LL;
  v56 = 0;
  v57 = 0LL;
  v58 = 0LL;
  v59 = 0LL;
  byte_140160D18 = (int)RtlQueryRegistryValuesEx(2LL, L"GraphicsDrivers", &v48, 0LL, 0LL) >= 0 && v27 != 0;
  v28 = 0;
  v102 = 67108868;
  v109 = 67108868;
  v100 = L"HwSchMode";
  v116 = 67108868;
  v101 = &v28;
  v30 = 1;
  v103 = &v28;
  v29 = 0;
  v107 = L"HwSchOverrideBlockList";
  v98 = 0LL;
  v108 = &v30;
  v110 = &v30;
  v114 = L"HwSchTreatExperimentalAsStable";
  v115 = &v29;
  v117 = &v29;
  v99 = 288;
  v104 = 4;
  v105 = 0LL;
  v106 = 288;
  v111 = 4;
  v112 = 0LL;
  v113 = 288;
  v118 = 4;
  v119 = 0LL;
  v120 = 0;
  v121 = 0LL;
  v122 = 0LL;
  v123 = 0LL;
  v5 = RtlQueryRegistryValuesEx(2LL, L"GraphicsDrivers", &v98, 0LL, 0LL);
  if ( v5 >= 0 && v28 < 3 )
  {
    dword_140160D38 = v28;
    goto LABEL_23;
  }
  dword_140160D38 = 0;
  if ( v5 >= 0 )
  {
LABEL_23:
    byte_140160D3C = 0;
    byte_140160D3D = v29 != 0;
    if ( !v30 )
      goto LABEL_25;
  }
  byte_140160D3C = 1;
LABEL_25:
  v33 = 0;
  v31 = -1;
  v32 = -1;
  v124 = 0LL;
  v128 = 67108868;
  v135 = 67108868;
  v126 = L"EnableBasicDisplayFallback";
  v142 = 67108868;
  v127 = &v31;
  v125 = 288;
  v129 = &v31;
  v133 = L"DisableBasicDisplayFallback";
  v134 = &v32;
  v136 = &v32;
  v140 = L"ForcePreserveBootDisplay";
  v141 = &v33;
  v143 = &v33;
  v130 = 4;
  v131 = 0LL;
  v132 = 288;
  v137 = 4;
  v138 = 0LL;
  v139 = 288;
  v144 = 4;
  v145 = 0LL;
  v146 = 0;
  v147 = 0LL;
  v148 = 0LL;
  v149 = 0LL;
  if ( (int)RtlQueryRegistryValuesEx(2LL, L"GraphicsDrivers\\BasicDisplay", &v124, 0LL, 0LL) >= 0 )
  {
    if ( v31 != 1 && v32 == 1 )
      byte_140160D12 = 1;
    byte_140160D13 = v33 == 1;
  }
  v34 = 0;
  v60 = 0LL;
  v62 = L"ForceBddFallbackOnly";
  v61 = 288;
  v63 = &v34;
  v64 = 67108868;
  v65 = &v34;
  v66 = 4;
  v67 = 0LL;
  v68 = 0;
  v69 = 0LL;
  v70 = 0LL;
  v71 = 0LL;
  if ( (int)RtlQueryRegistryValuesEx(2LL, L"GraphicsDrivers", &v60, 0LL, 0LL) >= 0 )
    byte_140161388 = v34 != 0;
  RtlInitUnicodeString(&DestinationString, L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Video\\");
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  ObjectAttributes.ObjectName = &DestinationString;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v6 = ZwCreateKey(&KeyHandle, 0xCu, &ObjectAttributes, 0, 0LL, 0, 0LL);
  if ( v6 < 0 )
  {
    if ( v6 != -1073741771 )
    {
      WdLogSingleEntry1(2LL, v6);
      WdLogGlobalForLineNumber = 4599;
    }
  }
  else
  {
    ZwClose(KeyHandle);
  }
  RtlInitUnicodeString(&DestinationString, L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\GraphicsDrivers");
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v7 = ZwOpenKey(&KeyHandle, 0x40000000u, &ObjectAttributes);
  LODWORD(v8) = v7;
  if ( v7 < 0 )
  {
    WdLogSingleEntry1(2LL, v7);
    WdLogGlobalForLineNumber = 4624;
LABEL_73:
    if ( qword_140160F90 )
      IoFreeWorkItem(qword_140160F90);
    if ( v1 == 1 )
      ExDeleteNPagedLookasideList(&stru_140160E00);
    if ( qword_140160FB0 )
    {
      ExFreePoolWithTag(qword_140160FB0, 0);
      qword_140160FB0 = 0LL;
    }
    if ( v0 == 1 )
      ExDeleteNPagedLookasideList(&Lookaside);
    if ( Mutex )
    {
      ExFreePoolWithTag(Mutex, 0);
      Mutex = 0LL;
    }
    goto LABEL_83;
  }
  Data = 69639;
  RtlInitUnicodeString(&DestinationString, L"DxgKrnlVersion");
  v9 = ZwSetValueKey(KeyHandle, &DestinationString, 0, 4u, &Data, 4u);
  v8 = v9;
  if ( v9 < 0 )
  {
    ZwClose(KeyHandle);
    WdLogSingleEntry1(2LL, v8);
    WdLogGlobalForLineNumber = 4646;
    goto LABEL_73;
  }
  v39 = 20499;
  RtlInitUnicodeString(&DestinationString, L"MinDxgKrnlVersion");
  v8 = ZwSetValueKey(KeyHandle, &DestinationString, 0, 4u, &v39, 4u);
  ZwClose(KeyHandle);
  if ( (int)v8 < 0 )
  {
    WdLogSingleEntry1(2LL, v8);
    WdLogGlobalForLineNumber = 4668;
    goto LABEL_73;
  }
  DpGlobals = 0LL;
  PhysicalMemoryRanges = MmGetPhysicalMemoryRanges();
  v11 = PhysicalMemoryRanges;
  if ( !PhysicalMemoryRanges )
  {
    LODWORD(v8) = -1073741670;
    WdLogSingleEntry1(6LL, -1073741670LL);
    WdLogGlobalForLineNumber = 4692;
    goto LABEL_73;
  }
  p_NumberOfBytes = &PhysicalMemoryRanges->NumberOfBytes;
  v13 = 0;
  QuadPart = p_NumberOfBytes->QuadPart;
  if ( p_NumberOfBytes->QuadPart )
  {
    p_BaseAddress = &v11->BaseAddress;
    do
    {
      DpGlobals += QuadPart;
      v16 = p_NumberOfBytes->QuadPart + p_BaseAddress->QuadPart;
      if ( v16 > *(&DpGlobals + 1) )
        *(&DpGlobals + 1) = v16;
      p_BaseAddress = &v11[++v13].BaseAddress;
      p_NumberOfBytes = p_BaseAddress + 1;
      QuadPart = p_BaseAddress[1].QuadPart;
    }
    while ( QuadPart );
  }
  ExFreePoolWithTag(v11, 0);
  Pool2 = (struct _KMUTANT *)ExAllocatePool2(64LL, 56LL, 1953656900LL);
  Mutex = Pool2;
  if ( !Pool2 )
  {
    LODWORD(v8) = -1073741801;
    WdLogSingleEntry1(6LL, -1073741801LL);
    WdLogGlobalForLineNumber = 4736;
    goto LABEL_73;
  }
  KeInitializeMutex(Pool2, 0);
  word_140160D60 = 0;
  qword_140160D50 = (__int64)&qword_140160D48;
  qword_140160D48 = (__int64)&qword_140160D48;
  KeInitializeEvent(&stru_140160D68, NotificationEvent, 0);
  byte_140160D62 = 0;
  ExInitializeNPagedLookasideList(&Lookaside, 0LL, 0LL, 0x200u, 0x58uLL, 0x74727044u, 0);
  v0 = 1;
  v18 = (struct _KMUTANT *)ExAllocatePool2(64LL, 56LL, 1953656900LL);
  qword_140160FB0 = v18;
  if ( !v18 )
  {
    LODWORD(v8) = -1073741801;
    WdLogSingleEntry1(6LL, -1073741801LL);
    WdLogGlobalForLineNumber = 4782;
    goto LABEL_73;
  }
  KeInitializeMutex(v18, 0);
  dword_140160F98 = 0;
  qword_140160FA8 = (__int64)&qword_140160FA0;
  qword_140160FA0 = (__int64)&qword_140160FA0;
  KeInitializeTimerEx(&stru_140160F10, SynchronizationTimer);
  KeInitializeDpc(&stru_140160F50, (PKDEFERRED_ROUTINE)DpiPdoPollingDpc, 0LL);
  qword_140160F90 = IoAllocateWorkItem(g_pDriverObject);
  if ( !qword_140160F90 )
  {
    LODWORD(v8) = -1073741801;
    WdLogSingleEntry1(6LL, -1073741801LL);
    WdLogGlobalForLineNumber = 4800;
    goto LABEL_73;
  }
  ExInitializeNPagedLookasideList(&stru_140160E00, 0LL, 0LL, 0x200u, 0x30uLL, 0x74727044u, 0);
  byte_140161160 = 0;
  v1 = 1;
  KeInitializeMutex(&stru_140161168, 0);
  v40 = 2;
  qword_1401611A8 = (__int64)&qword_1401611A0;
  qword_1401611A0 = (__int64)&qword_1401611A0;
  v42 = 4;
  if ( ((int (__fastcall *)(__int64, __int64, int *, int *))HalDispatchTable->HalQuerySystemInformation)(
         9LL,
         4LL,
         &v40,
         &v42) < 0
    || (byte_140160D15 = 1, v40 == 2) )
  {
    byte_140160D15 = 0;
  }
  dword_140161114 = -1;
  byte_140160D14 = 0;
  KeInitializeSpinLock(&SpinLock);
  qword_1401611C8 = (__int64)&qword_1401611C0;
  qword_1401611C0 = (__int64)&qword_1401611C0;
  dword_1401611E0 = 0;
  qword_1401611D8 = (__int64)&qword_1401611D0;
  qword_1401611D0 = (__int64)&qword_1401611D0;
  v19 = IoRegisterPlugPlayNotification(
          EventCategoryDeviceInterfaceChange,
          1u,
          &GUID_DEVINTERFACE_UMDF_MIRACAST_DIVICE_ARRIVAL,
          (PDRIVER_OBJECT)g_pDriverObject,
          (PDRIVER_NOTIFICATION_CALLBACK_ROUTINE)DpiMiracastInterfaceChange,
          0LL,
          &NotificationEntry);
  LODWORD(v8) = v19;
  if ( v19 < 0 )
  {
    WdLogSingleEntry1(2LL, v19);
    WdLogGlobalForLineNumber = 4875;
    NotificationEntry = 0LL;
    goto LABEL_73;
  }
  *(_QWORD *)&SourceString.Length = 8781956LL;
  SourceString.Buffer = (wchar_t *)L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\GraphicsDrivers";
  v20 = DxgkCreateFeatureDatabase(&SourceString, 0LL, 1, 0, &qword_140161390);
  LODWORD(v8) = v20;
  if ( v20 < 0 )
  {
    WdLogSingleEntry1(2LL, v20);
    WdLogGlobalForLineNumber = 4890;
    goto LABEL_73;
  }
  IoWorkItem = 0LL;
  qword_140160EE8 = (__int64)&qword_140160EE0;
  qword_140160EE0 = (__int64)&qword_140160EE0;
  dword_140160EF0 = 0;
  qword_140160ED8 = 0LL;
  dword_140160EA0 = 1;
  qword_140160EA8 = 0LL;
  dword_140160EB0 = 0;
  KeInitializeEvent(&stru_140160EB8, SynchronizationEvent, 0);
  KeInitializeEvent(&Event, NotificationEvent, 1u);
  byte_1401612D0 = 0;
  KeInitializeMutex(&stru_1401612D8, 0);
  qword_140161318 = (__int64)&qword_140161310;
  qword_140161310 = &qword_140161310;
  DpiIndirectDisplayInitialStartTracker();
  byte_140160D1B = 0;
  qword_1401612A8 = 1LL;
  dword_14016115C = 0;
  v21 = operator new(0x168uLL, 0x4B677844u, 256LL);
  v8 = v21;
  if ( v21 )
  {
    *(_DWORD *)(v21 + 52) = -1;
    *(_QWORD *)(v21 + 24) = 0LL;
    *(_QWORD *)(v21 + 32) = 0LL;
    *(_DWORD *)(v21 + 48) = 0;
    *(_DWORD *)(v21 + 56) = 1;
    *(_QWORD *)(v21 + 64) = 0LL;
    *(_QWORD *)(v21 + 72) = 0LL;
    *(_QWORD *)(v21 + 88) = 0LL;
    *(_BYTE *)v21 = 0;
    *(_DWORD *)(v21 + 4) = 1;
    *(_BYTE *)(v21 + 8) = 0;
    *(_DWORD *)(v21 + 12) = 1;
    *(_QWORD *)(v21 + 40) = 0LL;
    *(_DWORD *)(v21 + 80) = 0;
    *(_BYTE *)(v21 + 84) = 0;
    *(_QWORD *)(v21 + 96) = 0LL;
    *(_QWORD *)(v21 + 104) = 0LL;
    *(_BYTE *)(v21 + 112) = 0;
    *(_OWORD *)(v21 + 116) = 0LL;
    *(_DWORD *)(v21 + 132) = 0;
    *(_QWORD *)(v21 + 136) = 0LL;
    *(_DWORD *)(v21 + 144) = 0;
    *(_BYTE *)(v21 + 148) = 0;
    memset((void *)(v21 + 149), 0, 0xD1uLL);
  }
  else
  {
    v8 = 0LL;
  }
  qword_140161380 = (DISPLAY_MUX_MGR *)v8;
  if ( !v8 )
  {
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 4932;
    LODWORD(v8) = -1073741801;
    goto LABEL_73;
  }
  v22 = DISPLAY_MUX_MGR::Init((PVOID)v8);
  LODWORD(v8) = v22;
  if ( v22 < 0 )
  {
    WdLogSingleEntry1(2LL, v22);
    WdLogGlobalForLineNumber = 4939;
    goto LABEL_73;
  }
  if ( (unsigned int)Feature_ForceConnectionDetectionOnDcToAc__private_IsEnabledDeviceUsageNoInline() )
    KeInitializeMutex(&Object, 0);
  NtObjectTypes = DpiCreateNtObjectTypes();
  LODWORD(v8) = NtObjectTypes;
  if ( NtObjectTypes < 0 )
  {
    WdLogSingleEntry1(2LL, NtObjectTypes);
    WdLogGlobalForLineNumber = 4955;
    goto LABEL_73;
  }
LABEL_83:
  RtlFreeUnicodeString(&UnicodeString);
  return (unsigned int)v8;
}
