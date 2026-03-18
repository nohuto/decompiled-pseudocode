/*
 * XREFs of PopBatteryWakeDpc @ 0x1405D33F0
 * Callers:
 *     <none>
 * Callees:
 *     KeSetEvent @ 0x140250100 (KeSetEvent.c)
 *     ExQueueWorkItem @ 0x140309660 (ExQueueWorkItem.c)
 *     PopBatteryQueueWork @ 0x1404A406C (PopBatteryQueueWork.c)
 */

void PopBatteryWakeDpc()
{
  unsigned int v0; // edi

  byte_140F0ABF8 = 0;
  v0 = 1;
  if ( PopBatteryInitiateIgnoreStatusDuringBoot )
  {
    PopBatteryInitiateIgnoreStatusDuringBoot = 0;
    v0 = 17;
  }
  KeSetEvent(&stru_140F0ABC0, 0, 0);
  _InterlockedExchange(&dword_140F0AB38, 0);
  PopBatteryQueueWork(v0);
  ExQueueWorkItem(&stru_140F0ABD8, DelayedWorkQueue);
}
