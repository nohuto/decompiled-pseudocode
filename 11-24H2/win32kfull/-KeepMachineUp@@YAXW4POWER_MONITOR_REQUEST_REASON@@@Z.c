/*
 * XREFs of ?KeepMachineUp@@YAXW4POWER_MONITOR_REQUEST_REASON@@@Z @ 0x14016E314
 * Callers:
 *     EditionKeepMachineUp @ 0x14016E230 (EditionKeepMachineUp.c)
 * Callees:
 *     SetTimerCoalescingTolerance @ 0x1401A5D30 (SetTimerCoalescingTolerance.c)
 */

void __fastcall KeepMachineUp(__int64 a1, __int64 a2)
{
  __int64 v2; // rdi
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 UserSessionState; // rbx
  _QWORD v6[5]; // [rsp+20h] [rbp-28h] BYREF

  v2 = (int)a1;
  UserSessionState = W32GetUserSessionState(a1, a2);
  if ( !*(_DWORD *)(UserSessionState + 2760) || *(_WORD *)(W32GetUserSessionState(v4, v3) + 69008) )
  {
    if ( *(_DWORD *)(UserSessionState + 2768) && !*(_WORD *)(W32GetUserSessionState(v4, v3) + 69008) )
    {
      PoSetUserPresent((unsigned int)v2);
      *(_DWORD *)(UserSessionState + 2768) = 0;
    }
    if ( *(_DWORD *)(UserSessionState + 2756) && *(_DWORD *)(UserSessionState + 2896) != 2
      || *(_DWORD *)(UserSessionState + 2764)
      || *(_DWORD *)(W32GetUserGdiSessionState(v4) + 36) )
    {
      if ( *(_DWORD *)(W32GetUserSessionState(v4, v3) + 62744) )
        SetTimerCoalescingTolerance(0LL);
    }
    else
    {
      v6[0] = 0LL;
      v6[1] = 0LL;
      v6[2] = 4LL;
      v6[3] = v2;
      QueuePowerRequest(v6, 0LL);
    }
    if ( *(_DWORD *)(UserSessionState + 2764) )
    {
      if ( !**(_BYTE **)(UserSessionState + 2720) )
        SetPendingInput((unsigned int)v2);
    }
  }
  else
  {
    PoSetUserPresent((unsigned int)v2);
  }
}
