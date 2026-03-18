/*
 * XREFs of ?CreateIocpHandleForUserMode@IOCPDispatcher@@QEAAPEAXXZ @ 0x14020BFCC
 * Callers:
 *     UserActivateMITInputProcessing @ 0x14018A3B0 (UserActivateMITInputProcessing.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x14005DE1C (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     IsInputThread @ 0x1400BB380 (IsInputThread.c)
 *     ProtectHandle @ 0x1400DD798 (ProtectHandle.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019C14C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

void *__fastcall IOCPDispatcher::CreateIocpHandleForUserMode(IOCPDispatcher *this)
{
  void **v2; // rdi
  NTSTATUS v3; // eax
  int v4; // edx
  __int64 v5; // rcx
  char v6; // bp
  char v7; // bl
  bool v8; // si
  __int64 UserSessionState; // rax
  int v10; // r8d
  int v11; // edx

  if ( !IsInputThread((__int64)this) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 3862);
  if ( !*((_QWORD *)this + 363) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 3865);
  v2 = (void **)((char *)this + 2912);
  if ( *((_QWORD *)this + 364) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 3867);
  v3 = ZwDuplicateObject(
         (HANDLE)0xFFFFFFFFFFFFFFFFLL,
         *((HANDLE *)this + 363),
         (HANDLE)0xFFFFFFFFFFFFFFFFLL,
         (PHANDLE)this + 364,
         0,
         0,
         2u);
  v6 = v3;
  if ( v3 >= 0 )
  {
    ProtectHandle(*v2, v4, 0LL, 1);
  }
  else
  {
    if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
      || (v5 = *((unsigned int *)WPP_GLOBAL_Control + 11), (v5 & 2) == 0)
      || (v7 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u) )
    {
      v7 = 0;
    }
    v8 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v7 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      UserSessionState = W32GetUserSessionState(v5);
      LOBYTE(v10) = v8;
      LOBYTE(v11) = v7;
      WPP_RECORDER_AND_TRACE_SF_d(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v11,
        v10,
        *(_QWORD *)(UserSessionState + 69400),
        2,
        2,
        27,
        (__int64)&WPP_a07c44b8f26832a02b5dbe6dbb74dde0_Traceguids,
        v6);
    }
  }
  return *v2;
}
