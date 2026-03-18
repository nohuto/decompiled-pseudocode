/*
 * XREFs of NtUserDisplayConfigSetDeviceInfo @ 0x14016BDA0
 * Callers:
 *     <none>
 * Callees:
 *     ?PreAllocateForPrimaryMonitorChange@@YAHXZ @ 0x14000B480 (-PreAllocateForPrimaryMonitorChange@@YAHXZ.c)
 *     ?Win32AllocPoolWithQuotaZInitImpl@@YAPEAX_K0K@Z @ 0x1400183CC (-Win32AllocPoolWithQuotaZInitImpl@@YAPEAX_K0K@Z.c)
 *     UserSessionSwitchLeaveCritWithNonPaged @ 0x140023070 (UserSessionSwitchLeaveCritWithNonPaged.c)
 *     UserIsWddmConnectedSession @ 0x14004E070 (UserIsWddmConnectedSession.c)
 *     ??1?$Win32RawLockedNtObject@UtagDESKTOP@@@@QEAA@XZ @ 0x140097A5C (--1-$Win32RawLockedNtObject@UtagDESKTOP@@@@QEAA@XZ.c)
 *     ?UnlockWorker@?$Win32RawLockedItemBase@UDISPLAYCONFIG_DEVICE_INFO_HEADER@@$1?Win32FreePool@@YAXPEAX@Z$00$00$00@@AEAAX_N0@Z @ 0x140099168 (-UnlockWorker@-$Win32RawLockedItemBase@UDISPLAYCONFIG_DEVICE_INFO_HEADER@@$1-Win32FreePool@@YAXP.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140099660 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     DestroyDeferredUnlockObjectAssignmentList @ 0x1400A42D0 (DestroyDeferredUnlockObjectAssignmentList.c)
 *     SetLastNtError @ 0x1400BBEB4 (SetLastNtError.c)
 *     ?IsCurrentProcessDwm@@YAHXZ @ 0x1400CFC50 (-IsCurrentProcessDwm@@YAHXZ.c)
 *     _DeviceInfoTranslateStatusDefault @ 0x1400CFFC4 (_DeviceInfoTranslateStatusDefault.c)
 *     ??0?$Win32RawLockedNtObject@UtagDESKTOP@@@@QEAA@XZ @ 0x1400E5170 (--0-$Win32RawLockedNtObject@UtagDESKTOP@@@@QEAA@XZ.c)
 *     ?ContextScopeConstructor@CDisplayScenarioContextScope@@QEAAXPEBU_GUID@@II@Z @ 0x1400F78E4 (-ContextScopeConstructor@CDisplayScenarioContextScope@@QEAAXPEBU_GUID@@II@Z.c)
 *     ??1CDisplayScenarioContextScope@@QEAA@XZ @ 0x14010EA98 (--1CDisplayScenarioContextScope@@QEAA@XZ.c)
 *     DestroySharedUserCritDeferredUnlockList @ 0x14016ABF4 (DestroySharedUserCritDeferredUnlockList.c)
 *     ?HasUILimit@tagPROCESSINFO@@QEBA_NK@Z @ 0x1401A3340 (-HasUILimit@tagPROCESSINFO@@QEBA_NK@Z.c)
 *     ?CheckAccessEx@UIPrivilegeIsolation@@YA_NAEBUtagUIPI_INFO@@0_N@Z @ 0x1401A5A58 (-CheckAccessEx@UIPrivilegeIsolation@@YA_NAEBUtagUIPI_INFO@@0_N@Z.c)
 *     UserCritInternal::_anonymous_namespace_::EnterCritInternal @ 0x1401A8FE8 (UserCritInternal--_anonymous_namespace_--EnterCritInternal.c)
 *     Feature_UserJobImprovement__private_IsEnabledDeviceUsageNoInline @ 0x1401A9280 (Feature_UserJobImprovement__private_IsEnabledDeviceUsageNoInline.c)
 *     ?GetSetterTypeSize@DispConfigTypes@@YAKW4DISPLAYCONFIG_DEVICE_INFO_TYPE@@@Z @ 0x1401B7220 (-GetSetterTypeSize@DispConfigTypes@@YAKW4DISPLAYCONFIG_DEVICE_INFO_TYPE@@@Z.c)
 *     DrvDisplayConfigSetDeviceInfo @ 0x1401C9DD0 (DrvDisplayConfigSetDeviceInfo.c)
 *     RtlCopyVolatileMemory @ 0x14023F410 (RtlCopyVolatileMemory.c)
 */

__int64 __fastcall NtUserDisplayConfigSetDeviceInfo(unsigned int *Src)
{
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v2; // r12
  _DWORD *v3; // rsi
  __int64 v4; // rcx
  _QWORD *UserSessionState; // rbx
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v8; // rcx
  unsigned int v9; // ebx
  struct tagTHREADINFO *v10; // rbx
  bool v11; // r9
  bool v12; // r9
  int v13; // eax
  unsigned int *v14; // rdx
  unsigned __int64 v15; // rbx
  __int64 v16; // rcx
  struct tagTHREADINFO *BugCheckParameter4; // rax
  struct tagTHREADINFO *v18; // rax
  __int64 v19; // rcx
  __int64 v20; // rcx
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  int IsWddmConnectedSession; // eax
  int SetterTypeSize; // eax
  unsigned int v27; // eax
  _DWORD v29[4]; // [rsp+50h] [rbp-68h] BYREF
  ULONG_PTR BugCheckParameter2[2]; // [rsp+60h] [rbp-58h] BYREF
  void (__fastcall *v31)(char *); // [rsp+70h] [rbp-48h]
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v32[4]; // [rsp+80h] [rbp-38h] BYREF

  LOBYTE(v32[0]) = 0;
  CDisplayScenarioContextScope::ContextScopeConstructor(v32, 0LL, 0x1Eu, 0);
  v2 = v32[1];
  v3 = 0LL;
  Win32RawLockedNtObject<tagDESKTOP>::Win32RawLockedNtObject<tagDESKTOP>((__int64)BugCheckParameter2);
  v29[0] = 0x2000;
  v29[1] = -1;
  v29[2] = 0;
  UserSessionState = (_QWORD *)W32GetUserSessionState(v4);
  v6 = UserCritInternal::_anonymous_namespace_::EnterCritInternal(
         UserSessionState,
         0LL,
         0LL,
         _lambda_63b61c2369133a205197eda5bd671ee7_::_lambda_invoker_cdecl_);
  UserSessionState[3] = v6;
  if ( v6 )
  {
    DestroySharedUserCritDeferredUnlockList((__int64)(UserSessionState + 2468));
    DestroyDeferredUnlockObjectAssignmentList(UserSessionState + 2475);
    DestroyDeferredUnlockObjectAssignmentList(UserSessionState + 2473);
  }
  if ( !*(_DWORD *)(W32GetUserGdiSessionState(v7) + 32) )
    goto LABEL_4;
  v10 = PtiCurrent(v8);
  if ( (unsigned int)Feature_UserJobImprovement__private_IsEnabledDeviceUsageNoInline() )
  {
    if ( tagPROCESSINFO::HasUILimit(*((tagPROCESSINFO **)v10 + 58), 0x10u)
      || !UIPrivilegeIsolation::CheckAccessEx(
            (UIPrivilegeIsolation *)(*((_QWORD *)v10 + 58) + 872LL),
            (const struct tagUIPI_INFO *)v29,
            0LL,
            v12) )
    {
      goto LABEL_41;
    }
  }
  else
  {
    if ( (_InterlockedCompareExchange((volatile signed __int32 *)v10 + 132, 0, 0) & 0x20000000) != 0 )
      v13 = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)v10 + 58) + 760LL) + 32LL) & 0x10;
    else
      v13 = 0;
    if ( v13
      || !UIPrivilegeIsolation::CheckAccessEx(
            (UIPrivilegeIsolation *)(*((_QWORD *)v10 + 58) + 872LL),
            (const struct tagUIPI_INFO *)v29,
            0LL,
            v11) )
    {
      v3 = 0LL;
      goto LABEL_41;
    }
  }
  v14 = Src + 1;
  if ( (unsigned __int64)(Src + 1) >= MmUserProbeAddress )
    v14 = (unsigned int *)MmUserProbeAddress;
  v15 = *v14;
  if ( (unsigned int)v15 < 0x14 )
  {
    v9 = -1073741789;
    v3 = 0LL;
    goto LABEL_42;
  }
  v3 = (_DWORD *)Win32AllocPoolWithQuotaZInitImpl(MmUserProbeAddress, v15, 0x63447355u);
  if ( !v3 )
    ExRaiseStatus(-1073741801);
  if ( v31 != (void (__fastcall *)(char *))-1LL )
  {
    BugCheckParameter4 = PtiCurrent(v16);
    KeBugCheckEx(0x164u, 0x12uLL, (ULONG_PTR)BugCheckParameter2, (ULONG_PTR)v3, (ULONG_PTR)BugCheckParameter4);
  }
  v18 = PtiCurrent(v16);
  BugCheckParameter2[0] = *((_QWORD *)v18 + 48);
  *((_QWORD *)v18 + 48) = BugCheckParameter2;
  BugCheckParameter2[1] = (ULONG_PTR)v3;
  v31 = GreDeleteFastMutex;
  if ( ((PsGetCurrentProcessWow64Process() == 0 ? 3 : 0) & (unsigned __int8)Src) != 0 )
    ExRaiseDatatypeMisalignment();
  RtlCopyVolatileMemory(v3, Src, v15);
  v3[1] = v15;
  if ( *(_DWORD *)(W32GetUserGdiSessionState(v19) + 36) )
  {
LABEL_4:
    v9 = -1073741823;
    goto LABEL_42;
  }
  if ( *v3 != -19 )
  {
    IsWddmConnectedSession = UserIsWddmConnectedSession(v20);
    goto LABEL_28;
  }
  if ( !gbOSTestSigningEnabled )
  {
    if ( !(unsigned __int8)RtlIsMultiSessionSku() )
      goto LABEL_41;
    IsWddmConnectedSession = IsCurrentProcessDwm(v22, v21, v23, v24);
LABEL_28:
    if ( IsWddmConnectedSession )
      goto LABEL_29;
LABEL_41:
    v9 = -1073741790;
    goto LABEL_42;
  }
LABEL_29:
  SetterTypeSize = DispConfigTypes::GetSetterTypeSize((unsigned int)*v3);
  if ( SetterTypeSize && v3[1] == SetterTypeSize )
  {
    if ( (unsigned int)PreAllocateForPrimaryMonitorChange() )
    {
      v27 = DrvDisplayConfigSetDeviceInfo(v3, v2);
      v9 = v27;
      if ( v27 == -2147483643 )
      {
        v9 = -1073741789;
      }
      else if ( v27 != -1073741789 )
      {
        v9 = DeviceInfoTranslateStatusDefault(*v3, v27);
      }
    }
    else
    {
      v9 = -1073741801;
    }
  }
  else
  {
    v9 = -1073741811;
  }
LABEL_42:
  if ( v3 )
    Win32RawLockedItemBase<DISPLAYCONFIG_DEVICE_INFO_HEADER,&void Win32FreePool(void *),1,1,1>::UnlockWorker(
      (ULONG_PTR)BugCheckParameter2,
      0);
  UserSessionSwitchLeaveCritWithNonPaged();
  Win32RawLockedNtObject<tagDESKTOP>::~Win32RawLockedNtObject<tagDESKTOP>((__int64)BugCheckParameter2);
  CDisplayScenarioContextScope::~CDisplayScenarioContextScope(v32);
  return v9;
}
