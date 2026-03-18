/*
 * XREFs of CleanupLogonProcess @ 0x140167AA0
 * Callers:
 *     DestroyProcessInfo @ 0x14015D490 (DestroyProcessInfo.c)
 *     ?Win32kNtUserCleanup@@YAHXZ @ 0x140165224 (-Win32kNtUserCleanup@@YAHXZ.c)
 * Callees:
 *     isInputVirtualizationEnabled @ 0x1400D07E4 (isInputVirtualizationEnabled.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019C14C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     GreNotifyCleanupLogonProcess @ 0x14019F14C (GreNotifyCleanupLogonProcess.c)
 *     ?CleanupWinlogonRpcHandle@@YAXXZ @ 0x1401B3210 (-CleanupWinlogonRpcHandle@@YAXXZ.c)
 */

char __fastcall CleanupLogonProcess(__int64 a1)
{
  __int64 v1; // rcx
  __int64 v2; // rcx
  __int64 v3; // rcx
  __int64 UserSessionState; // rax
  __int64 v5; // rcx
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // rax

  if ( (_DWORD)a1 )
  {
    if ( *(_QWORD *)(W32GetUserSessionState(a1) + 69376) )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 277LL);
  }
  else if ( *(_QWORD *)(W32GetUserSessionState(a1) + 69376) )
  {
    CleanupWinlogonRpcHandle();
    *(_QWORD *)(W32GetUserSessionState(v2) + 63584) = 0LL;
    GreNotifyCleanupLogonProcess();
  }
  if ( *(_QWORD *)(W32GetUserSessionState(v1) + 36448) )
  {
    UserSessionState = W32GetUserSessionState(v3);
    ZwClose(*(HANDLE *)(UserSessionState + 36448));
    *(_QWORD *)(W32GetUserSessionState(v5) + 36448) = 0LL;
  }
  LOBYTE(v6) = isInputVirtualizationEnabled(v3);
  if ( (_BYTE)v6 )
  {
    v6 = W32GetUserSessionState(v7);
    if ( *(_QWORD *)(v6 + 19432) )
    {
      v9 = W32GetUserSessionState(v8);
      LOBYTE(v6) = KeSetEvent(*(PRKEVENT *)(v9 + 19432), 1, 0);
    }
  }
  return v6;
}
