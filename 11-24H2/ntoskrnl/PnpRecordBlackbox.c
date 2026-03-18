/*
 * XREFs of PnpRecordBlackbox @ 0x1409F00D8
 * Callers:
 *     PnpWatchdogFirstChanceCallback @ 0x140722440 (PnpWatchdogFirstChanceCallback.c)
 *     PnpDisableWatchdog @ 0x1409EFFB0 (PnpDisableWatchdog.c)
 * Callees:
 *     PnpRecordBlackboxDelayedRemoveWorkerInformation @ 0x1407356B8 (PnpRecordBlackboxDelayedRemoveWorkerInformation.c)
 *     PnpRecordBlackboxDeviceCompletionQueueInformation @ 0x1409EFED0 (PnpRecordBlackboxDeviceCompletionQueueInformation.c)
 *     PnpRecordBlackboxPnpEventWorkerInformation @ 0x1409F0188 (PnpRecordBlackboxPnpEventWorkerInformation.c)
 */

void __fastcall PnpRecordBlackbox(_QWORD *a1, int a2)
{
  int v2; // edx
  int v3; // edx
  int v4; // edx

  v2 = a2 - 1;
  if ( v2 )
  {
    v3 = v2 - 1;
    if ( v3 )
    {
      v4 = v3 - 1;
      if ( v4 )
      {
        if ( (unsigned int)(v4 - 1) > 1 )
          __fastfail(5u);
      }
      else
      {
        PnpRecordBlackboxDelayedRemoveWorkerInformation(a1);
      }
    }
    else
    {
      PnpRecordBlackboxDeviceCompletionQueueInformation((__int64)a1);
    }
  }
  else
  {
    PnpRecordBlackboxPnpEventWorkerInformation();
  }
}
