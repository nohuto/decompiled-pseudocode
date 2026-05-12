/*
 * XREFs of RaidQueueDeferredItem @ 0x140014EC4
 * Callers:
 *     StorPortPauseDevice @ 0x140014A50 (StorPortPauseDevice.c)
 *     StorPortResumeDevice @ 0x140014F00 (StorPortResumeDevice.c)
 *     StorPortDeviceBusy @ 0x14003DC40 (StorPortDeviceBusy.c)
 *     StorPortBusy @ 0x140040270 (StorPortBusy.c)
 *     StorPortNotification @ 0x14004B4F0 (StorPortNotification.c)
 *     StorPortReady @ 0x1400561E0 (StorPortReady.c)
 *     StorPortDeviceReady @ 0x140073920 (StorPortDeviceReady.c)
 *     StorPortLogError @ 0x140074080 (StorPortLogError.c)
 *     StorPortPause @ 0x140074390 (StorPortPause.c)
 *     StorPortResume @ 0x1400749D0 (StorPortResume.c)
 * Callees:
 *     <none>
 */

BOOLEAN __fastcall RaidQueueDeferredItem(char *SystemArgument1, struct _SLIST_ENTRY *a2)
{
  ExpInterlockedPushEntrySList((PSLIST_HEADER)SystemArgument1 + 6, a2);
  return KeInsertQueueDpc((PRKDPC)(SystemArgument1 + 8), SystemArgument1, 0LL);
}
