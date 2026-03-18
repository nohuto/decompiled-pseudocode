/*
 * XREFs of ?Win32kNtUserCleanup@@YAHXZ @ 0x140165224
 * Callers:
 *     ?Win32KBaseDriverUnload@@YAXPEAU_DRIVER_OBJECT@@@Z @ 0x140164AC0 (-Win32KBaseDriverUnload@@YAXPEAU_DRIVER_OBJECT@@@Z.c)
 * Callees:
 *     UserSessionSwitchLeaveCritWithNonPaged @ 0x140023070 (UserSessionSwitchLeaveCritWithNonPaged.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x14005DD80 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     DestroyDeferredUnlockObjectAssignmentList @ 0x1400A42D0 (DestroyDeferredUnlockObjectAssignmentList.c)
 *     Feature_WebThreatDefenseToggle__private_IsEnabledPreCheck @ 0x140132F64 (Feature_WebThreatDefenseToggle__private_IsEnabledPreCheck.c)
 *     ?Win32kNtUserCleanupInternal@@YAXXZ @ 0x140165460 (-Win32kNtUserCleanupInternal@@YAXXZ.c)
 *     CleanupLogonProcess @ 0x140167AA0 (CleanupLogonProcess.c)
 *     DestroySharedUserCritDeferredUnlockList @ 0x14016ABF4 (DestroySharedUserCritDeferredUnlockList.c)
 *     ??9?$SGCRITTYPEgpresUser@PEAU_FAST_ERESOURCE@@@@QEBAH$$T@Z @ 0x14019B480 (--9-$SGCRITTYPEgpresUser@PEAU_FAST_ERESOURCE@@@@QEBAH$$T@Z.c)
 *     UserCritInternal::_anonymous_namespace_::EnterCritInternal @ 0x1401A8FE8 (UserCritInternal--_anonymous_namespace_--EnterCritInternal.c)
 *     UserCritInternal::_anonymous_namespace_::IsValidGuiContext @ 0x1401A9084 (UserCritInternal--_anonymous_namespace_--IsValidGuiContext.c)
 *     ?CLEANUP_CRIT_RESOURCE@@YAXAEAPEAU_FAST_ERESOURCE@@@Z @ 0x1401B0E7C (-CLEANUP_CRIT_RESOURCE@@YAXAEAPEAU_FAST_ERESOURCE@@@Z.c)
 *     ImSessionStop @ 0x14023D1C0 (ImSessionStop.c)
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 */

__int64 Win32kNtUserCleanup(void)
{
  bool v0; // bl
  bool v1; // di
  __int64 UserSessionState; // rax
  int v3; // r8d
  int v4; // edx
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rcx
  void (*v10)(void); // rax
  _QWORD *v11; // rbx
  __int64 v12; // rax
  __int64 v13; // rcx
  struct _FAST_ERESOURCE **v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rcx
  __int64 v18; // rdx
  void (*v19)(void); // rax
  void *v20; // rcx
  __int64 v21; // rdx
  __int64 v22; // rcx
  int (*v23)(void); // rax
  __int64 v24; // rdx
  __int64 v25; // rcx
  void (*v26)(void); // rax

  v0 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x2000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
  v1 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v0 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control);
    LOBYTE(v3) = v1;
    LOBYTE(v4) = v0;
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v4,
      v3,
      *(_QWORD *)(UserSessionState + 69400),
      4,
      14,
      10,
      (__int64)&WPP_9723802cc44d3ab29e76f6ade2a2f4e4_Traceguids);
  }
  Feature_WebThreatDefenseToggle__private_IsEnabledPreCheck();
  if ( *(_DWORD *)(W32GetUserSessionState(v5) + 42616) )
  {
    ImSessionStop();
    *(_DWORD *)(W32GetUserSessionState(v6) + 42616) = 0;
  }
  if ( (unsigned int)SGCRITTYPEgpresUser<_FAST_ERESOURCE *>::operator!=() )
  {
    v9 = *(_QWORD *)(W32GetWin32kBaseApiSetTable(v8, v7) + 48);
    v10 = *(void (**)(void))(v9 + 200);
    if ( v10 )
      v10();
    v11 = (_QWORD *)W32GetUserSessionState(v9);
    v12 = UserCritInternal::_anonymous_namespace_::EnterCritInternal(
            v11,
            1LL,
            0LL,
            _lambda_63b61c2369133a205197eda5bd671ee7_::_lambda_invoker_cdecl_);
    v11[3] = v12;
    if ( v12 && (unsigned __int8)UserCritInternal::_anonymous_namespace_::IsValidGuiContext(v12) )
    {
      DestroySharedUserCritDeferredUnlockList(v11 + 2468);
      DestroyDeferredUnlockObjectAssignmentList(v11 + 2475);
      DestroyDeferredUnlockObjectAssignmentList(v11 + 2473);
    }
    Win32kNtUserCleanupInternal();
    UserSessionSwitchLeaveCritWithNonPaged();
    v14 = (struct _FAST_ERESOURCE **)W32GetUserSessionState(v13);
    CLEANUP_CRIT_RESOURCE(v14);
  }
  else
  {
    Win32kNtUserCleanupInternal();
  }
  v17 = *(_QWORD *)(W32GetWin32kBaseApiSetTable(v16, v15) + 48);
  if ( *(_QWORD *)v17 )
  {
    if ( (*(int (**)(void))v17)() >= 0 )
    {
      v17 = *(_QWORD *)(W32GetWin32kBaseApiSetTable(v17, v18) + 48);
      v19 = *(void (**)(void))(v17 + 8);
      if ( v19 )
        v19();
    }
  }
  v20 = *(void **)(W32GetUserSessionState(v17) + 63640);
  if ( v20 )
    ZwClose(v20);
  CleanupLogonProcess(1LL);
  v23 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v22, v21) + 48) + 32LL);
  if ( v23 )
  {
    if ( v23() >= 0 )
    {
      v26 = *(void (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v25, v24) + 48) + 40LL);
      if ( v26 )
        v26();
    }
  }
  return 1LL;
}
