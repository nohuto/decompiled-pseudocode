/*
 * XREFs of NtUserInjectPointerInput @ 0x1401BB770
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
 *     WPP_RECORDER_AND_TRACE_SF_Dd @ 0x14009782C (WPP_RECORDER_AND_TRACE_SF_Dd.c)
 *     DestroyDeferredUnlockObjectAssignmentList @ 0x1400A42D0 (DestroyDeferredUnlockObjectAssignmentList.c)
 *     SetLastNtError @ 0x1400BBEB4 (SetLastNtError.c)
 *     WPP_RECORDER_AND_TRACE_SF_D @ 0x1400C0560 (WPP_RECORDER_AND_TRACE_SF_D.c)
 *     WPP_RECORDER_AND_TRACE_SF_qqd @ 0x1400EDAF4 (WPP_RECORDER_AND_TRACE_SF_qqd.c)
 *     ?Enter@EnterLeaveCritMitRitHandOffHazard@@AEAAXXZ @ 0x14014EDA0 (-Enter@EnterLeaveCritMitRitHandOffHazard@@AEAAXXZ.c)
 *     UserGetLastError @ 0x140155E98 (UserGetLastError.c)
 *     DestroySharedUserCritDeferredUnlockList @ 0x14016ABF4 (DestroySharedUserCritDeferredUnlockList.c)
 *     ApiSetEditionIsRIMInjectionBlocked @ 0x140192440 (ApiSetEditionIsRIMInjectionBlocked.c)
 *     Feature_EliminateMitRitHandoff2__private_IsEnabledDeviceUsageNoInline @ 0x1401A3C28 (Feature_EliminateMitRitHandoff2__private_IsEnabledDeviceUsageNoInline.c)
 *     UserCritInternal::_anonymous_namespace_::EnterCritInternal @ 0x1401A8FE8 (UserCritInternal--_anonymous_namespace_--EnterCritInternal.c)
 *     UserCritInternal::_anonymous_namespace_::IsValidGuiContext @ 0x1401A9084 (UserCritInternal--_anonymous_namespace_--IsValidGuiContext.c)
 *     RIMIDEInjectHIDReportFromPointerInfo @ 0x1401E68D8 (RIMIDEInjectHIDReportFromPointerInfo.c)
 *     RtlCopyVolatileMemory @ 0x14023F410 (RtlCopyVolatileMemory.c)
 */

__int64 __fastcall NtUserInjectPointerInput(char *a1, const void *a2, unsigned int a3)
{
  char v4; // r15
  char v5; // bl
  char v6; // si
  __int64 UserSessionState; // rax
  __int64 v8; // rcx
  _QWORD *v9; // rbx
  __int64 v10; // rax
  bool v11; // bl
  __int64 v12; // rax
  int v13; // r8d
  int v14; // edx
  int v15; // r14d
  bool v16; // bl
  bool v17; // si
  int v18; // edx
  int v19; // r8d
  __int64 v20; // r9
  char *v21; // rbx
  int v22; // eax
  __int64 v23; // rdx
  __int64 v24; // rcx
  char v25; // r14
  bool v26; // bl
  bool v27; // si
  __int64 v28; // rax
  int v29; // r8d
  int v30; // edx
  int v31; // ecx
  _DWORD *v32; // rbx
  bool v33; // bl
  bool v34; // si
  __int64 v35; // rax
  int v36; // r8d
  int v37; // edx
  _DWORD *v38; // r8
  __int64 v39; // rcx
  _DWORD *v40; // rax
  int v43; // r14d
  unsigned __int64 v44; // rbx
  const void *v45; // rsi
  struct tagPOINTER_TYPE_INFO *v46; // rax
  int v47; // esi
  bool v48; // bl
  bool v49; // si
  int v50; // edx
  int v51; // r8d
  __int64 v52; // r9
  unsigned int v53; // r8d
  struct RawInputManagerDeviceObject *v54; // rcx
  unsigned int v55; // r14d
  char v56; // bl
  char v57; // si
  __int64 v58; // r9
  int v59; // r14d
  char v60; // bl
  int v61; // r13d
  bool v62; // bl
  bool v63; // si
  __int64 v64; // rax
  int v65; // r8d
  int v66; // edx
  ULONG v67; // eax
  char v68; // si
  __int64 v69; // r9
  bool v70; // r14
  char v71; // r12
  int LastError; // ebx
  __int64 v73; // rcx
  __int64 v74; // rax
  __int64 CurrentThreadWin32Thread; // rbx
  __int64 v76; // rcx
  __int64 v77; // rax
  __int16 v79; // [rsp+30h] [rbp-98h]
  __int16 v80; // [rsp+30h] [rbp-98h]
  __int64 v81; // [rsp+40h] [rbp-88h]
  char v82; // [rsp+40h] [rbp-88h]
  __int64 v83; // [rsp+48h] [rbp-80h]
  struct tagPOINTER_TYPE_INFO *Buffer; // [rsp+70h] [rbp-58h]
  PVOID Object; // [rsp+78h] [rbp-50h] BYREF
  __int64 *v86[9]; // [rsp+80h] [rbp-48h] BYREF
  char v90; // [rsp+E8h] [rbp+20h] BYREF

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
      0x46u,
      (__int64)&WPP_8ecb864819e83a63300ef0c5d3b8b347_Traceguids,
      a1,
      a2,
      a3);
  }
  InputTraceLogging::ThreadLockedPerfRegion::ThreadLockedPerfRegion(v86, "InjectPointerInput", 0LL);
  v9 = (_QWORD *)W32GetUserSessionState(v8);
  v10 = UserCritInternal::_anonymous_namespace_::EnterCritInternal(
          v9,
          1,
          0,
          (void (__fastcall *)(_QWORD, __int64))_lambda_63b61c2369133a205197eda5bd671ee7_::_lambda_invoker_cdecl_);
  v9[3] = v10;
  if ( v10 && UserCritInternal::_anonymous_namespace_::IsValidGuiContext(v10) )
  {
    DestroySharedUserCritDeferredUnlockList((__int64)(v9 + 2468));
    DestroyDeferredUnlockObjectAssignmentList(v9 + 2475);
    DestroyDeferredUnlockObjectAssignmentList(v9 + 2473);
  }
  v90 = 0;
  EnterLeaveCritMitRitHandOffHazard::Enter((Enter *)&v90);
  Feature_EliminateMitRitHandoff2__private_IsEnabledDeviceUsageNoInline();
  Buffer = 0LL;
  Object = 0LL;
  if ( v90 )
  {
    if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) == 0
      || *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u )
    {
      v4 = 0;
    }
    v11 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v4 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v12 = W32GetUserSessionState(WPP_GLOBAL_Control);
      LOBYTE(v13) = v11;
      LOBYTE(v14) = v4;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v14,
        v13,
        *(_QWORD *)(v12 + 69400),
        2,
        2,
        71,
        (__int64)&WPP_8ecb864819e83a63300ef0c5d3b8b347_Traceguids);
    }
    v15 = 0;
    UserSetLastError(5);
    goto LABEL_189;
  }
  if ( !a3 )
  {
    v16 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
       && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) != 0
       && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 2u;
    v17 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( !v16 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_31;
    v20 = *(_QWORD *)(W32GetUserSessionState(WPP_GLOBAL_Control) + 69400);
    v79 = 72;
    goto LABEL_30;
  }
  v22 = RawInputManagerDeviceObjectResolveHandle(a1, 3u, 1, &Object);
  v25 = v22;
  if ( v22 < 0 )
  {
    v26 = 0;
    if ( WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control )
    {
      v24 = *((unsigned int *)WPP_GLOBAL_Control + 11);
      if ( (v24 & 2) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 2u )
        v26 = 1;
    }
    v27 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v26 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v28 = W32GetUserSessionState(v24);
      LOBYTE(v29) = v27;
      LOBYTE(v30) = v26;
      WPP_RECORDER_AND_TRACE_SF_d(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v30,
        v29,
        *(_QWORD *)(v28 + 69400),
        2,
        2,
        73,
        (__int64)&WPP_8ecb864819e83a63300ef0c5d3b8b347_Traceguids,
        v25);
    }
    v31 = 6;
LABEL_43:
    v15 = 0;
    UserSetLastError(v31);
    goto LABEL_32;
  }
  v32 = Object;
  if ( (*((_DWORD *)Object + 60) & 0x2000) == 0 )
  {
    v16 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
       && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) != 0
       && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 2u;
    v17 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( !v16 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_31;
    v20 = *(_QWORD *)(W32GetUserSessionState(WPP_GLOBAL_Control) + 69400);
    v79 = 74;
    goto LABEL_30;
  }
  if ( (unsigned int)ApiSetEditionIsRIMInjectionBlocked((__int64)Object + 72, v23) )
  {
    v33 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
       && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) != 0
       && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 2u;
    v34 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v33 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v35 = W32GetUserSessionState(WPP_GLOBAL_Control);
      LOBYTE(v36) = v34;
      LOBYTE(v37) = v33;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v37,
        v36,
        *(_QWORD *)(v35 + 69400),
        2,
        2,
        75,
        (__int64)&WPP_8ecb864819e83a63300ef0c5d3b8b347_Traceguids);
    }
    v31 = 5;
    goto LABEL_43;
  }
  if ( (v32[64] & 0x80u) == 0 )
  {
    v16 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
       && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) != 0
       && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 2u;
    v17 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( !v16 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_31;
    v20 = *(_QWORD *)(W32GetUserSessionState(WPP_GLOBAL_Control) + 69400);
    v79 = 76;
    goto LABEL_30;
  }
  v38 = (_DWORD *)*((_QWORD *)v32 + 66);
  v39 = (unsigned int)-__CFSHR__(v38[92], 4);
  v40 = v38 + 91;
  if ( (!__CFSHR__(v38[92], 4) || *v40 != 1) && (!__CFSHR__(v38[92], 4) || *v40 != 2) )
  {
    v16 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
       && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) != 0
       && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 2u;
    v17 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( !v16 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_31;
    v20 = *(_QWORD *)(W32GetUserSessionState(WPP_GLOBAL_Control) + 69400);
    v79 = 77;
LABEL_30:
    LOBYTE(v19) = v17;
    LOBYTE(v18) = v16;
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v18,
      v19,
      v20,
      2,
      2,
      v79,
      (__int64)&WPP_8ecb864819e83a63300ef0c5d3b8b347_Traceguids);
LABEL_31:
    v15 = 0;
    UserSetLastError(87);
    goto LABEL_32;
  }
  v43 = v38[6];
  v44 = 152LL * a3;
  if ( v44 )
  {
    v45 = a2;
    if ( ((PsGetCurrentProcessWow64Process() == 0 ? 3 : 0) & (unsigned __int8)a2) != 0 )
      ExRaiseDatatypeMisalignment();
    v39 = (__int64)a2 + v44;
  }
  else
  {
    v45 = a2;
  }
  v46 = (struct tagPOINTER_TYPE_INFO *)Win32AllocPoolWithQuotaZInitImpl(v39, v44, 0x74697355u);
  Buffer = v46;
  if ( !v46 )
    ExRaiseStatus(-1073741801);
  RtlCopyVolatileMemory(v46, v45, v44);
  v21 = (char *)Buffer;
  v47 = *(_DWORD *)Buffer;
  if ( *(_DWORD *)Buffer != 3 )
  {
    if ( v47 == 2 )
    {
      if ( v43 == 3 )
      {
        v54 = (struct RawInputManagerDeviceObject *)Object;
        v55 = *(_DWORD *)(*((_QWORD *)Object + 66) + 776LL);
        v53 = a3;
        if ( a3 > v55 )
        {
          v56 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
             && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) != 0
             && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 2u;
          v57 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          if ( v56 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            v58 = *(_QWORD *)(W32GetUserSessionState(WPP_GLOBAL_Control) + 69400);
            LODWORD(v83) = v55;
            LODWORD(v81) = a3;
            WPP_RECORDER_AND_TRACE_SF_Dd(
              *((_QWORD *)WPP_GLOBAL_Control + 3),
              v56,
              v57,
              v58,
              2u,
              2u,
              0x52u,
              (__int64)&WPP_8ecb864819e83a63300ef0c5d3b8b347_Traceguids,
              v81,
              v83);
          }
          goto LABEL_31;
        }
        goto LABEL_154;
      }
      v48 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
         && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) != 0
         && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 2u;
      v49 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( !v48 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_31;
      v52 = *(_QWORD *)(W32GetUserSessionState(WPP_GLOBAL_Control) + 69400);
      v82 = v43;
      v80 = 81;
    }
    else
    {
      if ( v47 != 5 )
      {
        v48 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
           && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) != 0
           && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 2u;
        v70 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        if ( !v48 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_31;
        v52 = *(_QWORD *)(W32GetUserSessionState(WPP_GLOBAL_Control) + 69400);
        v82 = v47;
        v80 = 85;
        LOBYTE(v51) = v70;
        goto LABEL_108;
      }
      if ( v43 == 7 )
      {
        v54 = (struct RawInputManagerDeviceObject *)Object;
        v59 = *(_DWORD *)(*((_QWORD *)Object + 66) + 776LL);
        v53 = a3;
        if ( a3 > v59 - 1 )
        {
          v60 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
             && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) != 0
             && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 2u;
          v68 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          if ( v60 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            v69 = *(_QWORD *)(W32GetUserSessionState(WPP_GLOBAL_Control) + 69400);
            LODWORD(v83) = v59;
            LODWORD(v81) = a3;
            WPP_RECORDER_AND_TRACE_SF_Dd(
              *((_QWORD *)WPP_GLOBAL_Control + 3),
              v60,
              v68,
              v69,
              2u,
              2u,
              0x54u,
              (__int64)&WPP_8ecb864819e83a63300ef0c5d3b8b347_Traceguids,
              v81,
              v83);
          }
          goto LABEL_31;
        }
        goto LABEL_154;
      }
      v48 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
         && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) != 0
         && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 2u;
      v49 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( !v48 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_31;
      v52 = *(_QWORD *)(W32GetUserSessionState(WPP_GLOBAL_Control) + 69400);
      v82 = v43;
      v80 = 83;
    }
LABEL_107:
    LOBYTE(v51) = v49;
LABEL_108:
    LOBYTE(v50) = v48;
    WPP_RECORDER_AND_TRACE_SF_d(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v50,
      v51,
      v52,
      2,
      2,
      v80,
      (__int64)&WPP_8ecb864819e83a63300ef0c5d3b8b347_Traceguids,
      v82);
    goto LABEL_31;
  }
  if ( v43 != 5 )
  {
    v48 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
       && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) != 0
       && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 2u;
    v49 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( !v48 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_31;
    v52 = *(_QWORD *)(W32GetUserSessionState(WPP_GLOBAL_Control) + 69400);
    v82 = v43;
    v80 = 79;
    goto LABEL_107;
  }
  v53 = a3;
  if ( a3 != 1 )
  {
    v48 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
       && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) != 0
       && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 2u;
    v49 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( !v48 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_31;
    v52 = *(_QWORD *)(W32GetUserSessionState(WPP_GLOBAL_Control) + 69400);
    v82 = a3;
    v80 = 80;
    goto LABEL_107;
  }
  v54 = (struct RawInputManagerDeviceObject *)Object;
LABEL_154:
  v61 = RIMIDEInjectHIDReportFromPointerInfo(v54, Buffer, v53);
  if ( v61 >= 0 )
  {
    v15 = 1;
    goto LABEL_177;
  }
  v62 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
     && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) != 0
     && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 2u;
  v63 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v62 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v64 = W32GetUserSessionState(&WPP_RECORDER_INITIALIZED);
    LOBYTE(v65) = v63;
    LOBYTE(v66) = v62;
    WPP_RECORDER_AND_TRACE_SF_d(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v66,
      v65,
      *(_QWORD *)(v64 + 69400),
      2,
      2,
      86,
      (__int64)&WPP_8ecb864819e83a63300ef0c5d3b8b347_Traceguids,
      v61);
  }
  v15 = 0;
  v67 = RtlNtStatusToDosError(v61);
  UserSetLastError(v67);
LABEL_32:
  v21 = (char *)Buffer;
LABEL_177:
  if ( Object )
    ObfDereferenceObject(Object);
  if ( v21 )
    GreDeleteFastMutex(v21);
  if ( !v15 )
  {
    if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) == 0
      || *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u )
    {
      v4 = 0;
    }
    v71 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v4 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LastError = UserGetLastError();
      v74 = W32GetUserSessionState(v73);
      LODWORD(v81) = LastError;
      WPP_RECORDER_AND_TRACE_SF_D(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v4,
        v71,
        *(_QWORD *)(v74 + 69400),
        2u,
        2u,
        0x57u,
        (__int64)&WPP_8ecb864819e83a63300ef0c5d3b8b347_Traceguids,
        v81);
    }
  }
LABEL_189:
  if ( !(unsigned int)Feature_EliminateMitRitHandoff2__private_IsEnabledDeviceUsageNoInline() )
  {
    CurrentThreadWin32Thread = PsGetCurrentThreadWin32Thread();
    v77 = W32GetUserSessionState(v76);
    ExReleaseFastResource(*(_QWORD *)(v77 + 16), CurrentThreadWin32Thread + 176);
    KeLeaveCriticalRegion();
  }
  UserSessionSwitchLeaveCritWithNonPaged();
  InputTraceLogging::ThreadLockedPerfRegion::~ThreadLockedPerfRegion((InputTraceLogging::ThreadLockedPerfRegion *)v86);
  return v15;
}
