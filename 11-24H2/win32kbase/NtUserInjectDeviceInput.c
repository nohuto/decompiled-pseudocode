/*
 * XREFs of NtUserInjectDeviceInput @ 0x140139390
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
 *     WPP_RECORDER_AND_TRACE_SF_qqd @ 0x1400EDAF4 (WPP_RECORDER_AND_TRACE_SF_qqd.c)
 *     RIMIDEInjectDeviceInput @ 0x140121AFC (RIMIDEInjectDeviceInput.c)
 *     ?Enter@EnterLeaveCritMitRitHandOffHazard@@AEAAXXZ @ 0x14014EDA0 (-Enter@EnterLeaveCritMitRitHandOffHazard@@AEAAXXZ.c)
 *     UserGetLastError @ 0x140155E98 (UserGetLastError.c)
 *     DestroySharedUserCritDeferredUnlockList @ 0x14016ABF4 (DestroySharedUserCritDeferredUnlockList.c)
 *     ApiSetEditionIsRIMInjectionBlocked @ 0x140192440 (ApiSetEditionIsRIMInjectionBlocked.c)
 *     Feature_EliminateMitRitHandoff2__private_IsEnabledDeviceUsageNoInline @ 0x1401A3C28 (Feature_EliminateMitRitHandoff2__private_IsEnabledDeviceUsageNoInline.c)
 *     UserCritInternal::_anonymous_namespace_::EnterCritInternal @ 0x1401A8FE8 (UserCritInternal--_anonymous_namespace_--EnterCritInternal.c)
 *     UserCritInternal::_anonymous_namespace_::IsValidGuiContext @ 0x1401A9084 (UserCritInternal--_anonymous_namespace_--IsValidGuiContext.c)
 *     memmove @ 0x14023FA40 (memmove.c)
 */

__int64 __fastcall NtUserInjectDeviceInput(char *a1, char *a2, unsigned int a3)
{
  __int64 v3; // r13
  char v4; // si
  char v5; // bl
  char v6; // r14
  __int64 UserSessionState; // rax
  __int64 v8; // rcx
  _QWORD *v9; // rbx
  __int64 v10; // rax
  _DWORD *v11; // rbx
  bool v12; // bl
  __int64 v13; // rax
  int v14; // r8d
  int v15; // edx
  int v16; // r14d
  bool v17; // r14
  bool v18; // r12
  int v19; // edx
  int v20; // r8d
  __int64 v21; // r9
  ULONG v22; // ecx
  unsigned int v23; // r14d
  __int64 v24; // rcx
  bool v25; // r14
  __int64 v26; // rax
  int v27; // r8d
  int v28; // edx
  bool v29; // r14
  bool v30; // r12
  __int64 v31; // rax
  int v32; // r8d
  int v33; // edx
  __int64 v34; // rax
  BOOL v35; // edx
  int v36; // eax
  __int64 v37; // rcx
  _BYTE **v38; // rax
  PVOID v39; // rbx
  __int64 v40; // rdx
  __int64 v41; // rcx
  int v42; // r13d
  bool v43; // r14
  bool v44; // r12
  __int64 v45; // rax
  int v46; // r8d
  int v47; // edx
  bool v48; // r14
  bool v49; // r12
  __int64 v50; // rax
  int v51; // r8d
  int v52; // edx
  char v53; // r15
  int LastError; // ebx
  __int64 v55; // rcx
  __int64 v56; // rax
  __int64 CurrentThreadWin32Thread; // rbx
  __int64 v58; // rcx
  __int64 v59; // rax
  __int16 v61; // [rsp+30h] [rbp-A8h]
  __int64 v62; // [rsp+40h] [rbp-98h]
  int v63; // [rsp+60h] [rbp-78h]
  PVOID Object; // [rsp+78h] [rbp-60h] BYREF
  PVOID Buffer; // [rsp+80h] [rbp-58h]
  __int64 *v66[10]; // [rsp+88h] [rbp-50h] BYREF
  char v69; // [rsp+F8h] [rbp+20h] BYREF

  v3 = a3;
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
    UserSessionState = W32GetUserSessionState(a1);
    WPP_RECORDER_AND_TRACE_SF_qqd(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v5,
      v6,
      *(_QWORD *)(UserSessionState + 69400),
      4u,
      2u,
      0x58u,
      (__int64)&WPP_8ecb864819e83a63300ef0c5d3b8b347_Traceguids,
      a1,
      a2,
      v3);
  }
  InputTraceLogging::ThreadLockedPerfRegion::ThreadLockedPerfRegion(v66, "InjectDeviceInput", 0LL);
  v9 = (_QWORD *)W32GetUserSessionState(v8);
  v10 = UserCritInternal::_anonymous_namespace_::EnterCritInternal(
          v9,
          1LL,
          0LL,
          _lambda_63b61c2369133a205197eda5bd671ee7_::_lambda_invoker_cdecl_);
  v9[3] = v10;
  if ( v10 && (unsigned __int8)UserCritInternal::_anonymous_namespace_::IsValidGuiContext(v10) )
  {
    DestroySharedUserCritDeferredUnlockList(v9 + 2468);
    DestroyDeferredUnlockObjectAssignmentList(v9 + 2475);
    DestroyDeferredUnlockObjectAssignmentList(v9 + 2473);
  }
  v69 = 0;
  EnterLeaveCritMitRitHandOffHazard::Enter((EnterLeaveCritMitRitHandOffHazard *)&v69);
  Feature_EliminateMitRitHandoff2__private_IsEnabledDeviceUsageNoInline();
  v11 = 0LL;
  Object = 0LL;
  Buffer = 0LL;
  if ( v69 )
  {
    if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) == 0
      || *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u )
    {
      v4 = 0;
    }
    v12 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v4 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v13 = W32GetUserSessionState(WPP_GLOBAL_Control);
      LOBYTE(v14) = v12;
      LOBYTE(v15) = v4;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v15,
        v14,
        *(_QWORD *)(v13 + 69400),
        2,
        2,
        89,
        (__int64)&WPP_8ecb864819e83a63300ef0c5d3b8b347_Traceguids);
    }
    v16 = 0;
    UserSetLastError(5);
    goto LABEL_131;
  }
  if ( !(_DWORD)v3 )
  {
    v17 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
       && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) != 0
       && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 2u;
    v18 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( !v17 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_31;
    v21 = *(_QWORD *)(W32GetUserSessionState(WPP_GLOBAL_Control) + 69400);
    v61 = 90;
LABEL_30:
    LOBYTE(v20) = v18;
    LOBYTE(v19) = v17;
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v19,
      v20,
      v21,
      2,
      2,
      v61,
      (__int64)&WPP_8ecb864819e83a63300ef0c5d3b8b347_Traceguids);
LABEL_31:
    v22 = 87;
LABEL_32:
    v16 = 0;
    goto LABEL_33;
  }
  v23 = 12 * v3;
  if ( (unsigned __int64)(12 * v3) > 0xFFFFFFFF )
  {
    v48 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
       && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) != 0
       && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 2u;
    v49 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v48 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v50 = W32GetUserSessionState(WPP_GLOBAL_Control);
      LOBYTE(v51) = v49;
      LOBYTE(v52) = v48;
      WPP_RECORDER_AND_TRACE_SF_d(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v52,
        v51,
        *(_QWORD *)(v50 + 69400),
        2,
        2,
        91,
        (__int64)&WPP_8ecb864819e83a63300ef0c5d3b8b347_Traceguids,
        v3);
    }
    v16 = 0;
    UserSetLastError(87);
    goto LABEL_119;
  }
  v63 = RawInputManagerDeviceObjectResolveHandle(a1, 3u, 1, &Object);
  if ( v63 < 0 )
  {
    if ( WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control )
    {
      v24 = *((unsigned int *)WPP_GLOBAL_Control + 11);
      if ( (v24 & 2) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 2u )
        LOBYTE(v11) = 1;
    }
    v25 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( (_BYTE)v11 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v26 = W32GetUserSessionState(v24);
      LOBYTE(v27) = v25;
      LOBYTE(v28) = (_BYTE)v11;
      WPP_RECORDER_AND_TRACE_SF_d(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v28,
        v27,
        *(_QWORD *)(v26 + 69400),
        2,
        2,
        92,
        (__int64)&WPP_8ecb864819e83a63300ef0c5d3b8b347_Traceguids,
        v63);
    }
    v16 = 0;
    UserSetLastError(6);
    v11 = Object;
    goto LABEL_119;
  }
  v11 = Object;
  if ( (*((_DWORD *)Object + 60) & 0x2000) == 0 )
  {
    v17 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
       && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) != 0
       && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 2u;
    v18 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( !v17 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_31;
    v21 = *(_QWORD *)(W32GetUserSessionState(WPP_GLOBAL_Control) + 69400);
    v61 = 93;
    goto LABEL_30;
  }
  if ( (unsigned int)ApiSetEditionIsRIMInjectionBlocked((char *)Object + 72) )
  {
    v29 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
       && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) != 0
       && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 2u;
    v30 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v29 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v31 = W32GetUserSessionState(WPP_GLOBAL_Control);
      LOBYTE(v32) = v30;
      LOBYTE(v33) = v29;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v33,
        v32,
        *(_QWORD *)(v31 + 69400),
        2,
        2,
        94,
        (__int64)&WPP_8ecb864819e83a63300ef0c5d3b8b347_Traceguids);
    }
    v22 = 5;
    goto LABEL_32;
  }
  if ( v11[30] != 2 )
  {
    v17 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
       && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) != 0
       && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 2u;
    v18 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( !v17 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_31;
    v21 = *(_QWORD *)(W32GetUserSessionState(WPP_GLOBAL_Control) + 69400);
    v61 = 95;
    goto LABEL_30;
  }
  if ( (v11[64] & 0x80u) != 0 )
  {
    v34 = *((_QWORD *)v11 + 66);
    v35 = __CFSHR__(*(_DWORD *)(v34 + 368), 4) && *(_DWORD *)(v34 + 364) == 1;
    if ( v35 || (!__CFSHR__(*(_DWORD *)(v34 + 368), 4) || *(_DWORD *)(v34 + 364) != 2 ? (v36 = 0) : (v36 = 1), v36) )
    {
      v17 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
         && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) != 0
         && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 2u;
      v18 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( !v17 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_31;
      v21 = *(_QWORD *)(W32GetUserSessionState(WPP_GLOBAL_Control) + 69400);
      v61 = 96;
      goto LABEL_30;
    }
  }
  if ( ((unsigned __int8)a2 & (PsGetCurrentProcessWow64Process() == 0 ? 3 : 0)) != 0 )
    ExRaiseDatatypeMisalignment();
  v37 = 3 * v3;
  v38 = (_BYTE **)MmUserProbeAddress;
  if ( (unsigned __int64)&a2[12 * v3] > MmUserProbeAddress )
    goto LABEL_96;
  v37 = 3 * v3;
  if ( &a2[12 * v3] < a2 )
  {
    v38 = (_BYTE **)MmUserProbeAddress;
LABEL_96:
    LOBYTE(v37) = **v38;
  }
  Buffer = (PVOID)Win32AllocPoolWithQuotaZInitImpl(v37, v23, 0x74697355u);
  if ( !Buffer )
    ExRaiseStatus(-1073741801);
  v39 = Buffer;
  memmove(Buffer, a2, v23);
  v40 = (__int64)v39;
  v11 = Object;
  v42 = RIMIDEInjectDeviceInput((__int64)Object, v40, v3, 4u);
  if ( v42 >= 0 )
  {
    v16 = 1;
    goto LABEL_119;
  }
  v43 = 0;
  if ( WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control )
  {
    v41 = *((unsigned int *)WPP_GLOBAL_Control + 11);
    if ( (v41 & 2) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 2u )
      v43 = 1;
  }
  v44 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v43 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v45 = W32GetUserSessionState(v41);
    LOBYTE(v46) = v44;
    LOBYTE(v47) = v43;
    WPP_RECORDER_AND_TRACE_SF_d(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v47,
      v46,
      *(_QWORD *)(v45 + 69400),
      2,
      2,
      98,
      (__int64)&WPP_8ecb864819e83a63300ef0c5d3b8b347_Traceguids,
      v42);
  }
  v16 = 0;
  v22 = RtlNtStatusToDosError(v42);
LABEL_33:
  UserSetLastError(v22);
LABEL_119:
  if ( Buffer )
    GreDeleteFastMutex((char *)Buffer);
  if ( v11 )
    ObfDereferenceObject(v11);
  if ( !v16 )
  {
    if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) == 0
      || *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u )
    {
      v4 = 0;
    }
    v53 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v4 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LastError = UserGetLastError();
      v56 = W32GetUserSessionState(v55);
      LODWORD(v62) = LastError;
      WPP_RECORDER_AND_TRACE_SF_D(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v4,
        v53,
        *(_QWORD *)(v56 + 69400),
        2u,
        2u,
        0x63u,
        (__int64)&WPP_8ecb864819e83a63300ef0c5d3b8b347_Traceguids,
        v62);
    }
  }
LABEL_131:
  if ( !(unsigned int)Feature_EliminateMitRitHandoff2__private_IsEnabledDeviceUsageNoInline() )
  {
    CurrentThreadWin32Thread = PsGetCurrentThreadWin32Thread();
    v59 = W32GetUserSessionState(v58);
    ExReleaseFastResource(*(_QWORD *)(v59 + 16), CurrentThreadWin32Thread + 176);
    KeLeaveCriticalRegion();
  }
  UserSessionSwitchLeaveCritWithNonPaged();
  InputTraceLogging::ThreadLockedPerfRegion::~ThreadLockedPerfRegion((InputTraceLogging::ThreadLockedPerfRegion *)v66);
  return v16;
}
