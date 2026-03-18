/*
 * XREFs of xxxCreateSystemThreads @ 0x1C00B27C0
 * Callers:
 *     NtUserCreateSystemThreads @ 0x1C00B2720 (NtUserCreateSystemThreads.c)
 * Callees:
 *     PrivateAPI::_anonymous_namespace_::EnterCritInternal @ 0x1C0048330 (PrivateAPI--_anonymous_namespace_--EnterCritInternal.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C004CE30 (UserSessionSwitchLeaveCrit.c)
 *     HMUnlockObject @ 0x1C0056D70 (HMUnlockObject.c)
 *     ?CSTPop@@YAHPEAIPEAPEAX@Z @ 0x1C00B2914 (-CSTPop@@YAHPEAIPEAPEAX@Z.c)
 *     VideoPortCalloutThread @ 0x1C00CCFE8 (VideoPortCalloutThread.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00D6660 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D6930 (_guard_dispatch_icall_nop.c)
 *     IVWorkerThread @ 0x1C01EEA2C (IVWorkerThread.c)
 */

__int64 __fastcall xxxCreateSystemThreads(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  void (__fastcall *v10)(void *); // rax
  struct tagTHREADINFO *v11; // rax
  __int64 v12; // rcx
  __int64 CurrentProcessWin32Process; // rax
  __int64 *v14; // rbx
  __int64 v16; // rax
  unsigned int v17; // [rsp+30h] [rbp+8h] BYREF
  void *v18; // [rsp+38h] [rbp+10h] BYREF

  v17 = 0;
  v18 = 0LL;
  if ( (PVOID)PsGetCurrentProcess(a1, a2, a3) != gpepCSRSS || !(unsigned int)CSTPop(&v17, &v18) )
    return 1LL;
  UserSessionSwitchLeaveCrit(v4, v3, v5, v6);
  if ( v17 == 1 )
  {
    if ( qword_1C02958C0 && (int)qword_1C02958C0() >= 0 )
    {
      v10 = (void (__fastcall *)(void *))qword_1C02958C8;
      goto LABEL_7;
    }
  }
  else
  {
    if ( v17 != 2 )
    {
      if ( v17 == 4 )
      {
        VideoPortCalloutThread(v18);
      }
      else if ( v17 == 8 )
      {
        IVWorkerThread(v18);
      }
      goto LABEL_12;
    }
    if ( qword_1C02958F0 && (int)qword_1C02958F0() >= 0 )
    {
      v10 = (void (__fastcall *)(void *))qword_1C02958F8;
LABEL_7:
      if ( v10 )
        v10(v18);
    }
  }
LABEL_12:
  v11 = (struct tagTHREADINFO *)PrivateAPI::_anonymous_namespace_::EnterCritInternal(0LL, v7, v8, v9);
  gptiCurrent = v11;
  if ( v11 )
  {
    *((_DWORD *)v11 + 387) = 1;
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v12);
    if ( CurrentProcessWin32Process )
    {
      if ( *(_QWORD *)CurrentProcessWin32Process
        && (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x8000) != 0
        && (*((_DWORD *)gptiCurrent + 122) & 0x1000000) != 0
        && (*((_DWORD *)gptiCurrent + 318) & 0x80u) == 0 )
      {
        while ( 1 )
        {
          v14 = (__int64 *)gpSharedUserCritDeferredUnlockListHead;
          if ( !gpSharedUserCritDeferredUnlockListHead )
            break;
          gpSharedUserCritDeferredUnlockListHead = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)gpSharedUserCritDeferredUnlockListHead
                                                                                       + 2);
          v16 = *v14;
          v14[2] = 0LL;
          if ( !*(_DWORD *)(v16 + 8) )
          {
            v17 = 0x20000;
            MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 4237LL);
          }
          HMUnlockObject(*v14);
        }
      }
    }
  }
  return 1LL;
}
