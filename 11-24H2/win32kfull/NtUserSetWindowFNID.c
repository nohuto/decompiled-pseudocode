/*
 * XREFs of NtUserSetWindowFNID @ 0x14029F190
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x14005FE74 (UserSetLastError.c)
 *     IsWindowBeingDestroyed @ 0x1400911AC (IsWindowBeingDestroyed.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14026C310 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall NtUserSetWindowFNID(__int64 a1, __int16 a2)
{
  __int64 v4; // rax
  __int64 v5; // rcx
  __int64 v6; // rbx
  __int64 v7; // rsi
  __int64 CurrentProcessWin32Process; // rax
  __int64 v9; // r8
  int v10; // ecx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8

  EnterCrit(0LL, 0LL);
  v4 = ValidateHwnd(a1);
  v6 = 0LL;
  v7 = v4;
  if ( v4 )
  {
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v5);
    v9 = CurrentProcessWin32Process;
    if ( CurrentProcessWin32Process )
    {
      v5 = -*(_QWORD *)CurrentProcessWin32Process;
      v9 = -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL) & CurrentProcessWin32Process;
    }
    if ( *(_QWORD *)(*(_QWORD *)(v7 + 16) + 464LL) != v9 )
    {
      v10 = 5;
LABEL_6:
      UserSetLastError(v10);
      goto LABEL_19;
    }
    if ( a2 != 0x4000 )
    {
      if ( (unsigned int)IsWindowBeingDestroyed(v7) )
      {
LABEL_9:
        v10 = 87;
        goto LABEL_6;
      }
      if ( (unsigned int)PsGetWin32KFilterSet(v12, v11, v13) == 5 )
      {
        if ( a2 != 681 )
          goto LABEL_9;
      }
      else if ( a2 != 666 && (unsigned __int16)(a2 - 673) > 9u )
      {
        goto LABEL_9;
      }
      v5 = *(_QWORD *)(v7 + 40);
      if ( (*(_WORD *)(v5 + 42) & 0x2FFF) != 0 )
        goto LABEL_9;
      if ( *(_DWORD *)(v5 + 248) )
      {
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTellMeIf", 0x20000, 8637);
        goto LABEL_9;
      }
    }
    v6 = 1LL;
    *(_WORD *)(*(_QWORD *)(v7 + 40) + 42LL) |= a2;
  }
LABEL_19:
  UserSessionSwitchLeaveCrit(v5);
  return v6;
}
