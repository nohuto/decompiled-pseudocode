/*
 * XREFs of EtwpContainerStateWnfCallback @ 0x140640710
 * Callers:
 *     <none>
 * Callees:
 *     ExQueueWorkItem @ 0x140309660 (ExQueueWorkItem.c)
 *     EtwpQueryPartitionRegistryInformation @ 0x140640C4C (EtwpQueryPartitionRegistryInformation.c)
 */

__int64 EtwpContainerStateWnfCallback()
{
  __int64 v0; // rbx

  v0 = EtwpHostSiloState;
  if ( !*(_DWORD *)(EtwpHostSiloState + 4160) )
  {
    EtwpQueryPartitionRegistryInformation(
      EtwpHostSiloState + 4176,
      EtwpHostSiloState + 4216,
      EtwpHostSiloState + 4224,
      EtwpHostSiloState + 4228,
      EtwpHostSiloState + 4208,
      EtwpHostSiloState + 4192);
    ExQueueWorkItem(*(PWORK_QUEUE_ITEM *)(v0 + 4168), NormalWorkQueue);
    *(_DWORD *)(v0 + 4160) = 1;
  }
  return 0LL;
}
