/*
 * XREFs of DpiAddDevice @ 0x1402393B0
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ?AcquireMiniportListMutex@@YAXXZ @ 0x140041998 (-AcquireMiniportListMutex@@YAXXZ.c)
 *     ?ReleaseMiniportListMutex@@YAXXZ @ 0x1400419DC (-ReleaseMiniportListMutex@@YAXXZ.c)
 *     DxgkDiagCalcDuration1us @ 0x14004CE4C (DxgkDiagCalcDuration1us.c)
 *     McTemplateK0ppq_EtwWriteTransfer @ 0x14006199C (McTemplateK0ppq_EtwWriteTransfer.c)
 *     wcsncmp_0 @ 0x140064F45 (wcsncmp_0.c)
 *     DpiGetDeviceRegistryPaths @ 0x14007E3A4 (DpiGetDeviceRegistryPaths.c)
 *     DpiDxgkDdiLinkDevice @ 0x14008CB1C (DpiDxgkDdiLinkDevice.c)
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400A1CA0 (_guard_dispatch_icall.c)
 *     memset @ 0x1400A2000 (memset.c)
 *     ?DxgAllocateDiagnosticInfoArgs@@YAPEAU_DXGKARG_COLLECTDIAGNOSTICINFO@@W4_DXGK_DIAGNOSTICINFO_TYPE@@@Z @ 0x1401AAC34 (-DxgAllocateDiagnosticInfoArgs@@YAPEAU_DXGKARG_COLLECTDIAGNOSTICINFO@@W4_DXGK_DIAGNOSTICINFO_TYP.c)
 *     ?DxgCreateLiveDumpWithDriverBlob@@YAJPEAU_DEVICE_OBJECT@@K_K111PEAU_DXGKARG_COLLECTDIAGNOSTICINFO@@@Z @ 0x1401AAD20 (-DxgCreateLiveDumpWithDriverBlob@@YAJPEAU_DEVICE_OBJECT@@K_K111PEAU_DXGKARG_COLLECTDIAGNOSTICINF.c)
 *     ?DxgFreeDiagnosticInfoArgs@@YAXPEAU_DXGKARG_COLLECTDIAGNOSTICINFO@@@Z @ 0x1401AAF68 (-DxgFreeDiagnosticInfoArgs@@YAXPEAU_DXGKARG_COLLECTDIAGNOSTICINFO@@@Z.c)
 *     DpiFdoInitializeFdo @ 0x140242CBC (DpiFdoInitializeFdo.c)
 *     DpiFdoResetFdo @ 0x1402453A8 (DpiFdoResetFdo.c)
 *     DpiFdoDetectVgaDeviceInCapabilities @ 0x14024A1D0 (DpiFdoDetectVgaDeviceInCapabilities.c)
 *     DpiGetAgpStatus @ 0x14024A6A4 (DpiGetAgpStatus.c)
 *     DpiSetDeviceUsageType @ 0x14024ADD4 (DpiSetDeviceUsageType.c)
 *     DpiAcpiRegisterAcpiCallbacks @ 0x140252514 (DpiAcpiRegisterAcpiCallbacks.c)
 *     DpiAcpiUnregisterAcpiCallbacks @ 0x140252810 (DpiAcpiUnregisterAcpiCallbacks.c)
 *     DpiLdaLinkDeviceToChain @ 0x14025379C (DpiLdaLinkDeviceToChain.c)
 *     DpiLdaUnLinkDeviceFromChain @ 0x140253CB4 (DpiLdaUnLinkDeviceFromChain.c)
 *     DpiDxgkDdiExchangePreStartInfo @ 0x1402545A8 (DpiDxgkDdiExchangePreStartInfo.c)
 *     ?DxgkWriteDiagEntry@@YAJPEAU_DXGK_DIAG_HEADER@@_K@Z @ 0x14031DEEC (-DxgkWriteDiagEntry@@YAJPEAU_DXGK_DIAG_HEADER@@_K@Z.c)
 *     DpiReadPnpRegistryValue @ 0x14036B708 (DpiReadPnpRegistryValue.c)
 *     DpEvalAcpiMethod @ 0x14038D8A0 (DpEvalAcpiMethod.c)
 *     ?DxgCreateLiveDumpWithWdLogs@@YAJK_K000T_WD_LIVEREPORT_FLAGS@@@Z @ 0x1403D3630 (-DxgCreateLiveDumpWithWdLogs@@YAJK_K000T_WD_LIVEREPORT_FLAGS@@@Z.c)
 *     DpiGetDevicePropertyString @ 0x1403EB254 (DpiGetDevicePropertyString.c)
 *     DpiFdoDetectPostDevice @ 0x1403F3100 (DpiFdoDetectPostDevice.c)
 *     DxgkGetDeviceFamily @ 0x1403F53F4 (DxgkGetDeviceFamily.c)
 *     DpiDxgkDdiRemoveDevice @ 0x1403F5410 (DpiDxgkDdiRemoveDevice.c)
 *     DpiQueryBusInterface @ 0x1403FA754 (DpiQueryBusInterface.c)
 *     DpiDxgkDdiAddDevice @ 0x140406C7C (DpiDxgkDdiAddDevice.c)
 */

__int64 __fastcall DpiAddDevice(struct _DRIVER_OBJECT *ClientIdentificationAddress, struct _DEVICE_OBJECT *a2)
{
  int v2; // r12d
  char *DeviceExtension; // rbx
  char *v5; // r14
  char v6; // si
  _DWORD *DriverObjectExtension; // rax
  __int64 v8; // r8
  __int64 v9; // r13
  UNICODE_STRING *p_DriverName; // rdi
  __int64 v11; // r8
  int DevicePropertyString; // eax
  struct _DEVICE_OBJECT *started; // rsi
  char v14; // di
  _DWORD *v15; // rcx
  _DWORD *v16; // rcx
  void (__fastcall *v17)(_QWORD); // rax
  void (__fastcall *v18)(_QWORD); // rax
  void (__fastcall *v19)(_QWORD); // rax
  void (__fastcall *v20)(_QWORD); // rax
  void *v21; // rcx
  void *v22; // r15
  __int64 v23; // rdx
  int RegistryValues; // eax
  int v25; // eax
  ULONG v26; // edi
  __int64 v27; // rdx
  int v28; // eax
  NTSTATUS v29; // eax
  struct _DEVICE_OBJECT *v30; // rdi
  PDEVICE_OBJECT v31; // rax
  bool v32; // zf
  struct _DEVICE_OBJECT *v33; // rcx
  int DeviceRegistryPaths; // eax
  int v35; // eax
  int v36; // ecx
  NTSTATUS DeviceProperty; // eax
  _DWORD *v38; // rdi
  NTSTATUS v39; // eax
  GUID *v40; // rdi
  int v41; // eax
  struct _DEVICE_OBJECT *AttachedDeviceReference; // rdi
  bool v43; // al
  struct _DEVICE_OBJECT *v44; // rsi
  __int64 Pool2; // rax
  unsigned __int16 *v46; // rcx
  int v47; // edx
  int v48; // edi
  bool v49; // al
  int AgpStatus; // eax
  __int64 v51; // rdi
  int v52; // eax
  char v53; // dl
  _BYTE *v54; // rcx
  int v55; // eax
  struct _DEVICE_OBJECT *v56; // rdi
  char v57; // al
  int v58; // eax
  char *v59; // rdi
  __int16 v60; // r10
  char **v61; // r8
  unsigned int v62; // edx
  char *v63; // rax
  signed __int64 v64; // rcx
  __int16 v65; // r10
  const wchar_t **v66; // r8
  int v67; // edx
  const wchar_t *v68; // rax
  char *v69; // rcx
  __int64 v70; // rdx
  _DWORD *v71; // rdx
  unsigned __int64 v72; // r8
  int v73; // eax
  char v74; // di
  int v75; // eax
  char **v76; // rcx
  __int64 v77; // rax
  NTSTATUS v78; // eax
  __int64 v79; // rax
  __int64 v80; // rax
  __int64 v81; // rdx
  bool v82; // cl
  int v83; // eax
  int v84; // edi
  int v85; // r15d
  _QWORD *v86; // rdx
  PVOID *v87; // rax
  struct _ERESOURCE *v88; // rcx
  _DWORD *v89; // rcx
  struct _DEVICE_OBJECT *v90; // rcx
  char v91; // r15
  __int64 DiagnosticInfoArgs; // rax
  __int64 v93; // rdi
  unsigned int v94; // ebx
  struct _DEVICE_OBJECT *v95; // r14
  int v96; // eax
  __int64 v97; // rcx
  __int64 v98; // r8
  BOOLEAN Exclusive[8]; // [rsp+28h] [rbp-D8h]
  char v101; // [rsp+50h] [rbp-B0h]
  char v102; // [rsp+51h] [rbp-AFh]
  char v103; // [rsp+51h] [rbp-AFh]
  char v104; // [rsp+52h] [rbp-AEh]
  char v105; // [rsp+53h] [rbp-ADh]
  char v106; // [rsp+54h] [rbp-ACh]
  char v107; // [rsp+55h] [rbp-ABh]
  char v108; // [rsp+56h] [rbp-AAh] BYREF
  char v109; // [rsp+57h] [rbp-A9h]
  char v110; // [rsp+58h] [rbp-A8h]
  PDEVICE_OBJECT SourceDevice; // [rsp+60h] [rbp-A0h] BYREF
  int v112; // [rsp+68h] [rbp-98h]
  char v113; // [rsp+6Ch] [rbp-94h]
  bool v114; // [rsp+6Dh] [rbp-93h]
  char v115; // [rsp+6Eh] [rbp-92h]
  int v116; // [rsp+70h] [rbp-90h]
  char v117; // [rsp+74h] [rbp-8Ch]
  char v118; // [rsp+75h] [rbp-8Bh]
  char v119; // [rsp+76h] [rbp-8Ah]
  ULONG ResultLength; // [rsp+78h] [rbp-88h] BYREF
  PDEVICE_OBJECT TargetDevice; // [rsp+80h] [rbp-80h]
  unsigned int v122; // [rsp+88h] [rbp-78h] BYREF
  int v123; // [rsp+8Ch] [rbp-74h]
  ULONG RequiredSize; // [rsp+90h] [rbp-70h] BYREF
  int v125; // [rsp+94h] [rbp-6Ch] BYREF
  int v126; // [rsp+98h] [rbp-68h] BYREF
  ULONG ReturnedProductType; // [rsp+9Ch] [rbp-64h] BYREF
  __int64 v128; // [rsp+A0h] [rbp-60h] BYREF
  PVOID P; // [rsp+A8h] [rbp-58h]
  ULONG Type; // [rsp+B0h] [rbp-50h] BYREF
  void *Source1; // [rsp+B8h] [rbp-48h]
  __int64 v132; // [rsp+C0h] [rbp-40h] BYREF
  PDRIVER_OBJECT DriverObject; // [rsp+C8h] [rbp-38h]
  int v134; // [rsp+D0h] [rbp-30h]
  int v135; // [rsp+D4h] [rbp-2Ch]
  const wchar_t *v136; // [rsp+D8h] [rbp-28h] BYREF
  int v137; // [rsp+E0h] [rbp-20h]
  _QWORD v138[2]; // [rsp+E8h] [rbp-18h] BYREF
  UNICODE_STRING String1; // [rsp+F8h] [rbp-8h] BYREF
  UNICODE_STRING v140; // [rsp+108h] [rbp+8h] BYREF
  UNICODE_STRING v141; // [rsp+118h] [rbp+18h] BYREF
  UNICODE_STRING v142; // [rsp+128h] [rbp+28h] BYREF
  _QWORD v143[2]; // [rsp+138h] [rbp+38h] BYREF
  __int64 v144; // [rsp+148h] [rbp+48h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+150h] [rbp+50h] BYREF
  _QWORD v146[14]; // [rsp+160h] [rbp+60h] BYREF
  _DWORD v147[4]; // [rsp+1D0h] [rbp+D0h] BYREF
  __int64 v148; // [rsp+1E0h] [rbp+E0h]
  __int64 v149; // [rsp+1E8h] [rbp+E8h] BYREF
  int v150; // [rsp+1F0h] [rbp+F0h]
  _DWORD v151[2]; // [rsp+200h] [rbp+100h] BYREF
  __int64 v152; // [rsp+208h] [rbp+108h]
  __int128 v153; // [rsp+210h] [rbp+110h]
  __int64 v154; // [rsp+220h] [rbp+120h]
  int v155; // [rsp+228h] [rbp+128h]
  int v156; // [rsp+22Ch] [rbp+12Ch]
  int v157; // [rsp+230h] [rbp+130h]
  int v158; // [rsp+234h] [rbp+134h]
  int v159; // [rsp+238h] [rbp+138h]
  int v160; // [rsp+23Ch] [rbp+13Ch]
  _DWORD VersionInformation[72]; // [rsp+240h] [rbp+140h] BYREF
  __int64 v162; // [rsp+360h] [rbp+260h]
  __int64 v163; // [rsp+368h] [rbp+268h]
  _QWORD v164[10]; // [rsp+370h] [rbp+270h] BYREF
  int v165; // [rsp+3C0h] [rbp+2C0h]
  int v166; // [rsp+3C4h] [rbp+2C4h]
  int v167; // [rsp+3C8h] [rbp+2C8h]
  int v168; // [rsp+3CCh] [rbp+2CCh]
  const wchar_t *v169; // [rsp+3D0h] [rbp+2D0h]
  __int128 v170; // [rsp+3E0h] [rbp+2E0h] BYREF
  __int128 v171; // [rsp+3F0h] [rbp+2F0h]
  int v172; // [rsp+400h] [rbp+300h]
  __int128 v173; // [rsp+408h] [rbp+308h] BYREF
  __int64 v174; // [rsp+418h] [rbp+318h]
  wchar_t v175; // [rsp+420h] [rbp+320h]
  wchar_t Str1[20]; // [rsp+428h] [rbp+328h] BYREF
  _OWORD v177[2]; // [rsp+450h] [rbp+350h] BYREF
  __int64 v178; // [rsp+470h] [rbp+370h]
  wchar_t v179; // [rsp+478h] [rbp+378h]
  _OWORD v180[2]; // [rsp+480h] [rbp+380h] BYREF
  wchar_t v181; // [rsp+4A0h] [rbp+3A0h]
  _OWORD v182[2]; // [rsp+4A8h] [rbp+3A8h] BYREF
  __int64 v183; // [rsp+4C8h] [rbp+3C8h]
  int v184; // [rsp+4D0h] [rbp+3D0h]
  _OWORD v185[2]; // [rsp+4D8h] [rbp+3D8h] BYREF
  __int64 v186; // [rsp+4F8h] [rbp+3F8h]
  _OWORD v187[4]; // [rsp+500h] [rbp+400h] BYREF
  int v188; // [rsp+540h] [rbp+440h]
  WCHAR Data[20]; // [rsp+550h] [rbp+450h] BYREF

  TargetDevice = a2;
  DriverObject = ClientIdentificationAddress;
  v128 = 0LL;
  v149 = 0LL;
  LOBYTE(v2) = 0;
  v150 = 0;
  v173 = *(_OWORD *)L"\\Driver\\VGPU";
  DeviceExtension = 0LL;
  v175 = aDriverVgpu[12];
  v174 = *(_QWORD *)L"VGPU";
  v5 = 0LL;
  v142.Buffer = (wchar_t *)&v173;
  v6 = 0;
  v180[0] = *(_OWORD *)L"\\Driver\\WddmWarp";
  v181 = aDriverWddmwarp[16];
  String1.Buffer = (wchar_t *)v180;
  v138[1] = v185;
  v185[0] = *(_OWORD *)L"\\Driver\\BasicRender";
  v179 = aDriverBasicdis[20];
  v186 = *(_QWORD *)L"der";
  v143[1] = v177;
  v180[1] = *(_OWORD *)L"WddmWarp";
  v184 = *(_DWORD *)L"r";
  v107 = 0;
  v177[0] = *(_OWORD *)L"\\Driver\\BasicDisplay";
  SourceDevice = 0LL;
  v185[1] = *(_OWORD *)L"BasicRender";
  ResultLength = 0;
  v105 = 1;
  v178 = *(_QWORD *)L"play";
  v112 = v2;
  v177[1] = *(_OWORD *)L"BasicDisplay";
  v106 = 0;
  v110 = 0;
  v182[0] = *(_OWORD *)L"\\Driver\\VirtualRender";
  v119 = 0;
  v183 = *(_QWORD *)L"ender";
  v101 = 0;
  v104 = 0;
  v115 = 0;
  v117 = 0;
  v113 = 0;
  v118 = 0;
  v108 = 0;
  v109 = 0;
  v114 = 0;
  v102 = 0;
  v116 = 3;
  *(_QWORD *)&v142.Length = 1703960LL;
  *(_QWORD *)&String1.Length = 2228256LL;
  v138[0] = 2621478LL;
  v143[0] = 2752552LL;
  v182[1] = *(_OWORD *)L"VirtualRender";
  *(_QWORD *)&v140.Length = 2883626LL;
  v140.Buffer = (wchar_t *)v182;
  v187[0] = *(_OWORD *)L"\\Driver\\VirtualComputeAccelerator";
  v187[1] = *(_OWORD *)L"VirtualComputeAccelerator";
  v188 = *(_DWORD *)L"r";
  v187[2] = *(_OWORD *)L"omputeAccelerator";
  v187[3] = *(_OWORD *)L"celerator";
  v141.Buffer = (wchar_t *)v187;
  *(_QWORD *)&v141.Length = 4456514LL;
  if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
    McTemplateK0ppq_EtwWriteTransfer(
      (__int64)ClientIdentificationAddress,
      &EventEnterDpiAddDevice,
      1LL,
      ClientIdentificationAddress,
      a2,
      0);
  v144 = MEMORY[0xFFFFF78000000320];
  DriverObjectExtension = IoGetDriverObjectExtension(ClientIdentificationAddress, ClientIdentificationAddress);
  v9 = (__int64)DriverObjectExtension;
  if ( !DriverObjectExtension || DriverObjectExtension[4] != 1953656900 || DriverObjectExtension[5] != 1 )
  {
    LODWORD(started) = -1073741811;
    WdLogSingleEntry3(0LL, 275LL, 21LL, -1073741811LL);
    WdLogGlobalForLineNumber = 371;
    v14 = 0;
    goto LABEL_21;
  }
  p_DriverName = &ClientIdentificationAddress->DriverName;
  LOBYTE(v8) = 1;
  if ( (wchar_t *)RtlFindUnicodeSubstring(&ClientIdentificationAddress->DriverName, v138, v8) == ClientIdentificationAddress->DriverName.Buffer )
  {
    v6 = 1;
    v104 = 1;
    v117 = 1;
    v113 = 1;
    goto LABEL_60;
  }
  if ( !RtlCompareUnicodeString(&String1, &ClientIdentificationAddress->DriverName, 1u) )
  {
    v113 = 1;
    goto LABEL_60;
  }
  if ( !RtlCompareUnicodeString(&v140, &ClientIdentificationAddress->DriverName, 1u)
    || !RtlCompareUnicodeString(&v141, &ClientIdentificationAddress->DriverName, 1u) )
  {
    v102 = 1;
    goto LABEL_60;
  }
  if ( !RtlCompareUnicodeString(&v142, &ClientIdentificationAddress->DriverName, 1u) )
  {
    v118 = 1;
    goto LABEL_60;
  }
  LOBYTE(v11) = 1;
  if ( (wchar_t *)RtlFindUnicodeSubstring(&ClientIdentificationAddress->DriverName, v143, v11) != ClientIdentificationAddress->DriverName.Buffer )
  {
    v125 = 0;
    v114 = (unsigned int)DxgkGetDeviceFamily(&v125) == 5 && ((v125 - 192) & 0xFFFFFFFD) == 0;
    v109 = *(_BYTE *)(v9 + 134);
    v122 = 0;
    memset(v146, 0, sizeof(v146));
    v23 = *(_QWORD *)(v9 + 48);
    v146[2] = L"Start";
    LODWORD(v146[1]) = 292;
    v146[3] = &v122;
    LODWORD(v146[4]) = 67108868;
    LODWORD(v146[6]) = 4;
    RegistryValues = RtlQueryRegistryValuesEx(0LL, v23, v146, 0LL, 0LL);
    LODWORD(started) = RegistryValues;
    if ( RegistryValues >= 0 )
    {
      if ( v122 == 3 )
      {
        v6 = 0;
        goto LABEL_60;
      }
      WdLogSingleEntry1(2LL, v122);
      WdLogGlobalForLineNumber = 507;
      LODWORD(started) = -1073741637;
    }
    else
    {
      WdLogSingleEntry1(2LL, RegistryValues);
      WdLogGlobalForLineNumber = 496;
    }
LABEL_19:
    v14 = 0;
LABEL_20:
    LOBYTE(v2) = v112;
    goto LABEL_21;
  }
  Source1 = 0LL;
  v115 = 1;
  DevicePropertyString = DpiGetDevicePropertyString(TargetDevice, DevicePropertyHardwareID, (__int64)&ResultLength);
  LODWORD(started) = DevicePropertyString;
  if ( DevicePropertyString < 0 )
  {
    WdLogSingleEntry1(2LL, DevicePropertyString);
    WdLogGlobalForLineNumber = 424;
    goto LABEL_19;
  }
  v22 = Source1;
  if ( ResultLength >= 0x24 && RtlCompareMemory(Source1, L"ROOT\\BasicDisplay", 0x24uLL) == 36 )
  {
    v104 = 1;
    if ( byte_140160D12 )
    {
      v105 = 0;
      LODWORD(started) = -1073741637;
      WdLogSingleEntry1(4LL, 0LL);
      WdLogGlobalForLineNumber = 449;
    }
  }
  if ( v22 )
  {
    ExFreePoolWithTag(v22, 0);
    Source1 = 0LL;
  }
  if ( (int)started < 0 )
    goto LABEL_19;
  v6 = v104;
LABEL_60:
  if ( byte_140161388 && !v6 )
  {
    WdLogSingleEntry1(3LL, p_DriverName);
    WdLogGlobalForLineNumber = 517;
    LODWORD(started) = -1073741637;
    goto LABEL_19;
  }
  v25 = DpiDxgkDdiAddDevice(v9, TargetDevice, &v128);
  LODWORD(started) = v25;
  if ( v25 < 0 )
  {
    WdLogSingleEntry2(2LL, *(_QWORD *)(v9 + 144), v25);
    WdLogGlobalForLineNumber = 543;
    goto LABEL_19;
  }
  v107 = 1;
  if ( v128 )
  {
    v27 = *(_QWORD *)(v9 + 616);
    v26 = 6520;
    v123 = 2;
    v116 = 0;
    if ( v27 )
    {
      if ( v104 )
      {
        LODWORD(started) = -1073741637;
        WdLogSingleEntry2(2LL, v27, -1073741637LL);
        WdLogGlobalForLineNumber = 606;
        goto LABEL_19;
      }
      v28 = DpiDxgkDdiLinkDevice(v9, (__int64)TargetDevice, v128, (int *)&v149);
      LODWORD(started) = v28;
      if ( v28 < 0 )
      {
        WdLogSingleEntry2(2LL, *(_QWORD *)(v9 + 616), v28);
        WdLogGlobalForLineNumber = 620;
        goto LABEL_19;
      }
      if ( HIDWORD(v149) > 0x100 )
      {
        LODWORD(started) = -1073741756;
        WdLogSingleEntry1(2LL, -1073741756LL);
        WdLogGlobalForLineNumber = 636;
        goto LABEL_19;
      }
      if ( HIDWORD(v149) && !(_BYTE)v150 )
      {
        v26 = 2848;
        v123 = 3;
        v116 = 1;
      }
    }
  }
  else
  {
    v26 = 496;
    v123 = 4;
    v116 = 2;
    if ( v104 )
    {
      LODWORD(started) = -1073741637;
      WdLogSingleEntry1(2LL, -1073741637LL);
      WdLogGlobalForLineNumber = 573;
      goto LABEL_19;
    }
  }
  v29 = IoCreateDevice(DriverObject, v26, 0LL, 0x23u, v109 == 0 ? 0x100 : 0, 0, &SourceDevice);
  LODWORD(started) = v29;
  if ( v29 < 0 )
  {
    WdLogSingleEntry1(2LL, v29);
    WdLogGlobalForLineNumber = 676;
    goto LABEL_19;
  }
  v116 |= (unsigned int)SourceDevice & 0xFFFF00;
  DeviceExtension = (char *)SourceDevice->DeviceExtension;
  *((_DWORD *)DeviceExtension + 5) = v123;
  *((_DWORD *)DeviceExtension + 4) = 1953656900;
  *((_QWORD *)DeviceExtension + 3) = SourceDevice;
  *((_QWORD *)DeviceExtension + 4) = SourceDevice;
  *((_QWORD *)DeviceExtension + 5) = v9;
  *((_QWORD *)DeviceExtension + 6) = v128;
  DeviceExtension[480] = v104;
  DeviceExtension[56] = 1;
  DeviceExtension[481] = v102;
  IoInitializeRemoveLockEx((PIO_REMOVE_LOCK)DeviceExtension + 2, 0x74727044u, 1u, 0, 0x20u);
  v30 = TargetDevice;
  *((_QWORD *)DeviceExtension + 19) = TargetDevice;
  v31 = IoAttachDeviceToDeviceStack(SourceDevice, v30);
  *((_QWORD *)DeviceExtension + 20) = v31;
  if ( !v31 )
  {
    LODWORD(started) = -1073741810;
    WdLogSingleEntry1(2LL, -1073741810LL);
    WdLogGlobalForLineNumber = 718;
    v14 = 0;
    goto LABEL_20;
  }
  *((_QWORD *)DeviceExtension + 38) = DpiFdoHandleRemoveDevice;
  v32 = *((_DWORD *)DeviceExtension + 4) == 1953656900;
  *((_DWORD *)DeviceExtension + 71) = 1;
  *((_DWORD *)DeviceExtension + 70) = 1;
  if ( !v32 || (unsigned int)(*((_DWORD *)DeviceExtension + 5) - 2) > 1 )
  {
    v74 = v108;
    goto LABEL_217;
  }
  v33 = (struct _DEVICE_OBJECT *)*((_QWORD *)DeviceExtension + 19);
  v5 = DeviceExtension;
  RequiredSize = 0;
  wcscpy(Str1, L"ComputeAccelerator");
  Type = 0;
  if ( IoGetDevicePropertyData(v33, &DEVPKEY_Device_Class, 0, 0, 0x28u, Data, &RequiredSize, &Type) >= 0 )
  {
    DestinationString = 0LL;
    RtlInitUnicodeString(&DestinationString, Data);
    if ( DestinationString.Length >= 0x13u && !wcsncmp_0(Str1, DestinationString.Buffer, 0x12uLL) )
      DeviceExtension[2722] = 1;
  }
  DeviceExtension[2717] = v113;
  DeviceExtension[1153] = v115;
  DeviceExtension[1154] = v117;
  DeviceExtension[1158] = v109;
  DeviceExtension[2718] = v118;
  DeviceExtension[2719] = v114;
  *((_DWORD *)DeviceExtension + 688) = 1;
  *((_DWORD *)DeviceExtension + 686) = 0;
  *((_QWORD *)DeviceExtension + 36) = DpiFdoHandleStartDevice;
  *((_QWORD *)DeviceExtension + 59) = &DpiFdoHandleSurpriseRemoval;
  *((_QWORD *)DeviceExtension + 49) = &DpiFdoHandleFilterResources;
  if ( !byte_140160D11 && !DeviceExtension[480] )
    *((_QWORD *)DeviceExtension + 40) = &DpiFdoHandleStopDevice;
  *(_QWORD *)(DeviceExtension + 500) = v149;
  *((_DWORD *)DeviceExtension + 127) = v150;
  DeviceRegistryPaths = DpiGetDeviceRegistryPaths((__int64)SourceDevice, v30, v9);
  LODWORD(started) = DeviceRegistryPaths;
  if ( DeviceRegistryPaths < 0 )
  {
    WdLogSingleEntry1(2LL, DeviceRegistryPaths);
    WdLogGlobalForLineNumber = 806;
    goto LABEL_265;
  }
  if ( (int)DpiQueryBusInterface(*((PDEVICE_OBJECT *)DeviceExtension + 20), (__int64)(DeviceExtension + 856)) >= 0 )
  {
    if ( *(_QWORD *)(v9 + 232) )
    {
      v35 = DpiAcpiRegisterAcpiCallbacks(SourceDevice);
      v36 = (unsigned __int8)v112;
      if ( v35 >= 0 )
        v36 = 1;
      v112 = v36;
    }
    DeviceExtension[1156] = 1;
  }
  started = TargetDevice;
  DeviceProperty = IoGetDeviceProperty(TargetDevice, DevicePropertyBusNumber, 4u, DeviceExtension + 1144, &ResultLength);
  if ( DeviceProperty < 0 )
  {
    WdLogSingleEntry1(3LL, DeviceProperty);
    *((_DWORD *)DeviceExtension + 286) = -1;
    WdLogGlobalForLineNumber = 867;
  }
  v38 = DeviceExtension + 1148;
  v39 = IoGetDeviceProperty(started, DevicePropertyAddress, 4u, DeviceExtension + 1148, &ResultLength);
  if ( v39 < 0 || *v38 == -1 )
  {
    WdLogSingleEntry1(3LL, v39);
    *v38 = -1;
    WdLogGlobalForLineNumber = 893;
  }
  v40 = (GUID *)(DeviceExtension + 544);
  LODWORD(started) = IoGetDeviceProperty(
                       started,
                       DevicePropertyBusTypeGuid,
                       0x10u,
                       DeviceExtension + 544,
                       &ResultLength);
  if ( (int)started < 0 || ResultLength < 0x10 )
  {
    WdLogSingleEntry1(4LL, SourceDevice);
    WdLogGlobalForLineNumber = 912;
    *v40 = GUID_BUS_TYPE_INVALID;
  }
  if ( v104 )
  {
    v103 = v108;
  }
  else
  {
    v41 = DpiFdoDetectPostDevice(SourceDevice, &v108);
    LODWORD(started) = v41;
    if ( v41 < 0 )
    {
      WdLogSingleEntry1(2LL, v41);
      WdLogGlobalForLineNumber = 935;
      goto LABEL_265;
    }
    v103 = v108;
    if ( v108 )
    {
      WdLogSingleEntry1(4LL, SourceDevice);
      WdLogGlobalForLineNumber = 950;
      DeviceExtension[1152] = 1;
      byte_140161128 = 1;
      if ( byte_140160D11 == 1 )
      {
        AttachedDeviceReference = IoGetAttachedDeviceReference(TargetDevice);
        DpiSetDeviceUsageType(AttachedDeviceReference);
        ObfDereferenceObject(AttachedDeviceReference);
        v40 = (GUID *)(DeviceExtension + 544);
      }
    }
  }
  v126 = 0;
  v43 = (int)DpiReadPnpRegistryValue(SourceDevice, L"SoftGPUAdapter", &v126, 4LL, 2) >= 0 && v126;
  DeviceExtension[2716] = v43;
  if ( DeviceExtension[1158] )
  {
    *((_DWORD *)DeviceExtension + 281) = 5140;
    *((_QWORD *)DeviceExtension + 142) = 0LL;
    *((_DWORD *)DeviceExtension + 280) = 0;
    *((_QWORD *)DeviceExtension + 141) = 139LL;
    goto LABEL_204;
  }
  if ( RtlCompareMemory(v40, &GUID_BUS_TYPE_PCI, 0x10uLL) != 16 )
  {
    if ( RtlCompareMemory(DeviceExtension + 544, &GUID_BUS_TYPE_ACPI, 0x10uLL) == 16 )
    {
      v148 = 0LL;
      WdLogSingleEntry1(4LL, SourceDevice);
      WdLogGlobalForLineNumber = 1218;
      if ( !DeviceExtension[1156] )
      {
        LODWORD(started) = -1073741637;
        WdLogSingleEntry1(2LL, -1073741637LL);
        WdLogGlobalForLineNumber = 1226;
        goto LABEL_265;
      }
      *((_DWORD *)DeviceExtension + 280) = 2;
      v172 = 0;
      BYTE1(v147[2]) = 0;
      HIWORD(v147[2]) = 0;
      v147[3] = 0;
      strcpy((char *)v147, "AeiC_HID");
      v170 = 0LL;
      v171 = 0LL;
      v55 = DpEvalAcpiMethod((int)SourceDevice, &v170, 0x24u);
      if ( v55 >= 0 )
      {
        *(_QWORD *)(DeviceExtension + 1124) = v171;
      }
      else
      {
        WdLogSingleEntry1(2LL, v55);
        WdLogGlobalForLineNumber = 1262;
      }
      v172 = 0;
      strcpy((char *)v147, "AeiC_SUB");
      BYTE1(v147[2]) = 0;
      HIWORD(v147[2]) = 0;
      v147[3] = 0;
      v170 = 0LL;
      v171 = 0LL;
      if ( (int)DpEvalAcpiMethod((int)SourceDevice, &v170, 0x24u) >= 0 )
      {
        *(_QWORD *)(DeviceExtension + 1132) = v171;
      }
      else
      {
        WdLogSingleEntry1(4LL, DpEvalAcpiMethod);
        WdLogGlobalForLineNumber = 1296;
      }
      v172 = 0;
      strcpy((char *)v147, "AeiC_HRV");
      BYTE1(v147[2]) = 0;
      HIWORD(v147[2]) = 0;
      v147[3] = 0;
      v170 = 0LL;
      v171 = 0LL;
      LODWORD(started) = DpEvalAcpiMethod((int)SourceDevice, &v170, 0x24u);
      if ( (int)started >= 0 )
      {
        *((_DWORD *)DeviceExtension + 285) = (unsigned __int16)v171;
      }
      else
      {
        WdLogSingleEntry1(4LL, DpEvalAcpiMethod);
        WdLogGlobalForLineNumber = 1330;
        LODWORD(started) = 0;
      }
      if ( v103 )
      {
        v56 = IoGetAttachedDeviceReference(TargetDevice);
        started = (struct _DEVICE_OBJECT *)(int)DpiSetDeviceUsageType(v56);
        ObfDereferenceObject(v56);
        if ( (int)started < 0 )
        {
          WdLogSingleEntry1(2LL, started);
          WdLogGlobalForLineNumber = 1358;
          LODWORD(started) = 0;
        }
      }
    }
    else if ( RtlCompareMemory(DeviceExtension + 544, &GUID_BUS_VMBUS, 0x10uLL) == 16 )
    {
      WdLogSingleEntry1(4LL, SourceDevice);
      WdLogGlobalForLineNumber = 1576;
      if ( DeviceExtension[2718] )
      {
        *((_DWORD *)DeviceExtension + 281) = 5140;
        *((_QWORD *)DeviceExtension + 141) = 705LL;
        *((_DWORD *)DeviceExtension + 284) = 0;
        *((_DWORD *)DeviceExtension + 285) = 1;
      }
      *((_DWORD *)DeviceExtension + 280) = 4;
    }
    else
    {
      RtlCompareMemory(DeviceExtension + 544, &GUID_BUS_TYPE_DISPLAY, 0x10uLL);
      if ( DeviceExtension[480] )
      {
        *((_DWORD *)DeviceExtension + 280) = 3;
        *((_DWORD *)DeviceExtension + 281) = 5140;
        if ( DeviceExtension[1153] )
        {
          *((_DWORD *)DeviceExtension + 282) = 141;
        }
        else if ( DeviceExtension[2717] )
        {
          *((_DWORD *)DeviceExtension + 282) = 140;
        }
      }
      else
      {
        v57 = DeviceExtension[2719];
        if ( !v57 && !g_OSTestSigningEnabled )
        {
          LODWORD(started) = -1073741637;
          WdLogSingleEntry1(2LL, -1073741637LL);
          WdLogGlobalForLineNumber = 1835;
          goto LABEL_265;
        }
        *((_DWORD *)DeviceExtension + 280) = 3;
        if ( v57 )
        {
          *((_DWORD *)DeviceExtension + 281) = 5140;
          *((_DWORD *)DeviceExtension + 285) = 0;
          *((_DWORD *)DeviceExtension + 282) = 53248;
          *(_QWORD *)(DeviceExtension + 1132) = 4098LL;
        }
        else
        {
          P = 0LL;
          v58 = DpiGetDevicePropertyString(TargetDevice, DevicePropertyCompatibleIDs, (__int64)&ResultLength);
          LODWORD(started) = v58;
          if ( v58 >= 0 && (v59 = (char *)P) != 0LL )
          {
            if ( DeviceExtension[2716] )
            {
              *((_DWORD *)DeviceExtension + 281) = 5140;
              v60 = *(_WORD *)v59;
              v164[0] = L"SoftGPU_Full_D3D12";
              v61 = (char **)v164;
              v162 = 135LL;
              v164[3] = L"SoftGPU_Full_D3D9L";
              v62 = 0;
              v163 = 0LL;
              v164[6] = L"SoftGPU_Rod";
              v164[9] = L"SoftGPU_Dod";
              v169 = L"SoftGPU_MCDM";
              v164[1] = 128LL;
              v164[2] = 0LL;
              v164[4] = 136LL;
              v164[5] = 0LL;
              v164[7] = 137LL;
              v164[8] = 0LL;
              v165 = 134;
              v166 = 4660;
              v167 = 22136;
              v168 = 39612;
              while ( 1 )
              {
                v63 = *v61;
                if ( v60 )
                  break;
LABEL_186:
                if ( !*(_WORD *)v63 )
                  goto LABEL_189;
                ++v62;
                v61 += 3;
                if ( v62 >= 5 )
                  goto LABEL_202;
              }
              v64 = v59 - v63;
              while ( *(_WORD *)v63 )
              {
                if ( *(_WORD *)&v63[v64] == *(_WORD *)v63 )
                {
                  v63 += 2;
                  if ( *(_WORD *)&v63[v64] )
                    continue;
                }
                goto LABEL_186;
              }
LABEL_189:
              *((_DWORD *)DeviceExtension + 282) = *((_DWORD *)&v162 + 6 * (int)v62);
              *((_DWORD *)DeviceExtension + 284) = *((_DWORD *)&v162 + 6 * (int)v62 + 1);
              *((_DWORD *)DeviceExtension + 283) = v164[3 * (int)v62 - 1];
              *((_DWORD *)DeviceExtension + 285) = *((_DWORD *)&v163 + 6 * (int)v62 + 1);
            }
            else
            {
              v65 = *(_WORD *)P;
              v136 = L"MCDMTestDevice";
              v66 = &v136;
              v134 = 5140;
              v67 = 0;
              v135 = 256;
              v137 = 2721;
              while ( 1 )
              {
                v68 = *v66;
                if ( v65 )
                  break;
LABEL_196:
                if ( !*v68 )
                  goto LABEL_199;
                v66 += 3;
                if ( ++v67 )
                  goto LABEL_200;
              }
              v69 = (char *)((_BYTE *)P - (_BYTE *)v68);
              while ( *v68 )
              {
                if ( *(_WORD *)&v69[(_QWORD)v68] == *v68 )
                {
                  if ( *(_WORD *)&v69[(_QWORD)++v68] )
                    continue;
                }
                goto LABEL_196;
              }
LABEL_199:
              v70 = 3LL * v67;
              *((_DWORD *)DeviceExtension + 281) = *(&v134 + 2 * v70);
              *((_DWORD *)DeviceExtension + 282) = *(&v135 + 2 * v70);
              DeviceExtension[LODWORD(v138[v70])] = 1;
LABEL_200:
              if ( !*((_DWORD *)DeviceExtension + 282) )
              {
                ExFreePoolWithTag(v59, 0);
                LODWORD(started) = -1073741637;
                P = 0LL;
                WdLogSingleEntry1(2LL, -1073741637LL);
                WdLogGlobalForLineNumber = 1809;
                goto LABEL_265;
              }
            }
LABEL_202:
            ExFreePoolWithTag(v59, 0);
            P = 0LL;
          }
          else
          {
            WdLogSingleEntry1(2LL, v58);
            WdLogGlobalForLineNumber = 1821;
          }
        }
      }
    }
    goto LABEL_204;
  }
  WdLogSingleEntry1(4LL, SourceDevice);
  v44 = TargetDevice;
  WdLogGlobalForLineNumber = 1029;
  DpiQueryBusInterface(TargetDevice, (__int64)(DeviceExtension + 560));
  if ( !*((_QWORD *)DeviceExtension + 77) )
  {
    LODWORD(started) = -1073741127;
    WdLogSingleEntry1(2LL, -1073741127LL);
    WdLogGlobalForLineNumber = 1054;
    goto LABEL_265;
  }
  Pool2 = ExAllocatePool2(256LL, 256LL, 1953656900LL);
  *((_QWORD *)DeviceExtension + 139) = Pool2;
  if ( !Pool2 )
  {
    LODWORD(started) = -1073741801;
    WdLogSingleEntry1(6LL, -1073741801LL);
    WdLogGlobalForLineNumber = 1074;
    goto LABEL_265;
  }
  (*((void (__fastcall **)(_QWORD, _QWORD, __int64, _QWORD, int))DeviceExtension + 77))(
    *((_QWORD *)DeviceExtension + 71),
    0LL,
    Pool2,
    0LL,
    256);
  v46 = (unsigned __int16 *)*((_QWORD *)DeviceExtension + 139);
  *((_DWORD *)DeviceExtension + 280) = 1;
  v47 = *v46;
  *((_DWORD *)DeviceExtension + 281) = v47;
  v48 = v46[1];
  *((_DWORD *)DeviceExtension + 282) = v48;
  *((_DWORD *)DeviceExtension + 285) = *((unsigned __int8 *)v46 + 8);
  if ( (v46[7] & 0x7F) == 0 )
  {
    *((_DWORD *)DeviceExtension + 283) = v46[22];
    *((_DWORD *)DeviceExtension + 284) = v46[23];
  }
  v49 = v47 == 22611 && v48 == 4097;
  DeviceExtension[2720] = v49;
  DpiQueryBusInterface(v44, (__int64)(DeviceExtension + 624));
  DpiQueryBusInterface(*((PDEVICE_OBJECT *)DeviceExtension + 20), (__int64)(DeviceExtension + 672));
  AgpStatus = DpiGetAgpStatus(SourceDevice);
  if ( AgpStatus >= 0 && !*((_QWORD *)DeviceExtension + 85) )
  {
    WdLogSingleEntry1(3LL, AgpStatus);
    WdLogGlobalForLineNumber = 1142;
  }
  v51 = *((_QWORD *)SourceDevice->DeviceExtension + 139);
  v52 = DpiFdoDetectVgaDeviceInCapabilities();
  if ( v52 < 0 )
  {
    LODWORD(started) = v52;
LABEL_146:
    if ( v103 )
    {
      WdLogSingleEntry1(3LL, SourceDevice);
      WdLogGlobalForLineNumber = 1198;
    }
    goto LABEL_204;
  }
  v53 = *(_BYTE *)(v51 + 11);
  v54 = (_BYTE *)(v51 + 10);
  if ( (v53 || *v54 != 1) && (v53 != 3 || *v54) )
  {
    LODWORD(started) = -1073741823;
    goto LABEL_146;
  }
  LODWORD(started) = v52;
  if ( v103 )
    goto LABEL_142;
  if ( !byte_140161128 )
  {
    WdLogSingleEntry1(3LL, SourceDevice);
    WdLogGlobalForLineNumber = 1168;
    v103 = 1;
    v108 = 1;
    byte_140161129 = 1;
LABEL_142:
    if ( byte_140160D15 )
      DeviceExtension[1155] = 1;
  }
LABEL_204:
  if ( DeviceExtension[2716] && DeviceExtension[2717] )
  {
    LODWORD(started) = -1073741811;
    WdLogSingleEntry1(2LL, -1073741811LL);
    WdLogGlobalForLineNumber = 1848;
    goto LABEL_265;
  }
  KeInitializeSpinLock((PKSPIN_LOCK)DeviceExtension + 184);
  v71 = DeviceExtension + 1336;
  *((_WORD *)DeviceExtension + 660) = 64;
  v72 = 7LL;
  if ( (((_BYTE)DeviceExtension + 56) & 4) != 0 )
  {
    *v71 = 1;
    v72 = 6LL;
    v71 = DeviceExtension + 1340;
  }
  memset64(v71, 0x100000001uLL, v72 >> 1);
  if ( (v72 & 1) != 0 )
    v71[v72 - 1] = 1;
  KeInitializeDpc((PRKDPC)DeviceExtension + 22, (PKDEFERRED_ROUTINE)DpiFdoDpcForIsr, SourceDevice);
  KeInitializeMutex((PRKMUTEX)(DeviceExtension + 2544), 0);
  KeInitializeMutex((PRKMUTEX)(DeviceExtension + 2624), 0);
  *((_QWORD *)DeviceExtension + 317) = DeviceExtension + 2528;
  *((_QWORD *)DeviceExtension + 316) = DeviceExtension + 2528;
  *((_QWORD *)DeviceExtension + 327) = DeviceExtension + 2608;
  *((_QWORD *)DeviceExtension + 326) = DeviceExtension + 2608;
  *((_QWORD *)DeviceExtension + 342) = DeviceExtension + 2728;
  *((_QWORD *)DeviceExtension + 341) = DeviceExtension + 2728;
  KeInitializeEvent((PRKEVENT)(DeviceExtension + 1240), NotificationEvent, 1u);
  KeInitializeEvent((PRKEVENT)(DeviceExtension + 1264), NotificationEvent, 1u);
  KeInitializeEvent((PRKEVENT)(DeviceExtension + 1288), NotificationEvent, 0);
  *((_QWORD *)DeviceExtension + 153) = 0LL;
  *((_DWORD *)DeviceExtension + 292) = 1;
  *((_QWORD *)DeviceExtension + 147) = 0LL;
  *((_DWORD *)DeviceExtension + 296) = 0;
  KeInitializeEvent((PRKEVENT)(DeviceExtension + 1192), SynchronizationEvent, 0);
  v32 = *((_DWORD *)DeviceExtension + 4) == 1953656900;
  *((_DWORD *)DeviceExtension + 687) = 69639;
  if ( v32 )
  {
    if ( *((_DWORD *)DeviceExtension + 5) == 2 )
    {
      v73 = DpiFdoInitializeFdo(SourceDevice);
      LODWORD(started) = v73;
      if ( v73 < 0 )
      {
        WdLogSingleEntry1(2LL, v73);
        WdLogGlobalForLineNumber = 1908;
        goto LABEL_265;
      }
      v106 = 1;
    }
    else if ( *((_DWORD *)DeviceExtension + 5) == 3 )
    {
      LODWORD(started) = 0;
      *((_QWORD *)SourceDevice->DeviceExtension + 43) = &DpiLdaHandleQueryDeviceRelations;
    }
  }
  v74 = v103;
LABEL_217:
  DeviceExtension[57] = v109;
  KeWaitForSingleObject((PVOID)(v9 + 72), Executive, 0, 0, 0LL);
  v110 = 1;
  if ( !v5 || !*((_DWORD *)v5 + 126) || (v75 = DpiLdaLinkDeviceToChain(SourceDevice), LODWORD(started) = v75, v75 >= 0) )
  {
    v76 = *(char ***)(v9 + 64);
    if ( *v76 != (char *)(v9 + 56) )
      goto LABEL_280;
    *(_QWORD *)DeviceExtension = v9 + 56;
    *((_QWORD *)DeviceExtension + 1) = v76;
    *v76 = DeviceExtension;
    *(_QWORD *)(v9 + 64) = DeviceExtension;
    ++*(_DWORD *)(v9 + 128);
    v119 = 1;
    if ( !*((_QWORD *)DeviceExtension + 21) )
    {
      v77 = ExAllocatePool2(64LL, 112LL, 1953656900LL);
      *((_QWORD *)DeviceExtension + 21) = v77;
      if ( !v77 )
      {
        LODWORD(started) = -1073741801;
        WdLogSingleEntry1(6LL, -1073741801LL);
        WdLogGlobalForLineNumber = 1998;
        goto LABEL_265;
      }
      *(_DWORD *)(v77 + 104) = 1;
      *(_BYTE *)(*((_QWORD *)DeviceExtension + 21) + 108LL) = 0;
      v78 = ExInitializeResourceLite(*((PERESOURCE *)DeviceExtension + 21));
      LODWORD(started) = v78;
      if ( v78 < 0 )
      {
        WdLogSingleEntry1(2LL, v78);
        WdLogGlobalForLineNumber = 2012;
        goto LABEL_265;
      }
      v101 = 1;
    }
    KeInitializeMutex((PRKMUTEX)(DeviceExtension + 176), 0);
    if ( v5 )
    {
      if ( !*((_QWORD *)v5 + 185) )
      {
        v79 = ExAllocatePool2(64LL, 16LL, 1953656900LL);
        *((_QWORD *)v5 + 185) = v79;
        if ( !v79 )
        {
          LODWORD(started) = -1073741801;
          WdLogSingleEntry1(6LL, -1073741801LL);
          WdLogGlobalForLineNumber = 2040;
          goto LABEL_266;
        }
        *(_DWORD *)(v79 + 8) = 1;
        KeInitializeSpinLock(*((PKSPIN_LOCK *)v5 + 185));
      }
      if ( !*((_QWORD *)v5 + 186) )
      {
        v80 = ExAllocatePool2(64LL, 16LL, 1953656900LL);
        *((_QWORD *)v5 + 186) = v80;
        if ( !v80 )
        {
          LODWORD(started) = -1073741801;
          WdLogSingleEntry1(6LL, -1073741801LL);
          WdLogGlobalForLineNumber = 2062;
          goto LABEL_266;
        }
        *(_DWORD *)(v80 + 8) = 1;
        KeInitializeSpinLock(*((PKSPIN_LOCK *)v5 + 186));
      }
      *((_DWORD *)v5 + 374) = 0;
      memset(v5 + 1504, 0, 0x400uLL);
    }
    KeReleaseMutex((PRKMUTEX)(v9 + 72), 0);
    v110 = 0;
    *((_QWORD *)DeviceExtension + 16) = DpiFdoDispatchPnp;
    if ( v5 )
      *((_QWORD *)v5 + 17) = DpiFdoDispatchPower;
    if ( v74 )
    {
      *(_BYTE *)(*((_QWORD *)v5 + 21) + 108LL) = 1;
      AcquireMiniportListMutex();
      if ( qword_140160FC0 )
      {
        if ( v5[1152] )
        {
          qword_140160FC0 = (__int64)SourceDevice;
          WdLogSingleEntry2(2LL, SourceDevice, (int)started);
          WdLogGlobalForLineNumber = 2120;
        }
      }
      else
      {
        qword_140160FC0 = (__int64)SourceDevice;
      }
      v81 = *((_QWORD *)v5 + 6);
      v132 = 0LL;
      started = (struct _DEVICE_OBJECT *)(int)DpiDxgkDdiExchangePreStartInfo(v9, v81, &v132);
      ReleaseMiniportListMutex();
      if ( (int)started < 0 )
      {
        WdLogSingleEntry2(2LL, *(_QWORD *)(v9 + 1144), started);
        WdLogGlobalForLineNumber = 2144;
        goto LABEL_265;
      }
      if ( *((_DWORD *)v5 + 4) == 1953656900 && *((_DWORD *)v5 + 5) == 2 )
      {
        v82 = (v132 & 0x200000000LL) != 0;
        v5[2845] = BYTE4(v132) & 1;
        v5[2846] = v82;
      }
    }
    if ( v104 && v115 )
    {
      if ( (qword_140160FB8 = (__int64)SourceDevice,
            memset(&VersionInformation[1], 0, 0x118uLL),
            VersionInformation[0] = 284,
            RtlGetVersion((PRTL_OSVERSIONINFOW)VersionInformation) >= 0)
        && (ReturnedProductType = 0,
            RtlGetProductInfo(
              VersionInformation[1],
              VersionInformation[2],
              LOWORD(VersionInformation[69]),
              HIWORD(VersionInformation[69]),
              &ReturnedProductType))
        && ReturnedProductType == 187
        || (unsigned int)ExGetFirmwareType() == 2
        || byte_140160D13 )
      {
        *(_WORD *)(v5 + 2845) = 257;
      }
    }
    if ( DeviceExtension[57] )
    {
      SourceDevice->Flags |= *(_DWORD *)(*((_QWORD *)DeviceExtension + 20) + 48LL) & 0x2014;
    }
    else
    {
      SourceDevice->Flags |= 4u;
      SourceDevice->Flags |= 0x2000u;
    }
    SourceDevice->Flags &= ~0x4000u;
    SourceDevice->Flags &= ~0x80u;
    WdLogSingleEntry1(4LL, SourceDevice);
    WdLogGlobalForLineNumber = 2240;
LABEL_265:
    if ( !v5 )
      goto LABEL_269;
    goto LABEL_266;
  }
  WdLogSingleEntry1(2LL, v75);
  WdLogGlobalForLineNumber = 1963;
LABEL_266:
  if ( *((_DWORD *)v5 + 4) == 1953656900 && *((_DWORD *)v5 + 5) == 2 )
    DxgkLogInternalTriageEvent(
      *((_QWORD *)v5 + 504),
      131077LL,
      0xFFFFFFFFLL,
      L"Adapter AddDevice has completed with status %1",
      (int)started,
      0LL,
      0LL,
      0LL,
      0LL);
LABEL_269:
  v83 = (int)started;
  v84 = v116;
  v85 = v116;
  LOBYTE(v2) = v112;
  RequiredSize = (unsigned int)started;
  if ( (int)started < 0 )
  {
    LOBYTE(v83) = v112;
    v112 = v83;
    if ( v119 != 1 )
    {
      LOBYTE(v2) = v112;
      v14 = v101;
LABEL_278:
      if ( v110 == 1 )
        KeReleaseMutex((PRKMUTEX)(v9 + 72), 0);
LABEL_21:
      if ( SourceDevice )
      {
        if ( v106 == 1 )
          DpiFdoResetFdo();
        if ( v5 )
        {
          v15 = (_DWORD *)*((_QWORD *)v5 + 185);
          if ( v15 && v15[2] == 1 )
          {
            ExFreePoolWithTag(v15, 0);
            *((_QWORD *)v5 + 185) = 0LL;
          }
          v16 = (_DWORD *)*((_QWORD *)v5 + 186);
          if ( v16 && v16[2] == 1 )
          {
            ExFreePoolWithTag(v16, 0);
            *((_QWORD *)v5 + 186) = 0LL;
          }
          if ( (_BYTE)v2 == 1 )
            DpiAcpiUnregisterAcpiCallbacks(SourceDevice);
          v17 = (void (__fastcall *)(_QWORD))*((_QWORD *)v5 + 73);
          if ( v17 )
          {
            v17(*((_QWORD *)v5 + 71));
            memset(v5 + 560, 0, 0x40uLL);
          }
          v18 = (void (__fastcall *)(_QWORD))*((_QWORD *)v5 + 81);
          if ( v18 )
          {
            v18(*((_QWORD *)v5 + 79));
            *((_OWORD *)v5 + 39) = 0LL;
            *((_OWORD *)v5 + 40) = 0LL;
            *((_OWORD *)v5 + 41) = 0LL;
          }
          v19 = (void (__fastcall *)(_QWORD))*((_QWORD *)v5 + 87);
          if ( v19 )
          {
            v19(*((_QWORD *)v5 + 85));
            memset(v5 + 672, 0, 0xB8uLL);
          }
          v20 = (void (__fastcall *)(_QWORD))*((_QWORD *)v5 + 110);
          if ( v20 )
          {
            v20(*((_QWORD *)v5 + 108));
            memset(v5 + 856, 0, 0x58uLL);
          }
          RtlFreeUnicodeString((PUNICODE_STRING)v5 + 32);
          RtlFreeUnicodeString((PUNICODE_STRING)v5 + 33);
          v21 = (void *)*((_QWORD *)v5 + 139);
          if ( v21 )
          {
            ExFreePoolWithTag(v21, 0);
            *((_QWORD *)v5 + 139) = 0LL;
          }
        }
        if ( DeviceExtension )
        {
          v88 = (struct _ERESOURCE *)*((_QWORD *)DeviceExtension + 21);
          if ( v88 )
          {
            if ( v14 == 1 )
              ExDeleteResourceLite(v88);
            v89 = (_DWORD *)*((_QWORD *)DeviceExtension + 21);
            if ( v89[26] == 1 && v89 )
            {
              ExFreePoolWithTag(v89, 0);
              *((_QWORD *)DeviceExtension + 21) = 0LL;
            }
          }
          v90 = (struct _DEVICE_OBJECT *)*((_QWORD *)DeviceExtension + 20);
          if ( v90 )
            IoDetachDevice(v90);
        }
        IoDeleteDevice(SourceDevice);
        SourceDevice = 0LL;
      }
      if ( v107 == 1 )
      {
        DpiDxgkDdiRemoveDevice(v9, v128);
        v91 = v105;
      }
      else
      {
        v91 = v105;
        if ( !v105 )
          goto LABEL_305;
        if ( !*(_QWORD *)(v9 + 1344)
          || (DiagnosticInfoArgs = DxgAllocateDiagnosticInfoArgs(1), (v93 = DiagnosticInfoArgs) == 0) )
        {
LABEL_303:
          if ( (_DWORD)started != -1071774664 )
            DxgCreateLiveDumpWithWdLogs(403LL, 2049LL);
          goto LABEL_305;
        }
        v94 = *(_DWORD *)(DiagnosticInfoArgs + 216);
        v95 = TargetDevice;
        *(_QWORD *)DiagnosticInfoArgs = v128;
        if ( (*(int (__fastcall **)(struct _DEVICE_OBJECT *, __int64))(v9 + 1344))(v95, DiagnosticInfoArgs) >= 0 )
        {
          if ( *(_DWORD *)(v93 + 220) > v94 )
            *(_DWORD *)(v93 + 220) = 0;
          DxgCreateLiveDumpWithDriverBlob(
            v95,
            0x1B0u,
            *(int *)(v93 + 8),
            (int)started,
            0LL,
            0LL,
            (struct _DXGKARG_COLLECTDIAGNOSTICINFO *)v93);
          v91 = 0;
        }
        DxgFreeDiagnosticInfoArgs((struct _DXGKARG_COLLECTDIAGNOSTICINFO *)v93);
      }
      if ( v91 )
        goto LABEL_303;
LABEL_305:
      v84 = v116;
      goto LABEL_306;
    }
    KeWaitForSingleObject((PVOID)(v9 + 72), Executive, 0, 0, 0LL);
    v86 = *(_QWORD **)DeviceExtension;
    if ( *(char **)(*(_QWORD *)DeviceExtension + 8LL) == DeviceExtension )
    {
      v87 = (PVOID *)*((_QWORD *)DeviceExtension + 1);
      if ( *v87 == DeviceExtension )
      {
        *v87 = v86;
        v86[1] = v87;
        --*(_DWORD *)(v9 + 128);
        if ( v5 && *((_DWORD *)v5 + 126) )
          DpiLdaUnLinkDeviceFromChain(SourceDevice);
        KeReleaseMutex((PRKMUTEX)(v9 + 72), 0);
        LODWORD(started) = RequiredSize;
        v14 = v101;
        v116 = v85;
        goto LABEL_278;
      }
    }
LABEL_280:
    __fastfail(3u);
  }
LABEL_306:
  v152 = 0LL;
  v153 = 0LL;
  v156 = 0;
  v96 = DxgkDiagCalcDuration1us(&v144);
  v151[0] = 6;
  v151[1] = 64;
  v155 = 0;
  v152 = 0LL;
  v154 = 0LL;
  v153 = 0LL;
  v157 = 34;
  v158 = v84;
  v159 = v96;
  v160 = (int)started;
  DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)v151, 0x100000000uLL);
  if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
  {
    *(_DWORD *)Exclusive = (_DWORD)started;
    McTemplateK0ppq_EtwWriteTransfer(v97, &EventExitDpiAddDevice, v98, DriverObject, TargetDevice, *(_QWORD *)Exclusive);
  }
  return (unsigned int)started;
}
