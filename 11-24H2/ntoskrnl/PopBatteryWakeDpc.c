/*
 * XREFs of PopBatteryWakeDpc @ 0x1405D7D50
 * Callers:
 *     <none>
 * Callees:
 *     KeSetEvent @ 0x1402725A0 (KeSetEvent.c)
 *     ExQueueWorkItem @ 0x140325850 (ExQueueWorkItem.c)
 *     PopBatteryQueueWork @ 0x1404A42EC (PopBatteryQueueWork.c)
 */

void PopBatteryWakeDpc()
{
  unsigned int v0; // edi

  byte_140F0AF98 = 0;
  v0 = 1;
  if ( PopBatteryInitiateIgnoreStatusDuringBoot )
  {
    PopBatteryInitiateIgnoreStatusDuringBoot = 0;
    v0 = 17;
  }
  KeSetEvent(&stru_140F0AF60, 0, 0);
  _InterlockedExchange(&dword_140F0AED8, 0);
  PopBatteryQueueWork(v0);
  ExQueueWorkItem(&stru_140F0AF78, DelayedWorkQueue);
}
