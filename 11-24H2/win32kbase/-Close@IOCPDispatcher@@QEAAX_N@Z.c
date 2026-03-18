/*
 * XREFs of ?Close@IOCPDispatcher@@QEAAX_N@Z @ 0x140092850
 * Callers:
 *     ??_GIOCPDispatcher@@QEAAPEAXI@Z @ 0x14020BAE8 (--_GIOCPDispatcher@@QEAAPEAXI@Z.c)
 *     UninitializeInputSensorsOnSharedThread @ 0x1402136DC (UninitializeInputSensorsOnSharedThread.c)
 *     DeactivateKSTInputProcessingHelper @ 0x140215790 (DeactivateKSTInputProcessingHelper.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x14005DE1C (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     ??1LeaveEnterCrit@@QEAA@XZ @ 0x140091E28 (--1LeaveEnterCrit@@QEAA@XZ.c)
 *     ?CleanupInputDispatcherObjects@IOCPDispatcher@@AEAAXXZ @ 0x140092A0C (-CleanupInputDispatcherObjects@IOCPDispatcher@@AEAAXXZ.c)
 *     ?CleanupThreadDispatcherObjects@IOCPDispatcher@@AEAAXXZ @ 0x140092A5C (-CleanupThreadDispatcherObjects@IOCPDispatcher@@AEAAXXZ.c)
 *     ProtectHandle @ 0x1400DD798 (ProtectHandle.c)
 *     ??0LeaveEnterCrit@@QEAA@_N@Z @ 0x1401A2B00 (--0LeaveEnterCrit@@QEAA@_N@Z.c)
 */

void __fastcall IOCPDispatcher::Close(HANDLE *this, char a2)
{
  __int64 v4; // rdx
  HANDLE v5; // rcx
  HANDLE v6; // rcx
  int v7; // eax
  char v8; // si
  bool v9; // di
  bool v10; // bp
  __int64 UserSessionState; // rax
  int v12; // r8d
  int v13; // edx
  int v14; // [rsp+28h] [rbp-60h]
  _OWORD v15[3]; // [rsp+50h] [rbp-38h] BYREF
  char v16; // [rsp+90h] [rbp+8h] BYREF
  int v17; // [rsp+A0h] [rbp+18h] BYREF
  __int64 v18; // [rsp+A8h] [rbp+20h] BYREF

  if ( this[363] )
  {
    IOCPDispatcher::CleanupInputDispatcherObjects((IOCPDispatcher *)this);
    IOCPDispatcher::CleanupThreadDispatcherObjects((IOCPDispatcher *)this);
    if ( a2 )
    {
      LeaveEnterCrit::LeaveEnterCrit((LeaveEnterCrit *)&v16, 1);
      v17 = 0;
      memset(v15, 0, 32);
      while ( 1 )
      {
        v6 = this[363];
        LOBYTE(v14) = 0;
        v18 = -200000LL;
        v7 = ZwRemoveIoCompletionEx(v6, v15, 1LL, &v17, &v18, v14);
        v8 = v7;
        if ( v7 < 0 )
          break;
        if ( v7 == 258 )
          goto LABEL_10;
      }
      v9 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 2u;
      v10 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v9 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control);
        LOBYTE(v12) = v10;
        LOBYTE(v13) = v9;
        WPP_RECORDER_AND_TRACE_SF_d(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v13,
          v12,
          *(_QWORD *)(UserSessionState + 69400),
          2,
          2,
          25,
          (__int64)&WPP_a07c44b8f26832a02b5dbe6dbb74dde0_Traceguids,
          v8);
      }
LABEL_10:
      LeaveEnterCrit::~LeaveEnterCrit((LeaveEnterCrit *)&v16);
    }
    v5 = this[364];
    if ( v5 )
    {
      ProtectHandle(v5, v4, 0LL, 0LL);
      ObCloseHandle(this[364], 1);
      this[364] = 0LL;
    }
    ZwClose(this[363]);
    this[363] = 0LL;
  }
}
