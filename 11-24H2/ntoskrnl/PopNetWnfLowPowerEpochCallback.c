/*
 * XREFs of PopNetWnfLowPowerEpochCallback @ 0x140A30E70
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x14020DE50 (ExReleaseRundownProtection_0.c)
 *     KeLeaveCriticalRegion @ 0x140288450 (KeLeaveCriticalRegion.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     PopNetArmRefreshTimer @ 0x14075B5E0 (PopNetArmRefreshTimer.c)
 *     PopNetDisarmRefreshTimer @ 0x14075B6E8 (PopNetDisarmRefreshTimer.c)
 *     PopNetDisengageNetworkRefresh @ 0x14075B798 (PopNetDisengageNetworkRefresh.c)
 *     PopNetGetNextDueRefreshTime @ 0x14075B7E4 (PopNetGetNextDueRefreshTime.c)
 *     PopNetIsNetworkRefreshEnabled @ 0x14075B898 (PopNetIsNetworkRefreshEnabled.c)
 *     ExpWnfReadStateData @ 0x140901C9C (ExpWnfReadStateData.c)
 *     ExpWnfAcquireSubscriptionNameInstance @ 0x140A313DC (ExpWnfAcquireSubscriptionNameInstance.c)
 *     PopAcquirePolicyLock @ 0x140B69DF0 (PopAcquirePolicyLock.c)
 *     PopReleasePolicyLock @ 0x140B69E40 (PopReleasePolicyLock.c)
 */

__int64 __fastcall PopNetWnfLowPowerEpochCallback(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rax
  struct _EX_RUNDOWN_REF *v2; // rdi
  int v3; // ebx
  int v4; // edi
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  LARGE_INTEGER NextDueRefreshTime; // rax
  __int64 v13; // [rsp+20h] [rbp-38h]
  unsigned int v14; // [rsp+30h] [rbp-28h] BYREF
  int v15; // [rsp+38h] [rbp-20h] BYREF
  _BYTE v16[8]; // [rsp+40h] [rbp-18h] BYREF

  CurrentThread = KeGetCurrentThread();
  v14 = 8;
  --CurrentThread->KernelApcDisable;
  v2 = (struct _EX_RUNDOWN_REF *)ExpWnfAcquireSubscriptionNameInstance(a1, a1);
  if ( v2 )
  {
    v3 = ExpWnfReadStateData((__int64)v2, &v15, v16, 8u, &v14);
    ExReleaseRundownProtection_0(v2 + 1);
    v4 = 0;
    if ( v3 < 0 )
      v4 = v3;
    KeLeaveCriticalRegion();
    if ( v4 >= 0 )
    {
      if ( v14 < 8 )
      {
        return 0;
      }
      else
      {
        PopAcquirePolicyLock(v6, v5);
        if ( (v16[0] & 2) != 0 )
        {
          PopNetInLpePhase = 1;
          if ( PopNetIsNetworkRefreshEnabled() )
          {
            NextDueRefreshTime = PopNetGetNextDueRefreshTime();
            _InterlockedExchange(&PopNetRefreshTimerState, 1);
            PopNetArmRefreshTimer(NextDueRefreshTime.QuadPart, 1);
          }
        }
        else if ( PopNetInLpePhase )
        {
          PopNetInLpePhase = 0;
          if ( _InterlockedExchange(&PopNetRefreshTimerState, 0) == 1 )
            PopNetDisarmRefreshTimer(v8, v7, v9, v10);
          if ( PopNetRefreshIntervalActive )
            PopNetDisengageNetworkRefresh();
        }
        PopReleasePolicyLock(v8, v7, v9, v10, v13);
      }
    }
  }
  else
  {
    KeLeaveCriticalRegion();
    return (unsigned int)-1073741772;
  }
  return (unsigned int)v4;
}
