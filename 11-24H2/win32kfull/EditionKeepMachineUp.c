/*
 * XREFs of EditionKeepMachineUp @ 0x14016E230
 * Callers:
 *     <none>
 * Callees:
 *     ?KeepMachineUp@@YAXW4POWER_MONITOR_REQUEST_REASON@@@Z @ 0x14016E314 (-KeepMachineUp@@YAXW4POWER_MONITOR_REQUEST_REASON@@@Z.c)
 *     ?MapInputToMonitorOnReason@@YA?AW4POWER_MONITOR_REQUEST_REASON@@W4_LINP_SOURCE@@@Z @ 0x14016E464 (-MapInputToMonitorOnReason@@YA-AW4POWER_MONITOR_REQUEST_REASON@@W4_LINP_SOURCE@@@Z.c)
 */

__int64 __fastcall EditionKeepMachineUp(__int64 a1, __int64 a2, __int64 a3, char a4)
{
  unsigned int v5; // edi
  __int64 v6; // rdx
  _DWORD *v7; // rcx
  enum POWER_MONITOR_REQUEST_REASON v8; // eax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 UserSessionState; // rdi
  __int128 v13; // [rsp+20h] [rbp-28h] BYREF
  __int128 v14; // [rsp+30h] [rbp-18h]

  v5 = a2;
  if ( !*(_DWORD *)(W32GetUserSessionState(a1, a2) + 19128) || (a4 & 8) == 0 )
  {
    v7 = *(_DWORD **)(W32GetUserSessionState(v7, v6) + 19928);
    if ( (*v7 & 0x4000) == 0 || (a4 & 2) != 0 )
    {
      v8 = (unsigned int)MapInputToMonitorOnReason(v5);
      KeepMachineUp(v8);
    }
  }
  UserSessionState = W32GetUserSessionState(v7, v6);
  if ( *(_DWORD *)(UserSessionState + 2744)
    && ((**(_DWORD **)(W32GetUserSessionState(v10, v9) + 19928) & 0x4000) == 0 || (a4 & 2) != 0) )
  {
    *(_DWORD *)(UserSessionState + 2744) = 0;
    v14 = 0LL;
    LODWORD(v14) = 8;
    v13 = 0LL;
    QueuePowerRequest(&v13, 0LL);
  }
  return 1LL;
}
