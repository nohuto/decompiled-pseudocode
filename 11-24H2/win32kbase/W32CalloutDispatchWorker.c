/*
 * XREFs of W32CalloutDispatchWorker @ 0x1400DAD6C
 * Callers:
 *     W32CalloutDispatch @ 0x1400DAD50 (W32CalloutDispatch.c)
 * Callees:
 *     EnterSharedCrit @ 0x140010CB0 (EnterSharedCrit.c)
 *     UserSessionSwitchLeaveCritWithNonPaged @ 0x140023070 (UserSessionSwitchLeaveCritWithNonPaged.c)
 *     IsGreIsCurrentProcessSystemCriticalSupported @ 0x14005907C (IsGreIsCurrentProcessSystemCriticalSupported.c)
 *     GreIsCurrentProcessSystemCritical @ 0x140059274 (GreIsCurrentProcessSystemCritical.c)
 *     ??1CTempW32ThreadNonPaged@@QEAA@XZ @ 0x14005A930 (--1CTempW32ThreadNonPaged@@QEAA@XZ.c)
 *     ??0CTempW32ThreadNonPaged@@QEAA@XZ @ 0x14005AAB0 (--0CTempW32ThreadNonPaged@@QEAA@XZ.c)
 *     DestroyDeferredUnlockObjectAssignmentList @ 0x1400A42D0 (DestroyDeferredUnlockObjectAssignmentList.c)
 *     UserUnsafeIsProcessDwm @ 0x1400CFCD0 (UserUnsafeIsProcessDwm.c)
 *     ?Open@CompositionObject@@SAJPEAU_WIN32_OPENMETHOD_PARAMETERS@@@Z @ 0x1400E9538 (-Open@CompositionObject@@SAJPEAU_WIN32_OPENMETHOD_PARAMETERS@@@Z.c)
 *     UserPowerEventCallout @ 0x1400E961C (UserPowerEventCallout.c)
 *     ?OkToClose@CompositionObject@@SAJPEAU_WIN32_OKAYTOCLOSEMETHOD_PARAMETERS@@@Z @ 0x1400ED2B0 (-OkToClose@CompositionObject@@SAJPEAU_WIN32_OKAYTOCLOSEMETHOD_PARAMETERS@@@Z.c)
 *     CoreMsgObjectCallout @ 0x1400FCD24 (CoreMsgObjectCallout.c)
 *     W32pThreadCallout @ 0x140104214 (W32pThreadCallout.c)
 *     ParseWindowStation @ 0x140106C90 (ParseWindowStation.c)
 *     RIMObjectManagerCallout @ 0x140116F54 (RIMObjectManagerCallout.c)
 *     UserJobCallout @ 0x14011FD28 (UserJobCallout.c)
 *     ?W32pQuerySubsystemProcess@@YAJPEAU_WIN32_SUBSYSTEM_PROCESS_QUERY_CALLOUT_PARAMETERS@@@Z @ 0x14015ABB0 (-W32pQuerySubsystemProcess@@YAJPEAU_WIN32_SUBSYSTEM_PROCESS_QUERY_CALLOUT_PARAMETERS@@@Z.c)
 *     UserGlobalAtomTableCallout @ 0x140166C60 (UserGlobalAtomTableCallout.c)
 *     DestroySharedUserCritDeferredUnlockList @ 0x14016ABF4 (DestroySharedUserCritDeferredUnlockList.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019C14C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?vReleaseDwmHitTestWaiters@@YAXXZ @ 0x14019F27C (-vReleaseDwmHitTestWaiters@@YAXXZ.c)
 *     Feature_EliminateMitRitHandoff2__private_IsEnabledDeviceUsageNoInline @ 0x1401A3C28 (Feature_EliminateMitRitHandoff2__private_IsEnabledDeviceUsageNoInline.c)
 *     UserProcessTimerDelayCallout @ 0x1401A406C (UserProcessTimerDelayCallout.c)
 *     UserProcessTimerStatisticsCallout @ 0x1401A41E0 (UserProcessTimerStatisticsCallout.c)
 *     ?ActivationObjectDelete@@YAJPEAU_WIN32_DELETEMETHOD_PARAMETERS@@@Z @ 0x1401A69D8 (-ActivationObjectDelete@@YAJPEAU_WIN32_DELETEMETHOD_PARAMETERS@@@Z.c)
 *     ?ActivationObjectOkToClose@@YAJPEAU_WIN32_OKAYTOCLOSEMETHOD_PARAMETERS@@@Z @ 0x1401A6A24 (-ActivationObjectOkToClose@@YAJPEAU_WIN32_OKAYTOCLOSEMETHOD_PARAMETERS@@@Z.c)
 *     ?ActivationObjectOpen@@YAJPEAU_WIN32_OPENMETHOD_PARAMETERS@@@Z @ 0x1401A6AA4 (-ActivationObjectOpen@@YAJPEAU_WIN32_OPENMETHOD_PARAMETERS@@@Z.c)
 *     UserCritInternal::_anonymous_namespace_::EnterCritInternal @ 0x1401A8FE8 (UserCritInternal--_anonymous_namespace_--EnterCritInternal.c)
 *     UserCritInternal::_anonymous_namespace_::IsValidGuiContext @ 0x1401A9084 (UserCritInternal--_anonymous_namespace_--IsValidGuiContext.c)
 *     UserPowerInfoCallout @ 0x1401AEF84 (UserPowerInfoCallout.c)
 *     UserPowerStateCallout @ 0x1401B0310 (UserPowerStateCallout.c)
 *     IsModerncoreAtomTableSupported @ 0x14023B4A8 (IsModerncoreAtomTableSupported.c)
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall W32CalloutDispatchWorker(int a1, __int64 a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  unsigned int v6; // edi
  int (*v7)(void); // rax
  int SubsystemProcess; // eax
  int v9; // ebx
  int v10; // ebx
  int v11; // ebx
  int (*v12)(void); // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 (__fastcall *v15)(__int64); // rax
  int v16; // ebx
  int v17; // ebx
  int v18; // ebx
  int (*v19)(void); // rax
  __int64 v20; // rdx
  __int64 v21; // rcx
  int (*v22)(void); // rax
  __int64 v23; // rdx
  __int64 v24; // rcx
  int (*v25)(void); // rax
  __int64 v26; // rdx
  __int64 v27; // rcx
  int (*v28)(void); // rax
  __int64 v29; // rdx
  __int64 v30; // rcx
  void (*v31)(void); // rax
  int (*v32)(void); // rax
  __int64 v33; // rdx
  __int64 v34; // rcx
  int v35; // ebx
  int v36; // ebx
  int v37; // ebx
  int v38; // ebx
  int v39; // ebx
  int v40; // ebx
  int v41; // ebx
  int v42; // ebx
  __int64 v43; // rcx
  int (*v44)(void); // rax
  __int64 v45; // rdx
  __int64 v46; // rcx
  int (*v47)(void); // rax
  __int64 v48; // rdx
  __int64 v49; // rcx
  int (*v50)(void); // rax
  __int64 v51; // rdx
  __int64 v52; // rcx
  int (*v53)(void); // rax
  __int64 v54; // rdx
  __int64 v55; // rcx
  unsigned int v56; // ebx
  _QWORD *UserSessionState; // rbx
  __int64 v59; // rax
  __int64 v60; // rcx
  __int64 CurrentThreadWin32Thread; // rbx
  __int64 v62; // rcx
  __int64 v63; // rax
  __int64 v64; // r8
  __int64 v65; // rbx
  __int64 v66; // rcx
  __int64 v67; // rax
  __int64 (*v68)(void); // rax
  int v69; // ebx
  int v70; // ebx
  int v71; // ebx
  _BYTE v72[256]; // [rsp+30h] [rbp-108h] BYREF

  CTempW32ThreadNonPaged::CTempW32ThreadNonPaged((CTempW32ThreadNonPaged *)v72);
  v6 = 0;
  if ( (int)IsGreIsCurrentProcessSystemCriticalSupported() < 0
    || !(unsigned int)GreIsCurrentProcessSystemCritical()
    || !a1 )
  {
    if ( a1 == 1 )
    {
LABEL_7:
      v7 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v5, v4) + 48) + 584LL);
      if ( !v7 || v7() < 0 )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1056LL);
      SubsystemProcess = W32pThreadCallout(*(_QWORD *)(a2 + 16), *(unsigned int *)(a2 + 24));
      goto LABEL_133;
    }
    if ( a1 <= 24 )
    {
      if ( a1 == 24 )
      {
        DxGetProcessInterferenceCount(*(_QWORD *)(a2 + 16), *(_QWORD *)(a2 + 24));
        goto LABEL_134;
      }
      if ( a1 > 11 )
      {
        v35 = a1 - 12;
        if ( !v35 )
        {
          v53 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v5, v4) + 48) + 824LL);
          if ( !v53 || v53() < 0 )
            goto LABEL_33;
          v15 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v55, v54) + 48) + 832LL);
          goto LABEL_31;
        }
        v36 = v35 - 1;
        if ( !v36 )
        {
          v50 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v5, v4) + 48) + 976LL);
          if ( !v50 || v50() < 0 )
            goto LABEL_33;
          v15 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v52, v51) + 48) + 984LL);
          goto LABEL_31;
        }
        v37 = v36 - 1;
        if ( !v37 )
        {
          v47 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v5, v4) + 48) + 992LL);
          if ( !v47 || v47() < 0 )
            goto LABEL_33;
          v15 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v49, v48) + 48) + 1000LL);
          goto LABEL_31;
        }
        v38 = v37 - 1;
        if ( !v38 )
        {
          SubsystemProcess = ParseWindowStation(a2);
          goto LABEL_133;
        }
        v39 = v38 - 1;
        if ( !v39 )
        {
          v44 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v5, v4) + 48) + 1008LL);
          if ( !v44 || v44() < 0 )
            goto LABEL_33;
          v15 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v46, v45) + 48) + 1016LL);
          goto LABEL_31;
        }
        v40 = v39 - 2;
        if ( !v40 )
        {
          SubsystemProcess = CompositionObject::Open((struct _WIN32_OPENMETHOD_PARAMETERS *)a2);
          goto LABEL_133;
        }
        v41 = v40 - 1;
        if ( !v41 )
        {
          SubsystemProcess = CompositionObject::OkToClose((struct _WIN32_OKAYTOCLOSEMETHOD_PARAMETERS *)a2);
          goto LABEL_133;
        }
        v42 = v41 - 1;
        if ( !v42 )
        {
          SubsystemProcess = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(*(_QWORD *)(a2 + 24) + 8LL)
                                                                        + 40LL))(
                               *(_QWORD *)(*(_QWORD *)(a2 + 24) + 8LL),
                               a2);
          goto LABEL_133;
        }
        if ( v42 != 1 )
          goto LABEL_120;
        v43 = *(_QWORD *)(*(_QWORD *)(a2 + 16) + 8LL);
        if ( !v43 )
          goto LABEL_134;
        SubsystemProcess = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v43 + 48LL))(v43, a2);
      }
      else
      {
        if ( a1 == 11 )
        {
          v32 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v5, v4) + 48) + 808LL);
          if ( !v32 || v32() < 0 )
            goto LABEL_33;
          v15 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v34, v33) + 48) + 816LL);
          goto LABEL_31;
        }
        if ( a1 > 6 )
        {
          v16 = a1 - 7;
          if ( !v16 )
          {
            v28 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v5, v4) + 24) + 2536LL);
            if ( v28 )
            {
              if ( v28() >= 0 )
              {
                v31 = *(void (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v30, v29) + 24) + 2544LL);
                if ( v31 )
                  v31();
              }
            }
            goto LABEL_134;
          }
          v17 = v16 - 1;
          if ( v17 )
          {
            v18 = v17 - 1;
            if ( v18 )
            {
              if ( v18 != 1 )
                goto LABEL_120;
              v19 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v5, v4) + 48) + 792LL);
              if ( !v19 || v19() < 0 )
              {
LABEL_33:
                SubsystemProcess = -1073741637;
                goto LABEL_133;
              }
              v15 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v21, v20) + 48) + 800LL);
            }
            else
            {
              v22 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v5, v4) + 48) + 776LL);
              if ( !v22 || v22() < 0 )
                goto LABEL_33;
              v15 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v24, v23) + 48) + 784LL);
            }
          }
          else
          {
            v25 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v5, v4) + 48) + 760LL);
            if ( !v25 || v25() < 0 )
              goto LABEL_33;
            v15 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v27, v26) + 48) + 768LL);
          }
LABEL_31:
          if ( v15 )
          {
            SubsystemProcess = v15(a2);
            goto LABEL_133;
          }
          goto LABEL_33;
        }
        if ( a1 != 6 )
        {
          if ( a1 )
          {
            v9 = a1 - 2;
            if ( v9 )
            {
              v10 = v9 - 1;
              if ( !v10 )
              {
                SubsystemProcess = UserPowerEventCallout(a2);
                goto LABEL_133;
              }
              v11 = v10 - 1;
              if ( !v11 )
              {
                SubsystemProcess = UserPowerStateCallout(a2);
                goto LABEL_133;
              }
              if ( v11 == 1 )
              {
                LOBYTE(v4) = *(_BYTE *)(a2 + 20);
                SubsystemProcess = UserPowerInfoCallout(
                                     *(_DWORD *)(a2 + 16),
                                     v4,
                                     *(_DWORD *)(a2 + 24),
                                     *(_QWORD *)(a2 + 32),
                                     *(_DWORD *)(a2 + 40),
                                     *(_QWORD *)(a2 + 48));
                goto LABEL_133;
              }
LABEL_120:
              CTempW32ThreadNonPaged::~CTempW32ThreadNonPaged((CTempW32ThreadNonPaged *)v72);
              return 3221225659LL;
            }
            EnterSharedCrit(1u, 1u);
            *(_QWORD *)(a2 + 16) = UserGlobalAtomTableCallout();
LABEL_26:
            UserSessionSwitchLeaveCritWithNonPaged();
            goto LABEL_134;
          }
          v12 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v5, v4) + 48) + 568LL);
          if ( !v12 || v12() < 0 )
            MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1065LL);
          v15 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v14, v13) + 48) + 576LL);
          goto LABEL_31;
        }
        if ( (int)IsModerncoreAtomTableSupported() >= 0 )
          goto LABEL_134;
        SubsystemProcess = UserJobCallout(a2);
      }
LABEL_133:
      v6 = SubsystemProcess;
      goto LABEL_134;
    }
    if ( a1 > 35 )
    {
      if ( a1 != 36 )
      {
        if ( a1 != 37 && a1 != 38 && a1 != 39 && a1 != 40 )
        {
          switch ( a1 )
          {
            case ')':
              SubsystemProcess = UserProcessTimerDelayCallout(a2);
              goto LABEL_133;
            case '*':
              SubsystemProcess = UserProcessTimerStatisticsCallout(a2);
              goto LABEL_133;
            case '+':
              DxNotifyProcessFreezeCallout(*(_QWORD *)(a2 + 16));
              goto LABEL_134;
            case ',':
              DxNotifyProcessThawCallout(*(_QWORD *)(a2 + 16));
              goto LABEL_134;
          }
          goto LABEL_120;
        }
        v69 = a1 - 37;
        if ( v69 )
        {
          v70 = v69 - 1;
          if ( v70 )
          {
            v71 = v70 - 1;
            if ( !v71 )
              goto LABEL_134;
            if ( v71 != 1 )
            {
              v6 = -1073741811;
              goto LABEL_134;
            }
            SubsystemProcess = ActivationObjectDelete((struct _WIN32_DELETEMETHOD_PARAMETERS *)a2);
          }
          else
          {
            SubsystemProcess = ActivationObjectOkToClose((struct _WIN32_OKAYTOCLOSEMETHOD_PARAMETERS *)a2);
          }
        }
        else
        {
          SubsystemProcess = ActivationObjectOpen((struct _WIN32_OPENMETHOD_PARAMETERS *)a2);
        }
        goto LABEL_133;
      }
    }
    else if ( a1 != 35 )
    {
      if ( a1 <= 30 )
      {
        switch ( a1 )
        {
          case 30:
            goto LABEL_92;
          case 25:
            DxGetGpuUsageStatistics(a2 + 16);
            goto LABEL_134;
          case 26:
            SubsystemProcess = W32pQuerySubsystemProcess((struct _WIN32_SUBSYSTEM_PROCESS_QUERY_CALLOUT_PARAMETERS *)a2);
            goto LABEL_133;
        }
        if ( a1 == 27 || (unsigned int)(a1 - 28) <= 1 )
        {
LABEL_92:
          SubsystemProcess = RIMObjectManagerCallout((unsigned int)a1, a2);
          goto LABEL_133;
        }
        goto LABEL_120;
      }
      if ( a1 == 31 )
      {
        v68 = *(__int64 (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(0LL, v4) + 48) + 2552LL);
        if ( v68 )
        {
          SubsystemProcess = v68();
          goto LABEL_133;
        }
        goto LABEL_33;
      }
      if ( a1 == 32 )
      {
        UserSessionState = (_QWORD *)W32GetUserSessionState((unsigned int)(a1 - 32));
        v59 = UserCritInternal::_anonymous_namespace_::EnterCritInternal(
                UserSessionState,
                1LL,
                0LL,
                _lambda_63b61c2369133a205197eda5bd671ee7_::_lambda_invoker_cdecl_);
        UserSessionState[3] = v59;
        if ( v59 && (unsigned __int8)UserCritInternal::_anonymous_namespace_::IsValidGuiContext(v59) )
        {
          DestroySharedUserCritDeferredUnlockList(UserSessionState + 2468);
          DestroyDeferredUnlockObjectAssignmentList(UserSessionState + 2475);
          DestroyDeferredUnlockObjectAssignmentList(UserSessionState + 2473);
        }
        if ( (unsigned int)UserUnsafeIsProcessDwm(*(_QWORD *)(a2 + 16)) )
        {
          if ( (unsigned int)Feature_EliminateMitRitHandoff2__private_IsEnabledDeviceUsageNoInline() )
          {
            *(_DWORD *)(W32GetUserSessionState(v60) + 18824) = 1;
          }
          else
          {
            if ( !(unsigned int)Feature_EliminateMitRitHandoff2__private_IsEnabledDeviceUsageNoInline() )
            {
              KeEnterCriticalRegion();
              CurrentThreadWin32Thread = PsGetCurrentThreadWin32Thread();
              v63 = W32GetUserSessionState(v62);
              LOBYTE(v64) = 1;
              ExAcquireFastResourceExclusive(*(_QWORD *)(v63 + 16), CurrentThreadWin32Thread + 176, v64);
            }
            vReleaseDwmHitTestWaiters();
            if ( !(unsigned int)Feature_EliminateMitRitHandoff2__private_IsEnabledDeviceUsageNoInline() )
            {
              v65 = PsGetCurrentThreadWin32Thread();
              v67 = W32GetUserSessionState(v66);
              ExReleaseFastResource(*(_QWORD *)(v67 + 16), v65 + 176);
              KeLeaveCriticalRegion();
            }
          }
        }
        goto LABEL_26;
      }
      if ( (unsigned int)(a1 - 33) > 1 )
        goto LABEL_120;
    }
    v56 = CoreMsgObjectCallout((unsigned int)a1, a2);
    CTempW32ThreadNonPaged::~CTempW32ThreadNonPaged((CTempW32ThreadNonPaged *)v72);
    return v56;
  }
  if ( a1 == 1 )
    goto LABEL_7;
  v6 = -1073740004;
LABEL_134:
  CTempW32ThreadNonPaged::~CTempW32ThreadNonPaged((CTempW32ThreadNonPaged *)v72);
  return v6;
}
