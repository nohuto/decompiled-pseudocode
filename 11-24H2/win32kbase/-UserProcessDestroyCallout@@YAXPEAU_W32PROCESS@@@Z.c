/*
 * XREFs of ?UserProcessDestroyCallout@@YAXPEAU_W32PROCESS@@@Z @ 0x1401B2608
 * Callers:
 *     xxxUserProcessCallout @ 0x140167490 (xxxUserProcessCallout.c)
 * Callees:
 *     GreUnlockVisRgn @ 0x140021330 (GreUnlockVisRgn.c)
 *     GreLockVisRgn @ 0x140021770 (GreLockVisRgn.c)
 *     UserSessionSwitchLeaveCritWithNonPaged @ 0x140023070 (UserSessionSwitchLeaveCritWithNonPaged.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x14005DD80 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     DestroyDeferredUnlockObjectAssignmentList @ 0x1400A42D0 (DestroyDeferredUnlockObjectAssignmentList.c)
 *     DestroyProcessInfo @ 0x14015D490 (DestroyProcessInfo.c)
 *     DestroyCacheDC @ 0x1401689F0 (DestroyCacheDC.c)
 *     DestroySharedUserCritDeferredUnlockList @ 0x14016ABF4 (DestroySharedUserCritDeferredUnlockList.c)
 *     ApiSetEditionShowSystemCursor @ 0x140193368 (ApiSetEditionShowSystemCursor.c)
 *     ?Arm@AtomicExecutionCheck@@QEAAXXZ @ 0x1401A2C38 (-Arm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     UserCritInternal::_anonymous_namespace_::EnterCritInternal @ 0x1401A8FE8 (UserCritInternal--_anonymous_namespace_--EnterCritInternal.c)
 *     UserCritInternal::_anonymous_namespace_::IsValidGuiContext @ 0x1401A9084 (UserCritInternal--_anonymous_namespace_--IsValidGuiContext.c)
 *     CloseWin32InputRelatedObHandles @ 0x140218A10 (CloseWin32InputRelatedObHandles.c)
 */

void __fastcall UserProcessDestroyCallout(struct _W32PROCESS *a1)
{
  _QWORD *UserSessionState; // rbx
  char v3; // si
  __int64 v4; // rax
  __int64 v5; // rcx
  __int64 v6; // rcx
  bool v7; // bl
  bool v8; // di
  __int64 v9; // rax
  int v10; // r8d
  int v11; // edx
  __int64 v12; // rcx
  __int64 v13; // rbx
  __int64 v14; // rcx
  __int64 v15; // rax
  unsigned __int64 v16; // rcx
  unsigned int v17; // edi
  unsigned __int64 i; // rax
  __int64 v19; // rcx
  __int64 v20; // rdi
  __int64 *v21; // rcx
  __int64 *v22; // rbx
  __int64 v23; // rdx
  __int64 v24; // rcx
  _BYTE v25[8]; // [rsp+40h] [rbp-18h] BYREF
  __int64 v26; // [rsp+48h] [rbp-10h]

  UserSessionState = (_QWORD *)W32GetUserSessionState(a1);
  v3 = 1;
  v4 = UserCritInternal::_anonymous_namespace_::EnterCritInternal(
         UserSessionState,
         1,
         0,
         (void (__fastcall *)(_QWORD, __int64))_lambda_63b61c2369133a205197eda5bd671ee7_::_lambda_invoker_cdecl_);
  UserSessionState[3] = v4;
  if ( v4 && UserCritInternal::_anonymous_namespace_::IsValidGuiContext(v4) )
  {
    DestroySharedUserCritDeferredUnlockList((__int64)(UserSessionState + 2468));
    DestroyDeferredUnlockObjectAssignmentList(UserSessionState + 2475);
    DestroyDeferredUnlockObjectAssignmentList(UserSessionState + 2473);
  }
  v26 = 0LL;
  v25[0] = 0;
  AtomicExecutionCheck::Arm((AtomicExecutionCheck *)v25);
  v6 = *(_QWORD *)(W32GetUserGdiSessionState(v5) + 40);
  if ( *(_QWORD *)a1 == v6 )
  {
    if ( *(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(v6) + 36424) + 368LL) )
    {
      v7 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x2000) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 3u;
      v8 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v7 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v9 = W32GetUserSessionState(WPP_GLOBAL_Control);
        LOBYTE(v10) = v8;
        LOBYTE(v11) = v7;
        WPP_RECORDER_AND_TRACE_SF_(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v11,
          v10,
          *(_QWORD *)(v9 + 69400),
          3,
          14,
          33,
          (__int64)&WPP_c6ad2250ef6e3ae3eb9ff75238ab5e56_Traceguids);
      }
    }
  }
  else
  {
    v3 = 0;
  }
  if ( (unsigned int)DestroyProcessInfo(a1) )
  {
    v13 = W32GetUserSessionState(v12);
    v15 = W32GetUserSessionState(v14);
    v16 = *(_QWORD *)(v13 + 19944);
    v17 = *(_DWORD *)(v15 + 19872);
    for ( i = v16 + 32LL * v17; i > v16 && !*(_BYTE *)(i + 24); i -= 32LL )
      --v17;
    *(_DWORD *)(W32GetUserSessionState(v16) + 19872) = v17;
    v20 = *(_QWORD *)(W32GetUserSessionState(v19) + 57008);
    GreLockVisRgn(*(_QWORD *)(v20 + 48));
    v21 = *(__int64 **)(v20 + 24);
    if ( v21 != (__int64 *)(v20 + 24) )
    {
      do
      {
        v22 = (__int64 *)*v21;
        if ( (v21[6] & 0x400000) != 0 )
          DestroyCacheDC(v21, v21[2]);
        v21 = v22;
      }
      while ( v22 != (__int64 *)(v20 + 24) );
    }
    GreUnlockVisRgn(*(_QWORD *)(v20 + 48));
    ApiSetEditionShowSystemCursor(v24, v23);
    if ( v3 )
      CloseWin32InputRelatedObHandles();
  }
  if ( v25[0] )
    --*(_DWORD *)(v26 + 28);
  UserSessionSwitchLeaveCritWithNonPaged();
}
