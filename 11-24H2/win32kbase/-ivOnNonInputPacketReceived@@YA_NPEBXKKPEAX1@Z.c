/*
 * XREFs of ?ivOnNonInputPacketReceived@@YA_NPEBXKKPEAX1@Z @ 0x140217380
 * Callers:
 *     <none>
 * Callees:
 *     UserSessionSwitchLeaveCritWithNonPaged @ 0x140023070 (UserSessionSwitchLeaveCritWithNonPaged.c)
 *     HMUnlockObject @ 0x14005F160 (HMUnlockObject.c)
 *     DestroyDeferredUnlockObjectAssignmentList @ 0x1400A42D0 (DestroyDeferredUnlockObjectAssignmentList.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019C14C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     UserCritInternal::_anonymous_namespace_::EnterCritInternal @ 0x1401A8FE8 (UserCritInternal--_anonymous_namespace_--EnterCritInternal.c)
 *     ?SetContentRects@CContentRects@@SA_NIPEBUtagRECT@@@Z @ 0x1401A97B4 (-SetContentRects@CContentRects@@SA_NIPEBUtagRECT@@@Z.c)
 *     UnpackMouseSettings @ 0x140213D04 (UnpackMouseSettings.c)
 *     UnpackPenSettings @ 0x140213DC4 (UnpackPenSettings.c)
 *     UnpackTouchpadSettings @ 0x140213E98 (UnpackTouchpadSettings.c)
 *     ?ivReceiveForegroundUpdate@IVForegroundSync@@YAXPEBU_IVForegroundPacket@@@Z @ 0x140218114 (-ivReceiveForegroundUpdate@IVForegroundSync@@YAXPEBU_IVForegroundPacket@@@Z.c)
 */

char __fastcall ivOnNonInputPacketReceived(const void *a1, __int64 a2, int a3, struct tagRECT *a4)
{
  int v5; // r8d
  int v6; // r8d
  _QWORD *v7; // rsi
  __int64 v8; // rax
  const struct _IVForegroundPacket *v9; // rdx
  __int64 v10; // rax
  int *v11; // rax
  __int64 v12; // r14
  _QWORD *UserSessionState; // rsi
  __int64 v14; // rax
  __int64 CurrentProcessWin32Process; // rax
  int *v16; // rax
  __int64 v17; // r14
  __int64 v18; // rdx

  v5 = a3 - 9;
  if ( !v5 )
  {
    UserSessionState = (_QWORD *)W32GetUserSessionState(a1);
    v14 = UserCritInternal::_anonymous_namespace_::EnterCritInternal(
            UserSessionState,
            1,
            0,
            (void (__fastcall *)(_QWORD, __int64))_lambda_63b61c2369133a205197eda5bd671ee7_::_lambda_invoker_cdecl_);
    UserSessionState[3] = v14;
    if ( v14 )
    {
      if ( (_InterlockedCompareExchange((volatile signed __int32 *)(v14 + 528), 0, 0) & 0x1000000) != 0
        && *(char *)(v14 + 1360) >= 0 )
      {
        CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v14);
        if ( CurrentProcessWin32Process )
        {
          if ( *(_QWORD *)CurrentProcessWin32Process && *(_BYTE *)(CurrentProcessWin32Process + 1208) == 1 )
          {
            while ( 1 )
            {
              v17 = UserSessionState[2471];
              if ( !v17 )
                break;
              UserSessionState[2471] = *(_QWORD *)(v17 + 16);
              v16 = *(int **)v17;
              *(_QWORD *)(v17 + 16) = 0LL;
              if ( !v16[2] )
                MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 4686);
              HMUnlockObject(*(int **)v17);
            }
            DestroyDeferredUnlockObjectAssignmentList(UserSessionState + 2475);
            DestroyDeferredUnlockObjectAssignmentList(UserSessionState + 2473);
          }
        }
      }
    }
    UnpackTouchpadSettings(a4);
    UnpackMouseSettings(&a4->left);
    UnpackPenSettings(a4, v18);
    goto LABEL_31;
  }
  v6 = v5 - 1;
  if ( !v6 )
  {
    v7 = (_QWORD *)W32GetUserSessionState(a1);
    v8 = UserCritInternal::_anonymous_namespace_::EnterCritInternal(
           v7,
           1,
           0,
           (void (__fastcall *)(_QWORD, __int64))_lambda_63b61c2369133a205197eda5bd671ee7_::_lambda_invoker_cdecl_);
    v7[3] = v8;
    if ( v8 )
    {
      if ( (_InterlockedCompareExchange((volatile signed __int32 *)(v8 + 528), 0, 0) & 0x1000000) != 0
        && *(char *)(v8 + 1360) >= 0 )
      {
        v10 = PsGetCurrentProcessWin32Process(v8);
        if ( v10 )
        {
          if ( *(_QWORD *)v10 && *(_BYTE *)(v10 + 1208) == 1 )
          {
            while ( 1 )
            {
              v12 = v7[2471];
              if ( !v12 )
                break;
              v7[2471] = *(_QWORD *)(v12 + 16);
              v11 = *(int **)v12;
              *(_QWORD *)(v12 + 16) = 0LL;
              if ( !v11[2] )
                MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 4686);
              HMUnlockObject(*(int **)v12);
            }
            DestroyDeferredUnlockObjectAssignmentList(v7 + 2475);
            DestroyDeferredUnlockObjectAssignmentList(v7 + 2473);
          }
        }
      }
    }
    IVForegroundSync::ivReceiveForegroundUpdate((IVForegroundSync *)a4, v9);
LABEL_31:
    UserSessionSwitchLeaveCritWithNonPaged();
    return 1;
  }
  if ( v6 == 1 )
    CContentRects::SetContentRects((unsigned int)a4[4].left, a4);
  return 1;
}
