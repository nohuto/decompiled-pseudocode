/*
 * XREFs of NtUserDwmKernelShutdown @ 0x1C01CE960
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastStatus @ 0x1C0013298 (UserSetLastStatus.c)
 *     xxxDwmStopRedirection @ 0x1C0020430 (xxxDwmStopRedirection.c)
 *     UserSetLastError @ 0x1C00EDA4C (UserSetLastError.c)
 */

__int64 NtUserDwmKernelShutdown()
{
  __int64 v0; // rdx
  __int64 v1; // rcx
  __int64 v2; // r8
  __int64 CurrentProcess; // rax
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // rbx
  int v8; // ecx
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rcx
  NTSTATUS v12; // eax

  EnterCrit(0LL, 0LL);
  CurrentProcess = PsGetCurrentProcess(v1, v0, v2);
  v7 = 0LL;
  if ( !(unsigned int)IsProcessDwm(CurrentProcess) )
  {
    v8 = 5;
LABEL_10:
    UserSetLastError(v8);
    goto LABEL_11;
  }
  v9 = *(_QWORD *)(gptiCurrent + 456LL);
  if ( !v9 || (v10 = *(_QWORD *)(v9 + 8)) == 0 )
  {
    v8 = 87;
    goto LABEL_10;
  }
  v11 = *(unsigned int *)(*(_QWORD *)v10 + 64LL);
  if ( (v11 & 1) != 0 && (v12 = xxxDwmStopRedirection(), v12 < 0) )
    UserSetLastStatus(v12, 1);
  else
    v7 = 1LL;
LABEL_11:
  UserSessionSwitchLeaveCrit(v11, v4, v5, v6);
  return v7;
}
