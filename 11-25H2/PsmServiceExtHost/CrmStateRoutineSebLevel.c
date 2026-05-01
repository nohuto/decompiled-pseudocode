/*
 * XREFs of CrmStateRoutineSebLevel @ 0x180068638
 * Callers:
 *     CrmStateMonitorDisconnectedStandbyCallback @ 0x180068580 (CrmStateMonitorDisconnectedStandbyCallback.c)
 *     CrmStateMonitorDelayedInternetLossCallback @ 0x180079D10 (CrmStateMonitorDelayedInternetLossCallback.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CrmStateRoutineSebLevel(_DWORD *a1)
{
  __int64 result; // rax

  result = 0LL;
  if ( *a1 )
    return (a1[2] >> 1) & 1;
  return result;
}
