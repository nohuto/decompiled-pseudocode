/*
 * XREFs of W32CalloutDispatch @ 0x1C00DE800
 * Callers:
 *     <none>
 * Callees:
 *     UserPowerInfoCallout @ 0x1C000FBD4 (UserPowerInfoCallout.c)
 *     UserPowerStateCallout @ 0x1C0010460 (UserPowerStateCallout.c)
 *     QueuePowerRequest @ 0x1C00108E0 (QueuePowerRequest.c)
 *     ??1CTempW32ThreadNonPaged@@QEAA@XZ @ 0x1C0037ECC (--1CTempW32ThreadNonPaged@@QEAA@XZ.c)
 *     GreIsCurrentProcessSystemCritical @ 0x1C0037FE8 (GreIsCurrentProcessSystemCritical.c)
 *     IsGreIsCurrentProcessSystemCriticalSupported @ 0x1C003800C (IsGreIsCurrentProcessSystemCriticalSupported.c)
 *     PrivateAPI::_anonymous_namespace_::IsValidGuiContext @ 0x1C0048218 (PrivateAPI--_anonymous_namespace_--IsValidGuiContext.c)
 *     PrivateAPI::_anonymous_namespace_::EnterCritInternal @ 0x1C0048330 (PrivateAPI--_anonymous_namespace_--EnterCritInternal.c)
 *     EnterSharedCrit @ 0x1C004CD30 (EnterSharedCrit.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C004CE30 (UserSessionSwitchLeaveCrit.c)
 *     HMUnlockObject @ 0x1C0056D70 (HMUnlockObject.c)
 *     UserGlobalAtomTableCallout @ 0x1C0059240 (UserGlobalAtomTableCallout.c)
 *     UserProcessThawCallout @ 0x1C00681D0 (UserProcessThawCallout.c)
 *     UserProcessFreezeCallout @ 0x1C0068894 (UserProcessFreezeCallout.c)
 *     CoreMsgObjectCallout @ 0x1C0069F44 (CoreMsgObjectCallout.c)
 *     RIMObjectManagerCallout @ 0x1C007254C (RIMObjectManagerCallout.c)
 *     ??0CTempW32ThreadNonPaged@@QEAA@XZ @ 0x1C008BA00 (--0CTempW32ThreadNonPaged@@QEAA@XZ.c)
 *     UserUnsafeIsProcessDwm @ 0x1C009B7F0 (UserUnsafeIsProcessDwm.c)
 *     ?Open@CompositionObject@@SAJPEAU_WIN32_OPENMETHOD_PARAMETERS@@@Z @ 0x1C009CB78 (-Open@CompositionObject@@SAJPEAU_WIN32_OPENMETHOD_PARAMETERS@@@Z.c)
 *     ParseWindowStation @ 0x1C00A0E80 (ParseWindowStation.c)
 *     ?OkToClose@CompositionObject@@SAJPEAU_WIN32_OKAYTOCLOSEMETHOD_PARAMETERS@@@Z @ 0x1C00A22D0 (-OkToClose@CompositionObject@@SAJPEAU_WIN32_OKAYTOCLOSEMETHOD_PARAMETERS@@@Z.c)
 *     UserJobCallout @ 0x1C00AD630 (UserJobCallout.c)
 *     ?ActivationObjectCallout@ForegroundManagement@@YAJW4_WIN32_CALLOUTS_OPERATION@@PEAX@Z @ 0x1C00BF9F4 (-ActivationObjectCallout@ForegroundManagement@@YAJW4_WIN32_CALLOUTS_OPERATION@@PEAX@Z.c)
 *     ?ReleaseAllWaiters@EnterLeaveCritMitRitHandOffHazard@@SAXXZ @ 0x1C00C4E70 (-ReleaseAllWaiters@EnterLeaveCritMitRitHandOffHazard@@SAXXZ.c)
 *     __security_check_cookie @ 0x1C00CDBD0 (__security_check_cookie.c)
 *     Win32WatchdogLiveKernelDumpCaptureInfo @ 0x1C00D0C84 (Win32WatchdogLiveKernelDumpCaptureInfo.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00D6660 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D6930 (_guard_dispatch_icall_nop.c)
 *     UserProcessTimerDelayCallout @ 0x1C012D52C (UserProcessTimerDelayCallout.c)
 *     UserProcessTimerStatisticsCallout @ 0x1C012D650 (UserProcessTimerStatisticsCallout.c)
 *     ?W32pQuerySubsystemProcess@@YAJPEAU_WIN32_SUBSYSTEM_PROCESS_QUERY_CALLOUT_PARAMETERS@@@Z @ 0x1C013208C (-W32pQuerySubsystemProcess@@YAJPEAU_WIN32_SUBSYSTEM_PROCESS_QUERY_CALLOUT_PARAMETERS@@@Z.c)
 */

__int64 __fastcall W32CalloutDispatch(__int64 a1, int a2, unsigned int *a3)
{
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  unsigned int v9; // ebx
  unsigned int SubsystemProcess; // eax
  int v11; // edi
  int v12; // edi
  int v13; // edi
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 (__fastcall *v18)(unsigned int *); // rax
  int v19; // edi
  int v20; // edi
  int v21; // edi
  int v22; // edi
  int v23; // edi
  int v24; // edi
  int v25; // edi
  int v26; // edi
  int v27; // edi
  int v28; // edi
  int v29; // edi
  __int64 v30; // rcx
  struct tagTHREADINFO *v31; // rax
  __int64 v32; // rcx
  __int64 v33; // rax
  __int64 *v34; // rdi
  int v35; // edi
  int v36; // edi
  int v37; // edi
  _BYTE v39[208]; // [rsp+40h] [rbp-F8h] BYREF

  CTempW32ThreadNonPaged::CTempW32ThreadNonPaged((CTempW32ThreadNonPaged *)v39);
  v9 = 0;
  if ( (int)IsGreIsCurrentProcessSystemCriticalSupported() >= 0
    && (unsigned int)GreIsCurrentProcessSystemCritical()
    && a2 )
  {
    if ( a2 != 1 )
    {
      v9 = -1073740004;
      goto LABEL_140;
    }
LABEL_7:
    if ( !qword_1C0295258 || (int)qword_1C0295258() < 0 )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 1037);
    if ( qword_1C0295260 )
    {
      SubsystemProcess = ((__int64 (__fastcall *)(_QWORD, _QWORD))qword_1C0295260)(*(_QWORD *)a3, a3[2]);
      goto LABEL_139;
    }
    goto LABEL_134;
  }
  if ( a2 == 1 )
    goto LABEL_7;
  if ( a2 > 23 )
  {
    if ( a2 > 35 )
    {
      if ( a2 > 41 )
      {
        v35 = a2 - 42;
        if ( !v35 )
        {
          SubsystemProcess = UserProcessTimerStatisticsCallout(a3);
          goto LABEL_139;
        }
        v36 = v35 - 1;
        if ( !v36 )
        {
          SubsystemProcess = Win32WatchdogLiveKernelDumpCaptureInfo((__int64)a3, v5, v7, v8);
          goto LABEL_139;
        }
        v37 = v36 - 1;
        if ( !v37 )
        {
          DxNotifyProcessFreezeCallout(a3);
          goto LABEL_140;
        }
        if ( v37 == 1 )
        {
          DxNotifyProcessThawCallout(a3);
          goto LABEL_140;
        }
        goto LABEL_134;
      }
      if ( a2 == 41 )
      {
        SubsystemProcess = UserProcessTimerDelayCallout(a3);
        goto LABEL_139;
      }
      if ( a2 != 36 )
      {
        if ( a2 == 37 || a2 == 38 || (unsigned int)(a2 - 39) <= 1 )
        {
          SubsystemProcess = ForegroundManagement::ActivationObjectCallout(
                               a2,
                               (struct _WIN32_OPENMETHOD_PARAMETERS *)a3);
          goto LABEL_139;
        }
        goto LABEL_134;
      }
    }
    else if ( a2 != 35 )
    {
      if ( a2 <= 29 )
      {
        if ( a2 != 29 )
        {
          switch ( a2 )
          {
            case 24:
              DxGetProcessInterferenceCount(*(_QWORD *)a3, *((_QWORD *)a3 + 1));
              goto LABEL_140;
            case 25:
              DxGetGpuUsageStatistics(a3);
              goto LABEL_140;
            case 26:
              SubsystemProcess = W32pQuerySubsystemProcess((struct _WIN32_SUBSYSTEM_PROCESS_QUERY_CALLOUT_PARAMETERS *)a3);
              goto LABEL_139;
          }
          if ( (unsigned int)(a2 - 27) > 1 )
            goto LABEL_134;
        }
LABEL_100:
        SubsystemProcess = RIMObjectManagerCallout(a2, (__int64)a3);
        goto LABEL_139;
      }
      switch ( a2 )
      {
        case 30:
          goto LABEL_100;
        case 31:
          if ( qword_1C0295A80 )
          {
            SubsystemProcess = qword_1C0295A80();
            goto LABEL_139;
          }
          goto LABEL_134;
        case 32:
          v31 = (struct tagTHREADINFO *)PrivateAPI::_anonymous_namespace_::EnterCritInternal(0LL, v5, v7, v8);
          gptiCurrent = v31;
          if ( v31 )
          {
            *((_DWORD *)v31 + 387) = 1;
            if ( PrivateAPI::_anonymous_namespace_::IsValidGuiContext(v32) )
            {
              while ( 1 )
              {
                v34 = (__int64 *)gpSharedUserCritDeferredUnlockListHead;
                if ( !gpSharedUserCritDeferredUnlockListHead )
                  break;
                gpSharedUserCritDeferredUnlockListHead = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)gpSharedUserCritDeferredUnlockListHead
                                                                                             + 2);
                v33 = *v34;
                v34[2] = 0LL;
                if ( !*(_DWORD *)(v33 + 8) )
                  MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 4237);
                HMUnlockObject(*v34);
              }
            }
          }
          if ( UserUnsafeIsProcessDwm((__int64)a3) && !gbNoMoreDITHitTest )
          {
            gbInMitRitHandOff = 0;
            EnterLeaveCritMitRitHandOffHazard::ReleaseAllWaiters();
            gbNoMoreDITHitTest = 1;
          }
          goto LABEL_119;
      }
      if ( (unsigned int)(a2 - 33) > 1 )
        goto LABEL_134;
    }
    SubsystemProcess = CoreMsgObjectCallout(a2, a3);
    goto LABEL_139;
  }
  if ( a2 == 23 )
  {
    SubsystemProcess = UserProcessThawCallout((__int64)a3, v5, v7, v8);
    goto LABEL_139;
  }
  if ( a2 > 12 )
  {
    if ( a2 > 18 )
    {
      v27 = a2 - 19;
      if ( !v27 )
      {
        SubsystemProcess = CompositionObject::OkToClose((struct _WIN32_OKAYTOCLOSEMETHOD_PARAMETERS *)a3);
        goto LABEL_139;
      }
      v28 = v27 - 1;
      if ( !v28 )
      {
        SubsystemProcess = (*(__int64 (__fastcall **)(_QWORD, unsigned int *))(**(_QWORD **)(*((_QWORD *)a3 + 1) + 8LL)
                                                                             + 40LL))(
                             *(_QWORD *)(*((_QWORD *)a3 + 1) + 8LL),
                             a3);
        goto LABEL_139;
      }
      v29 = v28 - 1;
      if ( v29 )
      {
        if ( v29 == 1 )
        {
          SubsystemProcess = UserProcessFreezeCallout((__int64)a3, v5, v7, v8);
          goto LABEL_139;
        }
        goto LABEL_134;
      }
      v30 = *(_QWORD *)(*(_QWORD *)a3 + 8LL);
      if ( !v30 )
        goto LABEL_140;
      SubsystemProcess = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v30 + 48LL))(v30, a3);
      goto LABEL_139;
    }
    if ( a2 == 18 )
    {
      SubsystemProcess = CompositionObject::Open((struct _WIN32_OPENMETHOD_PARAMETERS *)a3);
      goto LABEL_139;
    }
    v23 = a2 - 13;
    if ( v23 )
    {
      v24 = v23 - 1;
      if ( v24 )
      {
        v25 = v24 - 1;
        if ( !v25 )
        {
          SubsystemProcess = ParseWindowStation((__int64)a3);
          goto LABEL_139;
        }
        v26 = v25 - 1;
        if ( v26 )
        {
          if ( v26 == 1 )
            goto LABEL_140;
          goto LABEL_134;
        }
        if ( !qword_1C02953E8 || (int)qword_1C02953E8() < 0 )
        {
LABEL_134:
          v9 = -1073741637;
          goto LABEL_140;
        }
        v18 = (__int64 (__fastcall *)(unsigned int *))qword_1C02953F0;
      }
      else
      {
        if ( !qword_1C02953D8 || (int)qword_1C02953D8() < 0 )
          goto LABEL_134;
        v18 = (__int64 (__fastcall *)(unsigned int *))qword_1C02953E0;
      }
    }
    else
    {
      if ( !qword_1C02953C8 || (int)qword_1C02953C8() < 0 )
        goto LABEL_134;
      v18 = (__int64 (__fastcall *)(unsigned int *))qword_1C02953D0;
    }
    goto LABEL_45;
  }
  if ( a2 == 12 )
  {
    if ( !qword_1C0295330 || (int)qword_1C0295330() < 0 )
      goto LABEL_134;
    v18 = (__int64 (__fastcall *)(unsigned int *))qword_1C0295338;
    goto LABEL_45;
  }
  if ( a2 <= 6 )
  {
    if ( a2 == 6 )
    {
      if ( qword_1C0295268 && (int)qword_1C0295268() >= 0 )
      {
        SubsystemProcess = UserJobCallout();
        goto LABEL_139;
      }
      goto LABEL_134;
    }
    if ( a2 )
    {
      v11 = a2 - 2;
      if ( v11 )
      {
        v12 = v11 - 1;
        if ( v12 )
        {
          v13 = v12 - 1;
          if ( !v13 )
          {
            SubsystemProcess = UserPowerStateCallout((char *)a3);
            goto LABEL_139;
          }
          if ( v13 == 1 )
          {
            LOBYTE(v5) = *((_BYTE *)a3 + 4);
            SubsystemProcess = UserPowerInfoCallout(*a3, v5, a3[2], *((int **)a3 + 2), a3[6], *((_QWORD *)a3 + 4));
            goto LABEL_139;
          }
          goto LABEL_134;
        }
        if ( !*(_DWORD *)(SGDGetUserSessionState(v6, v5, v7, v8) + 2936) || !gbVideoInitialized )
        {
          v9 = -1073741823;
          goto LABEL_140;
        }
        SubsystemProcess = QueuePowerRequest(a3, 0);
LABEL_139:
        v9 = SubsystemProcess;
        goto LABEL_140;
      }
      EnterSharedCrit(v6, v5, v7, v8);
      *(_QWORD *)a3 = UserGlobalAtomTableCallout();
LABEL_119:
      UserSessionSwitchLeaveCrit(v15, v14, v16, v17);
      goto LABEL_140;
    }
    if ( !qword_1C0295248 || (int)qword_1C0295248() < 0 )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 1046);
    v18 = (__int64 (__fastcall *)(unsigned int *))qword_1C0295250;
LABEL_45:
    if ( v18 )
    {
      SubsystemProcess = v18(a3);
      goto LABEL_139;
    }
    goto LABEL_134;
  }
  v19 = a2 - 7;
  if ( v19 )
  {
    v20 = v19 - 1;
    if ( v20 )
    {
      v21 = v20 - 1;
      if ( v21 )
      {
        v22 = v21 - 1;
        if ( v22 )
        {
          if ( v22 != 1 || !qword_1C0295320 || (int)qword_1C0295320() < 0 )
            goto LABEL_134;
          v18 = (__int64 (__fastcall *)(unsigned int *))qword_1C0295328;
        }
        else
        {
          if ( !qword_1C0295310 || (int)qword_1C0295310() < 0 )
            goto LABEL_134;
          v18 = (__int64 (__fastcall *)(unsigned int *))qword_1C0295318;
        }
      }
      else
      {
        if ( !qword_1C0295300 || (int)qword_1C0295300() < 0 )
          goto LABEL_134;
        v18 = (__int64 (__fastcall *)(unsigned int *))qword_1C0295308;
      }
    }
    else
    {
      if ( !qword_1C02952F0 || (int)qword_1C02952F0() < 0 )
        goto LABEL_134;
      v18 = (__int64 (__fastcall *)(unsigned int *))qword_1C02952F8;
    }
    goto LABEL_45;
  }
  if ( qword_1C0294E58 && (int)qword_1C0294E58() >= 0 && qword_1C0294E60 )
    qword_1C0294E60();
LABEL_140:
  CTempW32ThreadNonPaged::~CTempW32ThreadNonPaged((CTempW32ThreadNonPaged *)v39);
  return v9;
}
