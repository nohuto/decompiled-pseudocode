/*
 * XREFs of SetTimerCoalescingTolerance @ 0x1401A5D30
 * Callers:
 *     ?KeepMachineUp@@YAXW4POWER_MONITOR_REQUEST_REASON@@@Z @ 0x14016E314 (-KeepMachineUp@@YAXW4POWER_MONITOR_REQUEST_REASON@@@Z.c)
 *     xxxSwitchDesktop @ 0x1401F69E4 (xxxSwitchDesktop.c)
 *     ?StartScreenSaver@@YAXH@Z @ 0x14026A80C (-StartScreenSaver@@YAXH@Z.c)
 *     InitTimerCoalescing @ 0x140289B70 (InitTimerCoalescing.c)
 * Callees:
 *     IsCurrentSessionServiceSession @ 0x1400A4078 (IsCurrentSessionServiceSession.c)
 *     ?ConfigureRITDelayableTimers@@YAXW4RitTimerRate@@@Z @ 0x1401A5E30 (-ConfigureRITDelayableTimers@@YAXW4RitTimerRate@@@Z.c)
 */

__int64 __fastcall SetTimerCoalescingTolerance(int a1)
{
  __int64 v1; // rdi
  int v2; // ebx
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 result; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rcx
  unsigned int v9; // ebx
  int v10; // edi
  __int64 v11; // rcx
  __int64 v12; // rcx

  v1 = a1;
  v2 = IsCurrentSessionServiceSession();
  result = W32GetUserSessionState(v4, v3);
  v6 = (unsigned int)-v2;
  *(_DWORD *)(result + 62820) = v1;
  v7 = *(unsigned int *)(result + 57584 + 4 * (v1 + (-(__int64)(v2 != 0) & 0xFFFFFFFFFFFFFFFCuLL) + 1305));
  *(_DWORD *)(result + 62780) = v7;
  if ( !v2 )
  {
    if ( !(_DWORD)v1 )
    {
      *(_DWORD *)(result + 62744) = 0;
      v8 = 1LL;
      return ConfigureRITDelayableTimers(v8, v6);
    }
    v9 = 2;
    v10 = v1 - 2;
    if ( !v10 )
    {
      *(_DWORD *)(result + 62744) |= 1u;
      if ( (*(_DWORD *)(result + 62744) & 2) == 0
        && *(int *)(W32GetUserSessionState(v7, v6) + 62856) > 0
        && (*(_DWORD *)(W32GetUserSessionState(v11, v6) + 66140)
         || (**(_DWORD **)(W32GetUserSessionState(v12, v6) + 19928) & 0x200) != 0) )
      {
        v9 = 1;
      }
      goto LABEL_11;
    }
    if ( v10 == 1 )
    {
      *(_DWORD *)(result + 62744) |= 2u;
      result = *(unsigned int *)(result + 62744);
      if ( (result & 1) != 0 )
      {
LABEL_11:
        v8 = v9;
        return ConfigureRITDelayableTimers(v8, v6);
      }
    }
  }
  return result;
}
