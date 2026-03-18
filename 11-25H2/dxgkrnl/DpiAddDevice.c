/*
 * XREFs of DpiAddDevice @ 0x1402329D0
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ?AcquireMiniportListMutex@@YAXXZ @ 0x140042008 (-AcquireMiniportListMutex@@YAXXZ.c)
 *     ?ReleaseMiniportListMutex@@YAXXZ @ 0x14004204C (-ReleaseMiniportListMutex@@YAXXZ.c)
 *     DxgkDiagCalcDuration1us @ 0x14004D4CC (DxgkDiagCalcDuration1us.c)
 *     McTemplateK0ppq_EtwWriteTransfer @ 0x1400610E4 (McTemplateK0ppq_EtwWriteTransfer.c)
 *     wcsncmp_0 @ 0x140065325 (wcsncmp_0.c)
 *     DpiGetDeviceRegistryPaths @ 0x14007DD24 (DpiGetDeviceRegistryPaths.c)
 *     DpiDxgkDdiLinkDevice @ 0x14008BB5C (DpiDxgkDdiLinkDevice.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14009F940 (_guard_dispatch_icall.c)
 *     memset @ 0x14009FCC0 (memset.c)
 *     ?DxgAllocateDiagnosticInfoArgs@@YAPEAU_DXGKARG_COLLECTDIAGNOSTICINFO@@W4_DXGK_DIAGNOSTICINFO_TYPE@@@Z @ 0x1401A8714 (-DxgAllocateDiagnosticInfoArgs@@YAPEAU_DXGKARG_COLLECTDIAGNOSTICINFO@@W4_DXGK_DIAGNOSTICINFO_TYP.c)
 *     ?DxgCreateLiveDumpWithDriverBlob@@YAJPEAU_DEVICE_OBJECT@@K_K111PEAU_DXGKARG_COLLECTDIAGNOSTICINFO@@@Z @ 0x1401A8800 (-DxgCreateLiveDumpWithDriverBlob@@YAJPEAU_DEVICE_OBJECT@@K_K111PEAU_DXGKARG_COLLECTDIAGNOSTICINF.c)
 *     ?DxgFreeDiagnosticInfoArgs@@YAXPEAU_DXGKARG_COLLECTDIAGNOSTICINFO@@@Z @ 0x1401A8A48 (-DxgFreeDiagnosticInfoArgs@@YAXPEAU_DXGKARG_COLLECTDIAGNOSTICINFO@@@Z.c)
 *     DpiFdoInitializeFdo @ 0x14023C19C (DpiFdoInitializeFdo.c)
 *     DpiFdoResetFdo @ 0x14023E5C8 (DpiFdoResetFdo.c)
 *     DpiFdoDetectVgaDeviceInCapabilities @ 0x1402433C0 (DpiFdoDetectVgaDeviceInCapabilities.c)
 *     DpiGetAgpStatus @ 0x140243894 (DpiGetAgpStatus.c)
 *     DpiSetDeviceUsageType @ 0x140243FC4 (DpiSetDeviceUsageType.c)
 *     DpiAcpiRegisterAcpiCallbacks @ 0x14024B6E4 (DpiAcpiRegisterAcpiCallbacks.c)
 *     DpiAcpiUnregisterAcpiCallbacks @ 0x14024B9E0 (DpiAcpiUnregisterAcpiCallbacks.c)
 *     DpiLdaLinkDeviceToChain @ 0x14024C96C (DpiLdaLinkDeviceToChain.c)
 *     DpiLdaUnLinkDeviceFromChain @ 0x14024CE84 (DpiLdaUnLinkDeviceFromChain.c)
 *     DpiDxgkDdiExchangePreStartInfo @ 0x14024D778 (DpiDxgkDdiExchangePreStartInfo.c)
 *     ?DxgkWriteDiagEntry@@YAJPEAU_DXGK_DIAG_HEADER@@_K@Z @ 0x14037580C (-DxgkWriteDiagEntry@@YAJPEAU_DXGK_DIAG_HEADER@@_K@Z.c)
 *     DpiReadPnpRegistryValue @ 0x140384310 (DpiReadPnpRegistryValue.c)
 *     DpEvalAcpiMethod @ 0x140395A00 (DpEvalAcpiMethod.c)
 *     ?DxgCreateLiveDumpWithWdLogs@@YAJK_K000T_WD_LIVEREPORT_FLAGS@@@Z @ 0x1403DA520 (-DxgCreateLiveDumpWithWdLogs@@YAJK_K000T_WD_LIVEREPORT_FLAGS@@@Z.c)
 *     DpiGetDevicePropertyString @ 0x1403F11AC (DpiGetDevicePropertyString.c)
 *     DpiFdoDetectPostDevice @ 0x1403F9324 (DpiFdoDetectPostDevice.c)
 *     DxgkGetDeviceFamily @ 0x1403FB614 (DxgkGetDeviceFamily.c)
 *     DpiDxgkDdiRemoveDevice @ 0x1403FB630 (DpiDxgkDdiRemoveDevice.c)
 *     DpiQueryBusInterface @ 0x140400764 (DpiQueryBusInterface.c)
 *     DpiDxgkDdiAddDevice @ 0x14040DDF0 (DpiDxgkDdiAddDevice.c)
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
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9
  struct _DEVICE_OBJECT *started; // rsi
  char v17; // di
  _DWORD *v18; // rcx
  _DWORD *v19; // rcx
  void (__fastcall *v20)(_QWORD); // rax
  void (__fastcall *v21)(_QWORD); // rax
  void (__fastcall *v22)(_QWORD); // rax
  void (__fastcall *v23)(_QWORD); // rax
  void *v24; // rcx
  void *v25; // r15
  __int64 v26; // rdx
  int RegistryValues; // eax
  int v28; // eax
  ULONG v29; // edi
  __int64 v30; // rdx
  int v31; // eax
  NTSTATUS v32; // eax
  struct _DEVICE_OBJECT *v33; // rdi
  PDEVICE_OBJECT v34; // rax
  bool v35; // zf
  struct _DEVICE_OBJECT *v36; // rcx
  int DeviceRegistryPaths; // eax
  int v38; // eax
  int v39; // ecx
  NTSTATUS DeviceProperty; // eax
  _DWORD *v41; // rdi
  NTSTATUS v42; // eax
  GUID *v43; // rdi
  int v44; // eax
  struct _DEVICE_OBJECT *AttachedDeviceReference; // rdi
  bool v46; // al
  struct _DEVICE_OBJECT *v47; // rsi
  __int64 v48; // r9
  __int64 Pool2; // rax
  unsigned __int16 *v50; // rcx
  int v51; // edx
  int v52; // edi
  bool v53; // al
  int AgpStatus; // eax
  __int64 v55; // rdi
  int v56; // eax
  char v57; // dl
  _BYTE *v58; // rcx
  int v59; // eax
  struct _DEVICE_OBJECT *v60; // rdi
  char v61; // al
  int v62; // eax
  char *v63; // rdi
  __int16 v64; // r10
  char **v65; // r8
  unsigned int v66; // edx
  char *v67; // rax
  signed __int64 v68; // rcx
  __int16 v69; // r10
  const wchar_t **v70; // r8
  int v71; // edx
  const wchar_t *v72; // rax
  char *v73; // rcx
  __int64 v74; // rdx
  _DWORD *v75; // rdx
  unsigned __int64 v76; // r8
  int v77; // eax
  char v78; // di
  __int64 v79; // r9
  int v80; // eax
  char **v81; // rcx
  __int64 v82; // rax
  NTSTATUS v83; // eax
  __int64 v84; // r9
  __int64 v85; // rax
  __int64 v86; // rax
  __int64 v87; // rdx
  bool v88; // cl
  int v89; // eax
  int v90; // edi
  int v91; // r15d
  _QWORD *v92; // rdx
  PVOID *v93; // rax
  struct _ERESOURCE *v94; // rcx
  _DWORD *v95; // rcx
  struct _DEVICE_OBJECT *v96; // rcx
  char v97; // r15
  __int64 DiagnosticInfoArgs; // rax
  __int64 v99; // rdi
  unsigned int v100; // ebx
  struct _DEVICE_OBJECT *v101; // r14
  int v102; // eax
  __int64 v103; // rcx
  __int64 v104; // r8
  BOOLEAN Exclusive[8]; // [rsp+28h] [rbp-D8h]
  char v107; // [rsp+50h] [rbp-B0h]
  char v108; // [rsp+51h] [rbp-AFh]
  char v109; // [rsp+51h] [rbp-AFh]
  char v110; // [rsp+52h] [rbp-AEh]
  char v111; // [rsp+53h] [rbp-ADh]
  char v112; // [rsp+54h] [rbp-ACh]
  char v113; // [rsp+55h] [rbp-ABh]
  char v114; // [rsp+56h] [rbp-AAh] BYREF
  char v115; // [rsp+57h] [rbp-A9h]
  char v116; // [rsp+58h] [rbp-A8h]
  PDEVICE_OBJECT SourceDevice; // [rsp+60h] [rbp-A0h] BYREF
  int v118; // [rsp+68h] [rbp-98h]
  char v119; // [rsp+6Ch] [rbp-94h]
  bool v120; // [rsp+6Dh] [rbp-93h]
  char v121; // [rsp+6Eh] [rbp-92h]
  int v122; // [rsp+70h] [rbp-90h]
  char v123; // [rsp+74h] [rbp-8Ch]
  char v124; // [rsp+75h] [rbp-8Bh]
  char v125; // [rsp+76h] [rbp-8Ah]
  ULONG ResultLength; // [rsp+78h] [rbp-88h] BYREF
  PDEVICE_OBJECT TargetDevice; // [rsp+80h] [rbp-80h]
  unsigned int v128; // [rsp+88h] [rbp-78h] BYREF
  int v129; // [rsp+8Ch] [rbp-74h]
  ULONG RequiredSize; // [rsp+90h] [rbp-70h] BYREF
  int v131; // [rsp+94h] [rbp-6Ch] BYREF
  int v132; // [rsp+98h] [rbp-68h] BYREF
  ULONG ReturnedProductType; // [rsp+9Ch] [rbp-64h] BYREF
  __int64 v134; // [rsp+A0h] [rbp-60h] BYREF
  PVOID P; // [rsp+A8h] [rbp-58h]
  ULONG Type; // [rsp+B0h] [rbp-50h] BYREF
  void *Source1; // [rsp+B8h] [rbp-48h]
  __int64 v138; // [rsp+C0h] [rbp-40h] BYREF
  PDRIVER_OBJECT DriverObject; // [rsp+C8h] [rbp-38h]
  int v140; // [rsp+D0h] [rbp-30h]
  int v141; // [rsp+D4h] [rbp-2Ch]
  const wchar_t *v142; // [rsp+D8h] [rbp-28h] BYREF
  int v143; // [rsp+E0h] [rbp-20h]
  _QWORD v144[2]; // [rsp+E8h] [rbp-18h] BYREF
  UNICODE_STRING String1; // [rsp+F8h] [rbp-8h] BYREF
  UNICODE_STRING v146; // [rsp+108h] [rbp+8h] BYREF
  UNICODE_STRING v147; // [rsp+118h] [rbp+18h] BYREF
  UNICODE_STRING v148; // [rsp+128h] [rbp+28h] BYREF
  _QWORD v149[2]; // [rsp+138h] [rbp+38h] BYREF
  __int64 v150; // [rsp+148h] [rbp+48h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+150h] [rbp+50h] BYREF
  _QWORD v152[14]; // [rsp+160h] [rbp+60h] BYREF
  _DWORD v153[4]; // [rsp+1D0h] [rbp+D0h] BYREF
  __int64 v154; // [rsp+1E0h] [rbp+E0h]
  __int64 v155; // [rsp+1E8h] [rbp+E8h] BYREF
  int v156; // [rsp+1F0h] [rbp+F0h]
  _DWORD v157[2]; // [rsp+200h] [rbp+100h] BYREF
  __int64 v158; // [rsp+208h] [rbp+108h]
  __int128 v159; // [rsp+210h] [rbp+110h]
  __int64 v160; // [rsp+220h] [rbp+120h]
  int v161; // [rsp+228h] [rbp+128h]
  int v162; // [rsp+22Ch] [rbp+12Ch]
  int v163; // [rsp+230h] [rbp+130h]
  int v164; // [rsp+234h] [rbp+134h]
  int v165; // [rsp+238h] [rbp+138h]
  int v166; // [rsp+23Ch] [rbp+13Ch]
  _DWORD VersionInformation[72]; // [rsp+240h] [rbp+140h] BYREF
  __int64 v168; // [rsp+360h] [rbp+260h]
  __int64 v169; // [rsp+368h] [rbp+268h]
  _QWORD v170[10]; // [rsp+370h] [rbp+270h] BYREF
  int v171; // [rsp+3C0h] [rbp+2C0h]
  int v172; // [rsp+3C4h] [rbp+2C4h]
  int v173; // [rsp+3C8h] [rbp+2C8h]
  int v174; // [rsp+3CCh] [rbp+2CCh]
  const wchar_t *v175; // [rsp+3D0h] [rbp+2D0h]
  __int128 v176; // [rsp+3E0h] [rbp+2E0h] BYREF
  __int128 v177; // [rsp+3F0h] [rbp+2F0h]
  int v178; // [rsp+400h] [rbp+300h]
  __int128 v179; // [rsp+408h] [rbp+308h] BYREF
  __int64 v180; // [rsp+418h] [rbp+318h]
  wchar_t v181; // [rsp+420h] [rbp+320h]
  wchar_t Str1[20]; // [rsp+428h] [rbp+328h] BYREF
  _OWORD v183[2]; // [rsp+450h] [rbp+350h] BYREF
  __int64 v184; // [rsp+470h] [rbp+370h]
  wchar_t v185; // [rsp+478h] [rbp+378h]
  _OWORD v186[2]; // [rsp+480h] [rbp+380h] BYREF
  wchar_t v187; // [rsp+4A0h] [rbp+3A0h]
  _OWORD v188[2]; // [rsp+4A8h] [rbp+3A8h] BYREF
  __int64 v189; // [rsp+4C8h] [rbp+3C8h]
  int v190; // [rsp+4D0h] [rbp+3D0h]
  _OWORD v191[2]; // [rsp+4D8h] [rbp+3D8h] BYREF
  __int64 v192; // [rsp+4F8h] [rbp+3F8h]
  _OWORD v193[4]; // [rsp+500h] [rbp+400h] BYREF
  int v194; // [rsp+540h] [rbp+440h]
  WCHAR Data[20]; // [rsp+550h] [rbp+450h] BYREF

  TargetDevice = a2;
  DriverObject = ClientIdentificationAddress;
  v134 = 0LL;
  v155 = 0LL;
  LOBYTE(v2) = 0;
  v156 = 0;
  v179 = *(_OWORD *)L"\\Driver\\VGPU";
  DeviceExtension = 0LL;
  v181 = aDriverVgpu[12];
  v180 = *(_QWORD *)L"VGPU";
  v5 = 0LL;
  v148.Buffer = (wchar_t *)&v179;
  v6 = 0;
  v186[0] = *(_OWORD *)L"\\Driver\\WddmWarp";
  v187 = aDriverWddmwarp[16];
  String1.Buffer = (wchar_t *)v186;
  v144[1] = v191;
  v191[0] = *(_OWORD *)L"\\Driver\\BasicRender";
  v185 = aDriverBasicdis[20];
  v192 = *(_QWORD *)L"der";
  v149[1] = v183;
  v186[1] = *(_OWORD *)L"WddmWarp";
  v190 = *(_DWORD *)L"r";
  v113 = 0;
  v183[0] = *(_OWORD *)L"\\Driver\\BasicDisplay";
  SourceDevice = 0LL;
  v191[1] = *(_OWORD *)L"BasicRender";
  ResultLength = 0;
  v111 = 1;
  v184 = *(_QWORD *)L"play";
  v118 = v2;
  v183[1] = *(_OWORD *)L"BasicDisplay";
  v112 = 0;
  v116 = 0;
  v188[0] = *(_OWORD *)L"\\Driver\\VirtualRender";
  v125 = 0;
  v189 = *(_QWORD *)L"ender";
  v107 = 0;
  v110 = 0;
  v121 = 0;
  v123 = 0;
  v119 = 0;
  v124 = 0;
  v114 = 0;
  v115 = 0;
  v120 = 0;
  v108 = 0;
  v122 = 3;
  *(_QWORD *)&v148.Length = 1703960LL;
  *(_QWORD *)&String1.Length = 2228256LL;
  v144[0] = 2621478LL;
  v149[0] = 2752552LL;
  v188[1] = *(_OWORD *)L"VirtualRender";
  *(_QWORD *)&v146.Length = 2883626LL;
  v146.Buffer = (wchar_t *)v188;
  v193[0] = *(_OWORD *)L"\\Driver\\VirtualComputeAccelerator";
  v193[1] = *(_OWORD *)L"VirtualComputeAccelerator";
  v194 = *(_DWORD *)L"r";
  v193[2] = *(_OWORD *)L"omputeAccelerator";
  v193[3] = *(_OWORD *)L"celerator";
  v147.Buffer = (wchar_t *)v193;
  *(_QWORD *)&v147.Length = 4456514LL;
  if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
    McTemplateK0ppq_EtwWriteTransfer(
      (__int64)ClientIdentificationAddress,
      &EventEnterDpiAddDevice,
      1LL,
      ClientIdentificationAddress,
      a2,
      0);
  v150 = MEMORY[0xFFFFF78000000320];
  DriverObjectExtension = IoGetDriverObjectExtension(ClientIdentificationAddress, ClientIdentificationAddress);
  v9 = (__int64)DriverObjectExtension;
  if ( !DriverObjectExtension || DriverObjectExtension[4] != 1953656900 || DriverObjectExtension[5] != 1 )
  {
    LODWORD(started) = -1073741811;
    WdLogSingleEntry3(0LL, 275LL, 21LL, -1073741811LL);
    WdLogGlobalForLineNumber = 371;
    v17 = 0;
    goto LABEL_21;
  }
  p_DriverName = &ClientIdentificationAddress->DriverName;
  LOBYTE(v8) = 1;
  if ( (wchar_t *)RtlFindUnicodeSubstring(&ClientIdentificationAddress->DriverName, v144, v8) == ClientIdentificationAddress->DriverName.Buffer )
  {
    v6 = 1;
    v110 = 1;
    v123 = 1;
    v119 = 1;
    goto LABEL_60;
  }
  if ( !RtlCompareUnicodeString(&String1, &ClientIdentificationAddress->DriverName, 1u) )
  {
    v119 = 1;
    goto LABEL_60;
  }
  if ( !RtlCompareUnicodeString(&v146, &ClientIdentificationAddress->DriverName, 1u)
    || !RtlCompareUnicodeString(&v147, &ClientIdentificationAddress->DriverName, 1u) )
  {
    v108 = 1;
    goto LABEL_60;
  }
  if ( !RtlCompareUnicodeString(&v148, &ClientIdentificationAddress->DriverName, 1u) )
  {
    v124 = 1;
    goto LABEL_60;
  }
  LOBYTE(v11) = 1;
  if ( (wchar_t *)RtlFindUnicodeSubstring(&ClientIdentificationAddress->DriverName, v149, v11) != ClientIdentificationAddress->DriverName.Buffer )
  {
    v131 = 0;
    v120 = (unsigned int)DxgkGetDeviceFamily(&v131) == 5 && ((v131 - 192) & 0xFFFFFFFD) == 0;
    v115 = *(_BYTE *)(v9 + 134);
    v128 = 0;
    memset(v152, 0, sizeof(v152));
    v26 = *(_QWORD *)(v9 + 48);
    v152[2] = L"Start";
    LODWORD(v152[1]) = 292;
    v152[3] = &v128;
    LODWORD(v152[4]) = 67108868;
    LODWORD(v152[6]) = 4;
    RegistryValues = RtlQueryRegistryValuesEx(0LL, v26, v152, 0LL, 0LL);
    LODWORD(started) = RegistryValues;
    if ( RegistryValues >= 0 )
    {
      if ( v128 == 3 )
      {
        v6 = 0;
        goto LABEL_60;
      }
      WdLogSingleEntry1(2LL, v128);
      WdLogGlobalForLineNumber = 507;
      LODWORD(started) = -1073741637;
    }
    else
    {
      WdLogSingleEntry1(2LL, RegistryValues);
      WdLogGlobalForLineNumber = 496;
    }
LABEL_19:
    v17 = 0;
LABEL_20:
    LOBYTE(v2) = v118;
    goto LABEL_21;
  }
  Source1 = 0LL;
  v121 = 1;
  DevicePropertyString = DpiGetDevicePropertyString(TargetDevice, DevicePropertyHardwareID, (__int64)&ResultLength);
  LODWORD(started) = DevicePropertyString;
  if ( DevicePropertyString < 0 )
  {
    WdLogSingleEntry1(2LL, DevicePropertyString);
    WdLogGlobalForLineNumber = 424;
    goto LABEL_19;
  }
  v25 = Source1;
  if ( ResultLength >= 0x24 && RtlCompareMemory(Source1, L"ROOT\\BasicDisplay", 0x24uLL) == 36 )
  {
    v110 = 1;
    if ( byte_14015DD52 )
    {
      v111 = 0;
      LODWORD(started) = -1073741637;
      WdLogSingleEntry1(4LL, 0LL);
      WdLogGlobalForLineNumber = 449;
    }
  }
  if ( v25 )
  {
    ExFreePoolWithTag(v25, 0);
    Source1 = 0LL;
  }
  if ( (int)started < 0 )
    goto LABEL_19;
  v6 = v110;
LABEL_60:
  if ( byte_14015E3C8 && !v6 )
  {
    WdLogSingleEntry1(3LL, p_DriverName);
    WdLogGlobalForLineNumber = 517;
    LODWORD(started) = -1073741637;
    goto LABEL_19;
  }
  v28 = DpiDxgkDdiAddDevice(v9, TargetDevice, &v134);
  LODWORD(started) = v28;
  if ( v28 < 0 )
  {
    WdLogSingleEntry2(2LL, *(_QWORD *)(v9 + 144), v28);
    WdLogGlobalForLineNumber = 543;
    goto LABEL_19;
  }
  v113 = 1;
  if ( v134 )
  {
    v30 = *(_QWORD *)(v9 + 616);
    v29 = 6448;
    v129 = 2;
    v122 = 0;
    if ( v30 )
    {
      if ( v110 )
      {
        LODWORD(started) = -1073741637;
        WdLogSingleEntry2(2LL, v30, -1073741637LL);
        WdLogGlobalForLineNumber = 606;
        goto LABEL_19;
      }
      v31 = DpiDxgkDdiLinkDevice(v9, (__int64)TargetDevice, v134, (int *)&v155);
      LODWORD(started) = v31;
      if ( v31 < 0 )
      {
        WdLogSingleEntry2(2LL, *(_QWORD *)(v9 + 616), v31);
        WdLogGlobalForLineNumber = 620;
        goto LABEL_19;
      }
      if ( HIDWORD(v155) > 0x100 )
      {
        LODWORD(started) = -1073741756;
        WdLogSingleEntry1(2LL, -1073741756LL);
        WdLogGlobalForLineNumber = 636;
        goto LABEL_19;
      }
      if ( HIDWORD(v155) && !(_BYTE)v156 )
      {
        v29 = 2848;
        v129 = 3;
        v122 = 1;
      }
    }
  }
  else
  {
    v29 = 496;
    v129 = 4;
    v122 = 2;
    if ( v110 )
    {
      LODWORD(started) = -1073741637;
      WdLogSingleEntry1(2LL, -1073741637LL);
      WdLogGlobalForLineNumber = 573;
      goto LABEL_19;
    }
  }
  v32 = IoCreateDevice(DriverObject, v29, 0LL, 0x23u, v115 == 0 ? 0x100 : 0, 0, &SourceDevice);
  LODWORD(started) = v32;
  if ( v32 < 0 )
  {
    WdLogSingleEntry1(2LL, v32);
    WdLogGlobalForLineNumber = 676;
    goto LABEL_19;
  }
  v122 |= (unsigned int)SourceDevice & 0xFFFF00;
  DeviceExtension = (char *)SourceDevice->DeviceExtension;
  *((_DWORD *)DeviceExtension + 5) = v129;
  *((_DWORD *)DeviceExtension + 4) = 1953656900;
  *((_QWORD *)DeviceExtension + 3) = SourceDevice;
  *((_QWORD *)DeviceExtension + 4) = SourceDevice;
  *((_QWORD *)DeviceExtension + 5) = v9;
  *((_QWORD *)DeviceExtension + 6) = v134;
  DeviceExtension[480] = v110;
  DeviceExtension[56] = 1;
  DeviceExtension[481] = v108;
  IoInitializeRemoveLockEx((PIO_REMOVE_LOCK)DeviceExtension + 2, 0x74727044u, 1u, 0, 0x20u);
  v33 = TargetDevice;
  *((_QWORD *)DeviceExtension + 19) = TargetDevice;
  v34 = IoAttachDeviceToDeviceStack(SourceDevice, v33);
  *((_QWORD *)DeviceExtension + 20) = v34;
  if ( !v34 )
  {
    LODWORD(started) = -1073741810;
    WdLogSingleEntry1(2LL, -1073741810LL);
    WdLogGlobalForLineNumber = 718;
    v17 = 0;
    goto LABEL_20;
  }
  *((_QWORD *)DeviceExtension + 38) = DpiFdoHandleRemoveDevice;
  v35 = *((_DWORD *)DeviceExtension + 4) == 1953656900;
  *((_DWORD *)DeviceExtension + 71) = 1;
  *((_DWORD *)DeviceExtension + 70) = 1;
  if ( !v35 || (unsigned int)(*((_DWORD *)DeviceExtension + 5) - 2) > 1 )
  {
    v78 = v114;
    goto LABEL_217;
  }
  v36 = (struct _DEVICE_OBJECT *)*((_QWORD *)DeviceExtension + 19);
  v5 = DeviceExtension;
  RequiredSize = 0;
  wcscpy(Str1, L"ComputeAccelerator");
  Type = 0;
  if ( IoGetDevicePropertyData(v36, &DEVPKEY_Device_Class, 0, 0, 0x28u, Data, &RequiredSize, &Type) >= 0 )
  {
    DestinationString = 0LL;
    RtlInitUnicodeString(&DestinationString, Data);
    if ( DestinationString.Length >= 0x13u && !wcsncmp_0(Str1, DestinationString.Buffer, 0x12uLL) )
      DeviceExtension[2722] = 1;
  }
  DeviceExtension[2717] = v119;
  DeviceExtension[1153] = v121;
  DeviceExtension[1154] = v123;
  DeviceExtension[1158] = v115;
  DeviceExtension[2718] = v124;
  DeviceExtension[2719] = v120;
  *((_DWORD *)DeviceExtension + 688) = 1;
  *((_DWORD *)DeviceExtension + 686) = 0;
  *((_QWORD *)DeviceExtension + 36) = DpiFdoHandleStartDevice;
  *((_QWORD *)DeviceExtension + 59) = &DpiFdoHandleSurpriseRemoval;
  *((_QWORD *)DeviceExtension + 49) = &DpiFdoHandleFilterResources;
  if ( !byte_14015DD51 && !DeviceExtension[480] )
    *((_QWORD *)DeviceExtension + 40) = &DpiFdoHandleStopDevice;
  *(_QWORD *)(DeviceExtension + 500) = v155;
  *((_DWORD *)DeviceExtension + 127) = v156;
  DeviceRegistryPaths = DpiGetDeviceRegistryPaths((__int64)SourceDevice, v33, v9);
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
      v38 = DpiAcpiRegisterAcpiCallbacks(SourceDevice);
      v39 = (unsigned __int8)v118;
      if ( v38 >= 0 )
        v39 = 1;
      v118 = v39;
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
  v41 = DeviceExtension + 1148;
  v42 = IoGetDeviceProperty(started, DevicePropertyAddress, 4u, DeviceExtension + 1148, &ResultLength);
  if ( v42 < 0 || *v41 == -1 )
  {
    WdLogSingleEntry1(3LL, v42);
    *v41 = -1;
    WdLogGlobalForLineNumber = 893;
  }
  v43 = (GUID *)(DeviceExtension + 544);
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
    *v43 = GUID_BUS_TYPE_INVALID;
  }
  if ( v110 )
  {
    v109 = v114;
  }
  else
  {
    v44 = DpiFdoDetectPostDevice(SourceDevice, &v114);
    LODWORD(started) = v44;
    if ( v44 < 0 )
    {
      WdLogSingleEntry1(2LL, v44);
      WdLogGlobalForLineNumber = 935;
      goto LABEL_265;
    }
    v109 = v114;
    if ( v114 )
    {
      WdLogSingleEntry1(4LL, SourceDevice);
      WdLogGlobalForLineNumber = 950;
      DeviceExtension[1152] = 1;
      byte_14015E168 = 1;
      if ( byte_14015DD51 == 1 )
      {
        AttachedDeviceReference = IoGetAttachedDeviceReference(TargetDevice);
        DpiSetDeviceUsageType(AttachedDeviceReference);
        ObfDereferenceObject(AttachedDeviceReference);
        v43 = (GUID *)(DeviceExtension + 544);
      }
    }
  }
  v132 = 0;
  v46 = (int)DpiReadPnpRegistryValue(SourceDevice, L"SoftGPUAdapter", &v132, 4LL, 2) >= 0 && v132;
  DeviceExtension[2716] = v46;
  if ( DeviceExtension[1158] )
  {
    *((_DWORD *)DeviceExtension + 281) = 5140;
    *((_QWORD *)DeviceExtension + 142) = 0LL;
    *((_DWORD *)DeviceExtension + 280) = 0;
    *((_QWORD *)DeviceExtension + 141) = 139LL;
    goto LABEL_204;
  }
  if ( RtlCompareMemory(v43, &GUID_BUS_TYPE_PCI, 0x10uLL) != 16 )
  {
    if ( RtlCompareMemory(DeviceExtension + 544, &GUID_BUS_TYPE_ACPI, 0x10uLL) == 16 )
    {
      v154 = 0LL;
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
      v178 = 0;
      BYTE1(v153[2]) = 0;
      HIWORD(v153[2]) = 0;
      v153[3] = 0;
      strcpy((char *)v153, "AeiC_HID");
      v176 = 0LL;
      v177 = 0LL;
      v59 = DpEvalAcpiMethod((int)SourceDevice, &v176, 0x24u);
      if ( v59 >= 0 )
      {
        *(_QWORD *)(DeviceExtension + 1124) = v177;
      }
      else
      {
        WdLogSingleEntry1(2LL, v59);
        WdLogGlobalForLineNumber = 1262;
      }
      v178 = 0;
      strcpy((char *)v153, "AeiC_SUB");
      BYTE1(v153[2]) = 0;
      HIWORD(v153[2]) = 0;
      v153[3] = 0;
      v176 = 0LL;
      v177 = 0LL;
      if ( (int)DpEvalAcpiMethod((int)SourceDevice, &v176, 0x24u) >= 0 )
      {
        *(_QWORD *)(DeviceExtension + 1132) = v177;
      }
      else
      {
        WdLogSingleEntry1(4LL, DpEvalAcpiMethod);
        WdLogGlobalForLineNumber = 1296;
      }
      v178 = 0;
      strcpy((char *)v153, "AeiC_HRV");
      BYTE1(v153[2]) = 0;
      HIWORD(v153[2]) = 0;
      v153[3] = 0;
      v176 = 0LL;
      v177 = 0LL;
      LODWORD(started) = DpEvalAcpiMethod((int)SourceDevice, &v176, 0x24u);
      if ( (int)started >= 0 )
      {
        *((_DWORD *)DeviceExtension + 285) = (unsigned __int16)v177;
      }
      else
      {
        WdLogSingleEntry1(4LL, DpEvalAcpiMethod);
        WdLogGlobalForLineNumber = 1330;
        LODWORD(started) = 0;
      }
      if ( v109 )
      {
        v60 = IoGetAttachedDeviceReference(TargetDevice);
        started = (struct _DEVICE_OBJECT *)(int)DpiSetDeviceUsageType(v60);
        ObfDereferenceObject(v60);
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
        v61 = DeviceExtension[2719];
        if ( !v61 && !g_OSTestSigningEnabled )
        {
          LODWORD(started) = -1073741637;
          WdLogSingleEntry1(2LL, -1073741637LL);
          WdLogGlobalForLineNumber = 1835;
          goto LABEL_265;
        }
        *((_DWORD *)DeviceExtension + 280) = 3;
        if ( v61 )
        {
          *((_DWORD *)DeviceExtension + 281) = 5140;
          *((_DWORD *)DeviceExtension + 285) = 0;
          *((_DWORD *)DeviceExtension + 282) = 53248;
          *(_QWORD *)(DeviceExtension + 1132) = 4098LL;
        }
        else
        {
          P = 0LL;
          v62 = DpiGetDevicePropertyString(TargetDevice, DevicePropertyCompatibleIDs, (__int64)&ResultLength);
          LODWORD(started) = v62;
          if ( v62 >= 0 && (v63 = (char *)P) != 0LL )
          {
            if ( DeviceExtension[2716] )
            {
              *((_DWORD *)DeviceExtension + 281) = 5140;
              v64 = *(_WORD *)v63;
              v170[0] = L"SoftGPU_Full_D3D12";
              v65 = (char **)v170;
              v168 = 135LL;
              v170[3] = L"SoftGPU_Full_D3D9L";
              v66 = 0;
              v169 = 0LL;
              v170[6] = L"SoftGPU_Rod";
              v170[9] = L"SoftGPU_Dod";
              v175 = L"SoftGPU_MCDM";
              v170[1] = 128LL;
              v170[2] = 0LL;
              v170[4] = 136LL;
              v170[5] = 0LL;
              v170[7] = 137LL;
              v170[8] = 0LL;
              v171 = 134;
              v172 = 4660;
              v173 = 22136;
              v174 = 39612;
              while ( 1 )
              {
                v67 = *v65;
                if ( v64 )
                  break;
LABEL_186:
                if ( !*(_WORD *)v67 )
                  goto LABEL_189;
                ++v66;
                v65 += 3;
                if ( v66 >= 5 )
                  goto LABEL_202;
              }
              v68 = v63 - v67;
              while ( *(_WORD *)v67 )
              {
                if ( *(_WORD *)&v67[v68] == *(_WORD *)v67 )
                {
                  v67 += 2;
                  if ( *(_WORD *)&v67[v68] )
                    continue;
                }
                goto LABEL_186;
              }
LABEL_189:
              *((_DWORD *)DeviceExtension + 282) = *((_DWORD *)&v168 + 6 * (int)v66);
              *((_DWORD *)DeviceExtension + 284) = *((_DWORD *)&v168 + 6 * (int)v66 + 1);
              *((_DWORD *)DeviceExtension + 283) = v170[3 * (int)v66 - 1];
              *((_DWORD *)DeviceExtension + 285) = *((_DWORD *)&v169 + 6 * (int)v66 + 1);
            }
            else
            {
              v69 = *(_WORD *)P;
              v142 = L"MCDMTestDevice";
              v70 = &v142;
              v140 = 5140;
              v71 = 0;
              v141 = 256;
              v143 = 2721;
              while ( 1 )
              {
                v72 = *v70;
                if ( v69 )
                  break;
LABEL_196:
                if ( !*v72 )
                  goto LABEL_199;
                v70 += 3;
                if ( ++v71 )
                  goto LABEL_200;
              }
              v73 = (char *)((_BYTE *)P - (_BYTE *)v72);
              while ( *v72 )
              {
                if ( *(_WORD *)&v73[(_QWORD)v72] == *v72 )
                {
                  if ( *(_WORD *)&v73[(_QWORD)++v72] )
                    continue;
                }
                goto LABEL_196;
              }
LABEL_199:
              v74 = 3LL * v71;
              *((_DWORD *)DeviceExtension + 281) = *(&v140 + 2 * v74);
              *((_DWORD *)DeviceExtension + 282) = *(&v141 + 2 * v74);
              DeviceExtension[LODWORD(v144[v74])] = 1;
LABEL_200:
              if ( !*((_DWORD *)DeviceExtension + 282) )
              {
                ExFreePoolWithTag(v63, 0);
                LODWORD(started) = -1073741637;
                P = 0LL;
                WdLogSingleEntry1(2LL, -1073741637LL);
                WdLogGlobalForLineNumber = 1809;
                goto LABEL_265;
              }
            }
LABEL_202:
            ExFreePoolWithTag(v63, 0);
            P = 0LL;
          }
          else
          {
            WdLogSingleEntry1(2LL, v62);
            WdLogGlobalForLineNumber = 1821;
          }
        }
      }
    }
    goto LABEL_204;
  }
  WdLogSingleEntry1(4LL, SourceDevice);
  v47 = TargetDevice;
  WdLogGlobalForLineNumber = 1029;
  DpiQueryBusInterface(TargetDevice, (__int64)(DeviceExtension + 560));
  if ( !*((_QWORD *)DeviceExtension + 77) )
  {
    LODWORD(started) = -1073741127;
    WdLogSingleEntry1(2LL, -1073741127LL);
    WdLogGlobalForLineNumber = 1054;
    goto LABEL_265;
  }
  Pool2 = ExAllocatePool2(256LL, 256LL, 1953656900LL, v48);
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
  v50 = (unsigned __int16 *)*((_QWORD *)DeviceExtension + 139);
  *((_DWORD *)DeviceExtension + 280) = 1;
  v51 = *v50;
  *((_DWORD *)DeviceExtension + 281) = v51;
  v52 = v50[1];
  *((_DWORD *)DeviceExtension + 282) = v52;
  *((_DWORD *)DeviceExtension + 285) = *((unsigned __int8 *)v50 + 8);
  if ( (v50[7] & 0x7F) == 0 )
  {
    *((_DWORD *)DeviceExtension + 283) = v50[22];
    *((_DWORD *)DeviceExtension + 284) = v50[23];
  }
  v53 = v51 == 22611 && v52 == 4097;
  DeviceExtension[2720] = v53;
  DpiQueryBusInterface(v47, (__int64)(DeviceExtension + 624));
  DpiQueryBusInterface(*((PDEVICE_OBJECT *)DeviceExtension + 20), (__int64)(DeviceExtension + 672));
  AgpStatus = DpiGetAgpStatus(SourceDevice);
  if ( AgpStatus >= 0 && !*((_QWORD *)DeviceExtension + 85) )
  {
    WdLogSingleEntry1(3LL, AgpStatus);
    WdLogGlobalForLineNumber = 1142;
  }
  v55 = *((_QWORD *)SourceDevice->DeviceExtension + 139);
  v56 = DpiFdoDetectVgaDeviceInCapabilities();
  if ( v56 < 0 )
  {
    LODWORD(started) = v56;
LABEL_146:
    if ( v109 )
    {
      WdLogSingleEntry1(3LL, SourceDevice);
      WdLogGlobalForLineNumber = 1198;
    }
    goto LABEL_204;
  }
  v57 = *(_BYTE *)(v55 + 11);
  v58 = (_BYTE *)(v55 + 10);
  if ( (v57 || *v58 != 1) && (v57 != 3 || *v58) )
  {
    LODWORD(started) = -1073741823;
    goto LABEL_146;
  }
  LODWORD(started) = v56;
  if ( v109 )
    goto LABEL_142;
  if ( !byte_14015E168 )
  {
    WdLogSingleEntry1(3LL, SourceDevice);
    WdLogGlobalForLineNumber = 1168;
    v109 = 1;
    v114 = 1;
    byte_14015E169 = 1;
LABEL_142:
    if ( byte_14015DD55 )
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
  v75 = DeviceExtension + 1336;
  *((_WORD *)DeviceExtension + 660) = 64;
  v76 = 7LL;
  if ( (((_BYTE)DeviceExtension + 56) & 4) != 0 )
  {
    *v75 = 1;
    v76 = 6LL;
    v75 = DeviceExtension + 1340;
  }
  memset64(v75, 0x100000001uLL, v76 >> 1);
  if ( (v76 & 1) != 0 )
    v75[v76 - 1] = 1;
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
  v35 = *((_DWORD *)DeviceExtension + 4) == 1953656900;
  *((_DWORD *)DeviceExtension + 687) = 69639;
  if ( v35 )
  {
    if ( *((_DWORD *)DeviceExtension + 5) == 2 )
    {
      v77 = DpiFdoInitializeFdo(SourceDevice);
      LODWORD(started) = v77;
      if ( v77 < 0 )
      {
        WdLogSingleEntry1(2LL, v77);
        WdLogGlobalForLineNumber = 1908;
        goto LABEL_265;
      }
      v112 = 1;
    }
    else if ( *((_DWORD *)DeviceExtension + 5) == 3 )
    {
      LODWORD(started) = 0;
      *((_QWORD *)SourceDevice->DeviceExtension + 43) = &DpiLdaHandleQueryDeviceRelations;
    }
  }
  v78 = v109;
LABEL_217:
  DeviceExtension[57] = v115;
  KeWaitForSingleObject((PVOID)(v9 + 72), Executive, 0, 0, 0LL);
  v116 = 1;
  if ( !v5 || !*((_DWORD *)v5 + 126) || (v80 = DpiLdaLinkDeviceToChain(SourceDevice), LODWORD(started) = v80, v80 >= 0) )
  {
    v81 = *(char ***)(v9 + 64);
    if ( *v81 != (char *)(v9 + 56) )
      goto LABEL_280;
    *(_QWORD *)DeviceExtension = v9 + 56;
    *((_QWORD *)DeviceExtension + 1) = v81;
    *v81 = DeviceExtension;
    *(_QWORD *)(v9 + 64) = DeviceExtension;
    ++*(_DWORD *)(v9 + 128);
    v125 = 1;
    if ( !*((_QWORD *)DeviceExtension + 21) )
    {
      v82 = ExAllocatePool2(64LL, 112LL, 1953656900LL, v79);
      *((_QWORD *)DeviceExtension + 21) = v82;
      if ( !v82 )
      {
        LODWORD(started) = -1073741801;
        WdLogSingleEntry1(6LL, -1073741801LL);
        WdLogGlobalForLineNumber = 1998;
        goto LABEL_265;
      }
      *(_DWORD *)(v82 + 104) = 1;
      *(_BYTE *)(*((_QWORD *)DeviceExtension + 21) + 108LL) = 0;
      v83 = ExInitializeResourceLite(*((PERESOURCE *)DeviceExtension + 21));
      LODWORD(started) = v83;
      if ( v83 < 0 )
      {
        WdLogSingleEntry1(2LL, v83);
        WdLogGlobalForLineNumber = 2012;
        goto LABEL_265;
      }
      v107 = 1;
    }
    KeInitializeMutex((PRKMUTEX)(DeviceExtension + 176), 0);
    if ( v5 )
    {
      if ( !*((_QWORD *)v5 + 185) )
      {
        v85 = ExAllocatePool2(64LL, 16LL, 1953656900LL, v84);
        *((_QWORD *)v5 + 185) = v85;
        if ( !v85 )
        {
          LODWORD(started) = -1073741801;
          WdLogSingleEntry1(6LL, -1073741801LL);
          WdLogGlobalForLineNumber = 2040;
          goto LABEL_266;
        }
        *(_DWORD *)(v85 + 8) = 1;
        KeInitializeSpinLock(*((PKSPIN_LOCK *)v5 + 185));
      }
      if ( !*((_QWORD *)v5 + 186) )
      {
        v86 = ExAllocatePool2(64LL, 16LL, 1953656900LL, v84);
        *((_QWORD *)v5 + 186) = v86;
        if ( !v86 )
        {
          LODWORD(started) = -1073741801;
          WdLogSingleEntry1(6LL, -1073741801LL);
          WdLogGlobalForLineNumber = 2062;
          goto LABEL_266;
        }
        *(_DWORD *)(v86 + 8) = 1;
        KeInitializeSpinLock(*((PKSPIN_LOCK *)v5 + 186));
      }
      *((_DWORD *)v5 + 374) = 0;
      memset(v5 + 1504, 0, 0x400uLL);
    }
    KeReleaseMutex((PRKMUTEX)(v9 + 72), 0);
    v116 = 0;
    *((_QWORD *)DeviceExtension + 16) = DpiFdoDispatchPnp;
    if ( v5 )
      *((_QWORD *)v5 + 17) = DpiFdoDispatchPower;
    if ( v78 )
    {
      *(_BYTE *)(*((_QWORD *)v5 + 21) + 108LL) = 1;
      AcquireMiniportListMutex();
      if ( qword_14015E000 )
      {
        if ( v5[1152] )
        {
          qword_14015E000 = (__int64)SourceDevice;
          WdLogSingleEntry2(2LL, SourceDevice, (int)started);
          WdLogGlobalForLineNumber = 2120;
        }
      }
      else
      {
        qword_14015E000 = (__int64)SourceDevice;
      }
      v87 = *((_QWORD *)v5 + 6);
      v138 = 0LL;
      started = (struct _DEVICE_OBJECT *)(int)DpiDxgkDdiExchangePreStartInfo(v9, v87, &v138);
      ReleaseMiniportListMutex();
      if ( (int)started < 0 )
      {
        WdLogSingleEntry2(2LL, *(_QWORD *)(v9 + 1144), started);
        WdLogGlobalForLineNumber = 2144;
        goto LABEL_265;
      }
      if ( *((_DWORD *)v5 + 4) == 1953656900 && *((_DWORD *)v5 + 5) == 2 )
      {
        v88 = (v138 & 0x200000000LL) != 0;
        v5[2845] = BYTE4(v138) & 1;
        v5[2846] = v88;
      }
    }
    if ( v110 && v121 )
    {
      if ( (qword_14015DFF8 = (__int64)SourceDevice,
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
        || byte_14015DD53 )
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
  WdLogSingleEntry1(2LL, v80);
  WdLogGlobalForLineNumber = 1963;
LABEL_266:
  if ( *((_DWORD *)v5 + 4) == 1953656900 && *((_DWORD *)v5 + 5) == 2 )
    DxgkLogInternalTriageEvent(
      *((_QWORD *)v5 + 504),
      131077,
      0xFFFFFFFFLL,
      L"Adapter AddDevice has completed with status %1",
      (int)started,
      0LL,
      0LL,
      0LL,
      0LL);
LABEL_269:
  v89 = (int)started;
  LOBYTE(v14) = v107;
  LOBYTE(v13) = v112;
  v90 = v122;
  v91 = v122;
  LOBYTE(v2) = v118;
  RequiredSize = (unsigned int)started;
  if ( (int)started < 0 )
  {
    LOBYTE(v89) = v118;
    v118 = v89;
    if ( v125 != 1 )
    {
      LOBYTE(v2) = v118;
      v17 = v107;
LABEL_278:
      if ( v116 == 1 )
        KeReleaseMutex((PRKMUTEX)(v9 + 72), 0);
LABEL_21:
      if ( SourceDevice )
      {
        if ( v112 == 1 )
          DpiFdoResetFdo();
        if ( v5 )
        {
          v18 = (_DWORD *)*((_QWORD *)v5 + 185);
          if ( v18 && v18[2] == 1 )
          {
            ExFreePoolWithTag(v18, 0);
            *((_QWORD *)v5 + 185) = 0LL;
          }
          v19 = (_DWORD *)*((_QWORD *)v5 + 186);
          if ( v19 && v19[2] == 1 )
          {
            ExFreePoolWithTag(v19, 0);
            *((_QWORD *)v5 + 186) = 0LL;
          }
          if ( (_BYTE)v2 == 1 )
            DpiAcpiUnregisterAcpiCallbacks(SourceDevice);
          v20 = (void (__fastcall *)(_QWORD))*((_QWORD *)v5 + 73);
          if ( v20 )
          {
            v20(*((_QWORD *)v5 + 71));
            memset(v5 + 560, 0, 0x40uLL);
          }
          v21 = (void (__fastcall *)(_QWORD))*((_QWORD *)v5 + 81);
          if ( v21 )
          {
            v21(*((_QWORD *)v5 + 79));
            *((_OWORD *)v5 + 39) = 0LL;
            *((_OWORD *)v5 + 40) = 0LL;
            *((_OWORD *)v5 + 41) = 0LL;
          }
          v22 = (void (__fastcall *)(_QWORD))*((_QWORD *)v5 + 87);
          if ( v22 )
          {
            v22(*((_QWORD *)v5 + 85));
            memset(v5 + 672, 0, 0xB8uLL);
          }
          v23 = (void (__fastcall *)(_QWORD))*((_QWORD *)v5 + 110);
          if ( v23 )
          {
            v23(*((_QWORD *)v5 + 108));
            memset(v5 + 856, 0, 0x58uLL);
          }
          RtlFreeUnicodeString((PUNICODE_STRING)v5 + 32);
          RtlFreeUnicodeString((PUNICODE_STRING)v5 + 33);
          v24 = (void *)*((_QWORD *)v5 + 139);
          if ( v24 )
          {
            ExFreePoolWithTag(v24, 0);
            *((_QWORD *)v5 + 139) = 0LL;
          }
        }
        if ( DeviceExtension )
        {
          v94 = (struct _ERESOURCE *)*((_QWORD *)DeviceExtension + 21);
          if ( v94 )
          {
            if ( v17 == 1 )
              ExDeleteResourceLite(v94);
            v95 = (_DWORD *)*((_QWORD *)DeviceExtension + 21);
            if ( v95[26] == 1 && v95 )
            {
              ExFreePoolWithTag(v95, 0);
              *((_QWORD *)DeviceExtension + 21) = 0LL;
            }
          }
          v96 = (struct _DEVICE_OBJECT *)*((_QWORD *)DeviceExtension + 20);
          if ( v96 )
            IoDetachDevice(v96);
        }
        IoDeleteDevice(SourceDevice);
        SourceDevice = 0LL;
      }
      if ( v113 == 1 )
      {
        DpiDxgkDdiRemoveDevice(v9, v134);
        v97 = v111;
      }
      else
      {
        v97 = v111;
        if ( !v111 )
          goto LABEL_305;
        if ( !*(_QWORD *)(v9 + 1344)
          || (DiagnosticInfoArgs = DxgAllocateDiagnosticInfoArgs(1, v13, v14, v15), (v99 = DiagnosticInfoArgs) == 0) )
        {
LABEL_303:
          if ( (_DWORD)started != -1071774664 )
            DxgCreateLiveDumpWithWdLogs(403LL, 2049LL);
          goto LABEL_305;
        }
        v100 = *(_DWORD *)(DiagnosticInfoArgs + 216);
        v101 = TargetDevice;
        *(_QWORD *)DiagnosticInfoArgs = v134;
        if ( (*(int (__fastcall **)(struct _DEVICE_OBJECT *, __int64))(v9 + 1344))(v101, DiagnosticInfoArgs) >= 0 )
        {
          if ( *(_DWORD *)(v99 + 220) > v100 )
            *(_DWORD *)(v99 + 220) = 0;
          DxgCreateLiveDumpWithDriverBlob(
            v101,
            0x1B0u,
            *(int *)(v99 + 8),
            (int)started,
            0LL,
            0LL,
            (struct _DXGKARG_COLLECTDIAGNOSTICINFO *)v99);
          v97 = 0;
        }
        DxgFreeDiagnosticInfoArgs((struct _DXGKARG_COLLECTDIAGNOSTICINFO *)v99);
      }
      if ( v97 )
        goto LABEL_303;
LABEL_305:
      v90 = v122;
      goto LABEL_306;
    }
    KeWaitForSingleObject((PVOID)(v9 + 72), Executive, 0, 0, 0LL);
    v92 = *(_QWORD **)DeviceExtension;
    if ( *(char **)(*(_QWORD *)DeviceExtension + 8LL) == DeviceExtension )
    {
      v93 = (PVOID *)*((_QWORD *)DeviceExtension + 1);
      if ( *v93 == DeviceExtension )
      {
        *v93 = v92;
        v92[1] = v93;
        --*(_DWORD *)(v9 + 128);
        if ( v5 && *((_DWORD *)v5 + 126) )
          DpiLdaUnLinkDeviceFromChain(SourceDevice);
        KeReleaseMutex((PRKMUTEX)(v9 + 72), 0);
        LODWORD(started) = RequiredSize;
        v17 = v107;
        v122 = v91;
        goto LABEL_278;
      }
    }
LABEL_280:
    __fastfail(3u);
  }
LABEL_306:
  v158 = 0LL;
  v159 = 0LL;
  v162 = 0;
  v102 = DxgkDiagCalcDuration1us(&v150);
  v157[0] = 6;
  v157[1] = 64;
  v161 = 0;
  v158 = 0LL;
  v160 = 0LL;
  v159 = 0LL;
  v163 = 34;
  v164 = v90;
  v165 = v102;
  v166 = (int)started;
  DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)v157, 0x100000000uLL);
  if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
  {
    *(_DWORD *)Exclusive = (_DWORD)started;
    McTemplateK0ppq_EtwWriteTransfer(
      v103,
      &EventExitDpiAddDevice,
      v104,
      DriverObject,
      TargetDevice,
      *(_QWORD *)Exclusive);
  }
  return (unsigned int)started;
}
