/*
 * XREFs of DpiFdoInitializeFdo @ 0x140242CBC
 * Callers:
 *     DpiAddDevice @ 0x1402393B0 (DpiAddDevice.c)
 * Callees:
 *     Feature_I2CInterface_V2__private_IsEnabledDeviceUsageNoInline @ 0x14007DCA0 (Feature_I2CInterface_V2__private_IsEnabledDeviceUsageNoInline.c)
 *     Feature_SetMonitorDescriptorOverride__private_IsEnabledDeviceUsageNoInline @ 0x14007DD5C (Feature_SetMonitorDescriptorOverride__private_IsEnabledDeviceUsageNoInline.c)
 *     ?DisplayMuxPresent@DISPLAY_MUX_MGR@@QEAA_NXZ @ 0x140084278 (-DisplayMuxPresent@DISPLAY_MUX_MGR@@QEAA_NXZ.c)
 *     ?ShouldHideMuxFromDriver@DISPLAY_MUX_MGR@@QEAA_NXZ @ 0x140087E40 (-ShouldHideMuxFromDriver@DISPLAY_MUX_MGR@@QEAA_NXZ.c)
 *     DpiDxgkDdiDisplayMuxGetDriverSupportLevel @ 0x14008C1D8 (DpiDxgkDdiDisplayMuxGetDriverSupportLevel.c)
 *     DpiDxgkDdiDisplayMuxReportPresence @ 0x14008C898 (DpiDxgkDdiDisplayMuxReportPresence.c)
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400A1CA0 (_guard_dispatch_icall.c)
 *     memset @ 0x1400A2000 (memset.c)
 *     DpiQueryMiniportInterface @ 0x14018AFAC (DpiQueryMiniportInterface.c)
 *     DpiInitializeBlockList @ 0x140238FB0 (DpiInitializeBlockList.c)
 *     ?DpiBrightnessInitialize@@YAJPEAU_DEVICE_OBJECT@@@Z @ 0x14024D508 (-DpiBrightnessInitialize@@YAJPEAU_DEVICE_OBJECT@@@Z.c)
 *     ?SysMmDestroyAdapter@@YAXPEAUSYSMM_ADAPTER@@@Z @ 0x140286170 (-SysMmDestroyAdapter@@YAXPEAUSYSMM_ADAPTER@@@Z.c)
 *     DpiRequestIoPowerState @ 0x14039F1A8 (DpiRequestIoPowerState.c)
 *     DpiGetDevicePropertyDataBoolean @ 0x1403B231C (DpiGetDevicePropertyDataBoolean.c)
 *     DpiFdoInitializeAdapterUniqueString @ 0x1403E7328 (DpiFdoInitializeAdapterUniqueString.c)
 *     DpiGetDevicePropertyDataString @ 0x1403E8B38 (DpiGetDevicePropertyDataString.c)
 *     DpiGetDevicePropertyString @ 0x1403EB254 (DpiGetDevicePropertyString.c)
 *     DpiFdoValidateKmdAndPnpVersionMatch @ 0x1403F0520 (DpiFdoValidateKmdAndPnpVersionMatch.c)
 *     DpiQueryBusInterface @ 0x1403FA754 (DpiQueryBusInterface.c)
 */

__int64 __fastcall DpiFdoInitializeFdo(struct _DEVICE_OBJECT *a1)
{
  char *DeviceExtension; // rbx
  char v3; // r12
  char v4; // si
  char v5; // r15
  int v6; // eax
  size_t v7; // rdi
  void *Pool2; // rax
  __int64 v9; // rdi
  __int64 v10; // r8
  int DevicePropertyString; // eax
  int v12; // eax
  __int64 v13; // rcx
  struct _DEVICE_OBJECT *v14; // rcx
  int MiniportInterface; // eax
  struct _DEVICE_OBJECT *v16; // rcx
  NTSTATUS v17; // eax
  __int64 v18; // rax
  NTSTATUS v19; // eax
  __int64 v20; // rax
  NTSTATUS v21; // eax
  int v22; // edi
  _OWORD *v23; // rsi
  __int64 v24; // rax
  _WORD *v25; // rsi
  __int64 v26; // r8
  int v27; // eax
  bool v28; // di
  __int64 v29; // rdx
  __int64 v30; // r8
  _OWORD *v31; // rsi
  size_t v32; // r8
  void *v33; // rcx
  __int64 v34; // rax
  int v35; // eax
  void *v36; // rcx
  void *v37; // rcx
  void *v38; // rcx
  void *v39; // rcx
  void *v40; // rcx
  void *v41; // rcx
  void *v42; // rcx
  void (__fastcall *v43)(_QWORD); // rax
  void (__fastcall *v44)(_QWORD); // rax
  struct SYSMM_ADAPTER *v45; // rcx
  __int64 Size; // [rsp+28h] [rbp-E0h]
  __int64 Sizea; // [rsp+28h] [rbp-E0h]
  char v49; // [rsp+48h] [rbp-C0h] BYREF
  char v50; // [rsp+49h] [rbp-BFh] BYREF
  char Data; // [rsp+4Ah] [rbp-BEh] BYREF
  ULONG RequiredSize; // [rsp+4Ch] [rbp-BCh] BYREF
  ULONG Type; // [rsp+50h] [rbp-B8h] BYREF
  unsigned int v54; // [rsp+54h] [rbp-B4h] BYREF
  _QWORD SymbolicLinkName[3]; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v56; // [rsp+70h] [rbp-98h] BYREF
  void *ThreadHandle; // [rsp+78h] [rbp-90h] BYREF
  PVOID Object; // [rsp+80h] [rbp-88h] BYREF
  __int64 v59; // [rsp+88h] [rbp-80h] BYREF
  int v60; // [rsp+90h] [rbp-78h]
  const wchar_t *v61; // [rsp+98h] [rbp-70h]
  unsigned int *v62; // [rsp+A0h] [rbp-68h]
  int v63; // [rsp+A8h] [rbp-60h]
  unsigned int *v64; // [rsp+B0h] [rbp-58h]
  int v65; // [rsp+B8h] [rbp-50h]
  __int64 v66; // [rsp+C0h] [rbp-48h]
  int v67; // [rsp+C8h] [rbp-40h]
  const wchar_t *v68; // [rsp+D0h] [rbp-38h]
  unsigned int *v69; // [rsp+D8h] [rbp-30h]
  int v70; // [rsp+E0h] [rbp-28h]
  unsigned int *v71; // [rsp+E8h] [rbp-20h]
  int v72; // [rsp+F0h] [rbp-18h]
  __int64 v73; // [rsp+F8h] [rbp-10h]
  int v74; // [rsp+100h] [rbp-8h]
  const wchar_t *v75; // [rsp+108h] [rbp+0h]
  int *v76; // [rsp+110h] [rbp+8h]
  int v77; // [rsp+118h] [rbp+10h]
  int *v78; // [rsp+120h] [rbp+18h]
  int v79; // [rsp+128h] [rbp+20h]
  __int64 v80; // [rsp+130h] [rbp+28h]
  int v81; // [rsp+138h] [rbp+30h]
  const wchar_t *v82; // [rsp+140h] [rbp+38h]
  int *v83; // [rsp+148h] [rbp+40h]
  int v84; // [rsp+150h] [rbp+48h]
  int *v85; // [rsp+158h] [rbp+50h]
  int v86; // [rsp+160h] [rbp+58h]
  __int64 v87; // [rsp+168h] [rbp+60h]
  int v88; // [rsp+170h] [rbp+68h]
  const wchar_t *v89; // [rsp+178h] [rbp+70h]
  __int64 *v90; // [rsp+180h] [rbp+78h]
  int v91; // [rsp+188h] [rbp+80h]
  __int64 v92; // [rsp+190h] [rbp+88h]
  int v93; // [rsp+198h] [rbp+90h]
  __int64 v94; // [rsp+1A0h] [rbp+98h]
  int v95; // [rsp+1A8h] [rbp+A0h]
  __int64 v96; // [rsp+1B0h] [rbp+A8h]
  __int128 v97; // [rsp+1B8h] [rbp+B0h]
  __int128 v98; // [rsp+1C8h] [rbp+C0h]

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
  LODWORD(v56) = 0;
  v59 = 0LL;
  v61 = L"GpuVirtualizationFlags";
  v60 = 288;
  v54 = g_VgpuReplaceWarp != 0 ? 8 : 0;
  v62 = &v54;
  v63 = 67108868;
  v64 = &v54;
  v65 = 4;
  v68 = L"DisableVaBackedVm";
  v69 = &g_VgpuDisableVaBackedVm;
  v71 = &g_VgpuDisableVaBackedVm;
  v75 = L"VirtualGpuOnly";
  v76 = &g_VirtualGpuOnly;
  v78 = &g_VirtualGpuOnly;
  v82 = L"LimitNumberOfVfs";
  v83 = &g_LimitNumberOfVfs;
  v85 = &g_LimitNumberOfVfs;
  v89 = L"DisableVersionMismatchCheck";
  v90 = &v56;
  v66 = 0LL;
  v67 = 288;
  v70 = 67108868;
  v72 = 4;
  v73 = 0LL;
  v74 = 288;
  v77 = 67108868;
  v79 = 4;
  v80 = 0LL;
  v81 = 288;
  v84 = 67108868;
  v86 = 4;
  v87 = 0LL;
  v88 = 288;
  v91 = 67108868;
  v92 = 0LL;
  v93 = 0;
  v94 = 0LL;
  v95 = 0;
  v96 = 0LL;
  v97 = 0LL;
  v98 = 0LL;
  RtlQueryRegistryValuesEx(2LL, L"GraphicsDrivers", &v59, 0LL, 0LL);
  g_bCreateParavirtualizedGpu = v54 & 1;
  g_VgpuReplaceWarp = (v54 >> 3) & 1;
  v6 = *((_DWORD *)DeviceExtension + 126);
  g_ForceSecureVirtualMachine = (v54 >> 2) & 1;
  if ( v6 )
  {
    v7 = (unsigned int)(8 * v6);
    Pool2 = (void *)ExAllocatePool2(64LL, v7, 1953656900LL);
    *((_QWORD *)DeviceExtension + 354) = Pool2;
    if ( !Pool2 )
    {
      LODWORD(v9) = -1073741801;
      WdLogSingleEntry1(6LL, -1073741801LL);
      WdLogGlobalForLineNumber = 9646;
      goto LABEL_160;
    }
    memset(Pool2, 0, v7);
    **((_QWORD **)DeviceExtension + 354) = a1;
    *((_DWORD *)DeviceExtension + 710) = 1;
  }
  *((_DWORD *)DeviceExtension + 905) = -1;
  DevicePropertyString = DpiGetDevicePropertyString(
                           *((PDEVICE_OBJECT *)DeviceExtension + 19),
                           DevicePropertyDeviceDescription,
                           (__int64)&RequiredSize);
  LODWORD(v9) = DevicePropertyString;
  if ( DevicePropertyString < 0 )
  {
    WdLogSingleEntry1(2LL, DevicePropertyString);
    WdLogGlobalForLineNumber = 9673;
LABEL_41:
    v4 = 0;
    goto LABEL_160;
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
  if ( !(_DWORD)v56 )
  {
    v12 = DpiFdoValidateKmdAndPnpVersionMatch(DeviceExtension);
    LODWORD(v9) = v12;
    if ( v12 < 0 )
    {
      WdLogSingleEntry1(2LL, v12);
      WdLogGlobalForLineNumber = 9720;
      goto LABEL_41;
    }
  }
  v13 = *((_QWORD *)DeviceExtension + 19);
  v50 = 0;
  if ( (int)DpiGetDevicePropertyDataBoolean(v13, &DEVPKEY_Device_InstallInProgress, &v50) >= 0 && v50 )
  {
    v14 = (struct _DEVICE_OBJECT *)*((_QWORD *)DeviceExtension + 19);
    v49 = 0;
    IoSetDevicePropertyData(v14, &DEVPKEY_Device_InstallInProgress, 0, 0, 0x11u, 1u, &v49);
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
      LODWORD(v9) = MiniportInterface;
      if ( MiniportInterface < 0
        || !*((_QWORD *)DeviceExtension + 122)
        || !*((_QWORD *)DeviceExtension + 123)
        || !*((_QWORD *)DeviceExtension + 124) )
      {
        WdLogSingleEntry3(0LL, 275LL, 21LL, MiniportInterface);
        WdLogGlobalForLineNumber = 9773;
        goto LABEL_157;
      }
    }
  }
  v3 = 1;
  if ( DeviceExtension[1158] )
  {
    v16 = (struct _DEVICE_OBJECT *)*((_QWORD *)DeviceExtension + 19);
    Data = 0;
    if ( IoGetDevicePropertyData(v16, &DEVPKEY_Gpu_IddVirtualMonitorDevice, 0, 0, 1u, &Data, &RequiredSize, &Type) >= 0
      && Type == 17
      && RequiredSize == 1
      && Data == -1 )
    {
      DeviceExtension[1159] = 1;
    }
  }
  v17 = IoRegisterDeviceInterface(
          *((PDEVICE_OBJECT *)DeviceExtension + 19),
          &GUID_COMPUTE_DEVICE_ARRIVAL,
          0LL,
          (PUNICODE_STRING)&SymbolicLinkName[1]);
  LODWORD(v9) = v17;
  if ( v17 < 0 )
  {
    WdLogSingleEntry1(2LL, v17);
    WdLogGlobalForLineNumber = 9812;
    goto LABEL_41;
  }
  v4 = 1;
  v18 = ExAllocatePool2(64LL, WORD1(SymbolicLinkName[1]), 1953656900LL);
  *((_QWORD *)DeviceExtension + 357) = v18;
  if ( !v18 )
  {
    LODWORD(v9) = -1073741801;
    WdLogSingleEntry1(6LL, -1073741801LL);
    WdLogGlobalForLineNumber = 9833;
    goto LABEL_160;
  }
  *((_DWORD *)DeviceExtension + 712) = SymbolicLinkName[1];
  RtlCopyUnicodeString((PUNICODE_STRING)DeviceExtension + 178, (PCUNICODE_STRING)&SymbolicLinkName[1]);
  RtlFreeUnicodeString((PUNICODE_STRING)&SymbolicLinkName[1]);
  if ( !DeviceExtension[2722] )
  {
    v19 = IoRegisterDeviceInterface(
            *((PDEVICE_OBJECT *)DeviceExtension + 19),
            &GUID_DISPLAY_DEVICE_ARRIVAL,
            0LL,
            (PUNICODE_STRING)&SymbolicLinkName[1]);
    LODWORD(v9) = v19;
    if ( v19 < 0 )
    {
      WdLogSingleEntry1(2LL, v19);
      WdLogGlobalForLineNumber = 9863;
      goto LABEL_41;
    }
    v20 = ExAllocatePool2(64LL, WORD1(SymbolicLinkName[1]), 1953656900LL);
    *((_QWORD *)DeviceExtension + 359) = v20;
    if ( !v20 )
    {
      LODWORD(v9) = -1073741801;
      WdLogSingleEntry1(6LL, -1073741801LL);
      WdLogGlobalForLineNumber = 9884;
      goto LABEL_160;
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
    v21 = PsCreateSystemThread(&ThreadHandle, 0x1FFFFFu, 0LL, 0LL, 0LL, DpiPowerArbiterThread, a1);
    LODWORD(v9) = v21;
    if ( v21 < 0 )
    {
      WdLogSingleEntry1(2LL, v21);
      WdLogGlobalForLineNumber = 9962;
      goto LABEL_41;
    }
    Object = 0LL;
    v9 = ObReferenceObjectByHandle(ThreadHandle, 0x1FFFFFu, 0LL, 0, &Object, 0LL);
    *((_QWORD *)DeviceExtension + 508) = Object;
    ZwClose(ThreadHandle);
    if ( (int)v9 < 0 )
    {
      WdLogSingleEntry1(2LL, v9);
      WdLogGlobalForLineNumber = 9984;
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
  LODWORD(v9) = DpiFdoInitializeAdapterUniqueString(a1);
  v4 = 0;
  if ( (int)v9 < 0 )
  {
LABEL_159:
    ExDeleteResourceLite((PERESOURCE)(DeviceExtension + 3928));
    ExDeleteResourceLite((PERESOURCE)(DeviceExtension + 3440));
    goto LABEL_160;
  }
  v5 = 1;
  DpiQueryBusInterface(*((PDEVICE_OBJECT *)DeviceExtension + 19), (__int64)(DeviceExtension + 2992));
  DpiQueryBusInterface(*((PDEVICE_OBJECT *)DeviceExtension + 19), (__int64)(DeviceExtension + 3040));
  v22 = 0;
  if ( (unsigned int)Feature_I2CInterface_V2__private_IsEnabledDeviceUsageNoInline() )
  {
    v23 = DeviceExtension + 3096;
    v22 = DpiQueryMiniportInterface(
            (__int64)a1,
            (__int64)&GUID_DEVINTERFACE_I2C_VERSION_2,
            56,
            2,
            Sizea,
            (__int64)(DeviceExtension + 3096));
    if ( v22 >= 0 )
    {
      if ( *(_WORD *)v23 != 56
        || *((_WORD *)DeviceExtension + 1549) != 2
        || !*((_QWORD *)DeviceExtension + 391)
        || !*((_QWORD *)DeviceExtension + 392)
        || !*((_QWORD *)DeviceExtension + 393) )
      {
        LODWORD(v9) = -1073741811;
        WdLogSingleEntry1(2LL, -1073741811LL);
        WdLogGlobalForLineNumber = 10103;
        *v23 = 0LL;
        *(_OWORD *)(DeviceExtension + 3112) = 0LL;
        *(_OWORD *)(DeviceExtension + 3128) = 0LL;
        *((_QWORD *)DeviceExtension + 393) = 0LL;
LABEL_55:
        v4 = 0;
        goto LABEL_159;
      }
      *((_DWORD *)DeviceExtension + 772) = 2;
    }
  }
  if ( !(unsigned int)Feature_I2CInterface_V2__private_IsEnabledDeviceUsageNoInline() || v22 < 0 )
  {
    DpiQueryMiniportInterface(
      (__int64)a1,
      (__int64)&GUID_DEVINTERFACE_I2C,
      48,
      1,
      Sizea,
      (__int64)(DeviceExtension + 3096));
    *((_DWORD *)DeviceExtension + 772) = 1;
  }
  v24 = *((_QWORD *)DeviceExtension + 5);
  *((_DWORD *)DeviceExtension + 1506) = 1;
  if ( !*(_BYTE *)(v24 + 133) && !DeviceExtension[1158] )
  {
    v25 = DeviceExtension + 5896;
    if ( (int)DpiQueryMiniportInterface(
                (__int64)a1,
                (__int64)&GUID_WDDM_INTERFACE_DISPLAYMUX_2,
                128,
                2,
                Sizea,
                (__int64)(DeviceExtension + 5896)) >= 0 )
    {
      if ( *v25 != 128
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
        LODWORD(v9) = -1073741811;
        WdLogSingleEntry1(2LL, -1073741811LL);
        WdLogGlobalForLineNumber = 10182;
LABEL_87:
        v32 = 128LL;
LABEL_88:
        v33 = v25;
LABEL_89:
        memset(v33, 0, v32);
        goto LABEL_55;
      }
      LODWORD(SymbolicLinkName[0]) = 0;
      if ( (int)DpiDxgkDdiDisplayMuxGetDriverSupportLevel((__int64)DeviceExtension, SymbolicLinkName, v26) < 0 )
      {
        *((_DWORD *)DeviceExtension + 1506) = 1;
      }
      else
      {
        v27 = SymbolicLinkName[0];
        *((_DWORD *)DeviceExtension + 1506) = SymbolicLinkName[0];
        if ( v27 != 1 )
        {
          v28 = DISPLAY_MUX_MGR::DisplayMuxPresent(qword_140161380);
          if ( DISPLAY_MUX_MGR::ShouldHideMuxFromDriver(qword_140161380) )
          {
            WdLogSingleEntry0(4LL);
            WdLogGlobalForLineNumber = 10210;
            v28 = 0;
          }
          LOBYTE(v29) = v28;
          DpiDxgkDdiDisplayMuxReportPresence((__int64)DeviceExtension, v29, v30);
          DeviceExtension[6393] = v28;
        }
      }
    }
  }
  if ( (unsigned int)Feature_SetMonitorDescriptorOverride__private_IsEnabledDeviceUsageNoInline() )
  {
    v31 = DeviceExtension + 6400;
    if ( (int)DpiQueryMiniportInterface(
                (__int64)a1,
                (__int64)&GUID_WDDM_INTERFACE_DISPLAY_CORE,
                40,
                1,
                Sizea,
                (__int64)(DeviceExtension + 6400)) >= 0
      && (*(_WORD *)v31 != 40 || *((_WORD *)DeviceExtension + 3201) != 1 || !*((_QWORD *)DeviceExtension + 804)) )
    {
      LODWORD(v9) = -1073741811;
      WdLogSingleEntry1(2LL, -1073741811LL);
      WdLogGlobalForLineNumber = 10248;
      *v31 = 0LL;
      *((_OWORD *)DeviceExtension + 401) = 0LL;
      *((_QWORD *)DeviceExtension + 804) = 0LL;
      goto LABEL_55;
    }
  }
  v34 = *((_QWORD *)DeviceExtension + 5);
  *((_DWORD *)DeviceExtension + 788) = 0;
  if ( !*(_BYTE *)(v34 + 133) || DeviceExtension[1158] )
  {
    v25 = DeviceExtension + 3160;
    if ( (int)DpiQueryMiniportInterface(
                (__int64)a1,
                (__int64)&GUID_DEVINTERFACE_OPM_3,
                128,
                4,
                Sizea,
                (__int64)(DeviceExtension + 3160)) >= 0 )
    {
      if ( *v25 != 128
        || (v35 = 4, *((_WORD *)DeviceExtension + 1581) != 4)
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
        LODWORD(v9) = -1073741811;
        WdLogSingleEntry1(2LL, -1073741811LL);
        WdLogGlobalForLineNumber = 10297;
        goto LABEL_87;
      }
      goto LABEL_135;
    }
    if ( (int)DpiQueryMiniportInterface(
                (__int64)a1,
                (__int64)&GUID_DEVINTERFACE_OPM_2,
                112,
                3,
                Sizea,
                (__int64)(DeviceExtension + 3160)) >= 0 )
    {
      if ( *v25 != 112
        || (v35 = 3, *((_WORD *)DeviceExtension + 1581) != 3)
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
        LODWORD(v9) = -1073741811;
        WdLogSingleEntry1(2LL, -1073741811LL);
        v32 = 112LL;
        WdLogGlobalForLineNumber = 10348;
        goto LABEL_88;
      }
      goto LABEL_135;
    }
    if ( (int)DpiQueryMiniportInterface(
                (__int64)a1,
                (__int64)&GUID_DEVINTERFACE_OPM_2_JTP,
                120,
                2,
                Sizea,
                (__int64)(DeviceExtension + 3160)) >= 0 )
    {
      v35 = 2;
      if ( *v25 != 120
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
        LODWORD(v9) = -1073741811;
        WdLogSingleEntry1(2LL, -1073741811LL);
        v32 = 120LL;
        WdLogGlobalForLineNumber = 10401;
        goto LABEL_88;
      }
LABEL_135:
      *((_DWORD *)DeviceExtension + 788) = v35;
      goto LABEL_139;
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
LABEL_139:
  *((_DWORD *)DeviceExtension + 840) = -1;
  if ( byte_140160D16
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
      LODWORD(v9) = -1073741811;
      WdLogSingleEntry1(2LL, -1073741811LL);
      v33 = DeviceExtension + 3288;
      WdLogGlobalForLineNumber = 10478;
      v32 = 64LL;
      goto LABEL_89;
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
  LODWORD(v9) = DpiInitializeBlockList((__int64)a1);
LABEL_157:
  v5 = v3;
  if ( (int)v9 >= 0 )
    return (unsigned int)v9;
  v4 = 0;
  if ( v3 == 1 )
    goto LABEL_159;
LABEL_160:
  if ( *((_QWORD *)DeviceExtension + 508) )
    DpiRequestIoPowerState(a1, 7LL, v10, 0LL);
  if ( v4 == 1 )
    RtlFreeUnicodeString((PUNICODE_STRING)&SymbolicLinkName[1]);
  if ( v5 )
  {
    RtlFreeUnicodeString((PUNICODE_STRING)DeviceExtension + 306);
    RtlFreeUnicodeString((PUNICODE_STRING)DeviceExtension + 307);
  }
  v36 = (void *)*((_QWORD *)DeviceExtension + 429);
  *((_DWORD *)DeviceExtension + 854) = 0;
  if ( v36 )
  {
    ExFreePoolWithTag(v36, 0);
    *((_QWORD *)DeviceExtension + 429) = 0LL;
  }
  v37 = (void *)*((_QWORD *)DeviceExtension + 428);
  if ( v37 )
  {
    ExFreePoolWithTag(v37, 0);
    *((_QWORD *)DeviceExtension + 428) = 0LL;
  }
  v38 = (void *)*((_QWORD *)DeviceExtension + 620);
  if ( v38 )
  {
    ExFreePoolWithTag(v38, 0);
    *((_QWORD *)DeviceExtension + 620) = 0LL;
  }
  v39 = (void *)*((_QWORD *)DeviceExtension + 621);
  if ( v39 )
  {
    ExFreePoolWithTag(v39, 0);
    *((_QWORD *)DeviceExtension + 621) = 0LL;
  }
  v40 = (void *)*((_QWORD *)DeviceExtension + 354);
  if ( v40 )
  {
    ExFreePoolWithTag(v40, 0);
    *((_QWORD *)DeviceExtension + 354) = 0LL;
  }
  v41 = (void *)*((_QWORD *)DeviceExtension + 357);
  if ( v41 )
  {
    ExFreePoolWithTag(v41, 0);
    *((_QWORD *)DeviceExtension + 357) = 0LL;
  }
  v42 = (void *)*((_QWORD *)DeviceExtension + 359);
  if ( v42 )
  {
    ExFreePoolWithTag(v42, 0);
    *((_QWORD *)DeviceExtension + 359) = 0LL;
  }
  v43 = (void (__fastcall *)(_QWORD))*((_QWORD *)DeviceExtension + 377);
  if ( v43 )
  {
    v43(*((_QWORD *)DeviceExtension + 375));
    *((_OWORD *)DeviceExtension + 187) = 0LL;
    *((_OWORD *)DeviceExtension + 188) = 0LL;
    *((_OWORD *)DeviceExtension + 189) = 0LL;
  }
  v44 = (void (__fastcall *)(_QWORD))*((_QWORD *)DeviceExtension + 383);
  if ( v44 )
  {
    v44(*((_QWORD *)DeviceExtension + 381));
    *((_OWORD *)DeviceExtension + 190) = 0LL;
    *((_OWORD *)DeviceExtension + 191) = 0LL;
    *((_OWORD *)DeviceExtension + 192) = 0LL;
  }
  v45 = (struct SYSMM_ADAPTER *)*((_QWORD *)DeviceExtension + 728);
  if ( v45 )
    SysMmDestroyAdapter(v45);
  return (unsigned int)v9;
}
