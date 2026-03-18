/*
 * XREFs of NtUserInitializeGenericHidInjection @ 0x14016DC10
 * Callers:
 *     <none>
 * Callees:
 *     ?Win32AllocPoolWithQuotaZInitImpl@@YAPEAX_K0K@Z @ 0x1400183CC (-Win32AllocPoolWithQuotaZInitImpl@@YAPEAX_K0K@Z.c)
 *     GreDeleteFastMutex @ 0x14001BF40 (GreDeleteFastMutex.c)
 *     UserSessionSwitchLeaveCritWithNonPaged @ 0x140023070 (UserSessionSwitchLeaveCritWithNonPaged.c)
 *     UserSetLastError @ 0x140042EA4 (UserSetLastError.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x14005DD80 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     HMUnlockObject @ 0x14005F160 (HMUnlockObject.c)
 *     DestroyDeferredUnlockObjectAssignmentList @ 0x1400A42D0 (DestroyDeferredUnlockObjectAssignmentList.c)
 *     SetLastNtError @ 0x1400BBEB4 (SetLastNtError.c)
 *     ?Enter@EnterLeaveCritMitRitHandOffHazard@@AEAAXXZ @ 0x14014EDA0 (-Enter@EnterLeaveCritMitRitHandOffHazard@@AEAAXXZ.c)
 *     RIMIDE_CreateGenericHidDevice @ 0x14019A904 (RIMIDE_CreateGenericHidDevice.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019C14C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     Feature_EliminateMitRitHandoff2__private_IsEnabledDeviceUsageNoInline @ 0x1401A3C28 (Feature_EliminateMitRitHandoff2__private_IsEnabledDeviceUsageNoInline.c)
 *     UserCritInternal::_anonymous_namespace_::EnterCritInternal @ 0x1401A8FE8 (UserCritInternal--_anonymous_namespace_--EnterCritInternal.c)
 *     RIMIDECheckInjectionCapability @ 0x1401E4DE0 (RIMIDECheckInjectionCapability.c)
 *     memset @ 0x14023F500 (memset.c)
 *     memmove @ 0x14023FA40 (memmove.c)
 */

__int64 __fastcall NtUserInitializeGenericHidInjection(_OWORD *a1, _QWORD *a2)
{
  int v3; // esi
  _QWORD *UserSessionState; // r14
  __int64 v5; // rax
  __int64 CurrentProcessWin32Process; // rax
  __int64 v7; // rax
  char v8; // al
  int **v9; // rbx
  bool v10; // bl
  int v11; // edx
  int v12; // r8d
  __int64 v13; // r9
  _BYTE **v14; // rcx
  unsigned __int16 epi16; // r14
  ULONG64 v16; // rdx
  __int64 v17; // rbx
  const void *v18; // r15
  void *v19; // rax
  const void *v20; // r15
  void *v21; // rax
  int v22; // eax
  __int64 CurrentThreadWin32Thread; // rbx
  __int64 v24; // rcx
  __int64 v25; // rax
  __int64 v26; // rbx
  __int64 v27; // rcx
  __int64 v28; // rax
  __int16 v30; // [rsp+30h] [rbp-C8h]
  char v31; // [rsp+40h] [rbp-B8h]
  char v32; // [rsp+41h] [rbp-B7h]
  __int64 v33; // [rsp+58h] [rbp-A0h] BYREF
  _OWORD v34[9]; // [rsp+60h] [rbp-98h] BYREF
  char v36; // [rsp+110h] [rbp+18h] BYREF
  int v37; // [rsp+118h] [rbp+20h]

  v3 = 1;
  while ( 1 )
  {
    UserSessionState = (_QWORD *)W32GetUserSessionState(a1);
    v5 = UserCritInternal::_anonymous_namespace_::EnterCritInternal(
           UserSessionState,
           1LL,
           0LL,
           _lambda_63b61c2369133a205197eda5bd671ee7_::_lambda_invoker_cdecl_);
    UserSessionState[3] = v5;
    if ( !v5 )
      goto LABEL_17;
    if ( (_InterlockedCompareExchange((volatile signed __int32 *)(v5 + 528), 0, 0) & 0x1000000) != 0
      && *(char *)(v5 + 1360) >= 0 )
    {
      CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v5);
      if ( !CurrentProcessWin32Process )
        goto LABEL_17;
      v7 = -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL) & CurrentProcessWin32Process;
      if ( !v7 || *(_BYTE *)(v7 + 1208) != 1 )
        goto LABEL_17;
      v8 = 1;
    }
    else
    {
      v8 = 0;
    }
    if ( v8 )
    {
      while ( 1 )
      {
        v9 = (int **)UserSessionState[2471];
        if ( !v9 )
          break;
        UserSessionState[2471] = v9[2];
        v9[2] = 0LL;
        if ( !(*v9)[2] )
        {
          v37 = 0x20000;
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 4686LL);
        }
        HMUnlockObject(*v9);
      }
      DestroyDeferredUnlockObjectAssignmentList(UserSessionState + 2475);
      DestroyDeferredUnlockObjectAssignmentList(UserSessionState + 2473);
    }
LABEL_17:
    v36 = 0;
    EnterLeaveCritMitRitHandOffHazard::Enter((Enter *)&v36);
    Feature_EliminateMitRitHandoff2__private_IsEnabledDeviceUsageNoInline();
    v33 = 0LL;
    memset(v34, 0, 0x40uLL);
    v31 = 0;
    v32 = 0;
    if ( v36 )
    {
      if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) == 0
        || *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u )
      {
        LOBYTE(v3) = 0;
      }
      v10 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( !(_BYTE)v3 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_26;
      v13 = *(_QWORD *)(W32GetUserSessionState(&WPP_RECORDER_INITIALIZED) + 69400);
      v30 = 12;
LABEL_25:
      LOBYTE(v12) = v10;
      LOBYTE(v11) = v3;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v11,
        v12,
        v13,
        2,
        2,
        v30,
        (__int64)&WPP_8ecb864819e83a63300ef0c5d3b8b347_Traceguids);
LABEL_26:
      v3 = 0;
      UserSetLastError(5);
      goto LABEL_78;
    }
    if ( !(unsigned int)RIMIDECheckInjectionCapability() )
    {
      if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) == 0
        || *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u )
      {
        LOBYTE(v3) = 0;
      }
      v10 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( !(_BYTE)v3 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_26;
      v13 = *(_QWORD *)(W32GetUserSessionState(&WPP_RECORDER_INITIALIZED) + 69400);
      v30 = 13;
      goto LABEL_25;
    }
    if ( ((unsigned __int8)a1 & (PsGetCurrentProcessWow64Process() == 0 ? 3 : 0)) != 0 )
      ExRaiseDatatypeMisalignment();
    v14 = (_BYTE **)MmUserProbeAddress;
    if ( (unsigned __int64)(a1 + 4) <= MmUserProbeAddress )
    {
      v14 = (_BYTE **)(a1 + 4);
      if ( a1 + 4 >= a1 )
        goto LABEL_41;
      v14 = (_BYTE **)MmUserProbeAddress;
    }
    LOBYTE(v14) = **v14;
LABEL_41:
    v34[0] = *a1;
    v34[1] = a1[1];
    v34[2] = a1[2];
    v34[3] = a1[3];
    epi16 = _mm_extract_epi16((__m128i)v34[3], 4);
    if ( epi16 )
    {
      if ( ((PsGetCurrentProcessWow64Process() == 0 ? 3 : 0) & LOBYTE(v34[3])) != 0 )
        ExRaiseDatatypeMisalignment();
      v14 = *(_BYTE ***)&v34[3];
      v16 = *(_QWORD *)&v34[3] + epi16;
      if ( v16 > MmUserProbeAddress || v16 < *(_QWORD *)&v34[3] )
        epi16 = WORD4(v34[3]);
    }
    v17 = WORD4(v34[2]);
    if ( WORD4(v34[2]) )
    {
      if ( ((PsGetCurrentProcessWow64Process() == 0 ? 3 : 0) & LOBYTE(v34[2])) != 0 )
        ExRaiseDatatypeMisalignment();
      v14 = *(_BYTE ***)&v34[2];
      if ( *(_QWORD *)&v34[2] + v17 > MmUserProbeAddress
        || (unsigned __int64)(*(_QWORD *)&v34[2] + v17) < *(_QWORD *)&v34[2] )
      {
        epi16 = WORD4(v34[3]);
        LOWORD(v17) = WORD4(v34[2]);
      }
      if ( (_WORD)v17 )
      {
        v18 = *(const void **)&v34[2];
        v19 = (void *)Win32AllocPoolWithQuotaZInitImpl(*(__int64 *)&v34[2], (unsigned __int16)v17, 0x74697355u);
        *(_QWORD *)&v34[2] = v19;
        if ( !v19 )
          goto LABEL_55;
        v31 = 1;
        memmove(v19, v18, (unsigned __int16)v17);
      }
    }
    if ( epi16 )
      break;
LABEL_60:
    if ( !*(_QWORD *)&v34[2] )
      goto LABEL_61;
    v22 = RIMIDE_CreateGenericHidDevice(v34, &v33);
    if ( v22 >= 0 )
    {
      if ( (unsigned __int64)a2 >= MmUserProbeAddress )
        a2 = (_QWORD *)MmUserProbeAddress;
      *a2 = v33;
      goto LABEL_74;
    }
    if ( v22 != -2147483631 )
    {
LABEL_61:
      v3 = 0;
      UserSetLastError(87);
      goto LABEL_74;
    }
    if ( v31 )
      GreDeleteFastMutex(*(char **)&v34[2]);
    if ( v32 )
      GreDeleteFastMutex(*(char **)&v34[3]);
    if ( !(unsigned int)Feature_EliminateMitRitHandoff2__private_IsEnabledDeviceUsageNoInline() )
    {
      CurrentThreadWin32Thread = PsGetCurrentThreadWin32Thread();
      v25 = W32GetUserSessionState(v24);
      ExReleaseFastResource(*(_QWORD *)(v25 + 16), CurrentThreadWin32Thread + 176);
      KeLeaveCriticalRegion();
    }
    UserSessionSwitchLeaveCritWithNonPaged();
  }
  v20 = *(const void **)&v34[3];
  v21 = (void *)Win32AllocPoolWithQuotaZInitImpl((__int64)v14, epi16, 0x74697355u);
  *(_QWORD *)&v34[3] = v21;
  if ( v21 )
  {
    v32 = 1;
    memmove(v21, v20, epi16);
    goto LABEL_60;
  }
LABEL_55:
  v3 = 0;
  UserSetLastError(8);
LABEL_74:
  if ( v31 )
    GreDeleteFastMutex(*(char **)&v34[2]);
  if ( v32 )
    GreDeleteFastMutex(*(char **)&v34[3]);
LABEL_78:
  if ( !(unsigned int)Feature_EliminateMitRitHandoff2__private_IsEnabledDeviceUsageNoInline() )
  {
    v26 = PsGetCurrentThreadWin32Thread();
    v28 = W32GetUserSessionState(v27);
    ExReleaseFastResource(*(_QWORD *)(v28 + 16), v26 + 176);
    KeLeaveCriticalRegion();
  }
  UserSessionSwitchLeaveCritWithNonPaged();
  return v3;
}
