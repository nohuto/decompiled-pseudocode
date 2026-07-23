/*
 * XREFs of EtwpContainerStateWnfCallback @ 0x14064AD40
 * Callers:
 *     <none>
 * Callees:
 *     ExQueueWorkItem @ 0x1402CE3E0 (ExQueueWorkItem.c)
 *     EtwpQueryPartitionRegistryInformation @ 0x14064B27C (EtwpQueryPartitionRegistryInformation.c)
 */

__int64 EtwpContainerStateWnfCallback()
{
  __int64 v0; // rbx

  v0 = EtwpHostSiloState;
  if ( !*(_DWORD *)(EtwpHostSiloState + 4432) )
  {
    EtwpQueryPartitionRegistryInformation(
      EtwpHostSiloState + 4448,
      EtwpHostSiloState + 4488,
      EtwpHostSiloState + 4496,
      EtwpHostSiloState + 4500,
      EtwpHostSiloState + 4480,
      EtwpHostSiloState + 4464);
    ExQueueWorkItem(*(PWORK_QUEUE_ITEM *)(v0 + 4440), NormalWorkQueue);
    *(_DWORD *)(v0 + 4432) = 1;
  }
  return 0LL;
}
