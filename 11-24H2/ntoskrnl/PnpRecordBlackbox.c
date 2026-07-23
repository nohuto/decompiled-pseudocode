/*
 * XREFs of PnpRecordBlackbox @ 0x1409ED9A8
 * Callers:
 *     PnpWatchdogFirstChanceCallback @ 0x14071FFD0 (PnpWatchdogFirstChanceCallback.c)
 *     PnpDisableWatchdog @ 0x1409ED880 (PnpDisableWatchdog.c)
 * Callees:
 *     PnpRecordBlackboxDelayedRemoveWorkerInformation @ 0x1407335E8 (PnpRecordBlackboxDelayedRemoveWorkerInformation.c)
 *     PnpRecordBlackboxDeviceCompletionQueueInformation @ 0x1409ED7A0 (PnpRecordBlackboxDeviceCompletionQueueInformation.c)
 *     PnpRecordBlackboxPnpEventWorkerInformation @ 0x1409EDA58 (PnpRecordBlackboxPnpEventWorkerInformation.c)
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
