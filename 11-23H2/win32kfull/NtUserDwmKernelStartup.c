/*
 * XREFs of NtUserDwmKernelStartup @ 0x1C009EBA0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastStatus @ 0x1C0013298 (UserSetLastStatus.c)
 *     zzzDwmStartRedirection @ 0x1C0021F8C (zzzDwmStartRedirection.c)
 *     UserSetLastError @ 0x1C00EDA4C (UserSetLastError.c)
 */

__int64 NtUserDwmKernelStartup()
{
  __int64 v0; // rdx
  __int64 v1; // rcx
  __int64 v2; // r8
  __int64 CurrentProcess; // rax
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // rbx
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rcx
  NTSTATUS started; // eax
  __int64 v13; // rcx

  EnterCrit(0LL, 0LL);
  CurrentProcess = PsGetCurrentProcess(v1, v0, v2);
  v7 = 0LL;
  if ( !(unsigned int)IsProcessDwm(CurrentProcess) )
  {
    v13 = 5LL;
    goto LABEL_10;
  }
  v8 = *(_QWORD *)(gptiCurrent + 456LL);
  if ( !v8 || (v9 = *(_QWORD *)(v8 + 8)) == 0 )
  {
    v13 = 87LL;
LABEL_10:
    UserSetLastError(v13);
    goto LABEL_7;
  }
  v10 = *(unsigned int *)(*(_QWORD *)v9 + 64LL);
  if ( (v10 & 1) != 0 || (started = zzzDwmStartRedirection(), started >= 0) )
    v7 = 1LL;
  else
    UserSetLastStatus(started, 1);
LABEL_7:
  UserSessionSwitchLeaveCrit(v10, v4, v5, v6);
  return v7;
}
