/*
 * XREFs of RaidAdapterStartDevice @ 0x140061808
 * Callers:
 *     RaidAdapterStartDeviceIrp @ 0x1400164A4 (RaidAdapterStartDeviceIrp.c)
 *     RaidPnPAsyncStartCompleteWorker @ 0x140065F40 (RaidPnPAsyncStartCompleteWorker.c)
 * Callees:
 *     RaidGetResetInterface @ 0x14000E484 (RaidGetResetInterface.c)
 *     RaidIsAdapterControlSupported @ 0x14001C7B0 (RaidIsAdapterControlSupported.c)
 *     RaidAdapterPoFxIdleComponent @ 0x14001D890 (RaidAdapterPoFxIdleComponent.c)
 *     RaCallMiniportAdapterControl @ 0x140027690 (RaCallMiniportAdapterControl.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140035110 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     RaidAdapterGetSystemPowerHint @ 0x140036554 (RaidAdapterGetSystemPowerHint.c)
 *     RaidAdapterGetSystemPowerResumeLatency @ 0x140036578 (RaidAdapterGetSystemPowerResumeLatency.c)
 *     RaidAdapterCompleteInitialization @ 0x140037B0C (RaidAdapterCompleteInitialization.c)
 *     RaidAdapterInitializeWmi @ 0x140038AF0 (RaidAdapterInitializeWmi.c)
 *     _tlgKeywordOn @ 0x14003D27C (_tlgKeywordOn.c)
 *     RaCallMiniportAdapterControlSafe @ 0x14003D3C0 (RaCallMiniportAdapterControlSafe.c)
 *     RaidAdapterStartMiniport @ 0x1400430C0 (RaidAdapterStartMiniport.c)
 *     RaidAdapterConfigureResources @ 0x140054EDC (RaidAdapterConfigureResources.c)
 *     RaidAdapterRegisterDeviceInterface @ 0x140055444 (RaidAdapterRegisterDeviceInterface.c)
 *     WPP_SF_qqD @ 0x140055624 (WPP_SF_qqD.c)
 *     PortMiniportRegistryInitialize @ 0x14005592C (PortMiniportRegistryInitialize.c)
 *     RaidAdapterRegisterRpmbInterface @ 0x140055C68 (RaidAdapterRegisterRpmbInterface.c)
 *     StorIsMFNDSupported @ 0x140055FDC (StorIsMFNDSupported.c)
 *     Feature_SteelixInlineNvmeCryptoEngine__private_IsEnabledDeviceUsageNoInline @ 0x140056648 (Feature_SteelixInlineNvmeCryptoEngine__private_IsEnabledDeviceUsageNoInline.c)
 *     Feature_TBTNVMe_RTD3__private_IsEnabledDeviceUsageNoInline @ 0x14005669C (Feature_TBTNVMe_RTD3__private_IsEnabledDeviceUsageNoInline.c)
 *     McTemplateK0jqzzqxtqqttt_EtwWriteTransfer @ 0x1400566F0 (McTemplateK0jqzzqxtqqttt_EtwWriteTransfer.c)
 *     McTemplateK0pqtqqt_EtwWriteTransfer @ 0x140056AC8 (McTemplateK0pqtqqt_EtwWriteTransfer.c)
 *     RaidAdapterRegisterMFNDInterface @ 0x14005DEB0 (RaidAdapterRegisterMFNDInterface.c)
 *     RaidAdapterRegisterNonPoFxMiniportInterface @ 0x14005DF48 (RaidAdapterRegisterNonPoFxMiniportInterface.c)
 *     RaidResumeAndRestartAdapterQueues @ 0x1400664A8 (RaidResumeAndRestartAdapterQueues.c)
 *     WPP_SF_qD @ 0x140067D68 (WPP_SF_qD.c)
 *     WPP_SF_qq @ 0x140067E84 (WPP_SF_qq.c)
 *     RaGetBusData @ 0x14006901C (RaGetBusData.c)
 *     RaidGetD3ColdInterface @ 0x140077DF4 (RaidGetD3ColdInterface.c)
 *     RaidQueryPciMsixTableConfigurationInterface @ 0x14008DD04 (RaidQueryPciMsixTableConfigurationInterface.c)
 *     __security_check_cookie @ 0x140143690 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1401436D0 (_guard_dispatch_icall.c)
 *     RaidAdapterGetNvmeIceCapabilities @ 0x140183B0C (RaidAdapterGetNvmeIceCapabilities.c)
 *     StorAdapterInitializeDlrmIfSupported @ 0x1401B2EF0 (StorAdapterInitializeDlrmIfSupported.c)
 *     RaInitializeConfiguration @ 0x1401BD05C (RaInitializeConfiguration.c)
 */

__int64 __fastcall RaidAdapterStartDevice(char *Context, __int64 a2)
{
  __int32 v4; // eax
  __int64 v6; // rax
  __int64 v7; // r14
  __int64 v8; // r15
  int started; // esi
  __int64 v10; // rbx
  __int64 v11; // rcx
  int v12; // r9d
  char v13; // al
  char v14; // cl
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  bool v18; // al
  __int64 v19; // r8
  __int64 v20; // rcx
  int (__fastcall *v21)(_QWORD, __int64, int *); // rax
  PIO_WORKITEM WorkItem; // rax
  __int64 v23; // r8
  _QWORD *v24; // r9
  int *v25; // rax
  int v26; // ecx
  __int64 v27; // rdx
  __int64 v28; // rcx
  void **v29; // rbx
  __int64 v30; // rdx
  NTSTATUS v31; // r8d
  int v32; // r8d
  void *v33; // rcx
  KIRQL v34; // bl
  __int64 v35; // rax
  ULONG Size[2]; // [rsp+20h] [rbp-E0h]
  PVOID Data; // [rsp+28h] [rbp-D8h]
  PULONG RequiredSize; // [rsp+30h] [rbp-D0h]
  PDEVPROPTYPE Type; // [rsp+38h] [rbp-C8h]
  __int64 v40; // [rsp+40h] [rbp-C0h]
  int v41; // [rsp+58h] [rbp-A8h]
  char v42; // [rsp+80h] [rbp-80h] BYREF
  char v43; // [rsp+81h] [rbp-7Fh] BYREF
  bool v44; // [rsp+82h] [rbp-7Eh] BYREF
  char v45; // [rsp+83h] [rbp-7Dh] BYREF
  unsigned int v46; // [rsp+84h] [rbp-7Ch] BYREF
  ULONG BusData; // [rsp+88h] [rbp-78h] BYREF
  ULONG v48; // [rsp+8Ch] [rbp-74h] BYREF
  int v49; // [rsp+90h] [rbp-70h] BYREF
  __int64 v50; // [rsp+98h] [rbp-68h]
  int v51; // [rsp+A0h] [rbp-60h] BYREF
  int v52; // [rsp+A4h] [rbp-5Ch] BYREF
  int v53; // [rsp+A8h] [rbp-58h] BYREF
  int v54; // [rsp+ACh] [rbp-54h] BYREF
  int v55; // [rsp+B0h] [rbp-50h] BYREF
  int v56; // [rsp+B4h] [rbp-4Ch] BYREF
  __int64 v57; // [rsp+B8h] [rbp-48h] BYREF
  int v58; // [rsp+C0h] [rbp-40h]
  int v59; // [rsp+C4h] [rbp-3Ch]
  int SystemPowerHint; // [rsp+C8h] [rbp-38h]
  int SystemPowerResumeLatency; // [rsp+CCh] [rbp-34h]
  struct _EVENT_DATA_DESCRIPTOR v62; // [rsp+D0h] [rbp-30h] BYREF
  char *v63; // [rsp+F0h] [rbp-10h]
  __int64 v64; // [rsp+F8h] [rbp-8h]
  int *v65; // [rsp+100h] [rbp+0h]
  __int64 v66; // [rsp+108h] [rbp+8h]
  int *v67; // [rsp+110h] [rbp+10h]
  __int64 v68; // [rsp+118h] [rbp+18h]
  __int64 *v69; // [rsp+120h] [rbp+20h]
  __int64 v70; // [rsp+128h] [rbp+28h]
  int *v71; // [rsp+130h] [rbp+30h]
  __int64 v72; // [rsp+138h] [rbp+38h]
  int *v73; // [rsp+140h] [rbp+40h]
  __int64 v74; // [rsp+148h] [rbp+48h]
  char *v75; // [rsp+150h] [rbp+50h]
  __int64 v76; // [rsp+158h] [rbp+58h]
  int *v77; // [rsp+160h] [rbp+60h]
  __int64 v78; // [rsp+168h] [rbp+68h]
  int *v79; // [rsp+170h] [rbp+70h]
  __int64 v80; // [rsp+178h] [rbp+78h]
  bool *v81; // [rsp+180h] [rbp+80h]
  __int64 v82; // [rsp+188h] [rbp+88h]
  char *v83; // [rsp+190h] [rbp+90h]
  __int64 v84; // [rsp+198h] [rbp+98h]

  v46 = 0;
  BusData = 0;
  v48 = 0;
  v42 = 0;
  v50 = 0LL;
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    WPP_SF_qq(WPP_GLOBAL_Control->AttachedDevice, 16LL, &WPP_f9c5a744b2853f8434526ecbb453d058_Traceguids, Context, a2);
  }
  v4 = _InterlockedExchange((volatile __int32 *)Context + 22, 1);
  if ( v4 != 2 )
  {
    if ( v4 != 8 )
    {
      if ( (Context[111] & 0x20) != 0 )
        KeSetEvent((PRKEVENT)(Context + 6104), 0, 0);
      return 0LL;
    }
    Context[110] |= 0x80u;
  }
  v6 = *(_QWORD *)(a2 + 184);
  v7 = *(_QWORD *)(v6 + 8);
  v8 = *(_QWORD *)(v6 + 16);
  started = RaInitializeConfiguration(
              (int)Context + 384,
              *((_QWORD *)Context + 76),
              *((_DWORD *)Context + 234),
              *((_DWORD *)Context + 235),
              (Context[109] & 4) != 0,
              (unsigned __int8)Context[110] >> 7);
  if ( started < 0 )
  {
    *((_DWORD *)Context + 1547) = 2;
    goto LABEL_89;
  }
  v10 = *((_QWORD *)Context + 76);
  if ( !v10 )
  {
    *((_DWORD *)Context + 1547) = 3;
    started = -1073741810;
    goto LABEL_89;
  }
  started = RaidAdapterConfigureResources((__int64)Context, v7, v8);
  if ( started < 0 )
  {
    *((_DWORD *)Context + 1547) = 4;
    goto LABEL_89;
  }
  if ( *((_DWORD *)Context + 98) == 5 )
  {
    if ( IoGetDevicePropertyData(
           *((PDEVICE_OBJECT *)Context + 4),
           &DEVPKEY_Device_Address,
           0,
           0,
           4u,
           &v46,
           &BusData,
           &v48) >= 0 )
    {
      *((_DWORD *)Context + 236) = HIWORD(v46);
      *((_DWORD *)Context + 237) = (unsigned __int16)v46;
    }
    if ( IoGetDevicePropertyData(
           *((PDEVICE_OBJECT *)Context + 4),
           &DEVPKEY_PciDevice_IsTunneledDevice,
           0,
           0,
           1u,
           &v42,
           &BusData,
           &v48) >= 0 )
    {
      if ( StorageD3InModernStandbyEnabled || (v13 = 0, v42) )
        v13 = 64;
      Context[112] = v13 | Context[112] & 0x9F | (32 * (v42 & 1)) & 0xBF;
      if ( (unsigned int)Feature_TBTNVMe_RTD3__private_IsEnabledDeviceUsageNoInline() && v42 )
      {
        v14 = Context[113];
        *((_DWORD *)Context + 1244) = *((_DWORD *)Context + 1245);
        Context[107] = Context[107] & 0x7F | (32 * (v14 & 0xFC));
      }
    }
    BusData = RaGetBusData((int)Context + 776, 4, (int)Context + 4736, v12, 64);
    RaidQueryPciMsixTableConfigurationInterface(Context);
  }
  if ( (unsigned int)dword_140170178 > 5 && tlgKeywordOn(v11, 0x400000000000LL) )
  {
    v64 = 16LL;
    v63 = Context + 5064;
    v51 = *((_DWORD *)Context + 518);
    v65 = &v51;
    v52 = *((_DWORD *)Context + 1031);
    v67 = &v52;
    v57 = *((_QWORD *)Context + 613);
    v69 = &v57;
    v53 = (unsigned __int8)Context[4892];
    v71 = &v53;
    v54 = *((_DWORD *)Context + 1244);
    v73 = &v54;
    v43 = StorageD3AllowedOnCurrentPlatform;
    v75 = &v43;
    v55 = *((_DWORD *)Context + 1428);
    v77 = &v55;
    v56 = StorageD3RegistryState;
    v79 = &v56;
    v18 = (Context[112] & 0x40) != 0;
    v66 = 4LL;
    v44 = v18;
    v81 = &v44;
    v45 = DFxEnabled;
    v83 = &v45;
    v68 = 4LL;
    v70 = 8LL;
    v72 = 4LL;
    v74 = 4LL;
    v76 = 1LL;
    v78 = 4LL;
    v80 = 4LL;
    v82 = 1LL;
    v84 = 1LL;
    tlgWriteTransfer_EtwWriteTransfer(v15, (unsigned __int8 *)dword_14015DEC9, v16, v17, 0xDu, &v62);
  }
  if ( (byte_140171466 & 4) != 0 )
    McTemplateK0jqzzqxtqqttt_EtwWriteTransfer(
      (unsigned __int8)StorageD3AllowedOnCurrentPlatform,
      ((unsigned __int8)Context[112] >> 5) & 1,
      ((unsigned __int8)Context[112] >> 6) & 1,
      (__int64)(Context + 5064),
      *((_DWORD *)Context + 14),
      *((const wchar_t **)Context + 591),
      *((const wchar_t **)Context + 590),
      *((_DWORD *)Context + 98),
      *((_QWORD *)Context + 13),
      StorageD3AllowedOnCurrentPlatform,
      *((_DWORD *)Context + 1428),
      v41,
      (Context[112] & 0x40) != 0,
      DFxEnabled,
      (Context[112] & 0x20) != 0);
  *((_DWORD *)Context + 502) = 64;
  PortMiniportRegistryInitialize((__int64)(Context + 2008));
  if ( !_interlockedbittestandset((volatile signed __int32 *)Context + 1502, 0) )
    *((_DWORD *)Context + 1503) = g_MaximumProcessorCount;
  RaidGetD3ColdInterface(*((PDEVICE_OBJECT *)Context + 1));
  RaidGetResetInterface(*((PDEVICE_OBJECT *)Context + 1), (_QWORD *)Context + 672);
  if ( !(unsigned int)Feature_SteelixInlineNvmeCryptoEngine__private_IsEnabledDeviceUsageNoInline()
    && (*(_DWORD *)(v10 + 184) & 0x20000) != 0 )
  {
    RaidAdapterGetNvmeIceCapabilities(Context);
  }
  started = RaidAdapterStartMiniport((__int64)Context, v10, v19);
  if ( started < 0 )
    goto LABEL_89;
  if ( Context[110] < 0 )
  {
    v34 = KfRaiseIrql(2u);
    RaidResumeAndRestartAdapterQueues(Context);
    KeLowerIrql(v34);
LABEL_88:
    v50 = 0x8000100000002LL;
    RaCallMiniportAdapterControlSafe((__int64)(Context + 376), 23);
    goto LABEL_89;
  }
  v20 = *((_QWORD *)Context + 671);
  if ( v20 )
  {
    if ( *((_QWORD *)Context + 620) )
    {
      v49 = 0;
      v21 = *(int (__fastcall **)(_QWORD, __int64, int *))(v20 + 40);
      if ( v21 )
      {
        if ( v21(*(_QWORD *)(v20 + 8), 1LL, &v49) >= 0 && (unsigned int)(v49 - 4) <= 1 )
        {
          *(_DWORD *)(*((_QWORD *)Context + 620) + 20LL) |= 0x80u;
          WorkItem = IoAllocateWorkItem(*((PDEVICE_OBJECT *)Context + 1));
          *((_QWORD *)Context + 710) = WorkItem;
          if ( !WorkItem )
          {
            *((_DWORD *)Context + 1547) = 12;
            started = -1073741670;
            goto LABEL_89;
          }
        }
      }
    }
  }
  started = RaidAdapterCompleteInitialization((__int64)Context);
  if ( started >= 0 )
  {
    if ( StorEtwLoggingEnabled )
    {
      v24 = (_QWORD *)*((_QWORD *)Context + 620);
      if ( v24 )
      {
        v25 = (int *)v24[1];
        v26 = *v25;
        if ( *v25 == 1 )
        {
          v27 = (__int64)(v25 + 6);
        }
        else
        {
          v27 = (__int64)(v25 + 8);
          if ( v26 != 2 && v26 != 3 )
            v27 = 8LL;
        }
        if ( (byte_140171462 & 0x10) != 0 )
        {
          LODWORD(v40) = ((unsigned __int8)Context[110] >> 6) & 1;
          LODWORD(Type) = *(_DWORD *)v27;
          LODWORD(RequiredSize) = *((_DWORD *)Context + 1244);
          LODWORD(Data) = ((unsigned __int8)Context[107] >> 4) & 1;
          Size[0] = *((_DWORD *)Context + 14);
          McTemplateK0pqtqqt_EtwWriteTransfer(
            (unsigned int)Data,
            v27,
            v23,
            *v24,
            *(_QWORD *)Size,
            Data,
            RequiredSize,
            Type,
            v40);
        }
      }
    }
    RaidAdapterInitializeWmi((__int64)Context);
    RaidAdapterRegisterDeviceInterface((__int64)Context);
    if ( StorIsMFNDSupported((__int64)Context) )
      RaidAdapterRegisterMFNDInterface(v28);
    RaidAdapterRegisterRpmbInterface((__int64)Context);
    if ( (Context[113] & 1) == 0 && *((_DWORD *)Context + 1069) == 17 && (Context[112] & 0x20) == 0 )
      StorAdapterInitializeDlrmIfSupported(Context);
    if ( IsSystemAoAC != 1 || !RaidIsAdapterControlSupported((__int64)(Context + 376), 12) )
      goto LABEL_81;
    v29 = (void **)(Context + 4968);
    v31 = PoRegisterPowerSettingCallback(
            *((PDEVICE_OBJECT *)Context + 1),
            &GUID_LOW_POWER_EPOCH,
            (PPOWER_SETTING_CALLBACK)RaidPowerSettingCallback,
            Context,
            (PVOID *)Context + 621);
    if ( v31 < 0 )
    {
      if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        && (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) != 0
        && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
      {
        WPP_SF_qD(
          WPP_GLOBAL_Control->AttachedDevice,
          18LL,
          &WPP_f9c5a744b2853f8434526ecbb453d058_Traceguids,
          Context,
          v31);
      }
    }
    else
    {
      LOBYTE(v30) = 1;
      v32 = PoRegisterCoalescingCallback(RaidCoalescingCallback, v30, Context + 4984, Context);
      if ( v32 >= 0 )
      {
        Context[108] &= 0xFCu;
        v58 = 1;
        v59 = 16;
        SystemPowerHint = RaidAdapterGetSystemPowerHint((__int64)Context);
        SystemPowerResumeLatency = RaidAdapterGetSystemPowerResumeLatency(SystemPowerHint);
        RaCallMiniportAdapterControl((__int64)(Context + 376));
        goto LABEL_78;
      }
      if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        && (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) != 0
        && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
      {
        WPP_SF_qD(
          WPP_GLOBAL_Control->AttachedDevice,
          17LL,
          &WPP_f9c5a744b2853f8434526ecbb453d058_Traceguids,
          Context,
          v32);
      }
      v33 = *v29;
      *((_QWORD *)Context + 623) = 0LL;
      PoUnregisterPowerSettingCallback(v33);
    }
    *v29 = 0LL;
LABEL_78:
    started = PoRegisterPowerSettingCallback(
                *((PDEVICE_OBJECT *)Context + 1),
                &GUID_PDC_IDLE_RESILIENCY_ENGAGED,
                (PPOWER_SETTING_CALLBACK)RaidPowerSettingCallback,
                Context,
                (PVOID *)Context + 755);
    if ( started < 0 )
    {
      *((_QWORD *)Context + 755) = 0LL;
      started = 0;
    }
    else
    {
      Context[111] &= ~8u;
    }
LABEL_81:
    if ( RaidIsAdapterControlSupported((__int64)(Context + 376), 14) )
    {
      PoRegisterPowerSettingCallback(
        *((PDEVICE_OBJECT *)Context + 1),
        &GUID_DISK_MAX_POWER,
        (PPOWER_SETTING_CALLBACK)RaidPowerSettingCallback,
        Context,
        (PVOID *)Context + 624);
      started = IoRegisterDeviceInterface(
                  *((PDEVICE_OBJECT *)Context + 4),
                  &GUID_DEVINTERFACE_THERMAL_COOLING,
                  0LL,
                  (PUNICODE_STRING)(Context + 5000));
      if ( started >= 0 )
      {
        Context[108] |= 0x10u;
        IoSetDeviceInterfaceState((PUNICODE_STRING)(Context + 5000), 1u);
      }
    }
    if ( !*((_QWORD *)Context + 620) && Context[4370] )
      RaidAdapterRegisterNonPoFxMiniportInterface((__int64)Context);
    goto LABEL_88;
  }
LABEL_89:
  Context[110] &= ~0x80u;
  v35 = *((_QWORD *)Context + 620);
  if ( v35 && (*(_DWORD *)(v35 + 20) & 4) != 0 )
  {
    RaidAdapterPoFxIdleComponent((__int64)Context, 0LL, 0LL);
    *(_DWORD *)(*((_QWORD *)Context + 620) + 20LL) &= ~4u;
  }
  Context[111] &= ~0x80u;
  *((_QWORD *)Context + 707) = 0LL;
  *((_DWORD *)Context + 1416) = 0;
  *((_QWORD *)Context + 760) = 0LL;
  *((_QWORD *)Context + 761) = 0LL;
  *((_QWORD *)Context + 762) = 0LL;
  if ( started < 0 )
    _InterlockedExchange((volatile __int32 *)Context + 22, 2);
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    LODWORD(Data) = started;
    WPP_SF_qqD(
      (__int64)WPP_GLOBAL_Control->AttachedDevice,
      0x13u,
      (__int64)&WPP_f9c5a744b2853f8434526ecbb453d058_Traceguids,
      Context,
      a2,
      Data);
  }
  if ( (Context[111] & 0x20) != 0 )
    KeSetEvent((PRKEVENT)(Context + 6104), 0, 0);
  return (unsigned int)started;
}
