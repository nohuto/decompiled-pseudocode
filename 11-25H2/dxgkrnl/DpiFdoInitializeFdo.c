/*
 * XREFs of DpiFdoInitializeFdo @ 0x14023C19C
 * Callers:
 *     DpiAddDevice @ 0x1402329D0 (DpiAddDevice.c)
 * Callees:
 *     Feature_SetMonitorDescriptorOverride__private_IsEnabledDeviceUsageNoInline @ 0x14007D6D4 (Feature_SetMonitorDescriptorOverride__private_IsEnabledDeviceUsageNoInline.c)
 *     ?DisplayMuxPresent@DISPLAY_MUX_MGR@@QEAA_NXZ @ 0x140083BEC (-DisplayMuxPresent@DISPLAY_MUX_MGR@@QEAA_NXZ.c)
 *     ?ShouldHideMuxFromDriver@DISPLAY_MUX_MGR@@QEAA_NXZ @ 0x140087784 (-ShouldHideMuxFromDriver@DISPLAY_MUX_MGR@@QEAA_NXZ.c)
 *     DpiDxgkDdiDisplayMuxGetDriverSupportLevel @ 0x14008B218 (DpiDxgkDdiDisplayMuxGetDriverSupportLevel.c)
 *     DpiDxgkDdiDisplayMuxReportPresence @ 0x14008B8D8 (DpiDxgkDdiDisplayMuxReportPresence.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14009F940 (_guard_dispatch_icall.c)
 *     memset @ 0x14009FCC0 (memset.c)
 *     DpiQueryMiniportInterface @ 0x140188CC4 (DpiQueryMiniportInterface.c)
 *     DpiInitializeBlockList @ 0x1402325D0 (DpiInitializeBlockList.c)
 *     ?DpiBrightnessInitialize@@YAJPEAU_DEVICE_OBJECT@@@Z @ 0x1402466D8 (-DpiBrightnessInitialize@@YAJPEAU_DEVICE_OBJECT@@@Z.c)
 *     ?SysMmDestroyAdapter@@YAXPEAUSYSMM_ADAPTER@@@Z @ 0x14027EE00 (-SysMmDestroyAdapter@@YAXPEAUSYSMM_ADAPTER@@@Z.c)
 *     DpiRequestIoPowerState @ 0x1403AD44C (DpiRequestIoPowerState.c)
 *     DpiGetDevicePropertyDataBoolean @ 0x1403BE4BC (DpiGetDevicePropertyDataBoolean.c)
 *     DpiFdoInitializeAdapterUniqueString @ 0x1403ED95C (DpiFdoInitializeAdapterUniqueString.c)
 *     DpiGetDevicePropertyDataString @ 0x1403EE810 (DpiGetDevicePropertyDataString.c)
 *     DpiGetDevicePropertyString @ 0x1403F11AC (DpiGetDevicePropertyString.c)
 *     DpiFdoValidateKmdAndPnpVersionMatch @ 0x1403F64B0 (DpiFdoValidateKmdAndPnpVersionMatch.c)
 *     DpiQueryBusInterface @ 0x140400764 (DpiQueryBusInterface.c)
 */

__int64 __fastcall DpiFdoInitializeFdo(struct _DEVICE_OBJECT *a1)
{
  char *DeviceExtension; // rbx
  char v3; // r12
  char v4; // si
  char v5; // r15
  __int64 v6; // r9
  int v7; // eax
  size_t v8; // rdi
  void *Pool2; // rax
  __int64 v10; // rdi
  __int64 v11; // r8
  int DevicePropertyString; // eax
  int v13; // eax
  __int64 v14; // rcx
  struct _DEVICE_OBJECT *v15; // rcx
  int MiniportInterface; // eax
  struct _DEVICE_OBJECT *v17; // rcx
  NTSTATUS v18; // eax
  __int64 v19; // r9
  __int64 v20; // rax
  NTSTATUS v21; // eax
  __int64 v22; // r9
  __int64 v23; // rax
  NTSTATUS v24; // eax
  __int64 v25; // rax
  _WORD *v26; // rsi
  __int64 v27; // r8
  int v28; // eax
  bool v29; // di
  __int64 v30; // rdx
  __int64 v31; // r8
  _OWORD *v32; // rsi
  size_t v33; // r8
  void *v34; // rcx
  __int64 v35; // rax
  int v36; // eax
  void *v37; // rcx
  void *v38; // rcx
  void *v39; // rcx
  void *v40; // rcx
  void *v41; // rcx
  void *v42; // rcx
  void *v43; // rcx
  void (__fastcall *v44)(_QWORD); // rax
  void (__fastcall *v45)(_QWORD); // rax
  struct SYSMM_ADAPTER *v46; // rcx
  __int64 Size; // [rsp+28h] [rbp-E0h]
  __int64 Sizeb; // [rsp+28h] [rbp-E0h]
  __int64 Sizea; // [rsp+28h] [rbp-E0h]
  char v51; // [rsp+48h] [rbp-C0h] BYREF
  char v52; // [rsp+49h] [rbp-BFh] BYREF
  char Data; // [rsp+4Ah] [rbp-BEh] BYREF
  ULONG RequiredSize; // [rsp+4Ch] [rbp-BCh] BYREF
  ULONG Type; // [rsp+50h] [rbp-B8h] BYREF
  unsigned int v56; // [rsp+54h] [rbp-B4h] BYREF
  _QWORD SymbolicLinkName[3]; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v58; // [rsp+70h] [rbp-98h] BYREF
  void *ThreadHandle; // [rsp+78h] [rbp-90h] BYREF
  PVOID Object; // [rsp+80h] [rbp-88h] BYREF
  __int64 v61; // [rsp+88h] [rbp-80h] BYREF
  int v62; // [rsp+90h] [rbp-78h]
  const wchar_t *v63; // [rsp+98h] [rbp-70h]
  unsigned int *v64; // [rsp+A0h] [rbp-68h]
  int v65; // [rsp+A8h] [rbp-60h]
  unsigned int *v66; // [rsp+B0h] [rbp-58h]
  int v67; // [rsp+B8h] [rbp-50h]
  __int64 v68; // [rsp+C0h] [rbp-48h]
  int v69; // [rsp+C8h] [rbp-40h]
  const wchar_t *v70; // [rsp+D0h] [rbp-38h]
  unsigned int *v71; // [rsp+D8h] [rbp-30h]
  int v72; // [rsp+E0h] [rbp-28h]
  unsigned int *v73; // [rsp+E8h] [rbp-20h]
  int v74; // [rsp+F0h] [rbp-18h]
  __int64 v75; // [rsp+F8h] [rbp-10h]
  int v76; // [rsp+100h] [rbp-8h]
  const wchar_t *v77; // [rsp+108h] [rbp+0h]
  int *v78; // [rsp+110h] [rbp+8h]
  int v79; // [rsp+118h] [rbp+10h]
  int *v80; // [rsp+120h] [rbp+18h]
  int v81; // [rsp+128h] [rbp+20h]
  __int64 v82; // [rsp+130h] [rbp+28h]
  int v83; // [rsp+138h] [rbp+30h]
  const wchar_t *v84; // [rsp+140h] [rbp+38h]
  int *v85; // [rsp+148h] [rbp+40h]
  int v86; // [rsp+150h] [rbp+48h]
  int *v87; // [rsp+158h] [rbp+50h]
  int v88; // [rsp+160h] [rbp+58h]
  __int64 v89; // [rsp+168h] [rbp+60h]
  int v90; // [rsp+170h] [rbp+68h]
  const wchar_t *v91; // [rsp+178h] [rbp+70h]
  __int64 *v92; // [rsp+180h] [rbp+78h]
  int v93; // [rsp+188h] [rbp+80h]
  __int64 v94; // [rsp+190h] [rbp+88h]
  int v95; // [rsp+198h] [rbp+90h]
  __int64 v96; // [rsp+1A0h] [rbp+98h]
  int v97; // [rsp+1A8h] [rbp+A0h]
  __int64 v98; // [rsp+1B0h] [rbp+A8h]
  __int128 v99; // [rsp+1B8h] [rbp+B0h]
  __int128 v100; // [rsp+1C8h] [rbp+C0h]

  DeviceExtension = (char *)a1->DeviceExtension;
  RequiredSize = 0;
  Type = 0;
  ThreadHandle = 0LL;
  v3 = 0;
  *(_OWORD *)&SymbolicLinkName[1] = 0LL;
  *((_QWORD *)DeviceExtension + 14) = DpiFdoDispatchInternalIoctl;
  *((_QWORD *)DeviceExtension + 18) = DpiFdoDispatchSystemControl;
  v4 = 0;
  v5 = 0;
  *((_QWORD *)DeviceExtension + 44) = &DpiFdoHandleQueryInterface;
  *((_QWORD *)DeviceExtension + 43) = &DpiFdoHandleQueryDeviceRelations;
  LODWORD(v58) = 0;
  v61 = 0LL;
  v63 = L"GpuVirtualizationFlags";
  v62 = 288;
  v56 = g_VgpuReplaceWarp != 0 ? 8 : 0;
  v64 = &v56;
  v65 = 67108868;
  v66 = &v56;
  v67 = 4;
  v70 = L"DisableVaBackedVm";
  v71 = &g_VgpuDisableVaBackedVm;
  v73 = &g_VgpuDisableVaBackedVm;
  v77 = L"VirtualGpuOnly";
  v78 = &g_VirtualGpuOnly;
  v80 = &g_VirtualGpuOnly;
  v84 = L"LimitNumberOfVfs";
  v85 = &g_LimitNumberOfVfs;
  v87 = &g_LimitNumberOfVfs;
  v91 = L"DisableVersionMismatchCheck";
  v92 = &v58;
  v68 = 0LL;
  v69 = 288;
  v72 = 67108868;
  v74 = 4;
  v75 = 0LL;
  v76 = 288;
  v79 = 67108868;
  v81 = 4;
  v82 = 0LL;
  v83 = 288;
  v86 = 67108868;
  v88 = 4;
  v89 = 0LL;
  v90 = 288;
  v93 = 67108868;
  v94 = 0LL;
  v95 = 0;
  v96 = 0LL;
  v97 = 0;
  v98 = 0LL;
  v99 = 0LL;
  v100 = 0LL;
  RtlQueryRegistryValuesEx(2LL, L"GraphicsDrivers", &v61, 0LL, 0LL);
  g_bCreateParavirtualizedGpu = v56 & 1;
  g_VgpuReplaceWarp = (v56 >> 3) & 1;
  v7 = *((_DWORD *)DeviceExtension + 126);
  g_ForceSecureVirtualMachine = (v56 >> 2) & 1;
  if ( v7 )
  {
    v8 = (unsigned int)(8 * v7);
    Pool2 = (void *)ExAllocatePool2(64LL, v8, 1953656900LL, v6);
    *((_QWORD *)DeviceExtension + 354) = Pool2;
    if ( !Pool2 )
    {
      LODWORD(v10) = -1073741801;
      WdLogSingleEntry1(6LL, -1073741801LL);
      WdLogGlobalForLineNumber = 9514;
      goto LABEL_147;
    }
    memset(Pool2, 0, v8);
    **((_QWORD **)DeviceExtension + 354) = a1;
    *((_DWORD *)DeviceExtension + 710) = 1;
  }
  *((_DWORD *)DeviceExtension + 905) = -1;
  DevicePropertyString = DpiGetDevicePropertyString(
                           *((PDEVICE_OBJECT *)DeviceExtension + 19),
                           DevicePropertyDeviceDescription,
                           (__int64)&RequiredSize);
  LODWORD(v10) = DevicePropertyString;
  if ( DevicePropertyString < 0 )
  {
    WdLogSingleEntry1(2LL, DevicePropertyString);
    WdLogGlobalForLineNumber = 9541;
LABEL_41:
    v4 = 0;
    goto LABEL_147;
  }
  DpiGetDevicePropertyDataString(
    *((PDEVICE_OBJECT *)DeviceExtension + 19),
    (DEVPROPKEY *)&DEVPKEY_Device_DriverVersion,
    (__int64)(DeviceExtension + 4968),
    (__int64)&RequiredSize);
  IoGetDevicePropertyData(
    *((PDEVICE_OBJECT *)DeviceExtension + 19),
    &DEVPKEY_Device_DriverDate,
    0,
    0,
    8u,
    DeviceExtension + 4976,
    &RequiredSize,
    &Type);
  IoGetDevicePropertyData(
    *((PDEVICE_OBJECT *)DeviceExtension + 19),
    &DEVPKEY_Device_DriverRank,
    0,
    0,
    4u,
    DeviceExtension + 4984,
    &RequiredSize,
    &Type);
  if ( !(_DWORD)v58 )
  {
    v13 = DpiFdoValidateKmdAndPnpVersionMatch(DeviceExtension);
    LODWORD(v10) = v13;
    if ( v13 < 0 )
    {
      WdLogSingleEntry1(2LL, v13);
      WdLogGlobalForLineNumber = 9588;
      goto LABEL_41;
    }
  }
  v14 = *((_QWORD *)DeviceExtension + 19);
  v52 = 0;
  if ( (int)DpiGetDevicePropertyDataBoolean(v14, &DEVPKEY_Device_InstallInProgress, &v52) >= 0 && v52 )
  {
    v15 = (struct _DEVICE_OBJECT *)*((_QWORD *)DeviceExtension + 19);
    v51 = 0;
    IoSetDevicePropertyData(v15, &DEVPKEY_Device_InstallInProgress, 0, 0, 0x11u, 1u, &v51);
  }
  if ( DeviceExtension[1153] )
  {
    if ( DeviceExtension[480] )
    {
      MiniportInterface = DpiQueryMiniportInterface(
                            (__int64)a1,
                            (__int64)&GUID_DEVINTERFACE_MSBDD_FALLBACK,
                            56,
                            1,
                            Size,
                            (__int64)(DeviceExtension + 944));
      LODWORD(v10) = MiniportInterface;
      if ( MiniportInterface < 0
        || !*((_QWORD *)DeviceExtension + 122)
        || !*((_QWORD *)DeviceExtension + 123)
        || !*((_QWORD *)DeviceExtension + 124) )
      {
        WdLogSingleEntry3(0LL, 275LL, 21LL, MiniportInterface);
        WdLogGlobalForLineNumber = 9641;
        goto LABEL_144;
      }
    }
  }
  v3 = 1;
  if ( DeviceExtension[1158] )
  {
    v17 = (struct _DEVICE_OBJECT *)*((_QWORD *)DeviceExtension + 19);
    Data = 0;
    if ( IoGetDevicePropertyData(v17, &DEVPKEY_Gpu_IddVirtualMonitorDevice, 0, 0, 1u, &Data, &RequiredSize, &Type) >= 0
      && Type == 17
      && RequiredSize == 1
      && Data == -1 )
    {
      DeviceExtension[1159] = 1;
    }
  }
  v18 = IoRegisterDeviceInterface(
          *((PDEVICE_OBJECT *)DeviceExtension + 19),
          &GUID_COMPUTE_DEVICE_ARRIVAL,
          0LL,
          (PUNICODE_STRING)&SymbolicLinkName[1]);
  LODWORD(v10) = v18;
  if ( v18 < 0 )
  {
    WdLogSingleEntry1(2LL, v18);
    WdLogGlobalForLineNumber = 9680;
    goto LABEL_41;
  }
  v4 = 1;
  v20 = ExAllocatePool2(64LL, WORD1(SymbolicLinkName[1]), 1953656900LL, v19);
  *((_QWORD *)DeviceExtension + 357) = v20;
  if ( !v20 )
  {
    LODWORD(v10) = -1073741801;
    WdLogSingleEntry1(6LL, -1073741801LL);
    WdLogGlobalForLineNumber = 9701;
    goto LABEL_147;
  }
  *((_DWORD *)DeviceExtension + 712) = SymbolicLinkName[1];
  RtlCopyUnicodeString((PUNICODE_STRING)DeviceExtension + 178, (PCUNICODE_STRING)&SymbolicLinkName[1]);
  RtlFreeUnicodeString((PUNICODE_STRING)&SymbolicLinkName[1]);
  if ( !DeviceExtension[2722] )
  {
    v21 = IoRegisterDeviceInterface(
            *((PDEVICE_OBJECT *)DeviceExtension + 19),
            &GUID_DISPLAY_DEVICE_ARRIVAL,
            0LL,
            (PUNICODE_STRING)&SymbolicLinkName[1]);
    LODWORD(v10) = v21;
    if ( v21 < 0 )
    {
      WdLogSingleEntry1(2LL, v21);
      WdLogGlobalForLineNumber = 9731;
      goto LABEL_41;
    }
    v23 = ExAllocatePool2(64LL, WORD1(SymbolicLinkName[1]), 1953656900LL, v22);
    *((_QWORD *)DeviceExtension + 359) = v23;
    if ( !v23 )
    {
      LODWORD(v10) = -1073741801;
      WdLogSingleEntry1(6LL, -1073741801LL);
      WdLogGlobalForLineNumber = 9752;
      goto LABEL_147;
    }
    *((_DWORD *)DeviceExtension + 716) = SymbolicLinkName[1];
    RtlCopyUnicodeString((PUNICODE_STRING)DeviceExtension + 179, (PCUNICODE_STRING)&SymbolicLinkName[1]);
    RtlFreeUnicodeString((PUNICODE_STRING)&SymbolicLinkName[1]);
  }
  DeviceExtension[482] = 0;
  DeviceExtension[484] = 0;
  *((_QWORD *)DeviceExtension + 61) = 0LL;
  if ( !DeviceExtension[480] )
  {
    KeInitializeEvent((PRKEVENT)(DeviceExtension + 4072), SynchronizationEvent, 0);
    *((_QWORD *)DeviceExtension + 514) = DeviceExtension + 4104;
    *((_QWORD *)DeviceExtension + 513) = DeviceExtension + 4104;
    KeInitializeSpinLock((PKSPIN_LOCK)DeviceExtension + 528);
    KeInitializeEvent((PRKEVENT)(DeviceExtension + 4240), NotificationEvent, 1u);
    KeInitializeEvent((PRKEVENT)(DeviceExtension + 4264), NotificationEvent, 1u);
    DeviceExtension[484] = 1;
    *((_QWORD *)DeviceExtension + 536) = 0LL;
    *((_DWORD *)DeviceExtension + 1058) = 0;
    memset(DeviceExtension + 4128, 0, 0x60uLL);
    *((_DWORD *)DeviceExtension + 1036) = 1953656900;
    *((_DWORD *)DeviceExtension + 1037) = 11;
    *((_DWORD *)DeviceExtension + 1042) = 64;
    KeInitializeTimer((PKTIMER)(DeviceExtension + 4304));
    KeInitializeDpc((PRKDPC)(DeviceExtension + 4368), (PKDEFERRED_ROUTINE)DpiSuspendAdapterDpc, DeviceExtension);
    v24 = PsCreateSystemThread(&ThreadHandle, 0x1FFFFFu, 0LL, 0LL, 0LL, DpiPowerArbiterThread, a1);
    LODWORD(v10) = v24;
    if ( v24 < 0 )
    {
      WdLogSingleEntry1(2LL, v24);
      WdLogGlobalForLineNumber = 9830;
      goto LABEL_41;
    }
    Object = 0LL;
    v10 = ObReferenceObjectByHandle(ThreadHandle, 0x1FFFFFu, 0LL, 0, &Object, 0LL);
    *((_QWORD *)DeviceExtension + 508) = Object;
    ZwClose(ThreadHandle);
    if ( (int)v10 < 0 )
    {
      WdLogSingleEntry1(2LL, v10);
      WdLogGlobalForLineNumber = 9852;
      goto LABEL_41;
    }
  }
  KeInitializeEvent((PRKEVENT)(DeviceExtension + 3832), NotificationEvent, 1u);
  *((_QWORD *)DeviceExtension + 451) = DeviceExtension + 3600;
  *((_QWORD *)DeviceExtension + 450) = DeviceExtension + 3600;
  ExInitializeResourceLite((PERESOURCE)(DeviceExtension + 3440));
  *((_QWORD *)DeviceExtension + 455) = DeviceExtension + 3632;
  *((_QWORD *)DeviceExtension + 454) = DeviceExtension + 3632;
  KeInitializeSpinLock((PKSPIN_LOCK)DeviceExtension + 453);
  KeInitializeSpinLock((PKSPIN_LOCK)DeviceExtension + 457);
  KeInitializeEvent((PRKEVENT)(DeviceExtension + 3664), NotificationEvent, 1u);
  *((_QWORD *)DeviceExtension + 684) = DeviceExtension + 5464;
  *((_QWORD *)DeviceExtension + 683) = DeviceExtension + 5464;
  KeInitializeSpinLock((PKSPIN_LOCK)DeviceExtension + 685);
  IoCsqInitialize(
    (PIO_CSQ)(DeviceExtension + 5400),
    (PIO_CSQ_INSERT_IRP)DpiPendingIrpCancelQueueInsert,
    (PIO_CSQ_REMOVE_IRP)DpiPendingIrpCancelQueueRemove,
    (PIO_CSQ_PEEK_NEXT_IRP)DpiPendingIrpCancelQueuePick,
    (PIO_CSQ_ACQUIRE_LOCK)DpiPendingIrpCancelQueueAcquireLock,
    (PIO_CSQ_RELEASE_LOCK)DpiPendingIrpCancelQueueReleaseLock,
    (PIO_CSQ_COMPLETE_CANCELED_IRP)DpiPendingIrpCancelQueueComplete);
  *((_QWORD *)DeviceExtension + 694) = 0LL;
  *((_QWORD *)DeviceExtension + 695) = 0LL;
  KeInitializeEvent((PRKEVENT)DeviceExtension + 232, NotificationEvent, 0);
  *((_DWORD *)DeviceExtension + 1386) = 1;
  *((_DWORD *)DeviceExtension + 1378) = 0;
  KeInitializeMutex((PRKMUTEX)(DeviceExtension + 3544), 0);
  KeInitializeMutex((PRKMUTEX)(DeviceExtension + 3720), 0);
  *((_QWORD *)DeviceExtension + 474) = DeviceExtension + 3784;
  *((_QWORD *)DeviceExtension + 473) = DeviceExtension + 3784;
  *((_QWORD *)DeviceExtension + 477) = DeviceExtension + 3808;
  *((_QWORD *)DeviceExtension + 476) = DeviceExtension + 3808;
  *((_QWORD *)DeviceExtension + 464) = DeviceExtension + 3704;
  *((_QWORD *)DeviceExtension + 463) = DeviceExtension + 3704;
  ExInitializeResourceLite((PERESOURCE)(DeviceExtension + 3928));
  LODWORD(v10) = DpiFdoInitializeAdapterUniqueString(a1);
  v4 = 0;
  if ( (int)v10 < 0 )
  {
LABEL_146:
    ExDeleteResourceLite((PERESOURCE)(DeviceExtension + 3928));
    ExDeleteResourceLite((PERESOURCE)(DeviceExtension + 3440));
    goto LABEL_147;
  }
  v5 = 1;
  DpiQueryBusInterface(*((PDEVICE_OBJECT *)DeviceExtension + 19), (__int64)(DeviceExtension + 2992));
  DpiQueryBusInterface(*((PDEVICE_OBJECT *)DeviceExtension + 19), (__int64)(DeviceExtension + 3040));
  DpiQueryMiniportInterface(
    (__int64)a1,
    (__int64)&GUID_DEVINTERFACE_I2C,
    48,
    1,
    Sizeb,
    (__int64)(DeviceExtension + 3096));
  v25 = *((_QWORD *)DeviceExtension + 5);
  *((_DWORD *)DeviceExtension + 772) = 1;
  *((_DWORD *)DeviceExtension + 1506) = 1;
  if ( !*(_BYTE *)(v25 + 133) && !DeviceExtension[1158] )
  {
    v26 = DeviceExtension + 5896;
    if ( (int)DpiQueryMiniportInterface(
                (__int64)a1,
                (__int64)&GUID_WDDM_INTERFACE_DISPLAYMUX_2,
                128,
                2,
                Sizea,
                (__int64)(DeviceExtension + 5896)) >= 0 )
    {
      if ( *v26 != 128
        || *((_WORD *)DeviceExtension + 2949) != 2
        || !*((_QWORD *)DeviceExtension + 741)
        || !*((_QWORD *)DeviceExtension + 742)
        || !*((_QWORD *)DeviceExtension + 743)
        || !*((_QWORD *)DeviceExtension + 744)
        || !*((_QWORD *)DeviceExtension + 745)
        || !*((_QWORD *)DeviceExtension + 746)
        || !*((_QWORD *)DeviceExtension + 747)
        || !*((_QWORD *)DeviceExtension + 748)
        || !*((_QWORD *)DeviceExtension + 749)
        || !*((_QWORD *)DeviceExtension + 750)
        || !*((_QWORD *)DeviceExtension + 751)
        || !*((_QWORD *)DeviceExtension + 752) )
      {
        LODWORD(v10) = -1073741811;
        WdLogSingleEntry1(2LL, -1073741811LL);
        WdLogGlobalForLineNumber = 10050;
LABEL_73:
        v33 = 128LL;
LABEL_74:
        v34 = v26;
LABEL_75:
        memset(v34, 0, v33);
        goto LABEL_76;
      }
      LODWORD(SymbolicLinkName[0]) = 0;
      if ( (int)DpiDxgkDdiDisplayMuxGetDriverSupportLevel((__int64)DeviceExtension, SymbolicLinkName, v27) < 0 )
      {
        *((_DWORD *)DeviceExtension + 1506) = 1;
      }
      else
      {
        v28 = SymbolicLinkName[0];
        *((_DWORD *)DeviceExtension + 1506) = SymbolicLinkName[0];
        if ( v28 != 1 )
        {
          v29 = DISPLAY_MUX_MGR::DisplayMuxPresent(qword_14015E3C0);
          if ( DISPLAY_MUX_MGR::ShouldHideMuxFromDriver(qword_14015E3C0) )
          {
            WdLogSingleEntry0(4LL);
            WdLogGlobalForLineNumber = 10078;
            v29 = 0;
          }
          LOBYTE(v30) = v29;
          DpiDxgkDdiDisplayMuxReportPresence((__int64)DeviceExtension, v30, v31);
          DeviceExtension[6393] = v29;
        }
      }
    }
  }
  if ( (unsigned int)Feature_SetMonitorDescriptorOverride__private_IsEnabledDeviceUsageNoInline() )
  {
    v32 = DeviceExtension + 6400;
    if ( (int)DpiQueryMiniportInterface(
                (__int64)a1,
                (__int64)&GUID_WDDM_INTERFACE_DISPLAY_CORE,
                40,
                1,
                Sizea,
                (__int64)(DeviceExtension + 6400)) >= 0
      && (*(_WORD *)v32 != 40 || *((_WORD *)DeviceExtension + 3201) != 1 || !*((_QWORD *)DeviceExtension + 804)) )
    {
      LODWORD(v10) = -1073741811;
      WdLogSingleEntry1(2LL, -1073741811LL);
      WdLogGlobalForLineNumber = 10116;
      *v32 = 0LL;
      *((_OWORD *)DeviceExtension + 401) = 0LL;
      *((_QWORD *)DeviceExtension + 804) = 0LL;
LABEL_76:
      v4 = 0;
      goto LABEL_146;
    }
  }
  v35 = *((_QWORD *)DeviceExtension + 5);
  *((_DWORD *)DeviceExtension + 788) = 0;
  if ( !*(_BYTE *)(v35 + 133) || DeviceExtension[1158] )
  {
    v26 = DeviceExtension + 3160;
    if ( (int)DpiQueryMiniportInterface(
                (__int64)a1,
                (__int64)&GUID_DEVINTERFACE_OPM_3,
                128,
                4,
                Sizea,
                (__int64)(DeviceExtension + 3160)) >= 0 )
    {
      if ( *v26 != 128
        || (v36 = 4, *((_WORD *)DeviceExtension + 1581) != 4)
        || !*((_QWORD *)DeviceExtension + 399)
        || !*((_QWORD *)DeviceExtension + 400)
        || !*((_QWORD *)DeviceExtension + 401)
        || !*((_QWORD *)DeviceExtension + 402)
        || !*((_QWORD *)DeviceExtension + 403)
        || !*((_QWORD *)DeviceExtension + 404)
        || !*((_QWORD *)DeviceExtension + 405)
        || !*((_QWORD *)DeviceExtension + 406)
        || !*((_QWORD *)DeviceExtension + 407)
        || !*((_QWORD *)DeviceExtension + 408)
        || !*((_QWORD *)DeviceExtension + 409)
        || !*((_QWORD *)DeviceExtension + 410) )
      {
        LODWORD(v10) = -1073741811;
        WdLogSingleEntry1(2LL, -1073741811LL);
        WdLogGlobalForLineNumber = 10165;
        goto LABEL_73;
      }
      goto LABEL_122;
    }
    if ( (int)DpiQueryMiniportInterface(
                (__int64)a1,
                (__int64)&GUID_DEVINTERFACE_OPM_2,
                112,
                3,
                Sizea,
                (__int64)(DeviceExtension + 3160)) >= 0 )
    {
      if ( *v26 != 112
        || (v36 = 3, *((_WORD *)DeviceExtension + 1581) != 3)
        || !*((_QWORD *)DeviceExtension + 399)
        || !*((_QWORD *)DeviceExtension + 400)
        || !*((_QWORD *)DeviceExtension + 401)
        || !*((_QWORD *)DeviceExtension + 402)
        || !*((_QWORD *)DeviceExtension + 403)
        || !*((_QWORD *)DeviceExtension + 404)
        || !*((_QWORD *)DeviceExtension + 405)
        || !*((_QWORD *)DeviceExtension + 406)
        || !*((_QWORD *)DeviceExtension + 407)
        || !*((_QWORD *)DeviceExtension + 408) )
      {
        LODWORD(v10) = -1073741811;
        WdLogSingleEntry1(2LL, -1073741811LL);
        v33 = 112LL;
        WdLogGlobalForLineNumber = 10216;
        goto LABEL_74;
      }
      goto LABEL_122;
    }
    if ( (int)DpiQueryMiniportInterface(
                (__int64)a1,
                (__int64)&GUID_DEVINTERFACE_OPM_2_JTP,
                120,
                2,
                Sizea,
                (__int64)(DeviceExtension + 3160)) >= 0 )
    {
      v36 = 2;
      if ( *v26 != 120
        || *((_WORD *)DeviceExtension + 1581) != 2
        || !*((_QWORD *)DeviceExtension + 399)
        || !*((_QWORD *)DeviceExtension + 400)
        || !*((_QWORD *)DeviceExtension + 401)
        || !*((_QWORD *)DeviceExtension + 402)
        || !*((_QWORD *)DeviceExtension + 403)
        || !*((_QWORD *)DeviceExtension + 404)
        || !*((_QWORD *)DeviceExtension + 405)
        || !*((_QWORD *)DeviceExtension + 406)
        || !*((_QWORD *)DeviceExtension + 407)
        || !*((_QWORD *)DeviceExtension + 409) )
      {
        LODWORD(v10) = -1073741811;
        WdLogSingleEntry1(2LL, -1073741811LL);
        v33 = 120LL;
        WdLogGlobalForLineNumber = 10269;
        goto LABEL_74;
      }
LABEL_122:
      *((_DWORD *)DeviceExtension + 788) = v36;
      goto LABEL_126;
    }
    if ( (int)DpiQueryMiniportInterface(
                (__int64)a1,
                (__int64)&GUID_DEVINTERFACE_OPM,
                104,
                1,
                Sizea,
                (__int64)(DeviceExtension + 3160)) >= 0 )
      *((_DWORD *)DeviceExtension + 788) = 1;
  }
LABEL_126:
  *((_DWORD *)DeviceExtension + 840) = -1;
  if ( byte_14015DD56
    && *(_DWORD *)(*((_QWORD *)a1->DeviceExtension + 5) + 28LL) >= 0x4000u
    && (!*(_BYTE *)(*((_QWORD *)DeviceExtension + 5) + 133LL) || DeviceExtension[1158]) )
  {
    if ( (int)DpiQueryMiniportInterface(
                (__int64)a1,
                (__int64)&GUID_DEVINTERFACE_MIRACAST_DISPLAY,
                64,
                1,
                Sizea,
                (__int64)(DeviceExtension + 3288)) < 0 )
    {
      memset(DeviceExtension + 3288, 0, 0x40uLL);
    }
    else if ( *((_WORD *)DeviceExtension + 1644) < 0x40u
           || *((_WORD *)DeviceExtension + 1645) != 1
           || !*((_QWORD *)DeviceExtension + 415)
           || !*((_QWORD *)DeviceExtension + 416)
           || !*((_QWORD *)DeviceExtension + 417)
           || !*((_QWORD *)DeviceExtension + 418) )
    {
      LODWORD(v10) = -1073741811;
      WdLogSingleEntry1(2LL, -1073741811LL);
      v34 = DeviceExtension + 3288;
      WdLogGlobalForLineNumber = 10346;
      v33 = 64LL;
      goto LABEL_75;
    }
  }
  if ( DeviceExtension[1159] )
    *((_QWORD *)DeviceExtension + 15) = DpiFdoDispatchIoctl;
  if ( DeviceExtension[1158] )
  {
    *((_QWORD *)DeviceExtension + 13) = &DpiFdoDispatchCreate;
    *((_QWORD *)DeviceExtension + 12) = &DpiFdoDispatchCleanupAndClose;
  }
  DpiBrightnessInitialize(a1);
  LODWORD(v10) = DpiInitializeBlockList((__int64)a1);
LABEL_144:
  v5 = v3;
  if ( (int)v10 >= 0 )
    return (unsigned int)v10;
  v4 = 0;
  if ( v3 == 1 )
    goto LABEL_146;
LABEL_147:
  if ( *((_QWORD *)DeviceExtension + 508) )
    DpiRequestIoPowerState(a1, 7LL, v11, 0LL);
  if ( v4 == 1 )
    RtlFreeUnicodeString((PUNICODE_STRING)&SymbolicLinkName[1]);
  if ( v5 )
  {
    RtlFreeUnicodeString((PUNICODE_STRING)DeviceExtension + 306);
    RtlFreeUnicodeString((PUNICODE_STRING)DeviceExtension + 307);
  }
  v37 = (void *)*((_QWORD *)DeviceExtension + 429);
  *((_DWORD *)DeviceExtension + 854) = 0;
  if ( v37 )
  {
    ExFreePoolWithTag(v37, 0);
    *((_QWORD *)DeviceExtension + 429) = 0LL;
  }
  v38 = (void *)*((_QWORD *)DeviceExtension + 428);
  if ( v38 )
  {
    ExFreePoolWithTag(v38, 0);
    *((_QWORD *)DeviceExtension + 428) = 0LL;
  }
  v39 = (void *)*((_QWORD *)DeviceExtension + 620);
  if ( v39 )
  {
    ExFreePoolWithTag(v39, 0);
    *((_QWORD *)DeviceExtension + 620) = 0LL;
  }
  v40 = (void *)*((_QWORD *)DeviceExtension + 621);
  if ( v40 )
  {
    ExFreePoolWithTag(v40, 0);
    *((_QWORD *)DeviceExtension + 621) = 0LL;
  }
  v41 = (void *)*((_QWORD *)DeviceExtension + 354);
  if ( v41 )
  {
    ExFreePoolWithTag(v41, 0);
    *((_QWORD *)DeviceExtension + 354) = 0LL;
  }
  v42 = (void *)*((_QWORD *)DeviceExtension + 357);
  if ( v42 )
  {
    ExFreePoolWithTag(v42, 0);
    *((_QWORD *)DeviceExtension + 357) = 0LL;
  }
  v43 = (void *)*((_QWORD *)DeviceExtension + 359);
  if ( v43 )
  {
    ExFreePoolWithTag(v43, 0);
    *((_QWORD *)DeviceExtension + 359) = 0LL;
  }
  v44 = (void (__fastcall *)(_QWORD))*((_QWORD *)DeviceExtension + 377);
  if ( v44 )
  {
    v44(*((_QWORD *)DeviceExtension + 375));
    *((_OWORD *)DeviceExtension + 187) = 0LL;
    *((_OWORD *)DeviceExtension + 188) = 0LL;
    *((_OWORD *)DeviceExtension + 189) = 0LL;
  }
  v45 = (void (__fastcall *)(_QWORD))*((_QWORD *)DeviceExtension + 383);
  if ( v45 )
  {
    v45(*((_QWORD *)DeviceExtension + 381));
    *((_OWORD *)DeviceExtension + 190) = 0LL;
    *((_OWORD *)DeviceExtension + 191) = 0LL;
    *((_OWORD *)DeviceExtension + 192) = 0LL;
  }
  v46 = (struct SYSMM_ADAPTER *)*((_QWORD *)DeviceExtension + 728);
  if ( v46 )
    SysMmDestroyAdapter(v46);
  return (unsigned int)v10;
}
