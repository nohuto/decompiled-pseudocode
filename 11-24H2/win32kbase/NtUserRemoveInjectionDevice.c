/*
 * XREFs of NtUserRemoveInjectionDevice @ 0x14019A120
 * Callers:
 *     NtUserCreateSyntheticPointerDevice2 @ 0x1401B9930 (NtUserCreateSyntheticPointerDevice2.c)
 * Callees:
 *     UserSessionSwitchLeaveCritWithNonPaged @ 0x140023070 (UserSessionSwitchLeaveCritWithNonPaged.c)
 *     UserSetLastError @ 0x140042EA4 (UserSetLastError.c)
 *     RIMUnlockExclusive @ 0x140046360 (RIMUnlockExclusive.c)
 *     RawInputManagerDeviceObjectResolveHandle @ 0x140053560 (RawInputManagerDeviceObjectResolveHandle.c)
 *     RIMIDERemoveInjectionDevice @ 0x14005B144 (RIMIDERemoveInjectionDevice.c)
 *     RIMLockExclusive @ 0x14005B440 (RIMLockExclusive.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x14005DD80 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     DestroyDeferredUnlockObjectAssignmentList @ 0x1400A42D0 (DestroyDeferredUnlockObjectAssignmentList.c)
 *     ?Enter@EnterLeaveCritMitRitHandOffHazard@@AEAAXXZ @ 0x14014EDA0 (-Enter@EnterLeaveCritMitRitHandOffHazard@@AEAAXXZ.c)
 *     DestroySharedUserCritDeferredUnlockList @ 0x14016ABF4 (DestroySharedUserCritDeferredUnlockList.c)
 *     Feature_EliminateMitRitHandoff2__private_IsEnabledDeviceUsageNoInline @ 0x1401A3C28 (Feature_EliminateMitRitHandoff2__private_IsEnabledDeviceUsageNoInline.c)
 *     UserCritInternal::_anonymous_namespace_::EnterCritInternal @ 0x1401A8FE8 (UserCritInternal--_anonymous_namespace_--EnterCritInternal.c)
 *     UserCritInternal::_anonymous_namespace_::IsValidGuiContext @ 0x1401A9084 (UserCritInternal--_anonymous_namespace_--IsValidGuiContext.c)
 */

__int64 __fastcall NtUserRemoveInjectionDevice(char *a1)
{
  _QWORD *UserSessionState; // rdi
  char v3; // bl
  __int64 v4; // rax
  bool v5; // di
  __int64 v6; // rax
  int v7; // r8d
  int v8; // edx
  int v9; // ecx
  __int64 v10; // rcx
  unsigned int v11; // edi
  __int64 CurrentProcessWin32Process; // rax
  __int64 v13; // rcx
  _QWORD *v14; // rsi
  char *v15; // rcx
  __int64 v16; // rbx
  __int64 CurrentThreadWin32Thread; // rbx
  __int64 v18; // rcx
  __int64 v19; // rax
  PVOID Object; // [rsp+58h] [rbp+10h] BYREF
  PVOID v22; // [rsp+60h] [rbp+18h] BYREF

  UserSessionState = (_QWORD *)W32GetUserSessionState(a1);
  v3 = 1;
  v4 = UserCritInternal::_anonymous_namespace_::EnterCritInternal(
         UserSessionState,
         1LL,
         0LL,
         _lambda_63b61c2369133a205197eda5bd671ee7_::_lambda_invoker_cdecl_);
  UserSessionState[3] = v4;
  if ( v4 && (unsigned __int8)UserCritInternal::_anonymous_namespace_::IsValidGuiContext(v4) )
  {
    DestroySharedUserCritDeferredUnlockList((__int64)(UserSessionState + 2468));
    DestroyDeferredUnlockObjectAssignmentList(UserSessionState + 2475);
    DestroyDeferredUnlockObjectAssignmentList(UserSessionState + 2473);
  }
  LOBYTE(Object) = 0;
  EnterLeaveCritMitRitHandOffHazard::Enter((Enter *)&Object);
  Feature_EliminateMitRitHandoff2__private_IsEnabledDeviceUsageNoInline();
  v22 = 0LL;
  if ( (_BYTE)Object )
  {
    if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) == 0
      || *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u )
    {
      v3 = 0;
    }
    v5 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v3 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v6 = W32GetUserSessionState(WPP_GLOBAL_Control);
      LOBYTE(v7) = v5;
      LOBYTE(v8) = v3;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v8,
        v7,
        *(_QWORD *)(v6 + 69400),
        2,
        2,
        43,
        (__int64)&WPP_8ecb864819e83a63300ef0c5d3b8b347_Traceguids);
    }
    v9 = 5;
    goto LABEL_27;
  }
  if ( (int)RawInputManagerDeviceObjectResolveHandle(a1, 3u, 1, &v22) < 0 )
  {
    v9 = 6;
LABEL_27:
    v11 = 0;
    UserSetLastError(v9);
    goto LABEL_28;
  }
  v11 = 1;
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v10);
  if ( CurrentProcessWin32Process )
    CurrentProcessWin32Process &= -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL);
  v13 = *(_QWORD *)(CurrentProcessWin32Process + 888);
  v14 = v22;
  if ( !v13 )
    goto LABEL_22;
  v15 = *(char **)(v13 + 96);
  if ( !v15 )
    goto LABEL_22;
  Object = 0LL;
  if ( (int)RawInputManagerDeviceObjectResolveHandle(v15, 3u, 1, &Object) < 0 )
    goto LABEL_22;
  if ( v14 == Object )
  {
    v11 = 0;
    UserSetLastError(6);
  }
  ObfDereferenceObject(Object);
  if ( v11 == 1 )
  {
LABEL_22:
    v16 = v14[49];
    RIMLockExclusive(v16 + 104);
    if ( (v14[32] & 4) == 0 )
      RIMIDERemoveInjectionDevice((__int64)v14);
    RIMUnlockExclusive(v16 + 104);
  }
  ObfDereferenceObject(v14);
LABEL_28:
  if ( !(unsigned int)Feature_EliminateMitRitHandoff2__private_IsEnabledDeviceUsageNoInline() )
  {
    CurrentThreadWin32Thread = PsGetCurrentThreadWin32Thread();
    v19 = W32GetUserSessionState(v18);
    ExReleaseFastResource(*(_QWORD *)(v19 + 16), CurrentThreadWin32Thread + 176);
    KeLeaveCriticalRegion();
  }
  UserSessionSwitchLeaveCritWithNonPaged();
  return v11;
}
