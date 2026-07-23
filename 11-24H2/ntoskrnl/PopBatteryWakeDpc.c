/*
 * XREFs of PopBatteryWakeDpc @ 0x1405D52D0
 * Callers:
 *     <none>
 * Callees:
 *     KeSetEvent @ 0x140227B30 (KeSetEvent.c)
 *     ExQueueWorkItem @ 0x1402CE3E0 (ExQueueWorkItem.c)
 *     PopBatteryQueueWork @ 0x14049F07C (PopBatteryQueueWork.c)
 */

void PopBatteryWakeDpc()
{
  unsigned int v0; // edi

  byte_140F0BDD8 = 0;
  v0 = 1;
  if ( PopBatteryInitiateIgnoreStatusDuringBoot )
  {
    PopBatteryInitiateIgnoreStatusDuringBoot = 0;
    v0 = 17;
  }
  KeSetEvent(&stru_140F0BDA0, 0, 0);
  _InterlockedExchange(&dword_140F0BD18, 0);
  PopBatteryQueueWork(v0);
  ExQueueWorkItem(&stru_140F0BDB8, DelayedWorkQueue);
}
