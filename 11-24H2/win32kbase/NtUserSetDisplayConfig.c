/*
 * XREFs of NtUserSetDisplayConfig @ 0x140170CE0
 * Callers:
 *     <none>
 * Callees:
 *     ?Win32AllocPoolWithQuotaZInitImpl@@YAPEAX_K0K@Z @ 0x1400183CC (-Win32AllocPoolWithQuotaZInitImpl@@YAPEAX_K0K@Z.c)
 *     UserSessionSwitchLeaveCritWithNonPaged @ 0x140023070 (UserSessionSwitchLeaveCritWithNonPaged.c)
 *     UserIsWddmConnectedSession @ 0x14004E070 (UserIsWddmConnectedSession.c)
 *     ??1?$Win32RawLockedNtObject@UtagDESKTOP@@@@QEAA@XZ @ 0x140097A5C (--1-$Win32RawLockedNtObject@UtagDESKTOP@@@@QEAA@XZ.c)
 *     ?UnlockWorker@?$Win32RawLockedItemBase@UtagDESKTOP@@$1?UserDereferenceObject@@YAXPEAX@Z$00$00$00@@AEAAX_N0@Z @ 0x140099114 (-UnlockWorker@-$Win32RawLockedItemBase@UtagDESKTOP@@$1-UserDereferenceObject@@YAXPEAX@Z$00$00$00.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140099660 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     DestroyDeferredUnlockObjectAssignmentList @ 0x1400A42D0 (DestroyDeferredUnlockObjectAssignmentList.c)
 *     SetLastNtError @ 0x1400BBEB4 (SetLastNtError.c)
 *     ??0?$Win32RawLockedNtObject@UtagDESKTOP@@@@QEAA@XZ @ 0x1400E5170 (--0-$Win32RawLockedNtObject@UtagDESKTOP@@@@QEAA@XZ.c)
 *     LogDiagSDC @ 0x1400E51A0 (LogDiagSDC.c)
 *     _QdcSdcTranslateStatusDefault @ 0x1400ECD78 (_QdcSdcTranslateStatusDefault.c)
 *     ?ContextScopeConstructor@CDisplayScenarioContextScope@@QEAAXPEBU_GUID@@II@Z @ 0x1400F78E4 (-ContextScopeConstructor@CDisplayScenarioContextScope@@QEAAXPEBU_GUID@@II@Z.c)
 *     ??1CDisplayScenarioContextScope@@QEAA@XZ @ 0x14010EA98 (--1CDisplayScenarioContextScope@@QEAA@XZ.c)
 *     DrvNeedDisplayStateCheck @ 0x14014B4B4 (DrvNeedDisplayStateCheck.c)
 *     DrvIsDisplayStateCurrent @ 0x140155A10 (DrvIsDisplayStateCurrent.c)
 *     xxxUserSetDisplayConfig @ 0x1401636C0 (xxxUserSetDisplayConfig.c)
 *     DestroySharedUserCritDeferredUnlockList @ 0x14016ABF4 (DestroySharedUserCritDeferredUnlockList.c)
 *     ?HasUILimit@tagPROCESSINFO@@QEBA_NK@Z @ 0x1401A3340 (-HasUILimit@tagPROCESSINFO@@QEBA_NK@Z.c)
 *     ?CheckAccessEx@UIPrivilegeIsolation@@YA_NAEBUtagUIPI_INFO@@0_N@Z @ 0x1401A5A58 (-CheckAccessEx@UIPrivilegeIsolation@@YA_NAEBUtagUIPI_INFO@@0_N@Z.c)
 *     UserCritInternal::_anonymous_namespace_::EnterCritInternal @ 0x1401A8FE8 (UserCritInternal--_anonymous_namespace_--EnterCritInternal.c)
 *     Feature_UserJobImprovement__private_IsEnabledDeviceUsageNoInline @ 0x1401A9280 (Feature_UserJobImprovement__private_IsEnabledDeviceUsageNoInline.c)
 *     __security_check_cookie @ 0x14023F3B0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 *     RtlCopyVolatileMemory @ 0x14023F410 (RtlCopyVolatileMemory.c)
 */

__int64 __fastcall NtUserSetDisplayConfig(unsigned int a1, __int64 *a2, unsigned int a3, __int64 a4, __int64 a5)
{
  __int64 v7; // r13
  __int64 v8; // rbx
  __int64 v9; // r12
  signed int v10; // ebx
  __int64 v11; // rcx
  _QWORD *UserSessionState; // rsi
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rcx
  unsigned int v16; // esi
  unsigned int v17; // r13d
  __int64 v18; // rax
  struct tagTHREADINFO *v19; // rsi
  __int64 *v20; // rdx
  __int64 v21; // rcx
  bool v22; // r9
  bool v23; // r9
  int v24; // eax
  unsigned int v25; // r12d
  unsigned int v26; // esi
  __int64 v27; // rcx
  __int64 v28; // rcx
  ULONG_PTR v29; // r13
  struct tagTHREADINFO *BugCheckParameter4; // rax
  struct tagTHREADINFO *v31; // rax
  __int64 *v32; // r13
  __int64 v33; // rcx
  int v34; // eax
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 (*v37)(void); // rax
  int v38; // eax
  void (*v39)(void); // rax
  __int64 v42; // [rsp+68h] [rbp-120h]
  int v43; // [rsp+70h] [rbp-118h]
  struct DISPLAYCONFIG_PATH_INFO_INTERNAL *v44; // [rsp+80h] [rbp-108h]
  unsigned int v45; // [rsp+8Ch] [rbp-FCh]
  _DWORD v47[4]; // [rsp+B8h] [rbp-D0h] BYREF
  void *v48; // [rsp+C8h] [rbp-C0h]
  ULONG_PTR BugCheckParameter2[2]; // [rsp+D0h] [rbp-B8h] BYREF
  void (__fastcall *v50)(char *); // [rsp+E0h] [rbp-A8h]
  __int64 v51; // [rsp+F0h] [rbp-98h]
  __int64 v52; // [rsp+F8h] [rbp-90h]
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v53[4]; // [rsp+100h] [rbp-88h] BYREF
  struct _GUID v54; // [rsp+120h] [rbp-68h] BYREF
  __int64 v55; // [rsp+130h] [rbp-58h]
  int v56; // [rsp+138h] [rbp-50h]

  v7 = a1;
  v52 = a4;
  v51 = a5;
  v47[0] = 0x2000;
  v47[1] = -1;
  v47[2] = 0;
  v44 = 0LL;
  Win32RawLockedNtObject<tagDESKTOP>::Win32RawLockedNtObject<tagDESKTOP>((__int64)BugCheckParameter2);
  v45 = 0;
  v54 = 0LL;
  v55 = 0LL;
  v56 = 0;
  v8 = MEMORY[0xFFFFF78000000320];
  v53[2] = (struct _DXGK_DISPLAY_SCENARIO_CONTEXT *)MEMORY[0xFFFFF78000000320];
  v9 = v8 * KeQueryTimeIncrement();
  v42 = v9;
  v10 = -1073741811;
  UserSessionState = (_QWORD *)W32GetUserSessionState(v11);
  v13 = UserCritInternal::_anonymous_namespace_::EnterCritInternal(
          UserSessionState,
          0LL,
          0LL,
          _lambda_63b61c2369133a205197eda5bd671ee7_::_lambda_invoker_cdecl_);
  UserSessionState[3] = v13;
  if ( v13 )
  {
    DestroySharedUserCritDeferredUnlockList((__int64)(UserSessionState + 2468));
    DestroyDeferredUnlockObjectAssignmentList(UserSessionState + 2475);
    DestroyDeferredUnlockObjectAssignmentList(UserSessionState + 2473);
  }
  if ( *(_DWORD *)(W32GetUserGdiSessionState(v14) + 32) )
  {
    v19 = PtiCurrent(v15);
    if ( (unsigned int)Feature_UserJobImprovement__private_IsEnabledDeviceUsageNoInline() )
    {
      if ( tagPROCESSINFO::HasUILimit(*((tagPROCESSINFO **)v19 + 58), 0x10u)
        || !UIPrivilegeIsolation::CheckAccessEx(
              (UIPrivilegeIsolation *)(*((_QWORD *)v19 + 58) + 872LL),
              (const struct tagUIPI_INFO *)v47,
              0LL,
              v23) )
      {
        v10 = -1073741790;
        v16 = -2147483647;
        goto LABEL_5;
      }
    }
    else
    {
      if ( (_InterlockedCompareExchange((volatile signed __int32 *)v19 + 132, 0, 0) & 0x20000000) != 0 )
      {
        v21 = *(_QWORD *)(*((_QWORD *)v19 + 58) + 760LL);
        v24 = *(_DWORD *)(v21 + 32) & 0x10;
      }
      else
      {
        v24 = 0;
      }
      if ( v24
        || !UIPrivilegeIsolation::CheckAccessEx(
              (UIPrivilegeIsolation *)(*((_QWORD *)v19 + 58) + 872LL),
              (const struct tagUIPI_INFO *)v47,
              0LL,
              v22) )
      {
        v10 = -1073741790;
        v16 = -2147483647;
        v17 = a3;
        v18 = v9;
        goto LABEL_65;
      }
    }
    if ( (unsigned int)v7 > 0x400 )
    {
      v16 = -2147483646;
      goto LABEL_5;
    }
    v48 = 0LL;
    v25 = 0;
    if ( (_DWORD)v7 )
    {
      if ( 216 * v7 && ((PsGetCurrentProcessWow64Process() == 0 ? 3 : 0) & (unsigned __int8)a2) != 0 )
        ExRaiseDatatypeMisalignment();
      v26 = 0;
      v27 = 0LL;
      v20 = a2;
      while ( (unsigned int)v27 < (unsigned int)v7 )
      {
        if ( *v20 < 0 )
          ++v26;
        v27 = (unsigned int)(v27 + 1);
        v20 += 27;
      }
      if ( v26 )
      {
        v29 = Win32AllocPoolWithQuotaZInitImpl(v27, 216LL * v26, 0x63447355u);
        v44 = (struct DISPLAYCONFIG_PATH_INFO_INTERNAL *)v29;
        if ( !v29 )
          ExRaiseStatus(-1073741801);
        if ( v50 != (void (__fastcall *)(char *))-1LL )
        {
          BugCheckParameter4 = PtiCurrent(v28);
          KeBugCheckEx(0x164u, 0x12uLL, (ULONG_PTR)BugCheckParameter2, v29, (ULONG_PTR)BugCheckParameter4);
        }
        v31 = PtiCurrent(v28);
        BugCheckParameter2[0] = *((_QWORD *)v31 + 48);
        *((_QWORD *)v31 + 48) = BugCheckParameter2;
        BugCheckParameter2[1] = v29;
        v50 = GreDeleteFastMutex;
      }
      v32 = (__int64 *)v44;
      v48 = v44;
      v21 = 0LL;
      while ( 1 )
      {
        v43 = v21;
        if ( (unsigned int)v21 >= a1 )
          break;
        if ( *a2 < 0 )
        {
          if ( v25 >= v26 )
          {
            v16 = -2147483645;
            v17 = a3;
            v18 = v42;
            goto LABEL_65;
          }
          RtlCopyVolatileMemory(v32, a2, 0xD8uLL);
          if ( *v32 >= 0 )
          {
            v10 = -1073741790;
            v16 = -2147483644;
            v17 = a3;
            v18 = v42;
            goto LABEL_65;
          }
          ++v25;
          v32 += 27;
          v48 = v32;
          LODWORD(v21) = v43;
        }
        v21 = (unsigned int)(v21 + 1);
        a2 += 27;
      }
      if ( v25 != v26 )
      {
        v16 = -2147483645;
        v17 = a3;
        v18 = v42;
        goto LABEL_65;
      }
    }
    v45 = v25;
    if ( a4 )
    {
      if ( ((PsGetCurrentProcessWow64Process() == 0 ? 3 : 0) & (unsigned __int8)a4) != 0 )
        ExRaiseDatatypeMisalignment();
      v21 = a4 + 28;
      v54 = *(struct _GUID *)a4;
      v55 = *(_QWORD *)(a4 + 16);
      v56 = *(_DWORD *)(a4 + 24);
    }
    if ( *(_DWORD *)(W32GetUserGdiSessionState(v21) + 36) )
    {
      v10 = -1073741823;
      v16 = -2147483643;
LABEL_49:
      v17 = a3;
      v18 = v42;
      goto LABEL_66;
    }
    if ( !(unsigned int)UserIsWddmConnectedSession(v33) )
    {
      v10 = -1073741790;
      v16 = -2147483642;
      goto LABEL_49;
    }
    if ( a4 && (unsigned int)DrvNeedDisplayStateCheck(&v54) && !(unsigned int)DrvIsDisplayStateCurrent(1LL, &v54) )
    {
      v10 = -1071774921;
      v16 = -2147483641;
      v17 = a3;
      v18 = v42;
      goto LABEL_66;
    }
    LOBYTE(v53[0]) = 0;
    CDisplayScenarioContextScope::ContextScopeConstructor(v53, (const struct _GUID *)&v54.Data4[4], 0x1Du, 0);
    v16 = 18;
    v17 = a3;
    v34 = xxxUserSetDisplayConfig(v25, v44, a3, 0, 0LL, 1, v51, 0LL, 0LL, v53[1], 0LL);
    v10 = v34;
    if ( v34 == -2147483643 )
    {
      v10 = -1073741789;
    }
    else if ( v34 != -1073741789 && (a3 & 0x10000) == 0 )
    {
      if ( v34 == -1071774970 )
        v10 = -2147023286;
      else
        v10 = QdcSdcTranslateStatusDefault(v34);
    }
    CDisplayScenarioContextScope::~CDisplayScenarioContextScope(v53);
    v18 = v42;
LABEL_65:
    if ( v16 == 18 )
      goto LABEL_67;
    goto LABEL_66;
  }
  v10 = -1073741823;
  v16 = 0x80000000;
LABEL_5:
  v17 = a3;
  v18 = v9;
LABEL_66:
  LogDiagSDC(v45, (__int64)v44, v17, v10, 0, v16, v18, 0, 0LL);
LABEL_67:
  if ( v10 < 0 )
  {
    if ( a4 && (unsigned int)DrvNeedDisplayStateCheck(&v54) && !(unsigned int)DrvIsDisplayStateCurrent(0LL, &v54) )
      v10 = -1071774921;
  }
  else
  {
    v36 = *(_QWORD *)(W32GetWin32kBaseApiSetTable(v21, v20) + 48);
    v37 = *(__int64 (**)(void))(v36 + 3976);
    if ( v37 )
      v38 = v37();
    else
      v38 = -1073741637;
    if ( v38 >= 0 )
    {
      v39 = *(void (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v36, v35) + 48) + 3984LL);
      if ( v39 )
        v39();
    }
  }
  if ( v44 )
    Win32RawLockedItemBase<tagDESKTOP,&void UserDereferenceObject(void *),1,1,1>::UnlockWorker(
      (ULONG_PTR)BugCheckParameter2,
      0);
  UserSessionSwitchLeaveCritWithNonPaged();
  Win32RawLockedNtObject<tagDESKTOP>::~Win32RawLockedNtObject<tagDESKTOP>((__int64)BugCheckParameter2);
  return (unsigned int)v10;
}
