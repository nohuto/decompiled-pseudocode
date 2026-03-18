/*
 * XREFs of UpdateMouseConnectionState @ 0x14012BF88
 * Callers:
 *     UpdateTPCurrentActiveState @ 0x14012BEC0 (UpdateTPCurrentActiveState.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x14005DD80 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ?W32AcquirePushLockSharedEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x140069000 (-W32AcquirePushLockSharedEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     UserIsRemoteConnection @ 0x14008C9F0 (UserIsRemoteConnection.c)
 *     RIMApiSetIsMouseDeviceOnIgnoreList @ 0x1400A79A0 (RIMApiSetIsMouseDeviceOnIgnoreList.c)
 *     WPP_RECORDER_AND_TRACE_SF_l @ 0x14012F6D0 (WPP_RECORDER_AND_TRACE_SF_l.c)
 *     Feature_GestureOnlyTouchpadParam2__private_ReportDeviceUsage @ 0x1401B17E8 (Feature_GestureOnlyTouchpadParam2__private_ReportDeviceUsage.c)
 */

__int64 UpdateMouseConnectionState()
{
  int v0; // ebp
  __int64 v1; // rcx
  __int64 v2; // rcx
  char v3; // si
  char v4; // bl
  bool v5; // di
  __int64 UserSessionState; // rax
  int v7; // r8d
  int v8; // edx
  struct W32_PUSH_LOCK *v9; // rbx
  __int64 v10; // rcx
  __int64 i; // rdi
  CTouchProcessor *v12; // rcx
  bool v13; // bl
  __int64 v14; // rax
  int v15; // r8d
  int v16; // edx
  __int64 result; // rax
  int v18; // [rsp+20h] [rbp-48h]
  int v19; // [rsp+28h] [rbp-40h]
  int v20; // [rsp+30h] [rbp-38h]
  int v21; // [rsp+38h] [rbp-30h]

  v0 = 0;
  Feature_GestureOnlyTouchpadParam2__private_ReportDeviceUsage();
  if ( UserIsRemoteConnection(v1) )
  {
    v3 = 1;
    if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) == 0
      || (v4 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
    {
      v4 = 0;
    }
    v5 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v4 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control);
      LOBYTE(v7) = v5;
      LOBYTE(v8) = v4;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v8,
        v7,
        *(_QWORD *)(UserSessionState + 69400),
        4,
        2,
        10,
        (__int64)&WPP_3a4616fad8403277dc93d19f568e60cb_Traceguids);
    }
  }
  else
  {
    v9 = *(struct W32_PUSH_LOCK **)(*(_QWORD *)(W32GetUserSessionState(v2) + 16840) + 1232LL);
    W32AcquirePushLockSharedEx(v9, 0);
    v3 = 1;
    for ( i = **(_QWORD **)(*(_QWORD *)(W32GetUserSessionState(v10) + 16840) + 1240LL); i; i = *(_QWORD *)(i + 56) )
    {
      if ( !*(_DWORD *)(i + 48)
        && !*(_WORD *)(i + 864)
        && (*(_DWORD *)(i + 168) & 0x400) == 0
        && !(unsigned int)RIMApiSetIsMouseDeviceOnIgnoreList(i) )
      {
        v0 = 1;
        break;
      }
    }
    ExReleasePushLockSharedEx(v9, 0LL);
    KeLeaveCriticalRegion();
  }
  v12 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) == 0
    || *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u )
  {
    v3 = 0;
  }
  v13 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v3 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v14 = W32GetUserSessionState(WPP_GLOBAL_Control);
    LOBYTE(v15) = v13;
    LOBYTE(v16) = v3;
    WPP_RECORDER_AND_TRACE_SF_l(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v16,
      v15,
      *(_QWORD *)(v14 + 69400),
      v18,
      v19,
      v20,
      v21,
      v0);
  }
  result = W32GetUserSessionState(v12);
  *(_DWORD *)(result + 16780) = (4 * v0) | *(_DWORD *)(result + 16780) & 0xFFFFFFFB;
  return result;
}
