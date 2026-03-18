/*
 * XREFs of DpiPdoHandleChildConnectionChange @ 0x14042B7C0
 * Callers:
 *     DxgkQueryConnectionChanges @ 0x140027BD0 (DxgkQueryConnectionChanges.c)
 *     DpiFdoHandleTargetConnectionState @ 0x140242850 (DpiFdoHandleTargetConnectionState.c)
 * Callees:
 *     DpiFdoGetChildDescriptor @ 0x140028BA8 (DpiFdoGetChildDescriptor.c)
 *     ?IsInternalVideoOutput@@YAEW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@@Z @ 0x14004BC00 (-IsInternalVideoOutput@@YAEW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@@Z.c)
 *     ?IsSwitchInProgress@DISPLAY_MUX_MGR@@QEAAEXZ @ 0x1400853D0 (-IsSwitchInProgress@DISPLAY_MUX_MGR@@QEAAEXZ.c)
 *     Feature_BrokeredDisplays_ConsoleSessions__private_IsEnabledPreCheck @ 0x14008D560 (Feature_BrokeredDisplays_ConsoleSessions__private_IsEnabledPreCheck.c)
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 *     memset @ 0x1400A2000 (memset.c)
 *     ?MonitorCreatePhysicalMonitor@@YAJPEAXIPEAU_DEVICE_OBJECT@@EEPEAU_DXGK_CONNECTION_USB4_INFO@@PEAEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x14026D5F4 (-MonitorCreatePhysicalMonitor@@YAJPEAXIPEAU_DEVICE_OBJECT@@EEPEAU_DXGK_CONNECTION_USB4_INFO@@PEA.c)
 *     ?MonitorRemovePhysicalMonitor@@YAJPEAXIEPEAEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x14026EFAC (-MonitorRemovePhysicalMonitor@@YAJPEAXIEPEAEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     ?MonitorNotifyDeviceNodeReady@@YAJPEAXIPEAU_DEVICE_OBJECT@@@Z @ 0x14028C3D0 (-MonitorNotifyDeviceNodeReady@@YAJPEAXIPEAU_DEVICE_OBJECT@@@Z.c)
 *     ?MonitorCancelSkippedDepartures@@YAJPEAXI@Z @ 0x1402DF394 (-MonitorCancelSkippedDepartures@@YAJPEAXI@Z.c)
 *     ?DxgkWriteDiagEntry@@YAJPEAU_DXGK_DIAG_HEADER@@_K@Z @ 0x14031DEEC (-DxgkWriteDiagEntry@@YAJPEAU_DXGK_DIAG_HEADER@@_K@Z.c)
 *     DpiPdoSetMonitorDriverInterfaceState @ 0x1403F7F54 (DpiPdoSetMonitorDriverInterfaceState.c)
 *     DpiPdoAddPdo @ 0x1404293CC (DpiPdoAddPdo.c)
 *     DpiPdoRemovePdo @ 0x14042BBC4 (DpiPdoRemovePdo.c)
 */

__int64 __fastcall DpiPdoHandleChildConnectionChange(
        __int64 a1,
        unsigned int a2,
        enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY a3,
        unsigned __int8 a4,
        char a5,
        char a6,
        BOOLEAN a7,
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
  int v32; // eax
  int v33; // eax
  int v34; // eax
  int v35; // eax
  _DWORD v40[2]; // [rsp+80h] [rbp-80h] BYREF
  __int64 v41; // [rsp+88h] [rbp-78h]
  __int128 v42; // [rsp+90h] [rbp-70h]
  __int64 v43; // [rsp+A0h] [rbp-60h]
  int v44; // [rsp+A8h] [rbp-58h]
  int v45; // [rsp+ACh] [rbp-54h]
  int v46; // [rsp+B0h] [rbp-50h]
  int v47; // [rsp+B4h] [rbp-4Ch]
  unsigned int v48; // [rsp+B8h] [rbp-48h]
  int v49; // [rsp+BCh] [rbp-44h]
  __int64 v50; // [rsp+C0h] [rbp-40h]
  _DWORD OutputBuffer[60]; // [rsp+D0h] [rbp-30h] BYREF

  v11 = a10;
  v13 = a11;
  v14 = *(_QWORD *)(a1 + 64);
  v15 = a4;
  if ( !a8 )
  {
    v45 = 0;
    v44 = 0;
    v43 = 0LL;
    v41 = 0LL;
    v16 = *(_DWORD *)(v14 + 24) & 0xFFFF00;
    v48 = a2;
    v17 = *(_QWORD *)(v14 + 5888);
    v47 = v16 | 1;
    v50 = *(_QWORD *)(v14 + 2696);
    v40[0] = 30;
    v40[1] = 72;
    v42 = 0LL;
    v46 = 39;
    v49 = a4;
    DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)v40, v17);
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
          Feature_BrokeredDisplays_ConsoleSessions__private_IsEnabledPreCheck();
          memset(OutputBuffer, 0, 0xE8uLL);
          v26 = ZwPowerInformation(SystemPowerPolicyCurrent, 0LL, 0, OutputBuffer, 0xE8u);
          if ( v26 < 0 )
          {
            v29 = 0;
            WdLogSingleEntry1(2LL, v26);
            WdLogGlobalForLineNumber = 4728;
          }
          else if ( DISPLAY_MUX_MGR::IsSwitchInProgress(qword_140161380) )
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
              WdLogGlobalForLineNumber = 4766;
              return v22;
            }
            if ( *(_BYTE *)(v25 + 944) )
            {
              MonitorNotifyDeviceNodeReady(*(PERESOURCE **)(v14 + 4032), a2, *(struct _DEVICE_OBJECT **)(v21 + 48));
              v32 = DpiPdoSetMonitorDriverInterfaceState(*(PVOID *)(v21 + 48), 1);
              if ( v32 < 0 )
              {
                WdLogSingleEntry1(3LL, v32);
                WdLogGlobalForLineNumber = 4796;
              }
            }
          }
          else
          {
            LOBYTE(v27) = v29;
            v33 = MonitorRemovePhysicalMonitor(v30, a2, v27, a10, a11);
            v22 = v33;
            if ( v33 < 0 )
            {
              WdLogSingleEntry1(2LL, v33);
              WdLogGlobalForLineNumber = 4818;
              return v22;
            }
            if ( !v29 )
            {
              if ( *(_BYTE *)(v25 + 944) )
              {
                v34 = DpiPdoSetMonitorDriverInterfaceState(*(PVOID *)(v21 + 48), 0);
                if ( v34 < 0 )
                {
                  WdLogSingleEntry1(3LL, v34);
                  WdLogGlobalForLineNumber = 4835;
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
        LOBYTE(v20) = a5;
        v35 = DpiPdoAddPdo(a1, v21, a3, v20, a6, a7, a9, v11, v13);
      }
      else
      {
        LOBYTE(v19) = 1;
        v35 = DpiPdoRemovePdo(a1, v21, v19, v11, v13);
      }
      v22 = v35;
      if ( v35 >= 0 && v35 != 0x40000000 && v35 != 128 )
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
    WdLogGlobalForLineNumber = 4664;
  }
  return v22;
}
