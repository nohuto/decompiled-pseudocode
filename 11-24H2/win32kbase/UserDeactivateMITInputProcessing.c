/*
 * XREFs of UserDeactivateMITInputProcessing @ 0x14014B168
 * Callers:
 *     xxxDestroyThreadInfo @ 0x14015F444 (xxxDestroyThreadInfo.c)
 *     NtMITDeactivateInputProcessing @ 0x1401B7FF0 (NtMITDeactivateInputProcessing.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x14001BF40 (GreDeleteFastMutex.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x14005DD80 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ?W32ReleasePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x14006B060 (-W32ReleasePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     ?W32AcquirePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x14006B0F4 (-W32AcquirePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     ApiSetEditionDeactivateMitInput @ 0x14014B37C (ApiSetEditionDeactivateMitInput.c)
 *     CleanupTouchExtensibility @ 0x14019F048 (CleanupTouchExtensibility.c)
 *     HandleInputThreadDeactivated @ 0x14019FC50 (HandleInputThreadDeactivated.c)
 *     ?OnInputThreadStateChanged@InputExtensibilityCallout@@QEBAXW4InputThreadState@@@Z @ 0x14020B624 (-OnInputThreadStateChanged@InputExtensibilityCallout@@QEBAXW4InputThreadState@@@Z.c)
 *     ??1VirtualTouchpadProcessor@@AEAA@XZ @ 0x1402193C0 (--1VirtualTouchpadProcessor@@AEAA@XZ.c)
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 */

__int64 UserDeactivateMITInputProcessing()
{
  CTouchProcessor *v0; // rcx
  char v1; // si
  char v2; // dl
  char v3; // r8
  __int64 UserSessionState; // rax
  __int64 v5; // rcx
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rdi
  char *v11; // rbx
  __int64 v12; // rdi
  struct W32_PUSH_LOCK *v13; // rbx
  HANDLE *v14; // r14
  HANDLE *v15; // rdi
  __int64 v16; // rcx
  __int64 result; // rax
  char v18; // dl

  v0 = WPP_GLOBAL_Control;
  v1 = 1;
  if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) == 0
    || (v2 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
  {
    v2 = 0;
  }
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
    || (v3 = 1, !*((_WORD *)WPP_GLOBAL_Control + 36)) )
  {
    v3 = 0;
  }
  if ( v2 || v3 )
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v2,
      v3,
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      5,
      2,
      15,
      (__int64)&WPP_4c37d3b938813951dcfe59f4edab31d1_Traceguids);
  UserSessionState = W32GetUserSessionState(v0);
  (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(UserSessionState + 18808) + 8LL))(*(_QWORD *)(UserSessionState + 18808));
  v6 = W32GetUserSessionState(v5);
  InputExtensibilityCallout::OnInputThreadStateChanged(*(_QWORD *)(v6 + 16408), 1LL);
  HandleInputThreadDeactivated();
  ApiSetEditionDeactivateMitInput();
  CleanupTouchExtensibility();
  v8 = W32GetUserSessionState(v7);
  v10 = v8;
  v11 = *(char **)(v8 + 19336);
  if ( v11 )
  {
    VirtualTouchpadProcessor::~VirtualTouchpadProcessor(*(VirtualTouchpadProcessor **)(v8 + 19336));
    GreDeleteFastMutex(v11);
    *(_QWORD *)(v10 + 19336) = 0LL;
  }
  v12 = *(_QWORD *)(W32GetUserSessionState(v9) + 16408);
  v13 = (struct W32_PUSH_LOCK *)(v12 + 8);
  *(_QWORD *)v12 = 0LL;
  W32AcquirePushLockExclusiveEx((struct W32_PUSH_LOCK *)(v12 + 8), 0);
  v14 = (HANDLE *)(v12 + 24);
  v15 = (HANDLE *)(v12 + 944);
  while ( v14 != v15 )
  {
    if ( *v14 )
    {
      ZwClose(*v14);
      *v14 = 0LL;
    }
    v14 += 5;
  }
  W32ReleasePushLockExclusiveEx(v13, 0LL);
  result = W32GetUserSessionState(v16);
  *(_QWORD *)(result + 3288) = 0LL;
  if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
    || (result = *((unsigned int *)WPP_GLOBAL_Control + 11), (result & 2) == 0)
    || (v18 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
  {
    v18 = 0;
  }
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !*((_WORD *)WPP_GLOBAL_Control + 36) )
    v1 = 0;
  if ( v18 || v1 )
    return WPP_RECORDER_AND_TRACE_SF_(
             *((_QWORD *)WPP_GLOBAL_Control + 3),
             v18,
             v1,
             *((_QWORD *)WPP_GLOBAL_Control + 8),
             5,
             2,
             16,
             (__int64)&WPP_4c37d3b938813951dcfe59f4edab31d1_Traceguids);
  return result;
}
