/*
 * XREFs of ?SendIVWorkerThreadRequest@@YAJPEAU_IVWORKER_INIT@@@Z @ 0x1C01ED804
 * Callers:
 *     _RegisterLogonProcess @ 0x1C00BE030 (_RegisterLogonProcess.c)
 * Callees:
 *     PrivateAPI::_anonymous_namespace_::EnterCritInternal @ 0x1C0048330 (PrivateAPI--_anonymous_namespace_--EnterCritInternal.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C004CE30 (UserSessionSwitchLeaveCrit.c)
 *     HMUnlockObject @ 0x1C0056D70 (HMUnlockObject.c)
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C008C460 (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     InitCreateSystemThreadsMsg @ 0x1C00B8420 (InitCreateSystemThreadsMsg.c)
 *     __security_check_cookie @ 0x1C00CDBD0 (__security_check_cookie.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00D6660 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     memset @ 0x1C00D69C0 (memset.c)
 */

__int64 __fastcall SendIVWorkerThreadRequest(PVOID *a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r9
  char *v6; // rdx
  __int64 v8; // rdx
  int v9; // edi
  __int64 v10; // r8
  __int64 v11; // r9
  struct tagTHREADINFO *v12; // rax
  __int64 v13; // rcx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v15; // rax
  __int64 *v16; // rbx
  __int64 v17; // [rsp+38h] [rbp-3E0h] BYREF
  _DWORD v18[240]; // [rsp+40h] [rbp-3D8h] BYREF

  memset(v18, 0, 0x3B8uLL);
  if ( (unsigned int)InitCreateSystemThreadsMsg(v18, 8u, (__int64)a1) )
  {
    UserSessionSwitchLeaveCrit(v3, v2, v4, v5);
    v17 = 952LL;
    v9 = LpcSendWaitReceivePort(CsrApiPort, 0x20000LL, v18, v18, &v17, 0LL);
    if ( v9 >= 0 )
      KeWaitForSingleObject(*a1, WrUserRequest, 0, 0, 0LL);
    v12 = (struct tagTHREADINFO *)PrivateAPI::_anonymous_namespace_::EnterCritInternal(0LL, v8, v10, v11);
    gptiCurrent = v12;
    if ( v12 )
    {
      *((_DWORD *)v12 + 387) = 1;
      CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v13);
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
            v15 = *v16;
            v16[2] = 0LL;
            if ( !*(_DWORD *)(v15 + 8) )
              MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 4237);
            HMUnlockObject(*v16);
          }
        }
      }
    }
    return (unsigned int)v9;
  }
  else
  {
    if ( *a1 )
      NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, (char *)*a1);
    *a1 = 0LL;
    v6 = (char *)a1[1];
    if ( v6 )
      NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, v6);
    a1[1] = 0LL;
    return 3221225495LL;
  }
}
