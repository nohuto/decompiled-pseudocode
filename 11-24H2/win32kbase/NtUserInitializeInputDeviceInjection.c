/*
 * XREFs of NtUserInitializeInputDeviceInjection @ 0x1401BB2D0
 * Callers:
 *     <none>
 * Callees:
 *     ?Win32AllocPoolWithQuotaZInitImpl@@YAPEAX_K0K@Z @ 0x1400183CC (-Win32AllocPoolWithQuotaZInitImpl@@YAPEAX_K0K@Z.c)
 *     GreDeleteFastMutex @ 0x14001BF40 (GreDeleteFastMutex.c)
 *     UserSessionSwitchLeaveCritWithNonPaged @ 0x140023070 (UserSessionSwitchLeaveCritWithNonPaged.c)
 *     HMValidateSharedHandle @ 0x140042DB0 (HMValidateSharedHandle.c)
 *     UserSetLastError @ 0x140042EA4 (UserSetLastError.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x14005DD80 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     HMUnlockObject @ 0x14005F160 (HMUnlockObject.c)
 *     DestroyDeferredUnlockObjectAssignmentList @ 0x1400A42D0 (DestroyDeferredUnlockObjectAssignmentList.c)
 *     SetLastNtError @ 0x1400BBEB4 (SetLastNtError.c)
 *     ?Enter@EnterLeaveCritMitRitHandOffHazard@@AEAAXXZ @ 0x14014EDA0 (-Enter@EnterLeaveCritMitRitHandOffHazard@@AEAAXXZ.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019C14C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     Feature_EliminateMitRitHandoff2__private_IsEnabledDeviceUsageNoInline @ 0x1401A3C28 (Feature_EliminateMitRitHandoff2__private_IsEnabledDeviceUsageNoInline.c)
 *     UserCritInternal::_anonymous_namespace_::EnterCritInternal @ 0x1401A8FE8 (UserCritInternal--_anonymous_namespace_--EnterCritInternal.c)
 *     RIMIDECheckInjectionCapability @ 0x1401E4DE0 (RIMIDECheckInjectionCapability.c)
 *     RIMIDE_InitializeDeviceInjection @ 0x1401E8520 (RIMIDE_InitializeDeviceInjection.c)
 *     RtlCopyVolatileMemory @ 0x14023F410 (RtlCopyVolatileMemory.c)
 */

__int64 __fastcall NtUserInitializeInputDeviceInjection(
        __int64 a1,
        unsigned __int16 a2,
        const void *a3,
        unsigned int a4,
        __int64 a5,
        int a6,
        ULONG64 a7)
{
  __int64 v7; // r13
  int v9; // esi
  _QWORD *UserSessionState; // r14
  __int64 v11; // rax
  __int64 CurrentProcessWin32Process; // rax
  __int64 v13; // rax
  char v14; // al
  int **v15; // rbx
  char *v16; // rbx
  __int64 v17; // r15
  bool v18; // bl
  int v19; // edx
  int v20; // r8d
  __int64 v21; // r9
  int v22; // ecx
  __int64 v23; // rcx
  __int64 v24; // r14
  char *v25; // rax
  int v26; // eax
  _QWORD *v27; // rdx
  __int64 CurrentThreadWin32Thread; // rbx
  __int64 v29; // rcx
  __int64 v30; // rax
  __int64 v31; // rbx
  __int64 v32; // rcx
  __int64 v33; // rax
  __int16 v35; // [rsp+30h] [rbp-78h]
  _BYTE v36[4]; // [rsp+40h] [rbp-68h] BYREF
  int v37; // [rsp+44h] [rbp-64h]
  int v38; // [rsp+48h] [rbp-60h]
  __int64 v39; // [rsp+58h] [rbp-50h] BYREF
  char *v40; // [rsp+60h] [rbp-48h]
  int v41; // [rsp+68h] [rbp-40h]
  unsigned __int16 v42; // [rsp+B0h] [rbp+8h]

  v42 = a1;
  v7 = a4;
  v9 = 1;
  while ( 1 )
  {
    UserSessionState = (_QWORD *)W32GetUserSessionState(a1);
    v11 = UserCritInternal::_anonymous_namespace_::EnterCritInternal(
            UserSessionState,
            1,
            0,
            (void (__fastcall *)(_QWORD, __int64))_lambda_63b61c2369133a205197eda5bd671ee7_::_lambda_invoker_cdecl_);
    UserSessionState[3] = v11;
    if ( !v11 )
      goto LABEL_17;
    if ( (_InterlockedCompareExchange((volatile signed __int32 *)(v11 + 528), 0, 0) & 0x1000000) != 0
      && *(char *)(v11 + 1360) >= 0 )
    {
      CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v11);
      if ( !CurrentProcessWin32Process )
        goto LABEL_17;
      v13 = -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL) & CurrentProcessWin32Process;
      if ( !v13 || *(_BYTE *)(v13 + 1208) != 1 )
        goto LABEL_17;
      v14 = 1;
    }
    else
    {
      v14 = 0;
    }
    if ( v14 )
    {
      while ( 1 )
      {
        v15 = (int **)UserSessionState[2471];
        if ( !v15 )
          break;
        UserSessionState[2471] = v15[2];
        v15[2] = 0LL;
        if ( !(*v15)[2] )
        {
          v37 = 0x20000;
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 4686);
        }
        HMUnlockObject(*v15);
      }
      DestroyDeferredUnlockObjectAssignmentList(UserSessionState + 2475);
      DestroyDeferredUnlockObjectAssignmentList(UserSessionState + 2473);
    }
LABEL_17:
    v36[0] = 0;
    EnterLeaveCritMitRitHandOffHazard::Enter((Enter *)v36);
    Feature_EliminateMitRitHandoff2__private_IsEnabledDeviceUsageNoInline();
    v16 = 0LL;
    v40 = 0LL;
    v17 = 0LL;
    v39 = 0LL;
    if ( v36[0] )
    {
      if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) == 0
        || *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u )
      {
        LOBYTE(v9) = 0;
      }
      v18 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( !(_BYTE)v9 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_26;
      v21 = *(_QWORD *)(W32GetUserSessionState(WPP_GLOBAL_Control) + 69400);
      v35 = 10;
LABEL_25:
      LOBYTE(v20) = v18;
      LOBYTE(v19) = v9;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v19,
        v20,
        v21,
        2,
        2,
        v35,
        (__int64)&WPP_8ecb864819e83a63300ef0c5d3b8b347_Traceguids);
LABEL_26:
      v22 = 5;
LABEL_59:
      v9 = 0;
      UserSetLastError(v22);
      goto LABEL_60;
    }
    if ( !(unsigned int)RIMIDECheckInjectionCapability() )
    {
      if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) == 0
        || *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u )
      {
        LOBYTE(v9) = 0;
      }
      v18 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( !(_BYTE)v9 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_26;
      v21 = *(_QWORD *)(W32GetUserSessionState(WPP_GLOBAL_Control) + 69400);
      v35 = 11;
      goto LABEL_25;
    }
    v24 = 32 * v7;
    if ( (unsigned __int64)(32 * v7) > 0xFFFFFFFF || !(_DWORD)v7 || (unsigned int)(a6 - 1) > 2 )
    {
      v22 = 87;
      goto LABEL_59;
    }
    if ( a5 )
    {
      v17 = HMValidateSharedHandle(a5);
      if ( !v17 )
      {
        v9 = 0;
        goto LABEL_56;
      }
    }
    if ( v24 )
    {
      if ( ((PsGetCurrentProcessWow64Process() == 0 ? 3 : 0) & (unsigned __int8)a3) != 0 )
        ExRaiseDatatypeMisalignment();
      v23 = (__int64)a3 + v24;
    }
    v25 = (char *)Win32AllocPoolWithQuotaZInitImpl(v23, (unsigned int)v24, 0x74697355u);
    v16 = v25;
    v40 = v25;
    if ( !v25 )
      ExRaiseStatus(-1073741801);
    RtlCopyVolatileMemory(v25, a3, 32 * v7);
    v26 = RIMIDE_InitializeDeviceInjection(v42, a2, v16, (unsigned int)v7, v17, a6, &v39);
    v41 = v26;
    if ( v26 >= 0 )
    {
      v27 = (_QWORD *)a7;
      if ( a7 >= MmUserProbeAddress )
        v27 = (_QWORD *)MmUserProbeAddress;
      *v27 = v39;
      v38 = 1;
      goto LABEL_56;
    }
    if ( v26 != -2147483631 )
      break;
    if ( !(unsigned int)Feature_EliminateMitRitHandoff2__private_IsEnabledDeviceUsageNoInline() )
    {
      CurrentThreadWin32Thread = PsGetCurrentThreadWin32Thread();
      v30 = W32GetUserSessionState(v29);
      ExReleaseFastResource(*(_QWORD *)(v30 + 16), CurrentThreadWin32Thread + 176);
      KeLeaveCriticalRegion();
    }
    UserSessionSwitchLeaveCritWithNonPaged();
  }
  v9 = 0;
  v38 = 0;
  UserSetLastError(87);
LABEL_56:
  if ( v16 )
    GreDeleteFastMutex(v16);
LABEL_60:
  if ( !(unsigned int)Feature_EliminateMitRitHandoff2__private_IsEnabledDeviceUsageNoInline() )
  {
    v31 = PsGetCurrentThreadWin32Thread();
    v33 = W32GetUserSessionState(v32);
    ExReleaseFastResource(*(_QWORD *)(v33 + 16), v31 + 176);
    KeLeaveCriticalRegion();
  }
  UserSessionSwitchLeaveCritWithNonPaged();
  return v9;
}
