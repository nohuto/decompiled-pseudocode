/*
 * XREFs of NtUserInjectGenericHidInput @ 0x14011CB70
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x140042EA4 (UserSetLastError.c)
 *     RawInputManagerDeviceObjectResolveHandle @ 0x140053560 (RawInputManagerDeviceObjectResolveHandle.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x14005DD80 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x14005DE1C (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     ??0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z @ 0x140060B94 (--0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z.c)
 *     ??1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ @ 0x140062674 (--1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ.c)
 *     WPP_RECORDER_AND_TRACE_SF_Dd @ 0x14009782C (WPP_RECORDER_AND_TRACE_SF_Dd.c)
 *     WPP_RECORDER_AND_TRACE_SF_D @ 0x1400C0560 (WPP_RECORDER_AND_TRACE_SF_D.c)
 *     WPP_RECORDER_AND_TRACE_SF_qqd @ 0x1400EDAF4 (WPP_RECORDER_AND_TRACE_SF_qqd.c)
 *     RIMIDE_InjectGenericHidInput @ 0x140121F98 (RIMIDE_InjectGenericHidInput.c)
 *     ?Enter@EnterLeaveCritMitRitHandOffHazard@@AEAAXXZ @ 0x14014EDA0 (-Enter@EnterLeaveCritMitRitHandOffHazard@@AEAAXXZ.c)
 *     UserGetLastError @ 0x140155E98 (UserGetLastError.c)
 *     InputExtensibilityCalloutGuard @ 0x140187150 (InputExtensibilityCalloutGuard.c)
 *     ApiSetEditionIsRIMInjectionBlocked @ 0x140192440 (ApiSetEditionIsRIMInjectionBlocked.c)
 *     Feature_EliminateMitRitHandoff2__private_IsEnabledDeviceUsageNoInline @ 0x1401A3C28 (Feature_EliminateMitRitHandoff2__private_IsEnabledDeviceUsageNoInline.c)
 */

__int64 __fastcall NtUserInjectGenericHidInput(char *a1, __int64 a2, unsigned int a3)
{
  char v6; // si
  char v7; // bl
  char v8; // di
  __int64 UserSessionState; // rax
  bool v10; // bl
  __int64 v11; // rax
  int v12; // r8d
  int v13; // edx
  unsigned int v14; // edi
  bool v15; // bl
  bool v16; // di
  __int64 v17; // rax
  int v18; // r8d
  int v19; // edx
  int v20; // eax
  __int64 v21; // rcx
  _DWORD *v22; // rbx
  char v23; // r14
  bool v24; // di
  bool v25; // bp
  __int64 v26; // rax
  int v27; // r8d
  int v28; // edx
  ULONG v29; // ecx
  bool v30; // di
  bool v31; // bp
  __int64 v32; // rax
  int v33; // edx
  int v34; // r8d
  bool v35; // di
  bool v36; // bp
  __int64 v37; // rax
  int v38; // r8d
  int v39; // edx
  int v40; // r15d
  char v41; // di
  char v42; // r14
  __int64 v43; // rax
  __int64 v44; // rcx
  int v45; // r14d
  bool v46; // di
  bool v47; // bp
  __int64 v48; // rax
  int v49; // r8d
  int v50; // edx
  char v51; // bp
  int LastError; // ebx
  __int64 v53; // rcx
  __int64 v54; // rax
  __int64 CurrentThreadWin32Thread; // rbx
  __int64 v56; // rcx
  __int64 v57; // rax
  __int16 v59; // [rsp+30h] [rbp-68h]
  __int64 v60; // [rsp+40h] [rbp-58h]
  __int64 v61; // [rsp+48h] [rbp-50h]
  PVOID Object; // [rsp+60h] [rbp-38h] BYREF
  __int64 *v63; // [rsp+68h] [rbp-30h] BYREF
  char v64; // [rsp+B8h] [rbp+20h] BYREF

  v6 = 1;
  v7 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
  v8 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v7 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    UserSessionState = W32GetUserSessionState(a1);
    WPP_RECORDER_AND_TRACE_SF_qqd(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v7,
      v8,
      *(_QWORD *)(UserSessionState + 69400),
      4u,
      2u,
      0xEu,
      (__int64)&WPP_8ecb864819e83a63300ef0c5d3b8b347_Traceguids,
      a1,
      a2,
      a3);
  }
  InputTraceLogging::ThreadLockedPerfRegion::ThreadLockedPerfRegion(&v63, "InjectGenericHidInput", 0LL);
  v64 = 0;
  EnterLeaveCritMitRitHandOffHazard::Enter((EnterLeaveCritMitRitHandOffHazard *)&v64);
  InputExtensibilityCalloutGuard();
  Object = 0LL;
  if ( v64 )
  {
    if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) == 0
      || *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u )
    {
      v6 = 0;
    }
    v10 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v6 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v11 = W32GetUserSessionState(WPP_GLOBAL_Control);
      LOBYTE(v12) = v10;
      LOBYTE(v13) = v6;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v13,
        v12,
        *(_QWORD *)(v11 + 69400),
        2,
        2,
        15,
        (__int64)&WPP_8ecb864819e83a63300ef0c5d3b8b347_Traceguids);
    }
    v14 = 0;
    UserSetLastError(5);
    goto LABEL_111;
  }
  if ( !a3 )
  {
    v15 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
       && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) != 0
       && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 2u;
    v16 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v15 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v17 = W32GetUserSessionState(WPP_GLOBAL_Control);
      LOBYTE(v18) = v16;
      LOBYTE(v19) = v15;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v19,
        v18,
        *(_QWORD *)(v17 + 69400),
        2,
        2,
        16,
        (__int64)&WPP_8ecb864819e83a63300ef0c5d3b8b347_Traceguids);
    }
    v14 = 0;
    UserSetLastError(87);
LABEL_104:
    if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) == 0
      || *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u )
    {
      v6 = 0;
    }
    v51 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v6 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LastError = UserGetLastError();
      v54 = W32GetUserSessionState(v53);
      LODWORD(v60) = LastError;
      WPP_RECORDER_AND_TRACE_SF_D(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v6,
        v51,
        *(_QWORD *)(v54 + 69400),
        2u,
        2u,
        0x18u,
        (__int64)&WPP_8ecb864819e83a63300ef0c5d3b8b347_Traceguids,
        v60);
    }
    goto LABEL_111;
  }
  v20 = RawInputManagerDeviceObjectResolveHandle(a1, 3u, 1, &Object);
  v22 = Object;
  v23 = v20;
  if ( v20 < 0 )
  {
    v24 = 0;
    if ( WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control )
    {
      v21 = *((unsigned int *)WPP_GLOBAL_Control + 11);
      if ( (v21 & 2) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 2u )
        v24 = 1;
    }
    v25 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v24 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v26 = W32GetUserSessionState(v21);
      LOBYTE(v27) = v25;
      LOBYTE(v28) = v24;
      WPP_RECORDER_AND_TRACE_SF_d(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v28,
        v27,
        *(_QWORD *)(v26 + 69400),
        2,
        2,
        17,
        (__int64)&WPP_8ecb864819e83a63300ef0c5d3b8b347_Traceguids,
        v23);
    }
    v29 = 6;
    goto LABEL_38;
  }
  if ( (*((_DWORD *)Object + 60) & 0x2000) == 0 )
  {
    v30 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
       && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) != 0
       && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 2u;
    v31 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( !v30 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_50;
    v32 = W32GetUserSessionState(WPP_GLOBAL_Control);
    v59 = 18;
LABEL_49:
    LOBYTE(v34) = v31;
    LOBYTE(v33) = v30;
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v33,
      v34,
      *(_QWORD *)(v32 + 69400),
      2,
      2,
      v59,
      (__int64)&WPP_8ecb864819e83a63300ef0c5d3b8b347_Traceguids);
LABEL_50:
    v29 = 87;
LABEL_38:
    v14 = 0;
LABEL_39:
    UserSetLastError(v29);
    goto LABEL_101;
  }
  if ( (unsigned int)ApiSetEditionIsRIMInjectionBlocked((char *)Object + 72) )
  {
    v35 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
       && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) != 0
       && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 2u;
    v36 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v35 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v37 = W32GetUserSessionState(WPP_GLOBAL_Control);
      LOBYTE(v38) = v36;
      LOBYTE(v39) = v35;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v39,
        v38,
        *(_QWORD *)(v37 + 69400),
        2,
        2,
        19,
        (__int64)&WPP_8ecb864819e83a63300ef0c5d3b8b347_Traceguids);
    }
    v29 = 5;
    goto LABEL_38;
  }
  if ( v22[30] != 2 )
  {
    v30 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
       && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) != 0
       && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 2u;
    v31 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( !v30 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_50;
    v32 = W32GetUserSessionState(WPP_GLOBAL_Control);
    v59 = 20;
    goto LABEL_49;
  }
  if ( (v22[64] & 0x80u) != 0 && *(_DWORD *)(*((_QWORD *)v22 + 66) + 364LL) != 3 )
  {
    v30 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
       && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) != 0
       && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 2u;
    v31 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( !v30 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_50;
    v32 = W32GetUserSessionState(WPP_GLOBAL_Control);
    v59 = 21;
    goto LABEL_49;
  }
  v40 = *(unsigned __int16 *)(*((_QWORD *)v22 + 64) + 44LL);
  if ( v40 != a3 )
  {
    v41 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
       && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) != 0
       && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 2u;
    v42 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v41 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v43 = W32GetUserSessionState(WPP_GLOBAL_Control);
      LODWORD(v61) = v40;
      LODWORD(v60) = a3;
      WPP_RECORDER_AND_TRACE_SF_Dd(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v41,
        v42,
        *(_QWORD *)(v43 + 69400),
        2u,
        2u,
        0x16u,
        (__int64)&WPP_8ecb864819e83a63300ef0c5d3b8b347_Traceguids,
        v60,
        v61);
    }
    goto LABEL_50;
  }
  v45 = RIMIDE_InjectGenericHidInput(v22, 1LL, a2, a3);
  if ( v45 < 0 )
  {
    v46 = 0;
    if ( WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control )
    {
      v44 = *((unsigned int *)WPP_GLOBAL_Control + 11);
      if ( (v44 & 2) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 2u )
        v46 = 1;
    }
    v47 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v46 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v48 = W32GetUserSessionState(v44);
      LOBYTE(v49) = v47;
      LOBYTE(v50) = v46;
      WPP_RECORDER_AND_TRACE_SF_d(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v50,
        v49,
        *(_QWORD *)(v48 + 69400),
        2,
        2,
        23,
        (__int64)&WPP_8ecb864819e83a63300ef0c5d3b8b347_Traceguids,
        v45);
    }
    v14 = 0;
    v29 = RtlNtStatusToDosError(v45);
    goto LABEL_39;
  }
  v14 = 1;
LABEL_101:
  if ( v22 )
    ObfDereferenceObject(v22);
  if ( !v14 )
    goto LABEL_104;
LABEL_111:
  if ( !(unsigned int)Feature_EliminateMitRitHandoff2__private_IsEnabledDeviceUsageNoInline() )
  {
    CurrentThreadWin32Thread = PsGetCurrentThreadWin32Thread();
    v57 = W32GetUserSessionState(v56);
    ExReleaseFastResource(*(_QWORD *)(v57 + 16), CurrentThreadWin32Thread + 176);
    KeLeaveCriticalRegion();
  }
  InputTraceLogging::ThreadLockedPerfRegion::~ThreadLockedPerfRegion((InputTraceLogging::ThreadLockedPerfRegion *)&v63);
  return v14;
}
