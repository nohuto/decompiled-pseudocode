/*
 * XREFs of DpiPdoHandleChildConnectionChange @ 0x1404092C8
 * Callers:
 *     DxgkQueryConnectionChanges @ 0x140027940 (DxgkQueryConnectionChanges.c)
 *     DpiFdoHandleTargetConnectionState @ 0x14023BD30 (DpiFdoHandleTargetConnectionState.c)
 * Callees:
 *     DpiFdoGetChildDescriptor @ 0x140028918 (DpiFdoGetChildDescriptor.c)
 *     ?IsInternalVideoOutput@@YAEW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@@Z @ 0x14004C14C (-IsInternalVideoOutput@@YAEW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@@Z.c)
 *     wil_details_FeatureReporting_ReportUsageToService @ 0x1400670D8 (wil_details_FeatureReporting_ReportUsageToService.c)
 *     wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath @ 0x14006735C (wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath.c)
 *     ?IsSwitchInProgress@DISPLAY_MUX_MGR@@QEAAEXZ @ 0x140084D40 (-IsSwitchInProgress@DISPLAY_MUX_MGR@@QEAAEXZ.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 *     memset @ 0x14009FCC0 (memset.c)
 *     ?MonitorCreatePhysicalMonitor@@YAJPEAXIPEAU_DEVICE_OBJECT@@EEPEAU_DXGK_CONNECTION_USB4_INFO@@PEAEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1402666F4 (-MonitorCreatePhysicalMonitor@@YAJPEAXIPEAU_DEVICE_OBJECT@@EEPEAU_DXGK_CONNECTION_USB4_INFO@@PEA.c)
 *     ?MonitorRemovePhysicalMonitor@@YAJPEAXIEPEAEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x14026804C (-MonitorRemovePhysicalMonitor@@YAJPEAXIEPEAEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     ?MonitorNotifyDeviceNodeReady@@YAJPEAXIPEAU_DEVICE_OBJECT@@@Z @ 0x140353960 (-MonitorNotifyDeviceNodeReady@@YAJPEAXIPEAU_DEVICE_OBJECT@@@Z.c)
 *     ?DxgkWriteDiagEntry@@YAJPEAU_DXGK_DIAG_HEADER@@_K@Z @ 0x14037580C (-DxgkWriteDiagEntry@@YAJPEAU_DXGK_DIAG_HEADER@@_K@Z.c)
 *     DpiPdoAddPdo @ 0x1403C8AA0 (DpiPdoAddPdo.c)
 *     DpiPdoRemovePdo @ 0x1403C99AC (DpiPdoRemovePdo.c)
 *     ?MonitorCancelSkippedDepartures@@YAJPEAXI@Z @ 0x1403D1ED4 (-MonitorCancelSkippedDepartures@@YAJPEAXI@Z.c)
 *     DpiPdoSetMonitorDriverInterfaceState @ 0x1403FDF54 (DpiPdoSetMonitorDriverInterfaceState.c)
 */

__int64 __fastcall DpiPdoHandleChildConnectionChange(
        __int64 a1,
        unsigned int a2,
        enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY a3,
        unsigned __int8 a4,
        char a5,
        char a6,
        char a7,
        char a8,
        struct _DXGK_CONNECTION_USB4_INFO *a9,
        unsigned __int8 *a10,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a11)
{
  unsigned __int8 *v11; // r15
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v13; // r13
  __int64 v14; // rdi
  char v15; // bl
  int v16; // eax
  __int64 v17; // rdx
  enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *ChildDescriptor; // rax
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rsi
  unsigned int v22; // ebx
  char v23; // r14
  __int64 v24; // rdx
  __int64 v25; // r13
  NTSTATUS v26; // eax
  __int64 v27; // r8
  __int64 v28; // r9
  bool v29; // r15
  char *v30; // rcx
  int PhysicalMonitor; // eax
  __int64 v32; // r8
  __int64 v33; // r9
  int v34; // eax
  int v35; // eax
  int v36; // eax
  int v37; // eax
  union _LARGE_INTEGER *OutputBufferLength; // [rsp+20h] [rbp-E0h]
  __int64 v41; // [rsp+58h] [rbp-A8h]
  __int64 v42; // [rsp+58h] [rbp-A8h]
  _DWORD v45[2]; // [rsp+90h] [rbp-70h] BYREF
  __int64 v46; // [rsp+98h] [rbp-68h]
  __int128 v47; // [rsp+A0h] [rbp-60h]
  __int64 v48; // [rsp+B0h] [rbp-50h]
  int v49; // [rsp+B8h] [rbp-48h]
  int v50; // [rsp+BCh] [rbp-44h]
  int v51; // [rsp+C0h] [rbp-40h]
  int v52; // [rsp+C4h] [rbp-3Ch]
  unsigned int v53; // [rsp+C8h] [rbp-38h]
  int v54; // [rsp+CCh] [rbp-34h]
  __int64 v55; // [rsp+D0h] [rbp-30h]
  _DWORD OutputBuffer[60]; // [rsp+E0h] [rbp-20h] BYREF

  v11 = a10;
  v13 = a11;
  v14 = *(_QWORD *)(a1 + 64);
  v15 = a4;
  if ( !a8 )
  {
    v50 = 0;
    v49 = 0;
    v48 = 0LL;
    v46 = 0LL;
    v16 = *(_DWORD *)(v14 + 24) & 0xFFFF00;
    v53 = a2;
    v17 = *(_QWORD *)(v14 + 5888);
    v52 = v16 | 1;
    v55 = *(_QWORD *)(v14 + 2696);
    v45[0] = 30;
    v45[1] = 72;
    v47 = 0LL;
    v51 = 39;
    v54 = a4;
    DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)v45, v17);
  }
  ChildDescriptor = (enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *)DpiFdoGetChildDescriptor(v14, a2);
  v21 = (__int64)ChildDescriptor;
  if ( ChildDescriptor )
  {
    if ( *((_QWORD *)ChildDescriptor + 6) )
    {
      v23 = 1;
      if ( IsInternalVideoOutput(ChildDescriptor[1]) )
      {
        v25 = *(_QWORD *)(v24 + 64);
        if ( *(_BYTE *)(v21 + 66) != v15 )
        {
          v41 = (unsigned int)Feature_OnlyHandlingLidSwitchInBroker__private_featureState;
          if ( (Feature_OnlyHandlingLidSwitchInBroker__private_featureState & 0x10) == 0 )
          {
            LODWORD(v41) = Feature_OnlyHandlingLidSwitchInBroker__private_featureState | 1;
            wil_details_FeatureReporting_ReportUsageToService(
              (__int64)&Feature_OnlyHandlingLidSwitchInBroker__private_descriptor,
              v41,
              3LL);
            wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath(
              v41,
              3,
              (__int64)&Feature_OnlyHandlingLidSwitchInBroker__private_descriptor);
          }
          v42 = (unsigned int)Feature_BrokeredDisplays_ConsoleSessions__private_featureState;
          if ( (Feature_BrokeredDisplays_ConsoleSessions__private_featureState & 0x10) == 0 )
          {
            LODWORD(v42) = Feature_BrokeredDisplays_ConsoleSessions__private_featureState | 1;
            wil_details_FeatureReporting_ReportUsageToService(
              (__int64)&Feature_BrokeredDisplays_ConsoleSessions__private_descriptor,
              v42,
              3LL);
            wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath(
              v42,
              3,
              (__int64)&Feature_BrokeredDisplays_ConsoleSessions__private_descriptor);
          }
          memset(OutputBuffer, 0, 0xE8uLL);
          v26 = ZwPowerInformation(SystemPowerPolicyCurrent, 0LL, 0, OutputBuffer, 0xE8u);
          if ( v26 < 0 )
          {
            v29 = 0;
            WdLogSingleEntry1(2LL, v26);
            WdLogGlobalForLineNumber = 4563;
          }
          else if ( DISPLAY_MUX_MGR::IsSwitchInProgress(qword_14015E3C0) )
          {
            v29 = 0;
          }
          else
          {
            v29 = OutputBuffer[7] != 0;
          }
          v30 = *(char **)(v14 + 4032);
          if ( v15 )
          {
            v11 = a10;
            LOBYTE(v28) = 1;
            PhysicalMonitor = MonitorCreatePhysicalMonitor(
                                v30,
                                a2,
                                *(struct _DEVICE_OBJECT **)(v21 + 48),
                                v28,
                                v15,
                                0LL,
                                a10,
                                a11);
            v22 = PhysicalMonitor;
            if ( PhysicalMonitor < 0 )
            {
              WdLogSingleEntry1(2LL, PhysicalMonitor);
              WdLogGlobalForLineNumber = 4601;
              return v22;
            }
            if ( *(_BYTE *)(v25 + 944) )
            {
              MonitorNotifyDeviceNodeReady(*(PERESOURCE **)(v14 + 4032), a2, *(struct _DEVICE_OBJECT **)(v21 + 48));
              v34 = DpiPdoSetMonitorDriverInterfaceState(*(PVOID *)(v21 + 48), 1, v32, v33);
              if ( v34 < 0 )
              {
                WdLogSingleEntry1(3LL, v34);
                WdLogGlobalForLineNumber = 4631;
              }
            }
          }
          else
          {
            LOBYTE(v27) = v29;
            v35 = MonitorRemovePhysicalMonitor(v30, a2, v27, a10, a11);
            v22 = v35;
            if ( v35 < 0 )
            {
              WdLogSingleEntry1(2LL, v35);
              WdLogGlobalForLineNumber = 4653;
              return v22;
            }
            if ( !v29 )
            {
              if ( *(_BYTE *)(v25 + 944) )
              {
                v36 = DpiPdoSetMonitorDriverInterfaceState(*(PVOID *)(v21 + 48), 0, v19, v20);
                if ( v36 < 0 )
                {
                  WdLogSingleEntry1(3LL, v36);
                  WdLogGlobalForLineNumber = 4670;
                }
              }
            }
            v11 = a10;
          }
          v23 = 1;
        }
        v13 = a11;
        v15 = 1;
      }
    }
    else
    {
      v23 = 0;
    }
    *(_BYTE *)(v21 + 66) = a4;
    if ( v15 )
      MonitorCancelSkippedDepartures(*(PERESOURCE **)(v14 + 4032), a2, v19, v20);
    if ( v23 != v15 || v15 && a6 )
    {
      *(_BYTE *)(v21 + 65) = v15;
      if ( v15 )
      {
        LOBYTE(OutputBufferLength) = a6;
        v37 = DpiPdoAddPdo(a1, v21, a3, a5, OutputBufferLength, a7, a9, v11, v13);
      }
      else
      {
        v37 = DpiPdoRemovePdo(a1, v21, 1, v11, v13);
      }
      v22 = v37;
      if ( v37 >= 0 && v37 != 0x40000000 && v37 != 128 )
      {
        _m_prefetchw((const void *)(v14 + 3780));
        if ( (_InterlockedOr((volatile signed __int32 *)(v14 + 3780), 1u) & 1) == 0 )
          IoInvalidateDeviceRelations(*(PDEVICE_OBJECT *)(v14 + 152), BusRelations);
      }
    }
    else
    {
      return 0;
    }
  }
  else
  {
    v22 = -1073741810;
    WdLogSingleEntry1(2LL, -1073741810LL);
    WdLogGlobalForLineNumber = 4498;
  }
  return v22;
}
