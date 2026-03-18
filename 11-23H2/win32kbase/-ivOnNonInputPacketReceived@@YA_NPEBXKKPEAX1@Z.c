/*
 * XREFs of ?ivOnNonInputPacketReceived@@YA_NPEBXKKPEAX1@Z @ 0x1C01EE440
 * Callers:
 *     <none>
 * Callees:
 *     PrivateAPI::_anonymous_namespace_::EnterCritInternal @ 0x1C0048330 (PrivateAPI--_anonymous_namespace_--EnterCritInternal.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C004CE30 (UserSessionSwitchLeaveCrit.c)
 *     HMUnlockObject @ 0x1C0056D70 (HMUnlockObject.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00D6660 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?SetContentRects@CContentRects@@SA_NIPEBUtagRECT@@@Z @ 0x1C01302E4 (-SetContentRects@CContentRects@@SA_NIPEBUtagRECT@@@Z.c)
 *     UnpackMouseSettings @ 0x1C01E995C (UnpackMouseSettings.c)
 *     UnpackPenSettings @ 0x1C01E99F0 (UnpackPenSettings.c)
 *     UnpackTouchpadSettings @ 0x1C01E9A7C (UnpackTouchpadSettings.c)
 *     ?ivReceiveForegroundUpdate@IVForegroundSync@@YAXPEBU_IVForegroundPacket@@@Z @ 0x1C01EF3E0 (-ivReceiveForegroundUpdate@IVForegroundSync@@YAXPEBU_IVForegroundPacket@@@Z.c)
 */

char __fastcall ivOnNonInputPacketReceived(const void *a1, __int64 a2, int a3, struct tagRECT *a4)
{
  __int64 v5; // r8
  __int64 v6; // r8
  struct tagTHREADINFO *v7; // rax
  const struct _IVForegroundPacket *v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 *v12; // rdi
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  struct tagTHREADINFO *v17; // rax
  __int64 v18; // rcx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v20; // rax
  __int64 *v21; // rdi
  __int64 v22; // rdx
  __int64 v23; // r8
  __int64 v24; // r9

  v5 = (unsigned int)(a3 - 9);
  if ( !(_DWORD)v5 )
  {
    v17 = (struct tagTHREADINFO *)PrivateAPI::_anonymous_namespace_::EnterCritInternal(0LL, a2, v5, (__int64)a4);
    gptiCurrent = v17;
    if ( v17 )
    {
      *((_DWORD *)v17 + 387) = 1;
      CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v18);
      if ( CurrentProcessWin32Process )
      {
        if ( *(_QWORD *)CurrentProcessWin32Process
          && (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x8000) != 0
          && (*((_DWORD *)gptiCurrent + 122) & 0x1000000) != 0
          && (*((_DWORD *)gptiCurrent + 318) & 0x80u) == 0 )
        {
          while ( 1 )
          {
            v21 = (__int64 *)gpSharedUserCritDeferredUnlockListHead;
            if ( !gpSharedUserCritDeferredUnlockListHead )
              break;
            gpSharedUserCritDeferredUnlockListHead = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)gpSharedUserCritDeferredUnlockListHead
                                                                                         + 2);
            v20 = *v21;
            v21[2] = 0LL;
            if ( !*(_DWORD *)(v20 + 8) )
              MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 4237);
            HMUnlockObject(*v21);
          }
        }
      }
    }
    UnpackTouchpadSettings(a4);
    UnpackMouseSettings(&a4->left, v22, v23, v24);
    UnpackPenSettings(a4);
    goto LABEL_29;
  }
  v6 = (unsigned int)(v5 - 1);
  if ( !(_DWORD)v6 )
  {
    v7 = (struct tagTHREADINFO *)PrivateAPI::_anonymous_namespace_::EnterCritInternal(0LL, a2, v6, (__int64)a4);
    gptiCurrent = v7;
    if ( v7 )
    {
      *((_DWORD *)v7 + 387) = 1;
      v10 = PsGetCurrentProcessWin32Process(v9);
      if ( v10 )
      {
        if ( *(_QWORD *)v10
          && (*(_DWORD *)(v10 + 12) & 0x8000) != 0
          && (*((_DWORD *)gptiCurrent + 122) & 0x1000000) != 0
          && (*((_DWORD *)gptiCurrent + 318) & 0x80u) == 0 )
        {
          while ( 1 )
          {
            v12 = (__int64 *)gpSharedUserCritDeferredUnlockListHead;
            if ( !gpSharedUserCritDeferredUnlockListHead )
              break;
            gpSharedUserCritDeferredUnlockListHead = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)gpSharedUserCritDeferredUnlockListHead
                                                                                         + 2);
            v11 = *v12;
            v12[2] = 0LL;
            if ( !*(_DWORD *)(v11 + 8) )
              MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 4237);
            HMUnlockObject(*v12);
          }
        }
      }
    }
    IVForegroundSync::ivReceiveForegroundUpdate((IVForegroundSync *)a4, v8);
LABEL_29:
    UserSessionSwitchLeaveCrit(v14, v13, v15, v16);
    return 1;
  }
  if ( (_DWORD)v6 == 1 )
    CContentRects::SetContentRects(a4[4].left, a4);
  return 1;
}
