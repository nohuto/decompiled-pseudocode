/*
 * XREFs of PnpGetCurrentlyActiveWorkerThreadV1 @ 0x1405A5A88
 * Callers:
 *     PnpBugcheckPowerTimeout @ 0x1405A59E4 (PnpBugcheckPowerTimeout.c)
 * Callees:
 *     <none>
 */

__int64 PnpGetCurrentlyActiveWorkerThreadV1()
{
  __int64 result; // rax

  result = *(_QWORD *)&PnpDelayedRemoveWorkerThread;
  if ( !*(_QWORD *)&PnpDelayedRemoveWorkerThread )
  {
    result = *(_QWORD *)&PnpDeviceEventThread;
    if ( !*(_QWORD *)&PnpDeviceEventThread )
      return *(_QWORD *)&PnpDeviceActionThread;
  }
  return result;
}
