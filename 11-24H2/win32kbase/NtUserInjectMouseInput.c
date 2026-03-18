/*
 * XREFs of NtUserInjectMouseInput @ 0x14016EBE0
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
 *     RIMIDEInjectMouseFromMouseInputStruct @ 0x14017D9B0 (RIMIDEInjectMouseFromMouseInputStruct.c)
 *     ApiSetEditionIsRIMInjectionBlocked @ 0x140192440 (ApiSetEditionIsRIMInjectionBlocked.c)
 *     Feature_EliminateMitRitHandoff2__private_IsEnabledDeviceUsageNoInline @ 0x1401A3C28 (Feature_EliminateMitRitHandoff2__private_IsEnabledDeviceUsageNoInline.c)
 *     UserCritInternal::_anonymous_namespace_::EnterCritInternal @ 0x1401A8FE8 (UserCritInternal--_anonymous_namespace_--EnterCritInternal.c)
 *     UserCritInternal::_anonymous_namespace_::IsValidGuiContext @ 0x1401A9084 (UserCritInternal--_anonymous_namespace_--IsValidGuiContext.c)
 *     RIMIDECheckInjectionCapability @ 0x1401E4DE0 (RIMIDECheckInjectionCapability.c)
 *     RIMIDECreatePseudoMouseOrKeyboardDevice @ 0x1401E5C18 (RIMIDECreatePseudoMouseOrKeyboardDevice.c)
 *     RtlCopyVolatileMemory @ 0x14023F410 (RtlCopyVolatileMemory.c)
 */

__int64 __fastcall NtUserInjectMouseInput(char *Src, unsigned int a2)
{
  char v3; // r14
  char v4; // bl
  char v5; // si
  __int64 UserSessionState; // rax
  __int64 v7; // rcx
  _QWORD *v8; // rbx
  __int64 v9; // rax
  __int64 v10; // rcx
  bool v11; // bl
  __int64 v12; // rax
  int v13; // r8d
  int v14; // edx
  int v15; // esi
  _DWORD *v16; // r15
  __int64 CurrentProcessWin32Process; // rax
  __int64 v18; // rsi
  unsigned __int64 v19; // rcx
  unsigned __int64 v20; // rbx
  char *v21; // rax
  bool v22; // bl
  bool v23; // si
  int v24; // edx
  int v25; // r8d
  __int64 v26; // r9
  ULONG v27; // ecx
  int v28; // eax
  char v29; // r13
  bool v30; // bl
  bool v31; // si
  __int64 v32; // rax
  int v33; // r8d
  int v34; // edx
  int v35; // eax
  char v36; // r15
  bool v37; // bl
  bool v38; // si
  __int64 v39; // rax
  int v40; // r8d
  int v41; // edx
  bool v42; // bl
  bool v43; // si
  int v44; // edx
  int v45; // r8d
  __int64 v46; // r9
  int v47; // r13d
  bool v48; // bl
  bool v49; // si
  __int64 v50; // rax
  int v51; // r8d
  int v52; // edx
  bool v53; // bl
  bool v54; // si
  __int64 v55; // rax
  int v56; // r8d
  int v57; // edx
  char v58; // r15
  int LastError; // ebx
  __int64 v60; // rcx
  __int64 v61; // rax
  __int64 CurrentThreadWin32Thread; // rbx
  __int64 v63; // rcx
  __int64 v64; // rax
  __int16 v66; // [rsp+30h] [rbp-88h]
  __int16 v67; // [rsp+30h] [rbp-88h]
  __int64 v68; // [rsp+40h] [rbp-78h]
  char *Buffer; // [rsp+60h] [rbp-58h]
  __int64 *v70[10]; // [rsp+68h] [rbp-50h] BYREF
  char v72; // [rsp+D0h] [rbp+18h] BYREF
  PVOID Object; // [rsp+D8h] [rbp+20h] BYREF

  if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) == 0
    || *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u )
  {
    v4 = 0;
    v3 = 1;
  }
  else
  {
    v3 = 1;
    v4 = 1;
  }
  v5 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v4 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    UserSessionState = W32GetUserSessionState(Src);
    WPP_RECORDER_AND_TRACE_SF_qd(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v4,
      v5,
      *(_QWORD *)(UserSessionState + 69400),
      4u,
      2u,
      0x2Eu,
      (__int64)&WPP_8ecb864819e83a63300ef0c5d3b8b347_Traceguids,
      Src,
      a2);
  }
  InputTraceLogging::ThreadLockedPerfRegion::ThreadLockedPerfRegion(v70, "InjectMouseInput", 0LL);
  v8 = (_QWORD *)W32GetUserSessionState(v7);
  v9 = UserCritInternal::_anonymous_namespace_::EnterCritInternal(
         v8,
         1LL,
         0LL,
         _lambda_63b61c2369133a205197eda5bd671ee7_::_lambda_invoker_cdecl_);
  v8[3] = v9;
  if ( v9 && (unsigned __int8)UserCritInternal::_anonymous_namespace_::IsValidGuiContext(v9) )
  {
    DestroySharedUserCritDeferredUnlockList((__int64)(v8 + 2468));
    DestroyDeferredUnlockObjectAssignmentList(v8 + 2475);
    DestroyDeferredUnlockObjectAssignmentList(v8 + 2473);
  }
  v72 = 0;
  EnterLeaveCritMitRitHandOffHazard::Enter((Enter *)&v72);
  Feature_EliminateMitRitHandoff2__private_IsEnabledDeviceUsageNoInline();
  if ( v72 )
  {
    if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) == 0
      || *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u )
    {
      v3 = 0;
    }
    v11 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v3 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v12 = W32GetUserSessionState(WPP_GLOBAL_Control);
      LOBYTE(v13) = v11;
      LOBYTE(v14) = v3;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v14,
        v13,
        *(_QWORD *)(v12 + 69400),
        2,
        2,
        47,
        (__int64)&WPP_8ecb864819e83a63300ef0c5d3b8b347_Traceguids);
    }
    v15 = 0;
    UserSetLastError(5);
    goto LABEL_127;
  }
  Buffer = 0LL;
  v16 = 0LL;
  Object = 0LL;
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v10);
  v18 = CurrentProcessWin32Process;
  if ( CurrentProcessWin32Process )
    v18 = -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL) & CurrentProcessWin32Process;
  v19 = a2;
  if ( a2 - 1 > 0xF )
  {
    v53 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
       && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) != 0
       && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 2u;
    v54 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v53 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v55 = W32GetUserSessionState(&WPP_RECORDER_INITIALIZED);
      LOBYTE(v56) = v54;
      LOBYTE(v57) = v53;
      WPP_RECORDER_AND_TRACE_SF_d(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v57,
        v56,
        *(_QWORD *)(v55 + 69400),
        2,
        2,
        48,
        (__int64)&WPP_8ecb864819e83a63300ef0c5d3b8b347_Traceguids,
        a2);
    }
    v15 = 0;
    UserSetLastError(87);
    goto LABEL_115;
  }
  v20 = 32LL * a2;
  if ( v20 )
  {
    if ( ((PsGetCurrentProcessWow64Process() == 0 ? 3 : 0) & (unsigned __int8)Src) != 0 )
      ExRaiseDatatypeMisalignment();
    v19 = (unsigned __int64)&Src[v20];
    if ( (unsigned __int64)&Src[v20] > MmUserProbeAddress || v19 < (unsigned __int64)Src )
      v16 = Object;
  }
  v21 = (char *)Win32AllocPoolWithQuotaZInitImpl(v19, v20, 0x6D697355u);
  Buffer = v21;
  if ( !v21 )
    ExRaiseStatus(-1073741801);
  RtlCopyVolatileMemory(v21, Src, v20);
  if ( *(_QWORD *)(v18 + 896) == -1LL )
  {
    if ( !(unsigned int)RIMIDECheckInjectionCapability() )
    {
      v22 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
         && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) != 0
         && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 2u;
      v23 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( !v22 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_43;
      v26 = *(_QWORD *)(W32GetUserSessionState(&WPP_RECORDER_INITIALIZED) + 69400);
      v66 = 50;
LABEL_42:
      LOBYTE(v25) = v23;
      LOBYTE(v24) = v22;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v24,
        v25,
        v26,
        2,
        2,
        v66,
        (__int64)&WPP_8ecb864819e83a63300ef0c5d3b8b347_Traceguids);
LABEL_43:
      v27 = 5;
LABEL_44:
      v15 = 0;
      goto LABEL_45;
    }
    v28 = RIMIDECreatePseudoMouseOrKeyboardDevice(0LL, v18 + 896);
    v29 = v28;
    if ( v28 < 0 )
    {
      v30 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
         && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) != 0
         && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 2u;
      v31 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v30 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v32 = W32GetUserSessionState(&WPP_RECORDER_INITIALIZED);
        LOBYTE(v33) = v31;
        LOBYTE(v34) = v30;
        WPP_RECORDER_AND_TRACE_SF_d(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v34,
          v33,
          *(_QWORD *)(v32 + 69400),
          2,
          2,
          51,
          (__int64)&WPP_8ecb864819e83a63300ef0c5d3b8b347_Traceguids,
          v29);
      }
      v27 = 1359;
      goto LABEL_44;
    }
  }
  v35 = RawInputManagerDeviceObjectResolveHandle(*(char **)(v18 + 896), 3u, 1, &Object);
  v36 = v35;
  if ( v35 < 0 )
  {
    v37 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
       && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) != 0
       && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 2u;
    v38 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v37 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v39 = W32GetUserSessionState(&WPP_RECORDER_INITIALIZED);
      LOBYTE(v40) = v38;
      LOBYTE(v41) = v37;
      WPP_RECORDER_AND_TRACE_SF_d(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v41,
        v40,
        *(_QWORD *)(v39 + 69400),
        2,
        2,
        52,
        (__int64)&WPP_8ecb864819e83a63300ef0c5d3b8b347_Traceguids,
        v36);
    }
    v15 = 0;
    UserSetLastError(6);
    v16 = Object;
    goto LABEL_115;
  }
  v16 = Object;
  if ( (*((_DWORD *)Object + 60) & 0x2000) == 0 )
  {
    v42 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
       && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) != 0
       && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 2u;
    v43 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( !v42 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_76;
    v46 = *(_QWORD *)(W32GetUserSessionState(&WPP_RECORDER_INITIALIZED) + 69400);
    v67 = 53;
LABEL_75:
    LOBYTE(v45) = v43;
    LOBYTE(v44) = v42;
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v44,
      v45,
      v46,
      2,
      2,
      v67,
      (__int64)&WPP_8ecb864819e83a63300ef0c5d3b8b347_Traceguids);
LABEL_76:
    v27 = 87;
    goto LABEL_44;
  }
  if ( (unsigned int)ApiSetEditionIsRIMInjectionBlocked((char *)Object + 72) )
  {
    v22 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
       && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) != 0
       && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 2u;
    v23 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( !v22 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_43;
    v26 = *(_QWORD *)(W32GetUserSessionState(&WPP_RECORDER_INITIALIZED) + 69400);
    v66 = 54;
    goto LABEL_42;
  }
  if ( v16[30] )
  {
    v42 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
       && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) != 0
       && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 2u;
    v43 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( !v42 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_76;
    v46 = *(_QWORD *)(W32GetUserSessionState(&WPP_RECORDER_INITIALIZED) + 69400);
    v67 = 55;
    goto LABEL_75;
  }
  v47 = RIMIDEInjectMouseFromMouseInputStruct(v16, Buffer, a2);
  if ( v47 >= 0 )
  {
    v15 = 1;
    goto LABEL_115;
  }
  v48 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
     && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) != 0
     && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 2u;
  v49 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v48 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v50 = W32GetUserSessionState(&WPP_RECORDER_INITIALIZED);
    LOBYTE(v51) = v49;
    LOBYTE(v52) = v48;
    WPP_RECORDER_AND_TRACE_SF_d(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v52,
      v51,
      *(_QWORD *)(v50 + 69400),
      2,
      2,
      56,
      (__int64)&WPP_8ecb864819e83a63300ef0c5d3b8b347_Traceguids,
      v47);
  }
  v15 = 0;
  v27 = RtlNtStatusToDosError(v47);
LABEL_45:
  UserSetLastError(v27);
LABEL_115:
  if ( Buffer )
    GreDeleteFastMutex(Buffer);
  if ( v16 )
    ObfDereferenceObject(v16);
  if ( !v15 )
  {
    if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) == 0
      || *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u )
    {
      v3 = 0;
    }
    v58 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v3 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LastError = UserGetLastError();
      v61 = W32GetUserSessionState(v60);
      LODWORD(v68) = LastError;
      WPP_RECORDER_AND_TRACE_SF_D(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v3,
        v58,
        *(_QWORD *)(v61 + 69400),
        2u,
        2u,
        0x39u,
        (__int64)&WPP_8ecb864819e83a63300ef0c5d3b8b347_Traceguids,
        v68);
    }
  }
LABEL_127:
  if ( !(unsigned int)Feature_EliminateMitRitHandoff2__private_IsEnabledDeviceUsageNoInline() )
  {
    CurrentThreadWin32Thread = PsGetCurrentThreadWin32Thread();
    v64 = W32GetUserSessionState(v63);
    ExReleaseFastResource(*(_QWORD *)(v64 + 16), CurrentThreadWin32Thread + 176);
    KeLeaveCriticalRegion();
  }
  UserSessionSwitchLeaveCritWithNonPaged();
  InputTraceLogging::ThreadLockedPerfRegion::~ThreadLockedPerfRegion((InputTraceLogging::ThreadLockedPerfRegion *)v70);
  return v15;
}
