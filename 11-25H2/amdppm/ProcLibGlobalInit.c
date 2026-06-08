/*
 * XREFs of ProcLibGlobalInit @ 0x140043530
 * Callers:
 *     DriverEntry @ 0x14004214C (DriverEntry.c)
 * Callees:
 *     WPP_RECORDER_SF_DD @ 0x140003618 (WPP_RECORDER_SF_DD.c)
 *     WPP_RECORDER_SF_d @ 0x140003B54 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ @ 0x140003C68 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_s @ 0x140005728 (WPP_RECORDER_SF_s.c)
 *     HviGetEnlightenmentInformation @ 0x14000D488 (HviGetEnlightenmentInformation.c)
 *     HviGetHypervisorFeatures @ 0x14000D4C8 (HviGetHypervisorFeatures.c)
 *     HviIsAnyHypervisorPresent @ 0x14000D508 (HviIsAnyHypervisorPresent.c)
 *     __security_check_cookie @ 0x14000D660 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14000D700 (_guard_dispatch_icall.c)
 *     memset @ 0x14000DAC0 (memset.c)
 *     InitDriver @ 0x140022E14 (InitDriver.c)
 *     GetRegistryDwordValue @ 0x140023214 (GetRegistryDwordValue.c)
 *     GetRegistryQwordValue @ 0x1400232B8 (GetRegistryQwordValue.c)
 *     ProcLibTraceIdleStatesErrata @ 0x14002346C (ProcLibTraceIdleStatesErrata.c)
 *     ProcLibTracePccErrata @ 0x1400234EC (ProcLibTracePccErrata.c)
 *     ProcLibTracePerfStatesErrata @ 0x140023740 (ProcLibTracePerfStatesErrata.c)
 *     ProcLibTraceThrottleStatesErrata @ 0x14002376C (ProcLibTraceThrottleStatesErrata.c)
 *     TraceLoggingRegisterEx_EtwRegister_EtwSetInformation @ 0x140023798 (TraceLoggingRegisterEx_EtwRegister_EtwSetInformation.c)
 *     GetHiddenProcessorPresence @ 0x140025958 (GetHiddenProcessorPresence.c)
 *     GetHvPpmCapabilities @ 0x140025A00 (GetHvPpmCapabilities.c)
 *     HwDebugInitializeRegistryDebugRegisters @ 0x140039B38 (HwDebugInitializeRegistryDebugRegisters.c)
 *     InitializeHvProcessorInfo @ 0x1400424D4 (InitializeHvProcessorInfo.c)
 *     CollectAcpiBiosInfo @ 0x140042610 (CollectAcpiBiosInfo.c)
 *     DisplayPPMFlags @ 0x140042778 (DisplayPPMFlags.c)
 *     PopulateEnergyEstimationModel @ 0x1400442A8 (PopulateEnergyEstimationModel.c)
 */

__int64 __fastcall ProcLibGlobalInit(PDEVICE_OBJECT DeviceObject)
{
  int v2; // eax
  __int64 v3; // rdx
  unsigned int v4; // edi
  int v5; // r9d
  int v6; // eax
  unsigned __int16 v7; // r9
  int v8; // r8d
  struct _IO_WORKITEM *WorkItem; // rax
  __int64 v10; // rcx
  _QWORD *v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  bool v14; // si
  char v15; // r15
  ULONG v16; // ecx
  const CHAR *v17; // r8
  const CHAR *v18; // r9
  bool v19; // zf
  unsigned int v20; // ebx
  __int64 v21; // r14
  __int64 v22; // rax
  __int64 v23; // rcx
  char *v24; // rdi
  unsigned __int8 i; // bl
  int inited; // eax
  int v27; // edx
  __int64 v28; // rax
  const char *v29; // rax
  int v30; // edx
  int v31; // edx
  int v33; // [rsp+30h] [rbp-51h]
  int v34; // [rsp+38h] [rbp-49h]
  bool v35; // [rsp+48h] [rbp-39h] BYREF
  bool v36[3]; // [rsp+49h] [rbp-38h] BYREF
  int v37; // [rsp+4Ch] [rbp-35h] BYREF
  int v38; // [rsp+50h] [rbp-31h] BYREF
  int v39; // [rsp+54h] [rbp-2Dh] BYREF
  int v40; // [rsp+58h] [rbp-29h] BYREF
  int v41; // [rsp+5Ch] [rbp-25h] BYREF
  __int128 v42; // [rsp+60h] [rbp-21h] BYREF
  __int128 v43; // [rsp+70h] [rbp-11h]
  __int64 v44; // [rsp+80h] [rbp-1h]
  __int128 InputBuffer; // [rsp+88h] [rbp+7h] BYREF
  __int128 v46; // [rsp+98h] [rbp+17h] BYREF

  v41 = 0;
  v39 = 0;
  v40 = 0;
  v36[0] = 0;
  v35 = 0;
  LODWORD(v44) = 0;
  InputBuffer = 0LL;
  v46 = 0LL;
  v42 = 0LL;
  v43 = 0LL;
  v2 = ZwPowerInformation(ProcessorStateHandler, 0LL, (ULONG)0, &dword_1400148B8, (ULONG)280);
  v4 = v2;
  if ( v2 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v5 = 10;
LABEL_125:
      v8 = 3;
      goto LABEL_126;
    }
    return v4;
  }
  v6 = dword_1400148B8;
  if ( dword_1400148B8 != 82 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return (unsigned int)-1073741735;
    v7 = 11;
    v34 = 82;
LABEL_7:
    WPP_RECORDER_SF_DD(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      2u,
      3u,
      v7,
      (__int64)&WPP_4e1b20cf9f023c365f1b3d32753808d1_Traceguids,
      v6,
      v34);
    return (unsigned int)-1073741735;
  }
  v2 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64 *))(WdfFunctions_01015 + 2496))(
         WdfDriverGlobals,
         0LL,
         &qword_1400145A8);
  v4 = v2;
  if ( v2 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return v4;
    v5 = 12;
LABEL_12:
    v8 = 4;
LABEL_126:
    v33 = v2;
    goto LABEL_127;
  }
  v2 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64 *))(WdfFunctions_01015 + 2496))(
         WdfDriverGlobals,
         0LL,
         &qword_1400145B8);
  v4 = v2;
  if ( v2 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return v4;
    v5 = 13;
    goto LABEL_12;
  }
  v2 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64 *))(WdfFunctions_01015 + 2496))(
         WdfDriverGlobals,
         0LL,
         &qword_1400145B0);
  v4 = v2;
  if ( v2 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return v4;
    v5 = 14;
    goto LABEL_12;
  }
  v2 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64 *))(WdfFunctions_01015 + 2496))(
         WdfDriverGlobals,
         0LL,
         &qword_140014BE8);
  v4 = v2;
  if ( v2 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return v4;
    v5 = 15;
    goto LABEL_12;
  }
  v2 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64 *))(WdfFunctions_01015 + 2496))(
         WdfDriverGlobals,
         0LL,
         &qword_1400145C0);
  v4 = v2;
  if ( v2 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return v4;
    v5 = 16;
    goto LABEL_12;
  }
  v2 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64 *))(WdfFunctions_01015 + 2520))(
         WdfDriverGlobals,
         0LL,
         &qword_140014C08);
  v4 = v2;
  if ( v2 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return v4;
    v5 = 17;
    goto LABEL_12;
  }
  v2 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64 *))(WdfFunctions_01015 + 2520))(
         WdfDriverGlobals,
         0LL,
         &qword_140014BE0);
  v4 = v2;
  if ( v2 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return v4;
    v5 = 18;
    goto LABEL_12;
  }
  KeInitializeEvent(&Event, NotificationEvent, 1u);
  WorkItem = IoAllocateWorkItem(DeviceObject);
  word_140014C1C = 0;
  v10 = 2LL;
  qword_140014C10 = WorkItem;
  qword_1400145F0 = (__int64)&qword_1400145E8;
  qword_1400145E8 = (__int64)&qword_1400145E8;
  qword_140014600 = (__int64)&qword_1400145F8;
  qword_1400145F8 = (__int64)&qword_1400145F8;
  qword_140014610 = (__int64)&qword_140014608;
  qword_140014608 = (__int64)&qword_140014608;
  qword_140014620 = (__int64)&qword_140014618;
  qword_140014618 = (__int64)&qword_140014618;
  qword_140014630 = (__int64)&qword_140014628;
  qword_140014628 = (__int64)&qword_140014628;
  qword_140014BF8 = (__int64)&qword_140014BF0;
  qword_140014BF0 = (__int64)&qword_140014BF0;
  qword_140014EE8 = (__int64)&qword_140014EE0;
  qword_140014EE0 = (__int64)&qword_140014EE0;
  v11 = &unk_1400145C8;
  qword_140014ED8 = 0LL;
  do
  {
    v11[1] = v11;
    *v11 = v11;
    v11 += 2;
    --v10;
  }
  while ( v10 );
  GetRegistryDwordValue(
    (__int64)L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Processor",
    (__int64)L"AllowPepPerfStates",
    &v41);
  GetRegistryDwordValue(
    (__int64)L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Processor",
    (__int64)L"Overrides",
    &dword_1400145A0);
  GetRegistryQwordValue(v13, v12, &qword_140014598);
  GetRegistryDwordValue(
    (__int64)L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Processor",
    (__int64)L"DisableAsserts",
    &v39);
  if ( v39 )
    byte_140014C38 = 1;
  GetRegistryDwordValue(
    (__int64)L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Session Manager\\Throttle",
    (__int64)L"PerfEnablePackageIdle",
    &v40);
  qword_140014AD8 = (__int64)RegisterKernelIdleStates;
  word_140014EB1 = 0;
  qword_140014B20 = (__int64)RegisterHiddenIdleStates;
  byte_140014B28 = v40 == 0;
  dword_140014B2C = 0;
  qword_140014AE0 = (__int64)RegisterKernelPerfStates;
  qword_140014AF0 = (__int64)RegisterKernelPerfFeedback;
  qword_140014AF8 = (__int64)RegisterKernelLegacyPcc;
  qword_140014AE8 = (__int64)RegisterKernelCap;
  qword_140014B00 = (__int64)RegisterKernelCpc;
  qword_140014B08 = (__int64)RegisterKernelPepPerf;
  qword_140014B10 = (__int64)GetNtProcessorNumber;
  qword_140014B18 = (__int64)RegisterKernelPackage;
  v38 = 0;
  HviGetHypervisorFeatures();
  v14 = 0;
  byte_140014B30 = 0;
  v15 = 0;
  if ( HviIsAnyHypervisorPresent() )
  {
    v14 = (BYTE8(InputBuffer) & 0x20) != 0;
    LOBYTE(word_140014EB1) = 1;
    HviGetEnlightenmentInformation();
    InputBuffer = 0LL;
    HviGetHypervisorFeatures();
    if ( (InputBuffer & 0x100000000000LL) != 0 && (v46 & 0x1000) == 0 )
    {
      GetHvPpmCapabilities(&v35, 0LL, v36);
      if ( v35 )
      {
        v4 = InitializeHvProcessorInfo();
        if ( (v4 & 0x80000000) != 0 )
          return v4;
        dword_140014B2C = 1;
        qword_140014AE0 = (__int64)RegisterHvPerfStatesCounters;
        qword_140014B20 = (__int64)RegisterHvIdleStates;
        qword_140014AF0 = (__int64)RegisterHvPerfFeedbackCounters;
        qword_140014AF8 = (__int64)RegisterHvLegacyPccCounters;
        qword_140014B00 = (__int64)RegisterHvCpcCounters;
        if ( v36[0] )
          word_140014EB1 = 256;
        else
          qword_140014AD8 = (__int64)RegisterHvIdleStates;
        byte_140014EF0 = 1;
        qword_140014B10 = (__int64)GetLpIndex;
        qword_140014B18 = (__int64)RegisterHvPackage;
      }
      dword_140014EA8 = GetHiddenProcessorPresence();
      goto LABEL_58;
    }
    v15 = 1;
    qword_140014AD8 = (__int64)RegisterGuestIdleStates;
    if ( (v46 & 0x1000) != 0 )
    {
      GetHvPpmCapabilities(&v35, 0LL, v36);
      if ( v35 )
        qword_140014AF0 = (__int64)RegisterHvPerfFeedbackCounters;
    }
    GetRegistryDwordValue(
      (__int64)L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Processor",
      (__int64)L"AllowGuestPerfStates",
      &v38);
    if ( !v38 )
    {
      qword_140014AE0 = (__int64)RegisterNoop;
      qword_140014AF8 = (__int64)RegisterNoop;
      qword_140014AE8 = (__int64)RegisterNoop;
      qword_140014B00 = (__int64)RegisterNoop;
      qword_140014B08 = (__int64)RegisterNoop;
      if ( v14 )
      {
        byte_140014B30 = 1;
      }
      else
      {
        qword_140014AF0 = (__int64)RegisterNoop;
        qword_140014B18 = (__int64)RegisterNoop;
      }
    }
  }
  if ( (int)HalPrivateDispatchTable[143]((__int64)&v42) >= 0 )
  {
    v6 = v42;
    if ( (_DWORD)v42 != 1 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return (unsigned int)-1073741735;
      v7 = 19;
      v34 = 1;
      goto LABEL_7;
    }
    qword_140014970 = *((_QWORD *)&v42 + 1);
    xmmword_140014978 = v43;
    qword_140014988 = v44;
  }
  dword_140014EAC = dword_1400145A4 + HalPrivateDispatchTable[145](0xFFFFFFFFLL);
  dword_140014EA8 = 2;
LABEL_58:
  WPP_MAIN_CB.Queue.ListEntry.Blink = (_LIST_ENTRY *)ExAllocatePool2(64LL, 0x4000LL, 1919119952LL);
  if ( WPP_MAIN_CB.Queue.ListEntry.Blink )
  {
    v2 = EtwRegister(
           &PPM_ETW_PROVIDER,
           (PETWENABLECALLBACK)ProcLibTraceControlCallback,
           0LL,
           (PREGHANDLE)&WPP_MAIN_CB.Queue);
    v4 = v2;
    if ( v2 < 0 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v5 = 21;
        goto LABEL_125;
      }
    }
    else
    {
      TraceLoggingRegisterEx_EtwRegister_EtwSetInformation((char *)&dword_1400140F8);
      ProcLibEtwRegistered = 1;
      *((_QWORD *)&InputBuffer + 1) = 0LL;
      *(_QWORD *)&InputBuffer = ProcessSystemSleepStateNotify;
      v2 = ZwPowerInformation(SystemPowerStateNotifyHandler, &InputBuffer, (ULONG)16, 0LL, (ULONG)0);
      v4 = v2;
      if ( v2 >= 0 )
      {
        v2 = CollectAcpiBiosInfo(v16, v3, v17, v18);
        v4 = v2;
        if ( v2 >= 0 )
        {
          v37 = 1;
          EmClientQueryRuleState(&GUID_EM_RULE_DISABLE_PSTATES, &v37);
          v19 = v37 == 2;
          v37 = 1;
          v20 = 0;
          if ( v19 )
            v20 = 1879048192;
          EmClientQueryRuleState(&GUID_EM_RULE_DISABLE_ACPI1_CSTATE_C2, &v37);
          if ( v37 == 2 )
            v20 |= 2u;
          v37 = 1;
          EmClientQueryRuleState(&GUID_EM_RULE_DISABLE_TSTATES, &v37);
          if ( v37 == 2 )
            v20 |= 0x3300000u;
          v37 = 1;
          EmClientQueryRuleState(&GUID_EM_RULE_DISABLE_PCC, &v37);
          if ( v37 == 2 )
            v20 |= 0x80000000;
          v21 = v20;
          v22 = 0x180891100277LL;
          qword_140014598 = v20 | (unsigned __int64)qword_140014598;
          dword_140014B44 = v20;
          dword_140014740 = 1;
          dword_140014744 = 376;
          if ( v41 )
            v22 = 0x181891500277LL;
          Globals[0] = v22 | 0x2010408800400LL;
          if ( (unsigned __int8)PoEnergyEstimationEnabled() )
          {
            v24 = (char *)&unk_140014C88;
            Globals[0] |= 0x2000000000uLL;
            for ( i = 0; i < 2u; ++i )
            {
              LOBYTE(v23) = i;
              PopulateEnergyEstimationModel(v23, v24);
              v24 += 256;
            }
          }
          *(_QWORD *)&v46 = 0LL;
          TraceLoggingRegisterEx_EtwRegister_EtwSetInformation((char *)&dword_140014130);
          inited = InitDriver((__int64)&dword_140014740, &v46);
          v4 = inited;
          if ( inited >= 0 )
          {
            v28 = Globals[0] | v46;
            Globals[0] |= v46;
            if ( v15 )
            {
              qword_140014768 = 0LL;
              qword_140014780 = 0LL;
              qword_140014788 = 0LL;
              qword_140014790 = 0LL;
              qword_1400147B0 = 0LL;
              qword_140014798 = 0LL;
              qword_1400147A0 = 0LL;
              qword_1400147C0 = 0LL;
              qword_1400147C8 = 0LL;
              qword_1400147D0 = 0LL;
              byte_140014828 = 0;
              qword_140014830 = 0LL;
              qword_140014838 = 0LL;
              if ( !v14 )
                qword_1400147B8 = 0LL;
              v28 &= 0xFFFE5FFFFFFFFFFFuLL;
              Globals[0] = v28;
              if ( !v38 )
              {
                v28 &= ~0x800000000uLL;
                Globals[0] = v28;
              }
            }
            if ( dword_140014B2C )
            {
              v28 &= ~0x200000000uLL;
              Globals[0] = v28;
            }
            if ( dword_140014B2C != 1 )
              Globals[0] = v28 & 0xFFFFBFFFFFFFFFFFuLL;
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              v29 = "Disabled";
              if ( dword_140014B2C )
                v29 = "Enabled";
              WPP_RECORDER_SF_s(
                (__int64)WPP_GLOBAL_Control->DeviceExtension,
                4u,
                2u,
                0x19u,
                (__int64)&WPP_4e1b20cf9f023c365f1b3d32753808d1_Traceguids,
                v29);
              if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              {
                if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
                {
                  LOBYTE(v30) = 5;
                  WPP_RECORDER_SF_(
                    WPP_GLOBAL_Control->DeviceExtension,
                    v30,
                    2,
                    26,
                    (__int64)&WPP_4e1b20cf9f023c365f1b3d32753808d1_Traceguids);
                }
                if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
                  && LOWORD(WPP_GLOBAL_Control->DeviceType) )
                {
                  LOBYTE(v30) = 5;
                  WPP_RECORDER_SF_(
                    WPP_GLOBAL_Control->DeviceExtension,
                    v30,
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
            if ( qword_140014598 )
            {
              if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
                && LOWORD(WPP_GLOBAL_Control->DeviceType) )
              {
                LOBYTE(v31) = 5;
                WPP_RECORDER_SF_(
                  WPP_GLOBAL_Control->DeviceExtension,
                  v31,
                  2,
                  28,
                  (__int64)&WPP_4e1b20cf9f023c365f1b3d32753808d1_Traceguids);
              }
              DisplayPPMFlags(~qword_140014598, 5u);
              Globals[0] &= ~qword_140014598;
            }
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              LOBYTE(v31) = 4;
              WPP_RECORDER_SF_(
                WPP_GLOBAL_Control->DeviceExtension,
                v31,
                2,
                29,
                (__int64)&WPP_4e1b20cf9f023c365f1b3d32753808d1_Traceguids);
            }
            DisplayPPMFlags(Globals[0], 4u);
            if ( qword_140014780 && (dword_1400145A0 & 0x70000000) != 0 )
              qword_140014780 = 0LL;
            if ( _bittest64(Globals, 0x23u) )
              HwDebugInitializeRegistryDebugRegisters(0);
          }
          else
          {
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              LOBYTE(v27) = 2;
              WPP_RECORDER_SF_d(
                WPP_GLOBAL_Control->DeviceExtension,
                v27,
                3,
                24,
                (__int64)&WPP_4e1b20cf9f023c365f1b3d32753808d1_Traceguids,
                inited);
            }
            memset(&dword_140014740, 0, 0x178uLL);
          }
        }
        else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v5 = 23;
          goto LABEL_125;
        }
      }
      else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v5 = 22;
        goto LABEL_125;
      }
    }
  }
  else
  {
    v4 = -1073741670;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v5 = 20;
      v33 = -1073741670;
      v8 = 3;
LABEL_127:
      LOBYTE(v3) = 2;
      WPP_RECORDER_SF_d(
        WPP_GLOBAL_Control->DeviceExtension,
        v3,
        v8,
        v5,
        (__int64)&WPP_4e1b20cf9f023c365f1b3d32753808d1_Traceguids,
        v33);
    }
  }
  return v4;
}
