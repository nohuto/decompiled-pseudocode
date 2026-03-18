/*
 * XREFs of NtUserInjectKeyboardInput @ 0x14016E210
 * Callers:
 *     <none>
 * Callees:
 *     ?Win32AllocPoolWithQuotaZInitImpl@@YAPEAX_K0K@Z @ 0x1400183CC (-Win32AllocPoolWithQuotaZInitImpl@@YAPEAX_K0K@Z.c)
 *     GreDeleteFastMutex @ 0x14001BF40 (GreDeleteFastMutex.c)
 *     UserSessionSwitchLeaveCritWithNonPaged @ 0x140023070 (UserSessionSwitchLeaveCritWithNonPaged.c)
 *     UserSetLastError @ 0x140042EA4 (UserSetLastError.c)
 *     RawInputManagerDeviceObjectResolveHandle @ 0x140053560 (RawInputManagerDeviceObjectResolveHandle.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x14005DD80 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x14005DE1C (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     ??0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z @ 0x140060B94 (--0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z.c)
 *     ??1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ @ 0x140062674 (--1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ.c)
 *     DestroyDeferredUnlockObjectAssignmentList @ 0x1400A42D0 (DestroyDeferredUnlockObjectAssignmentList.c)
 *     SetLastNtError @ 0x1400BBEB4 (SetLastNtError.c)
 *     WPP_RECORDER_AND_TRACE_SF_D @ 0x1400C0560 (WPP_RECORDER_AND_TRACE_SF_D.c)
 *     WPP_RECORDER_AND_TRACE_SF_qd @ 0x1401366D8 (WPP_RECORDER_AND_TRACE_SF_qd.c)
 *     ?Enter@EnterLeaveCritMitRitHandOffHazard@@AEAAXXZ @ 0x14014EDA0 (-Enter@EnterLeaveCritMitRitHandOffHazard@@AEAAXXZ.c)
 *     UserGetLastError @ 0x140155E98 (UserGetLastError.c)
 *     DestroySharedUserCritDeferredUnlockList @ 0x14016ABF4 (DestroySharedUserCritDeferredUnlockList.c)
 *     RIMIDEInjectKeyboardFromKeybdInputStruct @ 0x14017D678 (RIMIDEInjectKeyboardFromKeybdInputStruct.c)
 *     ApiSetEditionIsRIMInjectionBlocked @ 0x140192440 (ApiSetEditionIsRIMInjectionBlocked.c)
 *     Feature_EliminateMitRitHandoff2__private_IsEnabledDeviceUsageNoInline @ 0x1401A3C28 (Feature_EliminateMitRitHandoff2__private_IsEnabledDeviceUsageNoInline.c)
 *     UserCritInternal::_anonymous_namespace_::EnterCritInternal @ 0x1401A8FE8 (UserCritInternal--_anonymous_namespace_--EnterCritInternal.c)
 *     UserCritInternal::_anonymous_namespace_::IsValidGuiContext @ 0x1401A9084 (UserCritInternal--_anonymous_namespace_--IsValidGuiContext.c)
 *     RIMIDECheckInjectionCapability @ 0x1401E4DE0 (RIMIDECheckInjectionCapability.c)
 *     RIMIDECreatePseudoMouseOrKeyboardDevice @ 0x1401E5C18 (RIMIDECreatePseudoMouseOrKeyboardDevice.c)
 *     RtlCopyVolatileMemory @ 0x14023F410 (RtlCopyVolatileMemory.c)
 */

__int64 __fastcall NtUserInjectKeyboardInput(char *Src, unsigned int a2)
{
  char v4; // si
  char v5; // bl
  char v6; // r14
  __int64 UserSessionState; // rax
  __int64 v8; // rcx
  _QWORD *v9; // rbx
  __int64 v10; // rax
  _DWORD *v11; // rbx
  __int64 v12; // rcx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v14; // r12
  bool v15; // bl
  __int64 v16; // rax
  int v17; // r8d
  int v18; // edx
  int v19; // r14d
  unsigned __int64 v20; // rcx
  unsigned __int64 v21; // r14
  char *v22; // rax
  bool v23; // r14
  bool v24; // r12
  int v25; // edx
  int v26; // r8d
  __int64 v27; // r9
  ULONG v28; // ecx
  int v29; // eax
  char v30; // r13
  bool v31; // r14
  bool v32; // r12
  __int64 v33; // rax
  int v34; // r8d
  int v35; // edx
  int v36; // eax
  __int64 v37; // rcx
  char v38; // r13
  bool v39; // bl
  bool v40; // r14
  __int64 v41; // rax
  int v42; // r8d
  int v43; // edx
  bool v44; // r14
  bool v45; // r12
  int v46; // edx
  int v47; // r8d
  __int64 v48; // r9
  int v49; // r13d
  bool v50; // r14
  bool v51; // r12
  __int64 v52; // rax
  int v53; // r8d
  int v54; // edx
  bool v55; // r14
  bool v56; // r12
  __int64 v57; // rax
  int v58; // r8d
  int v59; // edx
  char v60; // r15
  int LastError; // ebx
  __int64 v62; // rcx
  __int64 v63; // rax
  __int64 CurrentThreadWin32Thread; // rbx
  __int64 v65; // rcx
  __int64 v66; // rax
  __int16 v68; // [rsp+30h] [rbp-88h]
  __int16 v69; // [rsp+30h] [rbp-88h]
  __int64 v70; // [rsp+40h] [rbp-78h]
  char *Buffer; // [rsp+60h] [rbp-58h]
  __int64 *v72[10]; // [rsp+68h] [rbp-50h] BYREF
  char v74; // [rsp+D0h] [rbp+18h] BYREF
  PVOID Object; // [rsp+D8h] [rbp+20h] BYREF

  if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) == 0
    || *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u )
  {
    v5 = 0;
    v4 = 1;
  }
  else
  {
    v4 = 1;
    v5 = 1;
  }
  v6 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v5 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    UserSessionState = W32GetUserSessionState(&WPP_RECORDER_INITIALIZED);
    WPP_RECORDER_AND_TRACE_SF_qd(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v5,
      v6,
      *(_QWORD *)(UserSessionState + 69400),
      4u,
      2u,
      0x3Au,
      (__int64)&WPP_8ecb864819e83a63300ef0c5d3b8b347_Traceguids,
      Src,
      a2);
  }
  InputTraceLogging::ThreadLockedPerfRegion::ThreadLockedPerfRegion(v72, "InjectKeyboardInput", 0LL);
  v9 = (_QWORD *)W32GetUserSessionState(v8);
  v10 = UserCritInternal::_anonymous_namespace_::EnterCritInternal(
          v9,
          1LL,
          0LL,
          _lambda_63b61c2369133a205197eda5bd671ee7_::_lambda_invoker_cdecl_);
  v9[3] = v10;
  if ( v10 && (unsigned __int8)UserCritInternal::_anonymous_namespace_::IsValidGuiContext(v10) )
  {
    DestroySharedUserCritDeferredUnlockList((__int64)(v9 + 2468));
    DestroyDeferredUnlockObjectAssignmentList(v9 + 2475);
    DestroyDeferredUnlockObjectAssignmentList(v9 + 2473);
  }
  v74 = 0;
  EnterLeaveCritMitRitHandOffHazard::Enter((Enter *)&v74);
  Feature_EliminateMitRitHandoff2__private_IsEnabledDeviceUsageNoInline();
  Buffer = 0LL;
  v11 = 0LL;
  Object = 0LL;
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v12);
  v14 = CurrentProcessWin32Process;
  if ( CurrentProcessWin32Process )
    v14 = -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL) & CurrentProcessWin32Process;
  if ( v74 )
  {
    if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) == 0
      || *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u )
    {
      v4 = 0;
    }
    v15 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v4 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v16 = W32GetUserSessionState(&WPP_RECORDER_INITIALIZED);
      LOBYTE(v17) = v15;
      LOBYTE(v18) = v4;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v18,
        v17,
        *(_QWORD *)(v16 + 69400),
        2,
        2,
        59,
        (__int64)&WPP_8ecb864819e83a63300ef0c5d3b8b347_Traceguids);
    }
    v19 = 0;
    UserSetLastError(5);
    goto LABEL_127;
  }
  if ( a2 - 1 > 0xF )
  {
    v55 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
       && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) != 0
       && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 2u;
    v56 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v55 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v57 = W32GetUserSessionState(&WPP_RECORDER_INITIALIZED);
      LOBYTE(v58) = v56;
      LOBYTE(v59) = v55;
      WPP_RECORDER_AND_TRACE_SF_d(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v59,
        v58,
        *(_QWORD *)(v57 + 69400),
        2,
        2,
        60,
        (__int64)&WPP_8ecb864819e83a63300ef0c5d3b8b347_Traceguids,
        a2);
    }
    v19 = 0;
    UserSetLastError(87);
    goto LABEL_115;
  }
  v20 = 3LL * a2;
  v21 = 24LL * a2;
  if ( v21 )
  {
    if ( ((PsGetCurrentProcessWow64Process() == 0 ? 3 : 0) & (unsigned __int8)Src) != 0 )
      ExRaiseDatatypeMisalignment();
    v20 = (unsigned __int64)&Src[v21];
    if ( (unsigned __int64)&Src[v21] > MmUserProbeAddress || v20 < (unsigned __int64)Src )
      v11 = Object;
  }
  v22 = (char *)Win32AllocPoolWithQuotaZInitImpl(v20, v21, 0x6B697355u);
  Buffer = v22;
  if ( !v22 )
    ExRaiseStatus(-1073741801);
  RtlCopyVolatileMemory(v22, Src, v21);
  if ( *(_QWORD *)(v14 + 904) == -1LL )
  {
    if ( !(unsigned int)RIMIDECheckInjectionCapability() )
    {
      v23 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
         && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) != 0
         && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 2u;
      v24 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( !v23 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_43;
      v27 = *(_QWORD *)(W32GetUserSessionState(&WPP_RECORDER_INITIALIZED) + 69400);
      v68 = 62;
LABEL_42:
      LOBYTE(v26) = v24;
      LOBYTE(v25) = v23;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v25,
        v26,
        v27,
        2,
        2,
        v68,
        (__int64)&WPP_8ecb864819e83a63300ef0c5d3b8b347_Traceguids);
LABEL_43:
      v28 = 5;
LABEL_44:
      v19 = 0;
      goto LABEL_45;
    }
    v29 = RIMIDECreatePseudoMouseOrKeyboardDevice(1LL, v14 + 904);
    v30 = v29;
    if ( v29 < 0 )
    {
      v31 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
         && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) != 0
         && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 2u;
      v32 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v31 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v33 = W32GetUserSessionState(&WPP_RECORDER_INITIALIZED);
        LOBYTE(v34) = v32;
        LOBYTE(v35) = v31;
        WPP_RECORDER_AND_TRACE_SF_d(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v35,
          v34,
          *(_QWORD *)(v33 + 69400),
          2,
          2,
          63,
          (__int64)&WPP_8ecb864819e83a63300ef0c5d3b8b347_Traceguids,
          v30);
      }
      v28 = 1359;
      goto LABEL_44;
    }
  }
  v36 = RawInputManagerDeviceObjectResolveHandle(*(char **)(v14 + 904), 3u, 1, &Object);
  v38 = v36;
  if ( v36 < 0 )
  {
    v39 = 0;
    if ( WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control )
    {
      v37 = *((unsigned int *)WPP_GLOBAL_Control + 11);
      if ( (v37 & 2) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 2u )
        v39 = 1;
    }
    v40 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v39 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v41 = W32GetUserSessionState(v37);
      LOBYTE(v42) = v40;
      LOBYTE(v43) = v39;
      WPP_RECORDER_AND_TRACE_SF_d(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v43,
        v42,
        *(_QWORD *)(v41 + 69400),
        2,
        2,
        64,
        (__int64)&WPP_8ecb864819e83a63300ef0c5d3b8b347_Traceguids,
        v38);
    }
    v19 = 0;
    UserSetLastError(6);
    v11 = Object;
    goto LABEL_115;
  }
  v11 = Object;
  if ( (*((_DWORD *)Object + 60) & 0x2000) == 0 )
  {
    v44 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
       && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) != 0
       && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 2u;
    v45 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( !v44 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_76;
    v48 = *(_QWORD *)(W32GetUserSessionState(&WPP_RECORDER_INITIALIZED) + 69400);
    v69 = 65;
LABEL_75:
    LOBYTE(v47) = v45;
    LOBYTE(v46) = v44;
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v46,
      v47,
      v48,
      2,
      2,
      v69,
      (__int64)&WPP_8ecb864819e83a63300ef0c5d3b8b347_Traceguids);
LABEL_76:
    v28 = 87;
    goto LABEL_44;
  }
  if ( (unsigned int)ApiSetEditionIsRIMInjectionBlocked((char *)Object + 72) )
  {
    v23 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
       && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) != 0
       && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 2u;
    v24 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( !v23 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_43;
    v27 = *(_QWORD *)(W32GetUserSessionState(&WPP_RECORDER_INITIALIZED) + 69400);
    v68 = 66;
    goto LABEL_42;
  }
  if ( v11[30] != 1 )
  {
    v44 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
       && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) != 0
       && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 2u;
    v45 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( !v44 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_76;
    v48 = *(_QWORD *)(W32GetUserSessionState(&WPP_RECORDER_INITIALIZED) + 69400);
    v69 = 67;
    goto LABEL_75;
  }
  v49 = RIMIDEInjectKeyboardFromKeybdInputStruct(v11, Buffer, a2);
  if ( v49 >= 0 )
  {
    v19 = 1;
    goto LABEL_115;
  }
  v50 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
     && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) != 0
     && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 2u;
  v51 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v50 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v52 = W32GetUserSessionState(&WPP_RECORDER_INITIALIZED);
    LOBYTE(v53) = v51;
    LOBYTE(v54) = v50;
    WPP_RECORDER_AND_TRACE_SF_d(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v54,
      v53,
      *(_QWORD *)(v52 + 69400),
      2,
      2,
      68,
      (__int64)&WPP_8ecb864819e83a63300ef0c5d3b8b347_Traceguids,
      v49);
  }
  v19 = 0;
  v28 = RtlNtStatusToDosError(v49);
LABEL_45:
  UserSetLastError(v28);
LABEL_115:
  if ( v11 )
    ObfDereferenceObject(v11);
  if ( Buffer )
    GreDeleteFastMutex(Buffer);
  if ( !v19 )
  {
    if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) == 0
      || *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u )
    {
      v4 = 0;
    }
    v60 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v4 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LastError = UserGetLastError();
      v63 = W32GetUserSessionState(v62);
      LODWORD(v70) = LastError;
      WPP_RECORDER_AND_TRACE_SF_D(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v4,
        v60,
        *(_QWORD *)(v63 + 69400),
        2u,
        2u,
        0x45u,
        (__int64)&WPP_8ecb864819e83a63300ef0c5d3b8b347_Traceguids,
        v70);
    }
  }
LABEL_127:
  if ( !(unsigned int)Feature_EliminateMitRitHandoff2__private_IsEnabledDeviceUsageNoInline() )
  {
    CurrentThreadWin32Thread = PsGetCurrentThreadWin32Thread();
    v66 = W32GetUserSessionState(v65);
    ExReleaseFastResource(*(_QWORD *)(v66 + 16), CurrentThreadWin32Thread + 176);
    KeLeaveCriticalRegion();
  }
  UserSessionSwitchLeaveCritWithNonPaged();
  InputTraceLogging::ThreadLockedPerfRegion::~ThreadLockedPerfRegion((InputTraceLogging::ThreadLockedPerfRegion *)v72);
  return v19;
}
