/*
 * XREFs of ?xxxUserProcessInitCallout@@YAJPEAU_W32PROCESS@@PEAU_WIN32_PROCESS_CALLOUT_PARAMETERS@@@Z @ 0x1401B2B40
 * Callers:
 *     xxxUserProcessCallout @ 0x140167490 (xxxUserProcessCallout.c)
 * Callees:
 *     UserSessionSwitchLeaveCritWithNonPaged @ 0x140023070 (UserSessionSwitchLeaveCritWithNonPaged.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x14005DD80 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     DestroyDeferredUnlockObjectAssignmentList @ 0x1400A42D0 (DestroyDeferredUnlockObjectAssignmentList.c)
 *     DestroyProcessInfo @ 0x14015D490 (DestroyProcessInfo.c)
 *     xxxInitProcessInfo @ 0x140161084 (xxxInitProcessInfo.c)
 *     DestroySharedUserCritDeferredUnlockList @ 0x14016ABF4 (DestroySharedUserCritDeferredUnlockList.c)
 *     UserCritInternal::_anonymous_namespace_::EnterCritInternal @ 0x1401A8FE8 (UserCritInternal--_anonymous_namespace_--EnterCritInternal.c)
 *     UserCritInternal::_anonymous_namespace_::IsValidGuiContext @ 0x1401A9084 (UserCritInternal--_anonymous_namespace_--IsValidGuiContext.c)
 *     ?HandleConvertToGui@Win32JobObject@@YAXPEAUtagPROCESSINFO@@@Z @ 0x1401AA0EC (-HandleConvertToGui@Win32JobObject@@YAXPEAUtagPROCESSINFO@@@Z.c)
 *     ?UserProcessImmersiveType@@YAJPEAU_WIN32_PROCESS_CALLOUT_PARAMETERS@@PEAXPEAW4_PROCESS_IMMERSIVE_TYPE@@PEAKPEAU_PS_PKG_CLAIM@@@Z @ 0x1401B2864 (-UserProcessImmersiveType@@YAJPEAU_WIN32_PROCESS_CALLOUT_PARAMETERS@@PEAXPEAW4_PROCESS_IMMERSIVE.c)
 */

__int64 __fastcall xxxUserProcessInitCallout(struct _W32PROCESS *this, PEPROCESS *a2)
{
  char v2; // si
  PACCESS_TOKEN v6; // rbx
  __int64 v7; // rcx
  int inited; // ebp
  _QWORD *UserSessionState; // rbp
  __int64 v10; // rax
  struct tagPROCESSINFO *v11; // rdx
  bool v12; // bl
  __int64 v13; // rax
  int v14; // r8d
  int v15; // edx
  PVOID v16; // [rsp+60h] [rbp+8h] BYREF
  unsigned int v17; // [rsp+70h] [rbp+18h] BYREF
  __int64 v18; // [rsp+78h] [rbp+20h] BYREF

  v17 = 0;
  v2 = 1;
  LODWORD(v16) = 0;
  v18 = 0LL;
  if ( *((_BYTE *)this + 1208) == 1 )
    return 1073741851LL;
  v6 = PsReferencePrimaryToken(a2[2]);
  if ( !v6 )
    return 3221225596LL;
  inited = UserProcessImmersiveType(
             (struct _WIN32_PROCESS_CALLOUT_PARAMETERS *)a2,
             v6,
             (enum _PROCESS_IMMERSIVE_TYPE *)&v17,
             &v16,
             (struct _PS_PKG_CLAIM *)&v18);
  if ( inited >= 0 )
  {
    UserSessionState = (_QWORD *)W32GetUserSessionState(v7);
    v10 = UserCritInternal::_anonymous_namespace_::EnterCritInternal(
            UserSessionState,
            1,
            0,
            (void (__fastcall *)(_QWORD, __int64))_lambda_63b61c2369133a205197eda5bd671ee7_::_lambda_invoker_cdecl_);
    UserSessionState[3] = v10;
    if ( v10 && UserCritInternal::_anonymous_namespace_::IsValidGuiContext(v10) )
    {
      DestroySharedUserCritDeferredUnlockList((__int64)(UserSessionState + 2468));
      DestroyDeferredUnlockObjectAssignmentList(UserSessionState + 2475);
      DestroyDeferredUnlockObjectAssignmentList(UserSessionState + 2473);
    }
    inited = xxxInitProcessInfo(this, v6, v17, (int)v16, (__int64)&v18);
    PsDereferencePrimaryToken(v6);
    if ( inited >= 0 )
    {
      Win32JobObject::HandleConvertToGui(this, v11);
    }
    else if ( (unsigned int)DestroyProcessInfo(this) )
    {
      if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x2000) == 0
        || *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u )
      {
        v2 = 0;
      }
      v12 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v2 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v13 = W32GetUserSessionState(WPP_GLOBAL_Control);
        LOBYTE(v14) = v12;
        LOBYTE(v15) = v2;
        WPP_RECORDER_AND_TRACE_SF_(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v15,
          v14,
          *(_QWORD *)(v13 + 69400),
          2,
          14,
          34,
          (__int64)&WPP_c6ad2250ef6e3ae3eb9ff75238ab5e56_Traceguids);
      }
    }
    UserSessionSwitchLeaveCritWithNonPaged();
  }
  else
  {
    PsDereferencePrimaryToken(v6);
  }
  return (unsigned int)inited;
}
