/*
 * XREFs of PopInitializeAdpm @ 0x140C357A4
 * Callers:
 *     PoInitSystem @ 0x140C63AE4 (PoInitSystem.c)
 * Callees:
 *     ExInitializeResourceLite2 @ 0x1403EAA00 (ExInitializeResourceLite2.c)
 *     Feature_UnattendedRebootIdleFix__private_IsEnabledDeviceUsageNoInline @ 0x1405D8120 (Feature_UnattendedRebootIdleFix__private_IsEnabledDeviceUsageNoInline.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     PopExtendConnectionState @ 0x14075E728 (PopExtendConnectionState.c)
 *     ExSubscribeWnfStateChange @ 0x140A12490 (ExSubscribeWnfStateChange.c)
 *     PopAdaptiveInitializeBootContext @ 0x140C3570C (PopAdaptiveInitializeBootContext.c)
 */

NTSTATUS PopInitializeAdpm()
{
  NTSTATUS result; // eax
  char v1; // [rsp+40h] [rbp+8h] BYREF

  ExInitializeResourceLite2(&PopAdpmLock, -1);
  memset_0(&PopAdaptiveContext, 0, 0x50uLL);
  dword_140F07678 = -1;
  PopMaximumConnectionSessions = 0;
  PopConnectionState = 0LL;
  dword_140F0767C = 3;
  PopExtendConnectionState(0);
  if ( (unsigned int)Feature_UnattendedRebootIdleFix__private_IsEnabledDeviceUsageNoInline() )
  {
    PopAdaptiveUpdateIdleContextWorkItem.Parameter = 0LL;
    PopAdaptiveUpdateIdleContextWorkItem.List.Flink = 0LL;
    PopAdaptiveUpdateIdleContextWorkItem.WorkerRoutine = (void (__fastcall *)(void *))PopAdaptiveUpdateIdleContextWorker;
  }
  result = ExSubscribeWnfStateChange((__int64)&v1, (__int64)&WNF_HPM_GLOBAL_HUMAN_PRESENCE_STATE);
  if ( !CmNtSkipRegistryInit )
    return PopAdaptiveInitializeBootContext();
  return result;
}
