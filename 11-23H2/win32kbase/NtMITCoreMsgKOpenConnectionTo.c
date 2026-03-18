/*
 * XREFs of NtMITCoreMsgKOpenConnectionTo @ 0x1C0068C80
 * Callers:
 *     <none>
 * Callees:
 *     PrivateAPI::_anonymous_namespace_::EnterCritInternal @ 0x1C0048330 (PrivateAPI--_anonymous_namespace_--EnterCritInternal.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C004CE30 (UserSessionSwitchLeaveCrit.c)
 *     HMUnlockObject @ 0x1C0056D70 (HMUnlockObject.c)
 *     UserSetLastError @ 0x1C005E3B4 (UserSetLastError.c)
 *     ?CoreMsgOpenDestinationHandle@InputExtensibilityCallout@@QEAAJW4_MIT_ENDPOINT@@AEBUtagMsgRoutingInfo@@@Z @ 0x1C0068E5C (-CoreMsgOpenDestinationHandle@InputExtensibilityCallout@@QEAAJW4_MIT_ENDPOINT@@AEBUtagMsgRouting.c)
 *     __security_check_cookie @ 0x1C00CDBD0 (__security_check_cookie.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00D6660 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall NtMITCoreMsgKOpenConnectionTo(unsigned int a1, __int64 a2, __int64 a3, __int64 a4)
{
  ULONG64 v4; // r15
  struct tagTHREADINFO *v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 CurrentProcessWin32Process; // rax
  char v11; // al
  __int64 *v12; // rdi
  __int64 CurrentProcess; // rax
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r9
  _BOOL8 v17; // rcx
  ULONG64 v18; // rcx
  __int64 v19; // rax
  unsigned int v20; // ebx
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  __int128 v26; // [rsp+58h] [rbp-60h]
  __int64 v27; // [rsp+68h] [rbp-50h]
  __int128 v28; // [rsp+70h] [rbp-48h] BYREF
  __int128 v29; // [rsp+80h] [rbp-38h]
  __int64 v30; // [rsp+90h] [rbp-28h]

  v4 = a2;
  v6 = (struct tagTHREADINFO *)PrivateAPI::_anonymous_namespace_::EnterCritInternal(0LL, a2, a3, a4);
  gptiCurrent = v6;
  if ( v6 )
  {
    *((_DWORD *)v6 + 387) = 1;
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v8);
    v7 = CurrentProcessWin32Process;
    if ( CurrentProcessWin32Process )
    {
      v8 = -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL);
      v7 = v8 & CurrentProcessWin32Process;
    }
    if ( v7 && (*(_DWORD *)(v7 + 12) & 0x8000) != 0 )
    {
      v8 = (__int64)gptiCurrent;
      if ( (*((_DWORD *)gptiCurrent + 122) & 0x1000000) == 0 || (v11 = 1, (*((_DWORD *)gptiCurrent + 318) & 0x80u) != 0) )
        v11 = 0;
      if ( v11 )
      {
        while ( 1 )
        {
          v12 = (__int64 *)gpSharedUserCritDeferredUnlockListHead;
          if ( !gpSharedUserCritDeferredUnlockListHead )
            break;
          gpSharedUserCritDeferredUnlockListHead = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)gpSharedUserCritDeferredUnlockListHead
                                                                                       + 2);
          v12[2] = 0LL;
          if ( !*(_DWORD *)(*v12 + 8) )
            MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 4237LL);
          HMUnlockObject(*v12);
        }
      }
    }
  }
  CurrentProcess = PsGetCurrentProcess(v8, v7, v9);
  v17 = 0LL;
  if ( CurrentProcess )
    v17 = CurrentProcess == *(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels;
  if ( v17 )
  {
    if ( a1 > 0x14 )
    {
      UserSessionSwitchLeaveCrit(v17, v14, v15, v16);
      return 3221225485LL;
    }
    else
    {
      v28 = 0LL;
      v29 = 0LL;
      v30 = 0LL;
      v18 = v4 + 40;
      if ( v4 + 40 < v4 || v18 > MmUserProbeAddress )
        v4 = MmUserProbeAddress;
      v26 = *(_OWORD *)(v4 + 16);
      v27 = *(_QWORD *)(v4 + 32);
      v28 = *(_OWORD *)v4;
      v29 = v26;
      v30 = v27;
      v19 = SGDGetUserSessionState(v18, v14, v15, v16);
      v20 = InputExtensibilityCallout::CoreMsgOpenDestinationHandle(*(_QWORD *)(v19 + 16048), a1, &v28);
      UserSessionSwitchLeaveCrit(v22, v21, v23, v24);
      return v20;
    }
  }
  else
  {
    UserSessionSwitchLeaveCrit(v17, v14, v15, v16);
    return 3221225506LL;
  }
}
