/*
 * XREFs of DpiInitializeGlobalState @ 0x1404339E8
 * Callers:
 *     DriverEntry @ 0x140433078 (DriverEntry.c)
 * Callees:
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x14002CD80 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?DpiCreateNtObjectTypes@@YAJXZ @ 0x14007C438 (-DpiCreateNtObjectTypes@@YAJXZ.c)
 *     ?Init@DISPLAY_MUX_MGR@@QEAAJXZ @ 0x1400849D4 (-Init@DISPLAY_MUX_MGR@@QEAAJXZ.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14009F940 (_guard_dispatch_icall.c)
 *     memset @ 0x14009FCC0 (memset.c)
 *     DpiIndirectDisplayInitialStartTracker @ 0x1402489BC (DpiIndirectDisplayInitialStartTracker.c)
 *     DpiKsrRestore @ 0x14024A190 (DpiKsrRestore.c)
 *     ?DxgkCreateFeatureDatabase@@YAJPEBU_UNICODE_STRING@@PEBU_DXGKDDI_FEATURE_INTERFACE@@_N2PEAPEAUDXGK_FEATURE_DATABASE@@@Z @ 0x140280FF4 (-DxgkCreateFeatureDatabase@@YAJPEBU_UNICODE_STRING@@PEBU_DXGKDDI_FEATURE_INTERFACE@@_N2PEAPEAUDX.c)
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
  __int64 v17; // r9
  struct _KMUTANT *Pool2; // rax
  __int64 v19; // r9
  struct _KMUTANT *v20; // rax
  NTSTATUS v21; // eax
  int v22; // eax
  __int64 v23; // r9
  __int64 v24; // rax
  int v25; // eax
  int NtObjectTypes; // eax
  int v28; // [rsp+40h] [rbp-478h] BYREF
  int v29; // [rsp+44h] [rbp-474h] BYREF
  int v30; // [rsp+48h] [rbp-470h] BYREF
  unsigned int v31; // [rsp+4Ch] [rbp-46Ch] BYREF
  int v32; // [rsp+50h] [rbp-468h] BYREF
  int v33; // [rsp+54h] [rbp-464h] BYREF
  int v34; // [rsp+58h] [rbp-460h] BYREF
  int v35; // [rsp+5Ch] [rbp-45Ch] BYREF
  int v36; // [rsp+60h] [rbp-458h] BYREF
  int v37; // [rsp+64h] [rbp-454h] BYREF
  void *KeyHandle; // [rsp+68h] [rbp-450h] BYREF
  int v39; // [rsp+70h] [rbp-448h] BYREF
  int v40; // [rsp+74h] [rbp-444h] BYREF
  int Data; // [rsp+78h] [rbp-440h] BYREF
  int v42; // [rsp+7Ch] [rbp-43Ch] BYREF
  int v43; // [rsp+80h] [rbp-438h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+88h] [rbp-430h] BYREF
  int v45; // [rsp+98h] [rbp-420h] BYREF
  _QWORD v46[2]; // [rsp+A0h] [rbp-418h] BYREF
  _QWORD v47[2]; // [rsp+B0h] [rbp-408h] BYREF
  UNICODE_STRING SourceString; // [rsp+C0h] [rbp-3F8h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+D0h] [rbp-3E8h] BYREF
  struct _UNICODE_STRING UnicodeString; // [rsp+100h] [rbp-3B8h] BYREF
  __int64 v51; // [rsp+110h] [rbp-3A8h] BYREF
  int v52; // [rsp+118h] [rbp-3A0h]
  const wchar_t *v53; // [rsp+120h] [rbp-398h]
  int *v54; // [rsp+128h] [rbp-390h]
  int v55; // [rsp+130h] [rbp-388h]
  int *v56; // [rsp+138h] [rbp-380h]
  int v57; // [rsp+140h] [rbp-378h]
  __int64 v58; // [rsp+148h] [rbp-370h]
  int v59; // [rsp+150h] [rbp-368h]
  __int64 v60; // [rsp+158h] [rbp-360h]
  __int128 v61; // [rsp+160h] [rbp-358h]
  __int128 v62; // [rsp+170h] [rbp-348h]
  __int64 v63; // [rsp+180h] [rbp-338h] BYREF
  int v64; // [rsp+188h] [rbp-330h]
  const wchar_t *v65; // [rsp+190h] [rbp-328h]
  int *v66; // [rsp+198h] [rbp-320h]
  int v67; // [rsp+1A0h] [rbp-318h]
  int *v68; // [rsp+1A8h] [rbp-310h]
  int v69; // [rsp+1B0h] [rbp-308h]
  __int64 v70; // [rsp+1B8h] [rbp-300h]
  int v71; // [rsp+1C0h] [rbp-2F8h]
  __int64 v72; // [rsp+1C8h] [rbp-2F0h]
  __int128 v73; // [rsp+1D0h] [rbp-2E8h]
  __int128 v74; // [rsp+1E0h] [rbp-2D8h]
  __int64 v75; // [rsp+1F0h] [rbp-2C8h] BYREF
  int v76; // [rsp+1F8h] [rbp-2C0h]
  const wchar_t *v77; // [rsp+200h] [rbp-2B8h]
  int *v78; // [rsp+208h] [rbp-2B0h]
  int v79; // [rsp+210h] [rbp-2A8h]
  int *v80; // [rsp+218h] [rbp-2A0h]
  int v81; // [rsp+220h] [rbp-298h]
  __int64 v82; // [rsp+228h] [rbp-290h]
  int v83; // [rsp+230h] [rbp-288h]
  const wchar_t *v84; // [rsp+238h] [rbp-280h]
  int *v85; // [rsp+240h] [rbp-278h]
  int v86; // [rsp+248h] [rbp-270h]
  int *v87; // [rsp+250h] [rbp-268h]
  int v88; // [rsp+258h] [rbp-260h]
  __int64 v89; // [rsp+260h] [rbp-258h]
  int v90; // [rsp+268h] [rbp-250h]
  const wchar_t *v91; // [rsp+270h] [rbp-248h]
  int *v92; // [rsp+278h] [rbp-240h]
  int v93; // [rsp+280h] [rbp-238h]
  int *v94; // [rsp+288h] [rbp-230h]
  int v95; // [rsp+290h] [rbp-228h]
  __int64 v96; // [rsp+298h] [rbp-220h]
  int v97; // [rsp+2A0h] [rbp-218h]
  __int64 v98; // [rsp+2A8h] [rbp-210h]
  __int128 v99; // [rsp+2B0h] [rbp-208h]
  __int128 v100; // [rsp+2C0h] [rbp-1F8h]
  __int64 v101; // [rsp+2D0h] [rbp-1E8h] BYREF
  int v102; // [rsp+2D8h] [rbp-1E0h]
  const wchar_t *v103; // [rsp+2E0h] [rbp-1D8h]
  unsigned int *v104; // [rsp+2E8h] [rbp-1D0h]
  int v105; // [rsp+2F0h] [rbp-1C8h]
  unsigned int *v106; // [rsp+2F8h] [rbp-1C0h]
  int v107; // [rsp+300h] [rbp-1B8h]
  __int64 v108; // [rsp+308h] [rbp-1B0h]
  int v109; // [rsp+310h] [rbp-1A8h]
  const wchar_t *v110; // [rsp+318h] [rbp-1A0h]
  int *v111; // [rsp+320h] [rbp-198h]
  int v112; // [rsp+328h] [rbp-190h]
  int *v113; // [rsp+330h] [rbp-188h]
  int v114; // [rsp+338h] [rbp-180h]
  __int64 v115; // [rsp+340h] [rbp-178h]
  int v116; // [rsp+348h] [rbp-170h]
  const wchar_t *v117; // [rsp+350h] [rbp-168h]
  int *v118; // [rsp+358h] [rbp-160h]
  int v119; // [rsp+360h] [rbp-158h]
  int *v120; // [rsp+368h] [rbp-150h]
  int v121; // [rsp+370h] [rbp-148h]
  __int64 v122; // [rsp+378h] [rbp-140h]
  int v123; // [rsp+380h] [rbp-138h]
  __int64 v124; // [rsp+388h] [rbp-130h]
  __int128 v125; // [rsp+390h] [rbp-128h]
  __int128 v126; // [rsp+3A0h] [rbp-118h]
  __int64 v127; // [rsp+3B0h] [rbp-108h] BYREF
  int v128; // [rsp+3B8h] [rbp-100h]
  const wchar_t *v129; // [rsp+3C0h] [rbp-F8h]
  int *v130; // [rsp+3C8h] [rbp-F0h]
  int v131; // [rsp+3D0h] [rbp-E8h]
  int *v132; // [rsp+3D8h] [rbp-E0h]
  int v133; // [rsp+3E0h] [rbp-D8h]
  __int64 v134; // [rsp+3E8h] [rbp-D0h]
  int v135; // [rsp+3F0h] [rbp-C8h]
  const wchar_t *v136; // [rsp+3F8h] [rbp-C0h]
  int *v137; // [rsp+400h] [rbp-B8h]
  int v138; // [rsp+408h] [rbp-B0h]
  int *v139; // [rsp+410h] [rbp-A8h]
  int v140; // [rsp+418h] [rbp-A0h]
  __int64 v141; // [rsp+420h] [rbp-98h]
  int v142; // [rsp+428h] [rbp-90h]
  const wchar_t *v143; // [rsp+430h] [rbp-88h]
  int *v144; // [rsp+438h] [rbp-80h]
  int v145; // [rsp+440h] [rbp-78h]
  int *v146; // [rsp+448h] [rbp-70h]
  int v147; // [rsp+450h] [rbp-68h]
  __int64 v148; // [rsp+458h] [rbp-60h]
  int v149; // [rsp+460h] [rbp-58h]
  __int64 v150; // [rsp+468h] [rbp-50h]
  __int128 v151; // [rsp+470h] [rbp-48h]
  __int128 v152; // [rsp+480h] [rbp-38h]

  v46[0] = 3932218LL;
  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  v46[1] = L"Kernel-OneCore-DeviceFamilyID";
  KeyHandle = 0LL;
  Data = 0;
  v42 = 0;
  v40 = 0;
  v39 = 0;
  UnicodeString = 0LL;
  v0 = 0;
  v1 = 0;
  DestinationString = 0LL;
  v2 = ZwQueryLicenseValue(v46, &v40, &dword_14015E3B8, 4LL, &v39);
  if ( v2 < 0 )
  {
    WdLogSingleEntry1(2LL, v2);
    WdLogGlobalForLineNumber = 4348;
    dword_14015E3B8 = 3;
  }
  v47[0] = 2490404LL;
  v47[1] = L"Kernel-ProductInfo";
  v3 = ZwQueryLicenseValue(v47, &v40, &dword_14015E3BC, 4LL, &v39);
  if ( v3 < 0 )
  {
    WdLogSingleEntry1(2LL, v3);
    WdLogGlobalForLineNumber = 4364;
    dword_14015E3BC = 0;
  }
  if ( RtlCheckRegistryKey(2u, (PWSTR)L"GraphicsDrivers\\DisableUSWC") >= 0 )
    byte_14015DD50 = 1;
  g_bDMgrIsSetupRunning = DMgrIsSetupRunning();
  if ( g_bDMgrIsSetupRunning == 1 )
    byte_14015DD51 = 1;
  if ( (unsigned __int8)ExIsSoftBoot() )
    DpiKsrRestore();
  dword_14015E224 = 7236;
  v79 = 67108868;
  v86 = 67108868;
  v93 = 67108868;
  v77 = L"MiracastDefaultRtspPort";
  v28 = 0;
  v78 = &dword_14015E224;
  v80 = &dword_14015E224;
  v29 = 500000;
  v84 = L"PlatformSupportMiracast";
  v75 = 0LL;
  v85 = &v28;
  v87 = &v28;
  v91 = L"SuspendAdapterTimerPeriod";
  v92 = &v29;
  v94 = &v29;
  v76 = 288;
  v81 = 4;
  v82 = 0LL;
  v83 = 288;
  v88 = 4;
  v89 = 0LL;
  v90 = 288;
  v95 = 4;
  v96 = 0LL;
  v97 = 0;
  v98 = 0LL;
  v99 = 0LL;
  v100 = 0LL;
  v4 = RtlQueryRegistryValuesEx(2LL, L"GraphicsDrivers", &v75, 0LL, 0LL);
  if ( (v4 < 0 || !dword_14015E224) && (dword_14015E224 = 7236, v4 < 0) || (byte_14015DD56 = 1, !v28) )
    byte_14015DD56 = 0;
  v30 = 0;
  DueTime.QuadPart = -v29;
  v51 = 0LL;
  v53 = L"SupportMultipleIntegratedDisplays";
  v52 = 288;
  v54 = &v30;
  v55 = 67108868;
  v56 = &v30;
  v57 = 4;
  v58 = 0LL;
  v59 = 0;
  v60 = 0LL;
  v61 = 0LL;
  v62 = 0LL;
  byte_14015DD58 = (int)RtlQueryRegistryValuesEx(2LL, L"GraphicsDrivers", &v51, 0LL, 0LL) >= 0 && v30 != 0;
  v31 = 0;
  v105 = 67108868;
  v112 = 67108868;
  v103 = L"HwSchMode";
  v119 = 67108868;
  v104 = &v31;
  v33 = 1;
  v106 = &v31;
  v32 = 0;
  v110 = L"HwSchOverrideBlockList";
  v101 = 0LL;
  v111 = &v33;
  v113 = &v33;
  v117 = L"HwSchTreatExperimentalAsStable";
  v118 = &v32;
  v120 = &v32;
  v102 = 288;
  v107 = 4;
  v108 = 0LL;
  v109 = 288;
  v114 = 4;
  v115 = 0LL;
  v116 = 288;
  v121 = 4;
  v122 = 0LL;
  v123 = 0;
  v124 = 0LL;
  v125 = 0LL;
  v126 = 0LL;
  v5 = RtlQueryRegistryValuesEx(2LL, L"GraphicsDrivers", &v101, 0LL, 0LL);
  if ( v5 >= 0 && v31 < 3 )
  {
    dword_14015DD78 = v31;
    goto LABEL_23;
  }
  dword_14015DD78 = 0;
  if ( v5 >= 0 )
  {
LABEL_23:
    byte_14015DD7C = 0;
    byte_14015DD7D = v32 != 0;
    if ( !v33 )
      goto LABEL_25;
  }
  byte_14015DD7C = 1;
LABEL_25:
  v36 = 0;
  v34 = -1;
  v35 = -1;
  v127 = 0LL;
  v131 = 67108868;
  v138 = 67108868;
  v129 = L"EnableBasicDisplayFallback";
  v145 = 67108868;
  v130 = &v34;
  v128 = 288;
  v132 = &v34;
  v136 = L"DisableBasicDisplayFallback";
  v137 = &v35;
  v139 = &v35;
  v143 = L"ForcePreserveBootDisplay";
  v144 = &v36;
  v146 = &v36;
  v133 = 4;
  v134 = 0LL;
  v135 = 288;
  v140 = 4;
  v141 = 0LL;
  v142 = 288;
  v147 = 4;
  v148 = 0LL;
  v149 = 0;
  v150 = 0LL;
  v151 = 0LL;
  v152 = 0LL;
  if ( (int)RtlQueryRegistryValuesEx(2LL, L"GraphicsDrivers\\BasicDisplay", &v127, 0LL, 0LL) >= 0 )
  {
    if ( v34 != 1 && v35 == 1 )
      byte_14015DD52 = 1;
    byte_14015DD53 = v36 == 1;
  }
  v37 = 0;
  v63 = 0LL;
  v65 = L"ForceBddFallbackOnly";
  v64 = 288;
  v66 = &v37;
  v67 = 67108868;
  v68 = &v37;
  v69 = 4;
  v70 = 0LL;
  v71 = 0;
  v72 = 0LL;
  v73 = 0LL;
  v74 = 0LL;
  if ( (int)RtlQueryRegistryValuesEx(2LL, L"GraphicsDrivers", &v63, 0LL, 0LL) >= 0 )
    byte_14015E3C8 = v37 != 0;
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
  if ( v7 >= 0 )
  {
    Data = 69639;
    RtlInitUnicodeString(&DestinationString, L"DxgKrnlVersion");
    v9 = ZwSetValueKey(KeyHandle, &DestinationString, 0, 4u, &Data, 4u);
    v8 = v9;
    if ( v9 >= 0 )
    {
      v42 = 20499;
      RtlInitUnicodeString(&DestinationString, L"MinDxgKrnlVersion");
      v8 = ZwSetValueKey(KeyHandle, &DestinationString, 0, 4u, &v42, 4u);
      ZwClose(KeyHandle);
      if ( (int)v8 >= 0 )
      {
        DpGlobals = 0LL;
        PhysicalMemoryRanges = MmGetPhysicalMemoryRanges();
        v11 = PhysicalMemoryRanges;
        if ( PhysicalMemoryRanges )
        {
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
          Pool2 = (struct _KMUTANT *)ExAllocatePool2(64LL, 56LL, 1953656900LL, v17);
          Mutex = Pool2;
          if ( Pool2 )
          {
            KeInitializeMutex(Pool2, 0);
            word_14015DDA0 = 0;
            qword_14015DD90 = (__int64)&qword_14015DD88;
            qword_14015DD88 = (__int64)&qword_14015DD88;
            KeInitializeEvent(&stru_14015DDA8, NotificationEvent, 0);
            byte_14015DDA2 = 0;
            ExInitializeNPagedLookasideList(&Lookaside, 0LL, 0LL, 0x200u, 0x58uLL, 0x74727044u, 0);
            v0 = 1;
            v20 = (struct _KMUTANT *)ExAllocatePool2(64LL, 56LL, 1953656900LL, v19);
            qword_14015DFF0 = v20;
            if ( v20 )
            {
              KeInitializeMutex(v20, 0);
              dword_14015DFD8 = 0;
              qword_14015DFE8 = (__int64)&qword_14015DFE0;
              qword_14015DFE0 = (__int64)&qword_14015DFE0;
              KeInitializeTimerEx(&stru_14015DF50, SynchronizationTimer);
              KeInitializeDpc(&stru_14015DF90, (PKDEFERRED_ROUTINE)DpiPdoPollingDpc, 0LL);
              qword_14015DFD0 = IoAllocateWorkItem(g_pDriverObject);
              if ( qword_14015DFD0 )
              {
                ExInitializeNPagedLookasideList(&stru_14015DE40, 0LL, 0LL, 0x200u, 0x30uLL, 0x74727044u, 0);
                byte_14015E1A0 = 0;
                v1 = 1;
                KeInitializeMutex(&stru_14015E1A8, 0);
                v43 = 2;
                qword_14015E1E8 = (__int64)&qword_14015E1E0;
                qword_14015E1E0 = (__int64)&qword_14015E1E0;
                v45 = 4;
                if ( ((int (__fastcall *)(__int64, __int64, int *, int *))HalDispatchTable->HalQuerySystemInformation)(
                       9LL,
                       4LL,
                       &v43,
                       &v45) < 0
                  || (byte_14015DD55 = 1, v43 == 2) )
                {
                  byte_14015DD55 = 0;
                }
                dword_14015E154 = -1;
                byte_14015DD54 = 0;
                KeInitializeSpinLock(&SpinLock);
                qword_14015E208 = (__int64)&qword_14015E200;
                qword_14015E200 = (__int64)&qword_14015E200;
                dword_14015E220 = 0;
                qword_14015E218 = (__int64)&qword_14015E210;
                qword_14015E210 = (__int64)&qword_14015E210;
                v21 = IoRegisterPlugPlayNotification(
                        EventCategoryDeviceInterfaceChange,
                        1u,
                        &GUID_DEVINTERFACE_UMDF_MIRACAST_DIVICE_ARRIVAL,
                        (PDRIVER_OBJECT)g_pDriverObject,
                        (PDRIVER_NOTIFICATION_CALLBACK_ROUTINE)DpiMiracastInterfaceChange,
                        0LL,
                        &NotificationEntry);
                LODWORD(v8) = v21;
                if ( v21 >= 0 )
                {
                  *(_QWORD *)&SourceString.Length = 8781956LL;
                  SourceString.Buffer = (wchar_t *)L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\GraphicsDrivers";
                  v22 = DxgkCreateFeatureDatabase(&SourceString, 0LL, 1, 0LL, &qword_14015E3D0);
                  LODWORD(v8) = v22;
                  if ( v22 >= 0 )
                  {
                    IoWorkItem = 0LL;
                    qword_14015DF28 = (__int64)&qword_14015DF20;
                    qword_14015DF20 = (__int64)&qword_14015DF20;
                    dword_14015DF30 = 0;
                    qword_14015DF18 = 0LL;
                    dword_14015DEE0 = 1;
                    qword_14015DEE8 = 0LL;
                    dword_14015DEF0 = 0;
                    KeInitializeEvent(&stru_14015DEF8, SynchronizationEvent, 0);
                    KeInitializeEvent(&Event, NotificationEvent, 1u);
                    byte_14015E310 = 0;
                    KeInitializeMutex(&stru_14015E318, 0);
                    qword_14015E358 = (__int64)&qword_14015E350;
                    qword_14015E350 = &qword_14015E350;
                    DpiIndirectDisplayInitialStartTracker();
                    byte_14015DD5B = 0;
                    qword_14015E2E8 = 1LL;
                    dword_14015E19C = 0;
                    v24 = operator new(0x168uLL, 0x4B677844u, 256LL, v23);
                    v8 = v24;
                    if ( v24 )
                    {
                      *(_DWORD *)(v24 + 52) = -1;
                      *(_QWORD *)(v24 + 24) = 0LL;
                      *(_QWORD *)(v24 + 32) = 0LL;
                      *(_DWORD *)(v24 + 48) = 0;
                      *(_DWORD *)(v24 + 56) = 1;
                      *(_QWORD *)(v24 + 64) = 0LL;
                      *(_QWORD *)(v24 + 72) = 0LL;
                      *(_QWORD *)(v24 + 88) = 0LL;
                      *(_BYTE *)v24 = 0;
                      *(_DWORD *)(v24 + 4) = 1;
                      *(_BYTE *)(v24 + 8) = 0;
                      *(_DWORD *)(v24 + 12) = 1;
                      *(_QWORD *)(v24 + 40) = 0LL;
                      *(_DWORD *)(v24 + 80) = 0;
                      *(_BYTE *)(v24 + 84) = 0;
                      *(_QWORD *)(v24 + 96) = 0LL;
                      *(_QWORD *)(v24 + 104) = 0LL;
                      *(_BYTE *)(v24 + 112) = 0;
                      *(_OWORD *)(v24 + 116) = 0LL;
                      *(_DWORD *)(v24 + 132) = 0;
                      *(_QWORD *)(v24 + 136) = 0LL;
                      *(_DWORD *)(v24 + 144) = 0;
                      *(_BYTE *)(v24 + 148) = 0;
                      memset((void *)(v24 + 149), 0, 0xD1uLL);
                    }
                    else
                    {
                      v8 = 0LL;
                    }
                    qword_14015E3C0 = (DISPLAY_MUX_MGR *)v8;
                    if ( v8 )
                    {
                      v25 = DISPLAY_MUX_MGR::Init((PVOID)v8);
                      LODWORD(v8) = v25;
                      if ( v25 >= 0 )
                      {
                        NtObjectTypes = DpiCreateNtObjectTypes();
                        LODWORD(v8) = NtObjectTypes;
                        if ( NtObjectTypes >= 0 )
                          goto LABEL_81;
                        WdLogSingleEntry1(2LL, NtObjectTypes);
                        WdLogGlobalForLineNumber = 4950;
                      }
                      else
                      {
                        WdLogSingleEntry1(2LL, v25);
                        WdLogGlobalForLineNumber = 4939;
                      }
                    }
                    else
                    {
                      WdLogSingleEntry0(2LL);
                      WdLogGlobalForLineNumber = 4932;
                      LODWORD(v8) = -1073741801;
                    }
                  }
                  else
                  {
                    WdLogSingleEntry1(2LL, v22);
                    WdLogGlobalForLineNumber = 4890;
                  }
                }
                else
                {
                  WdLogSingleEntry1(2LL, v21);
                  WdLogGlobalForLineNumber = 4875;
                  NotificationEntry = 0LL;
                }
              }
              else
              {
                LODWORD(v8) = -1073741801;
                WdLogSingleEntry1(6LL, -1073741801LL);
                WdLogGlobalForLineNumber = 4800;
              }
            }
            else
            {
              LODWORD(v8) = -1073741801;
              WdLogSingleEntry1(6LL, -1073741801LL);
              WdLogGlobalForLineNumber = 4782;
            }
          }
          else
          {
            LODWORD(v8) = -1073741801;
            WdLogSingleEntry1(6LL, -1073741801LL);
            WdLogGlobalForLineNumber = 4736;
          }
        }
        else
        {
          LODWORD(v8) = -1073741670;
          WdLogSingleEntry1(6LL, -1073741670LL);
          WdLogGlobalForLineNumber = 4692;
        }
      }
      else
      {
        WdLogSingleEntry1(2LL, v8);
        WdLogGlobalForLineNumber = 4668;
      }
    }
    else
    {
      ZwClose(KeyHandle);
      WdLogSingleEntry1(2LL, v8);
      WdLogGlobalForLineNumber = 4646;
    }
  }
  else
  {
    WdLogSingleEntry1(2LL, v7);
    WdLogGlobalForLineNumber = 4624;
  }
  if ( qword_14015DFD0 )
    IoFreeWorkItem(qword_14015DFD0);
  if ( v1 == 1 )
    ExDeleteNPagedLookasideList(&stru_14015DE40);
  if ( qword_14015DFF0 )
  {
    ExFreePoolWithTag(qword_14015DFF0, 0);
    qword_14015DFF0 = 0LL;
  }
  if ( v0 == 1 )
    ExDeleteNPagedLookasideList(&Lookaside);
  if ( Mutex )
  {
    ExFreePoolWithTag(Mutex, 0);
    Mutex = 0LL;
  }
LABEL_81:
  RtlFreeUnicodeString(&UnicodeString);
  return (unsigned int)v8;
}
