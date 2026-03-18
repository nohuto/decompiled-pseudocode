/*
 * XREFs of PopInitializeAdpm @ 0x140C33664
 * Callers:
 *     PoInitSystem @ 0x140C61990 (PoInitSystem.c)
 * Callees:
 *     ExInitializeResourceLite2 @ 0x140365350 (ExInitializeResourceLite2.c)
 *     Feature_UnattendedRebootIdleFix__private_IsEnabledDeviceUsageNoInline @ 0x1405DAE00 (Feature_UnattendedRebootIdleFix__private_IsEnabledDeviceUsageNoInline.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 *     PopExtendConnectionState @ 0x14075F788 (PopExtendConnectionState.c)
 *     ExSubscribeWnfStateChange @ 0x140A19320 (ExSubscribeWnfStateChange.c)
 *     PopAdaptiveInitializeBootContext @ 0x140C335CC (PopAdaptiveInitializeBootContext.c)
 */

__int64 PopInitializeAdpm()
{
  __int64 result; // rax
  char v1; // [rsp+40h] [rbp+8h] BYREF

  ExInitializeResourceLite2(&PopAdpmLock, -1);
  memset_0(&PopAdaptiveContext, 0, 0x50uLL);
  dword_140F07358 = -1;
  PopMaximumConnectionSessions = 0;
  PopConnectionState = 0LL;
  dword_140F0735C = 3;
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
