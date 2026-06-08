/*
 * XREFs of GetDevExtFromIndex @ 0x1400066F0
 * Callers:
 *     ValidateCoordinatedLpiDependenciesProcessor @ 0x14002E6E8 (ValidateCoordinatedLpiDependenciesProcessor.c)
 *     PepNotifyCoordinatedLpiStates @ 0x1400394DC (PepNotifyCoordinatedLpiStates.c)
 *     LpiEnumerateDependencies @ 0x14003CA24 (LpiEnumerateDependencies.c)
 *     DeregisterKernelIdleDomains @ 0x14003D960 (DeregisterKernelIdleDomains.c)
 *     RegisterKernelIdleDomains @ 0x14003E75C (RegisterKernelIdleDomains.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetDevExtFromIndex(unsigned int a1)
{
  return *((_QWORD *)&WPP_MAIN_CB.Queue.ListEntry.Flink->Flink + a1);
}
