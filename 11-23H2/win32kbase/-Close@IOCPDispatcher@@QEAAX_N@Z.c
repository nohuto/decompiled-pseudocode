/*
 * XREFs of ?Close@IOCPDispatcher@@QEAAX_N@Z @ 0x1C0084D10
 * Callers:
 *     DeactivateKSTInputProcessingHelper @ 0x1C00807B4 (DeactivateKSTInputProcessingHelper.c)
 *     ??_GIOCPDispatcher@@QEAAPEAXI@Z @ 0x1C00831E8 (--_GIOCPDispatcher@@QEAAPEAXI@Z.c)
 *     UninitializeInputSensorsOnSharedThread @ 0x1C01E9298 (UninitializeInputSensorsOnSharedThread.c)
 * Callees:
 *     PrivateAPI::_anonymous_namespace_::EnterCritInternal @ 0x1C0048330 (PrivateAPI--_anonymous_namespace_--EnterCritInternal.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C004CE30 (UserSessionSwitchLeaveCrit.c)
 *     HMUnlockObject @ 0x1C0056D70 (HMUnlockObject.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x1C00744D4 (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     ?CleanupInputDispatcherObjects@IOCPDispatcher@@AEAAXXZ @ 0x1C0084E8C (-CleanupInputDispatcherObjects@IOCPDispatcher@@AEAAXXZ.c)
 *     ?CleanupThreadDispatcherObjects@IOCPDispatcher@@AEAAXXZ @ 0x1C0084F20 (-CleanupThreadDispatcherObjects@IOCPDispatcher@@AEAAXXZ.c)
 *     ProtectHandle @ 0x1C0087A68 (ProtectHandle.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00D6660 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

void __fastcall IOCPDispatcher::Close(HANDLE *this, char a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  HANDLE v8; // rcx
  int v9; // eax
  __int64 v10; // rdx
  __int64 v11; // r9
  __int64 v12; // r8
  struct tagTHREADINFO *v13; // rax
  __int64 v14; // rcx
  __int64 CurrentProcessWin32Process; // rax
  __int64 *v16; // rdi
  HANDLE v17; // rcx
  __int64 v18; // rax
  int v19; // [rsp+28h] [rbp-60h]
  _OWORD v20[3]; // [rsp+50h] [rbp-38h] BYREF
  __int64 v21; // [rsp+90h] [rbp+8h] BYREF
  int v22; // [rsp+A0h] [rbp+18h] BYREF

  if ( this[363] )
  {
    IOCPDispatcher::CleanupInputDispatcherObjects((IOCPDispatcher *)this);
    IOCPDispatcher::CleanupThreadDispatcherObjects((IOCPDispatcher *)this);
    if ( a2 )
    {
      UserSessionSwitchLeaveCrit(v5, v4, v6, v7);
      v22 = 0;
      memset(v20, 0, 32);
      while ( 1 )
      {
        v8 = this[363];
        LOBYTE(v19) = 0;
        v21 = -200000LL;
        v9 = ZwRemoveIoCompletionEx(v8, v20, 1LL, &v22, &v21, v19);
        v12 = (unsigned int)v9;
        if ( v9 < 0 )
          break;
        if ( v9 == 258 )
          goto LABEL_6;
      }
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) == 0
        || (LOBYTE(v10) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
      {
        LOBYTE(v10) = 0;
      }
      if ( (_BYTE)v10 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_AND_TRACE_SF_d(
          (__int64)WPP_GLOBAL_Control->AttachedDevice,
          v10,
          WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
          (__int64)WPP_MAIN_CB.Queue.ListEntry.Flink,
          2u,
          2u,
          0x18u,
          (__int64)&WPP_6e321a902f9d36eb099a581dd6c4de5f_Traceguids,
          v9);
LABEL_6:
      v13 = (struct tagTHREADINFO *)PrivateAPI::_anonymous_namespace_::EnterCritInternal(0LL, v10, v12, v11);
      gptiCurrent = v13;
      if ( v13 )
      {
        *((_DWORD *)v13 + 387) = 1;
        CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v14);
        if ( CurrentProcessWin32Process )
        {
          if ( *(_QWORD *)CurrentProcessWin32Process
            && (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x8000) != 0
            && (*((_DWORD *)gptiCurrent + 122) & 0x1000000) != 0
            && (*((_DWORD *)gptiCurrent + 318) & 0x80u) == 0 )
          {
            while ( 1 )
            {
              v16 = (__int64 *)gpSharedUserCritDeferredUnlockListHead;
              if ( !gpSharedUserCritDeferredUnlockListHead )
                break;
              gpSharedUserCritDeferredUnlockListHead = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)gpSharedUserCritDeferredUnlockListHead
                                                                                           + 2);
              v18 = *v16;
              v16[2] = 0LL;
              if ( !*(_DWORD *)(v18 + 8) )
              {
                LODWORD(v21) = 0x20000;
                MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 4237LL);
              }
              HMUnlockObject(*v16);
            }
          }
        }
      }
    }
    v17 = this[364];
    if ( v17 )
    {
      ProtectHandle(v17, v4, 0LL, 0LL);
      ObCloseHandle(this[364], 1);
      this[364] = 0LL;
    }
    ZwClose(this[363]);
    this[363] = 0LL;
  }
}
