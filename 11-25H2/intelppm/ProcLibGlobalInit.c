/*
 * XREFs of ProcLibGlobalInit @ 0x14004A9C8
 * Callers:
 *     DriverEntry @ 0x1400495E4 (DriverEntry.c)
 * Callees:
 *     WPP_RECORDER_SF_s @ 0x140003B94 (WPP_RECORDER_SF_s.c)
 *     WPP_RECORDER_SF_ @ 0x140003CF8 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_dd @ 0x14000452C (WPP_RECORDER_SF_dd.c)
 *     HviIsAnyHypervisorPresent @ 0x140004BCC (HviIsAnyHypervisorPresent.c)
 *     WPP_RECORDER_SF_D @ 0x1400050E8 (WPP_RECORDER_SF_D.c)
 *     HviGetHypervisorFeatures @ 0x14000633C (HviGetHypervisorFeatures.c)
 *     HviGetEnlightenmentInformation @ 0x14000FD78 (HviGetEnlightenmentInformation.c)
 *     __security_check_cookie @ 0x14000FEF0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14000FF90 (_guard_dispatch_icall.c)
 *     memset @ 0x140010340 (memset.c)
 *     GetRegistryDwordValue @ 0x140028658 (GetRegistryDwordValue.c)
 *     ProcLibTraceIdleStatesErrata @ 0x14002BF88 (ProcLibTraceIdleStatesErrata.c)
 *     ProcLibTracePccErrata @ 0x14002C008 (ProcLibTracePccErrata.c)
 *     ProcLibTracePerfStatesErrata @ 0x14002C25C (ProcLibTracePerfStatesErrata.c)
 *     ProcLibTraceThrottleStatesErrata @ 0x14002C288 (ProcLibTraceThrottleStatesErrata.c)
 *     TraceLoggingRegisterEx_EtwRegister_EtwSetInformation @ 0x14002C2B4 (TraceLoggingRegisterEx_EtwRegister_EtwSetInformation.c)
 *     GetRegistryQwordValue @ 0x14002C364 (GetRegistryQwordValue.c)
 *     GetHiddenProcessorPresence @ 0x14002FF90 (GetHiddenProcessorPresence.c)
 *     GetHvPpmCapabilities @ 0x1400300B8 (GetHvPpmCapabilities.c)
 *     HwDebugInitializeRegistryDebugRegisters @ 0x140047504 (HwDebugInitializeRegistryDebugRegisters.c)
 *     InitDriver @ 0x14004903C (InitDriver.c)
 *     InitializeHvProcessorInfo @ 0x14004996C (InitializeHvProcessorInfo.c)
 *     CollectAcpiBiosInfo @ 0x140049AA8 (CollectAcpiBiosInfo.c)
 *     DisplayPPMFlags @ 0x140049C10 (DisplayPPMFlags.c)
 *     PopulateEnergyEstimationModel @ 0x14004B740 (PopulateEnergyEstimationModel.c)
 */

__int64 __fastcall ProcLibGlobalInit(PDEVICE_OBJECT DeviceObject)
{
  int v2; // eax
  unsigned int v3; // edi
  unsigned __int16 v4; // r9
  int v5; // eax
  unsigned __int16 v6; // r9
  unsigned int v7; // r8d
  struct _IO_WORKITEM *WorkItem; // rax
  __int64 v9; // rcx
  _QWORD *v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  bool v13; // si
  char v14; // r15
  __int64 v15; // rdx
  ULONG v16; // ecx
  const CHAR *v17; // r8
  const CHAR *v18; // r9
  bool v19; // zf
  unsigned int v20; // ebx
  __int64 v21; // r14
  __int64 v22; // rax
  __int64 v23; // rcx
  int *v24; // rdi
  unsigned __int8 i; // bl
  int inited; // eax
  __int64 v27; // rax
  const char *v28; // rax
  int v29; // edx
  int v30; // edx
  int v32; // [rsp+30h] [rbp-51h]
  int v33; // [rsp+38h] [rbp-49h]
  bool v34; // [rsp+48h] [rbp-39h] BYREF
  bool v35[3]; // [rsp+49h] [rbp-38h] BYREF
  int v36; // [rsp+4Ch] [rbp-35h] BYREF
  int v37; // [rsp+50h] [rbp-31h] BYREF
  int v38; // [rsp+54h] [rbp-2Dh] BYREF
  int v39; // [rsp+58h] [rbp-29h] BYREF
  int v40; // [rsp+5Ch] [rbp-25h] BYREF
  __int128 v41; // [rsp+60h] [rbp-21h] BYREF
  __int128 v42; // [rsp+70h] [rbp-11h]
  __int64 v43; // [rsp+80h] [rbp-1h]
  __int128 InputBuffer; // [rsp+88h] [rbp+7h] BYREF
  __int128 v45; // [rsp+98h] [rbp+17h] BYREF

  v40 = 0;
  v38 = 0;
  v39 = 0;
  v35[0] = 0;
  v34 = 0;
  LODWORD(v43) = 0;
  InputBuffer = 0LL;
  v45 = 0LL;
  v41 = 0LL;
  v42 = 0LL;
  v2 = ZwPowerInformation(ProcessorStateHandler, 0LL, (ULONG)0, &dword_140019498, (ULONG)280);
  v3 = v2;
  if ( v2 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v4 = 10;
LABEL_125:
      v7 = 3;
      goto LABEL_126;
    }
    return v3;
  }
  v5 = dword_140019498;
  if ( dword_140019498 != 82 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return (unsigned int)-1073741735;
    v6 = 11;
    v33 = 82;
LABEL_7:
    WPP_RECORDER_SF_dd(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      2u,
      3u,
      v6,
      (__int64)&WPP_4e1b20cf9f023c365f1b3d32753808d1_Traceguids,
      v5,
      v33);
    return (unsigned int)-1073741735;
  }
  v2 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64 *))(WdfFunctions_01015 + 2496))(
         WdfDriverGlobals,
         0LL,
         &qword_140019188);
  v3 = v2;
  if ( v2 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return v3;
    v4 = 12;
LABEL_12:
    v7 = 4;
LABEL_126:
    v32 = v2;
    goto LABEL_127;
  }
  v2 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64 *))(WdfFunctions_01015 + 2496))(
         WdfDriverGlobals,
         0LL,
         &qword_140019198);
  v3 = v2;
  if ( v2 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return v3;
    v4 = 13;
    goto LABEL_12;
  }
  v2 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64 *))(WdfFunctions_01015 + 2496))(
         WdfDriverGlobals,
         0LL,
         &qword_140019190);
  v3 = v2;
  if ( v2 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return v3;
    v4 = 14;
    goto LABEL_12;
  }
  v2 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64 *))(WdfFunctions_01015 + 2496))(
         WdfDriverGlobals,
         0LL,
         &qword_1400197C8);
  v3 = v2;
  if ( v2 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return v3;
    v4 = 15;
    goto LABEL_12;
  }
  v2 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64 *))(WdfFunctions_01015 + 2496))(
         WdfDriverGlobals,
         0LL,
         &qword_1400191A0);
  v3 = v2;
  if ( v2 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return v3;
    v4 = 16;
    goto LABEL_12;
  }
  v2 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64 *))(WdfFunctions_01015 + 2520))(
         WdfDriverGlobals,
         0LL,
         &qword_1400197E8);
  v3 = v2;
  if ( v2 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return v3;
    v4 = 17;
    goto LABEL_12;
  }
  v2 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64 *))(WdfFunctions_01015 + 2520))(
         WdfDriverGlobals,
         0LL,
         &qword_1400197C0);
  v3 = v2;
  if ( v2 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return v3;
    v4 = 18;
    goto LABEL_12;
  }
  KeInitializeEvent(&Event, NotificationEvent, 1u);
  WorkItem = IoAllocateWorkItem(DeviceObject);
  word_1400197FC = 0;
  v9 = 2LL;
  qword_1400197F0 = WorkItem;
  qword_1400191D0 = (__int64)&qword_1400191C8;
  qword_1400191C8 = (__int64)&qword_1400191C8;
  qword_1400191E0 = (__int64)&qword_1400191D8;
  qword_1400191D8 = (__int64)&qword_1400191D8;
  qword_1400191F0 = (__int64)&qword_1400191E8;
  qword_1400191E8 = (__int64)&qword_1400191E8;
  qword_140019200 = (__int64)&qword_1400191F8;
  qword_1400191F8 = (__int64)&qword_1400191F8;
  qword_140019210 = (__int64)&qword_140019208;
  qword_140019208 = (__int64)&qword_140019208;
  qword_1400197D8 = (__int64)&qword_1400197D0;
  qword_1400197D0 = (__int64)&qword_1400197D0;
  qword_140019AC8 = (__int64)&qword_140019AC0;
  qword_140019AC0 = (__int64)&qword_140019AC0;
  v10 = &unk_1400191A8;
  qword_140019AB8 = 0LL;
  do
  {
    v10[1] = v10;
    *v10 = v10;
    v10 += 2;
    --v9;
  }
  while ( v9 );
  GetRegistryDwordValue(
    (__int64)L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Processor",
    (__int64)L"AllowPepPerfStates",
    &v40);
  GetRegistryDwordValue(
    (__int64)L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Processor",
    (__int64)L"Overrides",
    &dword_140019180);
  GetRegistryQwordValue(v12, v11, &qword_140019178);
  GetRegistryDwordValue(
    (__int64)L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Processor",
    (__int64)L"DisableAsserts",
    &v38);
  if ( v38 )
    byte_140019818 = 1;
  GetRegistryDwordValue(
    (__int64)L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Session Manager\\Throttle",
    (__int64)L"PerfEnablePackageIdle",
    &v39);
  qword_1400196B8 = (__int64)RegisterKernelIdleStates;
  word_140019A91 = 0;
  qword_140019700 = (__int64)RegisterHiddenIdleStates;
  byte_140019708 = v39 == 0;
  dword_14001970C = 0;
  qword_1400196C0 = (__int64)RegisterKernelPerfStates;
  qword_1400196D0 = (__int64)RegisterKernelPerfFeedback;
  qword_1400196D8 = (__int64)RegisterKernelLegacyPcc;
  qword_1400196C8 = (__int64)RegisterKernelCap;
  qword_1400196E0 = (__int64)RegisterKernelCpc;
  qword_1400196E8 = (__int64)RegisterKernelPepPerf;
  qword_1400196F0 = (__int64)GetNtProcessorNumber;
  qword_1400196F8 = (__int64)RegisterKernelPackage;
  v37 = 0;
  HviGetHypervisorFeatures();
  v13 = 0;
  byte_140019710 = 0;
  v14 = 0;
  if ( HviIsAnyHypervisorPresent() )
  {
    v13 = (BYTE8(InputBuffer) & 0x20) != 0;
    LOBYTE(word_140019A91) = 1;
    HviGetEnlightenmentInformation();
    InputBuffer = 0LL;
    HviGetHypervisorFeatures();
    if ( (InputBuffer & 0x100000000000LL) != 0 && (v45 & 0x1000) == 0 )
    {
      GetHvPpmCapabilities(&v34, 0LL, v35);
      if ( v34 )
      {
        v3 = InitializeHvProcessorInfo();
        if ( (v3 & 0x80000000) != 0 )
          return v3;
        dword_14001970C = 1;
        qword_1400196C0 = (__int64)RegisterHvPerfStatesCounters;
        qword_140019700 = (__int64)RegisterHvIdleStates;
        qword_1400196D0 = (__int64)RegisterHvPerfFeedbackCounters;
        qword_1400196D8 = (__int64)RegisterHvLegacyPccCounters;
        qword_1400196E0 = (__int64)RegisterHvCpcCounters;
        if ( v35[0] )
          word_140019A91 = 256;
        else
          qword_1400196B8 = (__int64)RegisterHvIdleStates;
        byte_140019AD0 = 1;
        qword_1400196F0 = (__int64)GetLpIndex;
        qword_1400196F8 = (__int64)RegisterHvPackage;
      }
      dword_140019A88 = GetHiddenProcessorPresence();
      goto LABEL_58;
    }
    v14 = 1;
    qword_1400196B8 = (__int64)RegisterGuestIdleStates;
    if ( (v45 & 0x1000) != 0 )
    {
      GetHvPpmCapabilities(&v34, 0LL, v35);
      if ( v34 )
        qword_1400196D0 = (__int64)RegisterHvPerfFeedbackCounters;
    }
    GetRegistryDwordValue(
      (__int64)L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Processor",
      (__int64)L"AllowGuestPerfStates",
      &v37);
    if ( !v37 )
    {
      qword_1400196C0 = (__int64)RegisterNoop;
      qword_1400196D8 = (__int64)RegisterNoop;
      qword_1400196C8 = (__int64)RegisterNoop;
      qword_1400196E0 = (__int64)RegisterNoop;
      qword_1400196E8 = (__int64)RegisterNoop;
      if ( v13 )
      {
        byte_140019710 = 1;
      }
      else
      {
        qword_1400196D0 = (__int64)RegisterNoop;
        qword_1400196F8 = (__int64)RegisterNoop;
      }
    }
  }
  if ( (int)HalPrivateDispatchTable[143]((__int64)&v41) >= 0 )
  {
    v5 = v41;
    if ( (_DWORD)v41 != 1 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return (unsigned int)-1073741735;
      v6 = 19;
      v33 = 1;
      goto LABEL_7;
    }
    qword_140019550 = *((_QWORD *)&v41 + 1);
    xmmword_140019558 = v42;
    qword_140019568 = v43;
  }
  dword_140019A8C = dword_140019184 + HalPrivateDispatchTable[145](0xFFFFFFFFLL);
  dword_140019A88 = 2;
LABEL_58:
  WPP_MAIN_CB.Queue.ListEntry.Flink = (_LIST_ENTRY *)ExAllocatePool2(64LL, 0x4000LL, 1919119952LL);
  if ( WPP_MAIN_CB.Queue.ListEntry.Flink )
  {
    v2 = EtwRegister(
           &PPM_ETW_PROVIDER,
           (PETWENABLECALLBACK)ProcLibTraceControlCallback,
           0LL,
           (PREGHANDLE)&WPP_MAIN_CB.Queue.ListEntry.Blink);
    v3 = v2;
    if ( v2 < 0 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v4 = 21;
        goto LABEL_125;
      }
    }
    else
    {
      TraceLoggingRegisterEx_EtwRegister_EtwSetInformation((char *)&dword_140018C60);
      ProcLibEtwRegistered = 1;
      *((_QWORD *)&InputBuffer + 1) = 0LL;
      *(_QWORD *)&InputBuffer = ProcessSystemSleepStateNotify;
      v2 = ZwPowerInformation(SystemPowerStateNotifyHandler, &InputBuffer, (ULONG)16, 0LL, (ULONG)0);
      v3 = v2;
      if ( v2 >= 0 )
      {
        v2 = CollectAcpiBiosInfo(v16, v15, v17, v18);
        v3 = v2;
        if ( v2 >= 0 )
        {
          v36 = 1;
          EmClientQueryRuleState(&GUID_EM_RULE_DISABLE_PSTATES, &v36);
          v19 = v36 == 2;
          v36 = 1;
          v20 = 0;
          if ( v19 )
            v20 = 1879048192;
          EmClientQueryRuleState(&GUID_EM_RULE_DISABLE_ACPI1_CSTATE_C2, &v36);
          if ( v36 == 2 )
            v20 |= 2u;
          v36 = 1;
          EmClientQueryRuleState(&GUID_EM_RULE_DISABLE_TSTATES, &v36);
          if ( v36 == 2 )
            v20 |= 0x3300000u;
          v36 = 1;
          EmClientQueryRuleState(&GUID_EM_RULE_DISABLE_PCC, &v36);
          if ( v36 == 2 )
            v20 |= 0x80000000;
          v21 = v20;
          v22 = 0x180891100277LL;
          qword_140019178 = v20 | (unsigned __int64)qword_140019178;
          dword_140019724 = v20;
          dword_140019320 = 1;
          dword_140019324 = 376;
          if ( v40 )
            v22 = 0x181891500277LL;
          Globals[0] = v22 | 0x2010408800400LL;
          if ( (unsigned __int8)PoEnergyEstimationEnabled() )
          {
            v24 = dword_140019868;
            Globals[0] |= 0x2000000000uLL;
            for ( i = 0; i < 2u; ++i )
            {
              LOBYTE(v23) = i;
              PopulateEnergyEstimationModel(v23, v24);
              v24 += 64;
            }
          }
          *(_QWORD *)&v45 = 0LL;
          TraceLoggingRegisterEx_EtwRegister_EtwSetInformation((char *)&dword_140018C98);
          inited = InitDriver((__int64)&dword_140019320, &v45);
          v3 = inited;
          if ( inited >= 0 )
          {
            v27 = Globals[0] | v45;
            Globals[0] |= v45;
            if ( v14 )
            {
              qword_140019348 = 0LL;
              qword_140019360 = 0LL;
              qword_140019368 = 0LL;
              qword_140019370 = 0LL;
              qword_140019390 = 0LL;
              qword_140019378 = 0LL;
              qword_140019380 = 0LL;
              qword_1400193A0 = 0LL;
              qword_1400193A8 = 0LL;
              qword_1400193B0 = 0LL;
              byte_140019408 = 0;
              qword_140019410 = 0LL;
              qword_140019418 = 0LL;
              if ( !v13 )
                qword_140019398 = 0LL;
              v27 &= 0xFFFE5FFFFFFFFFFFuLL;
              Globals[0] = v27;
              if ( !v37 )
              {
                v27 &= ~0x800000000uLL;
                Globals[0] = v27;
              }
            }
            if ( dword_14001970C )
            {
              v27 &= ~0x200000000uLL;
              Globals[0] = v27;
            }
            if ( dword_14001970C != 1 )
              Globals[0] = v27 & 0xFFFFBFFFFFFFFFFFuLL;
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              v28 = "Disabled";
              if ( dword_14001970C )
                v28 = "Enabled";
              WPP_RECORDER_SF_s(
                (__int64)WPP_GLOBAL_Control->DeviceExtension,
                4u,
                2u,
                0x19u,
                (__int64)&WPP_4e1b20cf9f023c365f1b3d32753808d1_Traceguids,
                v28);
              if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              {
                if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
                {
                  LOBYTE(v29) = 5;
                  WPP_RECORDER_SF_(
                    WPP_GLOBAL_Control->DeviceExtension,
                    v29,
                    2,
                    26,
                    (__int64)&WPP_4e1b20cf9f023c365f1b3d32753808d1_Traceguids);
                }
                if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
                  && LOWORD(WPP_GLOBAL_Control->DeviceType) )
                {
                  LOBYTE(v29) = 5;
                  WPP_RECORDER_SF_(
                    WPP_GLOBAL_Control->DeviceExtension,
                    v29,
                    2,
                    27,
                    (__int64)&WPP_4e1b20cf9f023c365f1b3d32753808d1_Traceguids);
                }
              }
            }
            DisplayPPMFlags(Globals[0], 5u);
            if ( (v21 & Globals[0] & 0x7F077) != 0 )
              ProcLibTraceIdleStatesErrata(0);
            if ( (v21 & Globals[0] & 0x70000000) != 0 )
              ProcLibTracePerfStatesErrata(0);
            if ( (v21 & Globals[0] & 0x3300000) != 0 )
              ProcLibTraceThrottleStatesErrata(0);
            if ( (v21 & Globals[0] & 0x80000000LL) != 0 )
              ProcLibTracePccErrata(0);
            if ( qword_140019178 )
            {
              if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
                && LOWORD(WPP_GLOBAL_Control->DeviceType) )
              {
                LOBYTE(v30) = 5;
                WPP_RECORDER_SF_(
                  WPP_GLOBAL_Control->DeviceExtension,
                  v30,
                  2,
                  28,
                  (__int64)&WPP_4e1b20cf9f023c365f1b3d32753808d1_Traceguids);
              }
              DisplayPPMFlags(~qword_140019178, 5u);
              Globals[0] &= ~qword_140019178;
            }
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              LOBYTE(v30) = 4;
              WPP_RECORDER_SF_(
                WPP_GLOBAL_Control->DeviceExtension,
                v30,
                2,
                29,
                (__int64)&WPP_4e1b20cf9f023c365f1b3d32753808d1_Traceguids);
            }
            DisplayPPMFlags(Globals[0], 4u);
            if ( qword_140019360 && (dword_140019180 & 0x70000000) != 0 )
              qword_140019360 = 0LL;
            if ( _bittest64(Globals, 0x23u) )
              HwDebugInitializeRegistryDebugRegisters(0);
          }
          else
          {
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              WPP_RECORDER_SF_D(
                (__int64)WPP_GLOBAL_Control->DeviceExtension,
                2u,
                3u,
                0x18u,
                (__int64)&WPP_4e1b20cf9f023c365f1b3d32753808d1_Traceguids,
                inited);
            memset(&dword_140019320, 0, 0x178uLL);
          }
        }
        else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v4 = 23;
          goto LABEL_125;
        }
      }
      else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v4 = 22;
        goto LABEL_125;
      }
    }
  }
  else
  {
    v3 = -1073741670;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v4 = 20;
      v32 = -1073741670;
      v7 = 3;
LABEL_127:
      WPP_RECORDER_SF_D(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        v7,
        v4,
        (__int64)&WPP_4e1b20cf9f023c365f1b3d32753808d1_Traceguids,
        v32);
    }
  }
  return v3;
}
