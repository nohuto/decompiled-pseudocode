/*
 * XREFs of PopNetRefreshTimerWorkerCallback @ 0x14075C980
 * Callers:
 *     <none>
 * Callees:
 *     PopOkayToQueueNextWorkItem @ 0x1404A4D54 (PopOkayToQueueNextWorkItem.c)
 *     ZwUpdateWnfStateData @ 0x1406AA030 (ZwUpdateWnfStateData.c)
 *     PopNetArmRefreshTimer @ 0x14075C644 (PopNetArmRefreshTimer.c)
 *     PopNetDisengageNetworkRefresh @ 0x14075C7F8 (PopNetDisengageNetworkRefresh.c)
 *     PopNetGetNextDueRefreshTime @ 0x14075C844 (PopNetGetNextDueRefreshTime.c)
 *     PopNetIsNetworkRefreshEnabled @ 0x14075C8F8 (PopNetIsNetworkRefreshEnabled.c)
 *     PopNetSetResiliencyPhaseBias @ 0x140AA5624 (PopNetSetResiliencyPhaseBias.c)
 *     PopAcquirePolicyLock @ 0x140B67CB0 (PopAcquirePolicyLock.c)
 *     PopReleasePolicyLock @ 0x140B67D00 (PopReleasePolicyLock.c)
 */

__int64 __fastcall PopNetRefreshTimerWorkerCallback(__int64 a1, __int64 a2)
{
  __int64 v2; // rcx
  char v3; // dl
  __int64 QuadPart; // rcx
  LARGE_INTEGER NextDueRefreshTime; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v11; // [rsp+20h] [rbp-28h]
  char v12; // [rsp+58h] [rbp+10h] BYREF

  PopAcquirePolicyLock(a1, a2);
  if ( PopNetInLpePhase && PopNetIsNetworkRefreshEnabled() && _InterlockedExchangeAdd(&PopNetRefreshTimerState, 0) == 2 )
  {
    if ( PopNetRefreshIntervalActive )
    {
      PopNetDisengageNetworkRefresh();
      NextDueRefreshTime = PopNetGetNextDueRefreshTime();
      v3 = 1;
      _InterlockedExchange(&PopNetRefreshTimerState, 1);
      QuadPart = NextDueRefreshTime.QuadPart;
    }
    else
    {
      LOBYTE(v2) = 1;
      PopNetSetResiliencyPhaseBias(v2);
      v11 = 0LL;
      v12 = 1;
      ZwUpdateWnfStateData((__int64)&WNF_PO_OPPORTUNISTIC_CS, (__int64)&v12);
      PopNetRefreshIntervalActive = 1;
      v3 = 0;
      _InterlockedExchange(&PopNetRefreshTimerState, 1);
      QuadPart = 300000000LL;
    }
    PopNetArmRefreshTimer(QuadPart, v3);
  }
  PopOkayToQueueNextWorkItem((__int64)&unk_140F07A48);
  return PopReleasePolicyLock(v7, v6, v8, v9, v11);
}
