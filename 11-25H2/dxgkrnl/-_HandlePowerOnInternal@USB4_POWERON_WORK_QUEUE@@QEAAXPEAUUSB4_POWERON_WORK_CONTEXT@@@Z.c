/*
 * XREFs of ?_HandlePowerOnInternal@USB4_POWERON_WORK_QUEUE@@QEAAXPEAUUSB4_POWERON_WORK_CONTEXT@@@Z @ 0x1402716D8
 * Callers:
 *     ?_HandlePowerOn@USB4_POWERON_WORK_QUEUE@@CAXPEAU_DEVICE_OBJECT@@PEAXPEAU_IO_WORKITEM@@@Z @ 0x140271680 (-_HandlePowerOn@USB4_POWERON_WORK_QUEUE@@CAXPEAU_DEVICE_OBJECT@@PEAXPEAU_IO_WORKITEM@@@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x14001BF80 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z @ 0x14001C0B0 (-Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     ??1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ @ 0x14001C140 (--1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ.c)
 *     ?AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@IPEBD@Z @ 0x14001EE2C (-AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@IPEBD@Z.c)
 *     ??0DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@PEAVDXGADAPTER@@E@Z @ 0x14001F610 (--0DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@PEAVDXGADAPTER@@E@Z.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x14002D968 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireMonitorExclusive@MONITOR_MGR@@SA?AVMONITOR_REF_LOCK_ACCESSOR@@PEAXI_N@Z @ 0x140032A20 (-AcquireMonitorExclusive@MONITOR_MGR@@SA-AVMONITOR_REF_LOCK_ACCESSOR@@PEAXI_N@Z.c)
 *     ??0CDisplayScenarioContextScope@@QEAA@AEAVCDisplayScenarioContextCarrier@@@Z @ 0x1400354A4 (--0CDisplayScenarioContextScope@@QEAA@AEAVCDisplayScenarioContextCarrier@@@Z.c)
 *     ??1MONITOR_REF_LOCK_ACCESSOR@@QEAA@XZ @ 0x140035774 (--1MONITOR_REF_LOCK_ACCESSOR@@QEAA@XZ.c)
 *     ?AssignByLuid@DXGADAPTER_REFERENCE@@QEAA_NAEBU_LUID@@@Z @ 0x14003907C (-AssignByLuid@DXGADAPTER_REFERENCE@@QEAA_NAEBU_LUID@@@Z.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAU_DEVICE_OBJECT@@$$A6AXPEAX@Z$1?DereferenceObject@details@widxg@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x14003E96C (--1-$unique_storage@U-$resource_policy@PEAU_DEVICE_OBJECT@@$$A6AXPEAX@Z$1-DereferenceObject@deta.c)
 *     ??1CDisplayScenarioContextScope@@QEAA@XZ @ 0x140043904 (--1CDisplayScenarioContextScope@@QEAA@XZ.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAU_DEVICE_OBJECT@@$$A6AXPEAX@Z$1?DereferenceObject@details@widxg@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAU_DEVICE_OBJECT@@@Z @ 0x140060FB0 (-reset@-$unique_storage@U-$resource_policy@PEAU_DEVICE_OBJECT@@$$A6AXPEAX@Z$1-DereferenceObject@.c)
 *     DXGKCALLONEXIT__lambda_c7448c75b3dac8478dfa1698e822be3e___ @ 0x1400654B8 (DXGKCALLONEXIT__lambda_c7448c75b3dac8478dfa1698e822be3e___.c)
 *     _DXGKCALLONEXIT__lambda_4f1b21fdf227c274fd119a17c5b036b5____::_2_::DXGKCALLONEXIT::_DXGKCALLONEXIT @ 0x1400901B8 (_DXGKCALLONEXIT__lambda_4f1b21fdf227c274fd119a17c5b036b5____--_2_--DXGKCALLONEXIT--_DXGKCALLONEX.c)
 *     ?Assign@USB4POFXREF_REF_ACCESSOR@DxgMonitor@@QEAAXPEAVUsb4HostRouterPoFxRefv2@2@@Z @ 0x1400902F8 (-Assign@USB4POFXREF_REF_ACCESSOR@DxgMonitor@@QEAAXPEAVUsb4HostRouterPoFxRefv2@2@@Z.c)
 *     ?Release@USB4POFXREF_REF_ACCESSOR@DxgMonitor@@QEAAXXZ @ 0x14009032C (-Release@USB4POFXREF_REF_ACCESSOR@DxgMonitor@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 *     DxgkNotifyMonitorChange @ 0x1401889D8 (DxgkNotifyMonitorChange.c)
 *     ?DmmUpdateTargetConnectionId@@YAJQEAXI@Z @ 0x140253A9C (-DmmUpdateTargetConnectionId@@YAJQEAXI@Z.c)
 *     ?AddUsb4HRPowerRef@Usb4HostRouterPoFxRefv2@DxgMonitor@@QEAAJU_LUID@@I@Z @ 0x140270968 (-AddUsb4HRPowerRef@Usb4HostRouterPoFxRefv2@DxgMonitor@@QEAAJU_LUID@@I@Z.c)
 *     ?_OnChangePowerOnStage2@MonitorUsb4State@DxgMonitor@@AEAAXXZ @ 0x140272020 (-_OnChangePowerOnStage2@MonitorUsb4State@DxgMonitor@@AEAAXXZ.c)
 *     ?DmmPowerOnOffTargetsFromSourceIfNecessary@@YAJQEAXEPEAU_DMM_SET_TIMING_RESULT@@@Z @ 0x14030C458 (-DmmPowerOnOffTargetsFromSourceIfNecessary@@YAJQEAXEPEAU_DMM_SET_TIMING_RESULT@@@Z.c)
 *     ?DmmHandleSetTimingsResult@@YAXPEAXPEAU_DMM_SET_TIMING_RESULT@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x14030E9EC (-DmmHandleSetTimingsResult@@YAXPEAXPEAU_DMM_SET_TIMING_RESULT@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEX.c)
 *     DpiPollDisplayChildren @ 0x1403CB24C (DpiPollDisplayChildren.c)
 */

void __fastcall USB4_POWERON_WORK_QUEUE::_HandlePowerOnInternal(USB4_POWERON_WORK_QUEUE *this, const struct _GUID **a2)
{
  struct DXGADAPTER *v2; // rbx
  const struct _GUID **v3; // rcx
  unsigned int v4; // ebx
  struct DXGADAPTER *i; // rdi
  const struct _GUID *v6; // r8
  DxgMonitor::Usb4HostRouterPoFxRefv2 *v7; // r15
  const struct _GUID *v8; // rcx
  unsigned int v9; // ebx
  DxgMonitor::MonitorUsb4State *v10; // rcx
  const struct _GUID *v11; // rcx
  unsigned int v12; // ebx
  void *v13; // rbx
  int v14; // eax
  int v15; // eax
  int v16; // eax
  int v17; // eax
  int v18; // eax
  int v19; // eax
  int v20; // [rsp+58h] [rbp-B0h] BYREF
  int v21; // [rsp+5Ch] [rbp-ACh] BYREF
  unsigned __int64 v22; // [rsp+60h] [rbp-A8h] BYREF
  const struct _GUID **v23; // [rsp+68h] [rbp-A0h] BYREF
  DxgkCompositionObject *v24; // [rsp+70h] [rbp-98h] BYREF
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v25; // [rsp+78h] [rbp-90h] BYREF
  struct DXGADAPTER *v26[2]; // [rsp+80h] [rbp-88h] BYREF
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v27[2]; // [rsp+90h] [rbp-78h] BYREF
  void *v28; // [rsp+A0h] [rbp-68h] BYREF
  DxgMonitor::Usb4HostRouterPoFxRefv2 *v29; // [rsp+A8h] [rbp-60h]
  union _LARGE_INTEGER Interval; // [rsp+B0h] [rbp-58h] BYREF
  __int128 v31; // [rsp+B8h] [rbp-50h] BYREF
  int *v32; // [rsp+C8h] [rbp-40h]
  const struct _GUID ***v33; // [rsp+D0h] [rbp-38h]
  _QWORD v34[3]; // [rsp+D8h] [rbp-30h] BYREF
  _QWORD v35[3]; // [rsp+F0h] [rbp-18h] BYREF
  _BYTE v36[24]; // [rsp+108h] [rbp+0h] BYREF
  _BYTE v37[40]; // [rsp+120h] [rbp+18h] BYREF
  _BYTE v38[144]; // [rsp+148h] [rbp+40h] BYREF
  void *retaddr; // [rsp+200h] [rbp+F8h]

  v23 = a2;
  v22 = 0xFFFFFFFF00000000uLL;
  v21 = 0;
  v24 = 0LL;
  CDisplayScenarioContextScope::CDisplayScenarioContextScope((CDisplayScenarioContextScope *)v27, a2 + 1);
  v25 = v27[1];
  *(_QWORD *)&v31 = &v22;
  *((_QWORD *)&v31 + 1) = &v25;
  v32 = &v21;
  v33 = &v23;
  DXGKCALLONEXIT__lambda_c7448c75b3dac8478dfa1698e822be3e_((__int64)v37, &v31);
  v26[0] = 0LL;
  if ( DXGADAPTER_REFERENCE::AssignByLuid((DXGADAPTER_REFERENCE *)v26, (const struct _LUID *)v23 + 3) )
  {
    v2 = v26[0];
    DXGADAPTERSTOPRESETLOCKSHARED::DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v36, v26[0], 1);
    if ( *((_DWORD *)v2 + 50) == 1 )
    {
      v3 = v23;
      v4 = 0;
      for ( i = v26[0]; v4 < *((_DWORD *)v23 + 8); ++v4 )
      {
        v6 = v3[5];
        v28 = retaddr;
        v7 = 0LL;
        v29 = 0LL;
        MONITOR_MGR::AcquireMonitorExclusive(v34, (__int64)i, *(&v6->Data1 + v4), 0);
        if ( v34[0] )
        {
          DxgMonitor::USB4POFXREF_REF_ACCESSOR::Assign(
            (DxgMonitor::USB4POFXREF_REF_ACCESSOR *)&v28,
            *(struct DxgMonitor::Usb4HostRouterPoFxRefv2 **)(*(_QWORD *)(v34[0] + 264LL) + 80LL));
          v7 = v29;
        }
        else
        {
          WdLogSingleEntry3(2LL, *(&v23[5]->Data1 + v4), i != 0LL, v21);
          v8 = v23[5];
          WdLogGlobalForLineNumber = 330;
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
            0xFFFFFFFFLL,
            L"Could not find target 0x%I64 for adapter 0x%I64, status 0x%I64",
            *(&v8->Data1 + v4),
            i != 0LL,
            v21,
            0LL,
            0LL);
          if ( !(_DWORD)v22 )
          {
            HIDWORD(v22) = *(&v23[5]->Data1 + v4);
            LODWORD(v22) = 5;
          }
        }
        MONITOR_REF_LOCK_ACCESSOR::~MONITOR_REF_LOCK_ACCESSOR((MONITOR_REF_LOCK_ACCESSOR *)v34);
        if ( v7 )
          DxgMonitor::Usb4HostRouterPoFxRefv2::AddUsb4HRPowerRef(v7, (struct _LUID)v23[3], *(&v23[5]->Data1 + v4));
        DxgMonitor::USB4POFXREF_REF_ACCESSOR::Release((DxgMonitor::USB4POFXREF_REF_ACCESSOR *)&v28);
        v3 = v23;
      }
      v9 = 0;
      if ( *((_DWORD *)v3 + 8) )
      {
        do
        {
          MONITOR_MGR::AcquireMonitorExclusive(v35, (__int64)i, *(&v3[5]->Data1 + v9), 0);
          if ( v35[0] )
          {
            v10 = *(DxgMonitor::MonitorUsb4State **)(v35[0] + 264LL);
            if ( *((_BYTE *)v10 + 8) )
              DxgMonitor::MonitorUsb4State::_OnChangePowerOnStage2(v10);
          }
          else
          {
            WdLogSingleEntry3(2LL, *(&v23[5]->Data1 + v9), i != 0LL, v21);
            v11 = v23[5];
            WdLogGlobalForLineNumber = 355;
            DxgkLogInternalTriageEvent(
              0LL,
              0x40000,
              0xFFFFFFFFLL,
              L"Could not find target 0x%I64 for adapter 0x%I64, status 0x%I64",
              *(&v11->Data1 + v9),
              i != 0LL,
              v21,
              0LL,
              0LL);
            if ( !(_DWORD)v22 )
            {
              HIDWORD(v22) = *(&v23[5]->Data1 + v9);
              LODWORD(v22) = 12;
            }
          }
          MONITOR_REF_LOCK_ACCESSOR::~MONITOR_REF_LOCK_ACCESSOR((MONITOR_REF_LOCK_ACCESSOR *)v35);
          v3 = v23;
          ++v9;
        }
        while ( v9 < *((_DWORD *)v23 + 8) );
      }
      v12 = 0;
      if ( *((_DWORD *)v3 + 8) )
      {
        do
        {
          DmmUpdateTargetConnectionId(i, *(&v3[5]->Data1 + v12));
          v3 = v23;
          ++v12;
        }
        while ( v12 < *((_DWORD *)v23 + 8) );
      }
      DxgkNotifyMonitorChange((__int128 *)v25);
      Interval.QuadPart = -4000LL;
      KeDelayExecutionThread(0, 0, &Interval);
      v13 = (void *)*((_QWORD *)i + 27);
      ObfReferenceObject(v13);
      wil::details::unique_storage<wil::details::resource_policy<_DEVICE_OBJECT *,void (void *),&void widxg::details::DereferenceObject(void *),wistd::integral_constant<unsigned __int64,0>,_DEVICE_OBJECT *,_DEVICE_OBJECT *,0,std::nullptr_t>>::reset(
        (__int64 *)&v24,
        (__int64)v13);
      DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v36);
      v14 = DpiPollDisplayChildren(v24, 12LL, v25);
      v21 = v14;
      if ( v14 >= 0 )
      {
        COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v38, i, 0LL);
        v16 = COREADAPTERACCESS::AcquireExclusive((__int64)v38, 1u, 0);
        v21 = v16;
        if ( v16 >= 0 )
        {
          LOBYTE(v20) = 0;
          v17 = DmmPowerOnOffTargetsFromSourceIfNecessary(i, 0, (struct _DMM_SET_TIMING_RESULT *)&v20);
          v21 = v17;
          if ( v17 >= 0 )
          {
            DmmHandleSetTimingsResult(i, (struct _DMM_SET_TIMING_RESULT *)&v20, v25);
            v18 = v22;
            if ( !(_DWORD)v22 )
              v18 = 1;
          }
          else
          {
            WdLogSingleEntry2(2LL, 1LL, v17);
            WdLogGlobalForLineNumber = 416;
            DxgkLogInternalTriageEvent(
              0LL,
              0x40000,
              0xFFFFFFFFLL,
              L"DmmPowerOnOffTargetsFromSourceIfNecessary failed for adapter 0x%I64 after processing, status 0x%I64",
              1LL,
              v21,
              0LL,
              0LL,
              0LL);
            v18 = v22;
            if ( !(_DWORD)v22 )
              v18 = 7;
          }
          LODWORD(v22) = v18;
        }
        else
        {
          WdLogSingleEntry2(2LL, 1LL, v16);
          WdLogGlobalForLineNumber = 406;
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
            0xFFFFFFFFLL,
            L"Failed to acquire exclusive for adapter 0x%I64 after processing, status 0x%I64",
            1LL,
            v21,
            0LL,
            0LL,
            0LL);
          if ( !(_DWORD)v22 )
            LODWORD(v22) = 20;
        }
        COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v38);
      }
      else
      {
        WdLogSingleEntry2(2LL, 1LL, v14);
        WdLogGlobalForLineNumber = 395;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          0xFFFFFFFFLL,
          L"Failed to acquire exclusive for adapter 0x%I64 after processing, status 0x%I64",
          1LL,
          v21,
          0LL,
          0LL,
          0LL);
        v15 = v22;
        if ( !(_DWORD)v22 )
          v15 = 19;
        LODWORD(v22) = v15;
      }
    }
    else
    {
      WdLogSingleEntry2(2LL, *((int *)v23 + 7), *((unsigned int *)v23 + 6));
      WdLogGlobalForLineNumber = 310;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        0xFFFFFFFFLL,
        L"Adapter with luid 0x%08I64x%08I64x is not active",
        *((int *)v23 + 7),
        *((unsigned int *)v23 + 6),
        0LL,
        0LL,
        0LL);
      v19 = v22;
      if ( !(_DWORD)v22 )
        v19 = 13;
      LODWORD(v22) = v19;
      DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v36);
    }
  }
  else
  {
    WdLogSingleEntry2(2LL, *((int *)v23 + 7), *((unsigned int *)v23 + 6));
    WdLogGlobalForLineNumber = 297;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      0xFFFFFFFFLL,
      L"Could not find adapter with luid 0x%08I64x%08I64x",
      *((int *)v23 + 7),
      *((unsigned int *)v23 + 6),
      0LL,
      0LL,
      0LL);
    if ( !(_DWORD)v22 )
      LODWORD(v22) = 2;
  }
  DXGADAPTER_REFERENCE::Assign((DXGADAPTER_REFERENCE *)v26, 0LL);
  DXGKCALLONEXIT__lambda_4f1b21fdf227c274fd119a17c5b036b5____::_2_::DXGKCALLONEXIT::_DXGKCALLONEXIT((__int64)v37);
  CDisplayScenarioContextScope::~CDisplayScenarioContextScope(v27);
  wil::details::unique_storage<wil::details::resource_policy<_DEVICE_OBJECT *,void (void *),&void widxg::details::DereferenceObject(void *),wistd::integral_constant<unsigned __int64,0>,_DEVICE_OBJECT *,_DEVICE_OBJECT *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_DEVICE_OBJECT *,void (void *),&void widxg::details::DereferenceObject(void *),wistd::integral_constant<unsigned __int64,0>,_DEVICE_OBJECT *,_DEVICE_OBJECT *,0,std::nullptr_t>>(&v24);
}
