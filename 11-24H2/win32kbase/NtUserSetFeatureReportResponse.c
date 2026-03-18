/*
 * XREFs of NtUserSetFeatureReportResponse @ 0x1401BCE90
 * Callers:
 *     <none>
 * Callees:
 *     ?Win32AllocPoolWithQuotaZInitImpl@@YAPEAX_K0K@Z @ 0x1400183CC (-Win32AllocPoolWithQuotaZInitImpl@@YAPEAX_K0K@Z.c)
 *     GreDeleteFastMutex @ 0x14001BF40 (GreDeleteFastMutex.c)
 *     UserSessionSwitchLeaveCritWithNonPaged @ 0x140023070 (UserSessionSwitchLeaveCritWithNonPaged.c)
 *     UserSetLastError @ 0x140042EA4 (UserSetLastError.c)
 *     RawInputManagerDeviceObjectResolveHandle @ 0x140053560 (RawInputManagerDeviceObjectResolveHandle.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x14005DD80 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     DestroyDeferredUnlockObjectAssignmentList @ 0x1400A42D0 (DestroyDeferredUnlockObjectAssignmentList.c)
 *     SetLastNtError @ 0x1400BBEB4 (SetLastNtError.c)
 *     ?Enter@EnterLeaveCritMitRitHandOffHazard@@AEAAXXZ @ 0x14014EDA0 (-Enter@EnterLeaveCritMitRitHandOffHazard@@AEAAXXZ.c)
 *     DestroySharedUserCritDeferredUnlockList @ 0x14016ABF4 (DestroySharedUserCritDeferredUnlockList.c)
 *     Feature_EliminateMitRitHandoff2__private_IsEnabledDeviceUsageNoInline @ 0x1401A3C28 (Feature_EliminateMitRitHandoff2__private_IsEnabledDeviceUsageNoInline.c)
 *     UserCritInternal::_anonymous_namespace_::EnterCritInternal @ 0x1401A8FE8 (UserCritInternal--_anonymous_namespace_--EnterCritInternal.c)
 *     UserCritInternal::_anonymous_namespace_::IsValidGuiContext @ 0x1401A9084 (UserCritInternal--_anonymous_namespace_--IsValidGuiContext.c)
 *     RIMIDECheckInjectionCapability @ 0x1401E4DE0 (RIMIDECheckInjectionCapability.c)
 *     RIMIDEResetPointerDeviceMaxCount @ 0x1401E6C48 (RIMIDEResetPointerDeviceMaxCount.c)
 *     memmove @ 0x14023FA40 (memmove.c)
 */

__int64 __fastcall NtUserSetFeatureReportResponse(char *a1, char *a2, unsigned int a3)
{
  __int64 v3; // r14
  _QWORD *UserSessionState; // rsi
  int v6; // edi
  __int64 v7; // rax
  bool v8; // si
  int v9; // edx
  int v10; // r8d
  __int64 v11; // r9
  int v12; // ecx
  __int64 v13; // rsi
  char *v14; // rcx
  char *v15; // r13
  int v16; // eax
  PVOID v17; // rsi
  char *v18; // rcx
  _DWORD *v19; // r15
  unsigned int v20; // r12d
  int *v21; // r14
  int v22; // edx
  int v23; // r8d
  int v24; // eax
  __int64 CurrentThreadWin32Thread; // rbx
  __int64 v26; // rcx
  __int64 v27; // rax
  __int16 v29; // [rsp+30h] [rbp-78h]
  PVOID Object; // [rsp+50h] [rbp-58h] BYREF
  PVOID Buffer; // [rsp+58h] [rbp-50h]
  char v34; // [rsp+C8h] [rbp+20h] BYREF

  v3 = a3;
  Object = 0LL;
  Buffer = 0LL;
  UserSessionState = (_QWORD *)W32GetUserSessionState(a1);
  v6 = 1;
  v7 = UserCritInternal::_anonymous_namespace_::EnterCritInternal(
         UserSessionState,
         1,
         0,
         (void (__fastcall *)(_QWORD, __int64))_lambda_63b61c2369133a205197eda5bd671ee7_::_lambda_invoker_cdecl_);
  UserSessionState[3] = v7;
  if ( v7 && UserCritInternal::_anonymous_namespace_::IsValidGuiContext(v7) )
  {
    DestroySharedUserCritDeferredUnlockList((__int64)(UserSessionState + 2468));
    DestroyDeferredUnlockObjectAssignmentList(UserSessionState + 2475);
    DestroyDeferredUnlockObjectAssignmentList(UserSessionState + 2473);
  }
  v34 = 0;
  EnterLeaveCritMitRitHandOffHazard::Enter((Enter *)&v34);
  Feature_EliminateMitRitHandoff2__private_IsEnabledDeviceUsageNoInline();
  if ( v34 )
  {
    if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) == 0
      || *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u )
    {
      LOBYTE(v6) = 0;
    }
    v8 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( !(_BYTE)v6 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_13;
    v11 = *(_QWORD *)(W32GetUserSessionState(&WPP_RECORDER_INITIALIZED) + 69400);
    v29 = 44;
LABEL_12:
    LOBYTE(v10) = v8;
    LOBYTE(v9) = v6;
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v9,
      v10,
      v11,
      2,
      2,
      v29,
      (__int64)&WPP_8ecb864819e83a63300ef0c5d3b8b347_Traceguids);
LABEL_13:
    v12 = 5;
LABEL_61:
    v6 = 0;
    UserSetLastError(v12);
    goto LABEL_62;
  }
  if ( (unsigned int)(v3 - 1) > 6 || (v13 = 12 * v3, (unsigned __int64)(12 * v3) > 0xFFFFFFFF) )
  {
    v12 = 87;
    goto LABEL_61;
  }
  if ( !(unsigned int)RIMIDECheckInjectionCapability() )
  {
    if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) == 0
      || *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u )
    {
      LOBYTE(v6) = 0;
    }
    v8 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( !(_BYTE)v6 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_13;
    v11 = *(_QWORD *)(W32GetUserSessionState(&WPP_RECORDER_INITIALIZED) + 69400);
    v29 = 45;
    goto LABEL_12;
  }
  if ( v13 )
  {
    if ( ((unsigned __int8)a2 & (PsGetCurrentProcessWow64Process() == 0 ? 3 : 0)) != 0 )
      ExRaiseDatatypeMisalignment();
    v14 = (char *)MmUserProbeAddress;
    if ( (unsigned __int64)&a2[v13] <= MmUserProbeAddress )
    {
      v14 = &a2[v13];
      if ( &a2[v13] >= a2 )
        goto LABEL_31;
      v14 = (char *)MmUserProbeAddress;
    }
    LOBYTE(v14) = **(_BYTE **)v14;
  }
LABEL_31:
  Buffer = (PVOID)Win32AllocPoolWithQuotaZInitImpl((__int64)v14, (unsigned int)v13, 0x74697355u);
  if ( !Buffer )
    ExRaiseStatus(-1073741801);
  v15 = (char *)Buffer;
  memmove(Buffer, a2, (unsigned int)v13);
  v16 = RawInputManagerDeviceObjectResolveHandle(a1, 3u, 1, &Object);
  v17 = Object;
  v18 = (char *)Object + 72;
  if ( !Object )
    v18 = 0LL;
  if ( v16 < 0
    || (*((_DWORD *)v18 + 46) & 0x80u) == 0
    || (v19 = (_DWORD *)*((_QWORD *)v18 + 57), *(_DWORD *)(*((_QWORD *)Object + 55) + 16LL))
    || v19[91] != 3 )
  {
LABEL_51:
    v6 = 0;
    UserSetLastError(87);
    goto LABEL_57;
  }
  v20 = 0;
  if ( (_DWORD)v3 )
  {
    v21 = (int *)(v15 + 4);
    while ( *((_WORD *)v21 - 2) == 13 )
    {
      if ( *((_WORD *)v21 - 1) == 85 )
      {
        v22 = *v21;
        if ( *v21 > 256 || (v23 = v19[6], (unsigned int)(v23 - 1) > 3) )
        {
          v23 = v19[6];
          if ( v23 != 7 || v22 > 5 )
            goto LABEL_51;
        }
        v24 = v19[194];
        if ( v23 == 7 )
          --v24;
        if ( v22 != v24 && !(unsigned int)RIMIDEResetPointerDeviceMaxCount(v19) )
          goto LABEL_51;
      }
      else
      {
        if ( *((_WORD *)v21 - 1) != 89 || v19[6] != 7 || (unsigned int)*v21 > 1 )
          goto LABEL_51;
        v19[241] = *v21;
      }
      ++v20;
      v21 += 3;
      if ( v20 >= a3 )
        goto LABEL_57;
    }
    goto LABEL_51;
  }
LABEL_57:
  if ( v17 )
    ObfDereferenceObject(v17);
  GreDeleteFastMutex(v15);
LABEL_62:
  if ( !(unsigned int)Feature_EliminateMitRitHandoff2__private_IsEnabledDeviceUsageNoInline() )
  {
    CurrentThreadWin32Thread = PsGetCurrentThreadWin32Thread();
    v27 = W32GetUserSessionState(v26);
    ExReleaseFastResource(*(_QWORD *)(v27 + 16), CurrentThreadWin32Thread + 176);
    KeLeaveCriticalRegion();
  }
  UserSessionSwitchLeaveCritWithNonPaged();
  return v6;
}
