/*
 * XREFs of GetDevExtFromIndex @ 0x1400019B0
 * Callers:
 *     InitCoreProcessorSetAffinity @ 0x1400230D4 (InitCoreProcessorSetAffinity.c)
 *     InitEnergyCountersOnCurrentProcessor @ 0x140023170 (InitEnergyCountersOnCurrentProcessor.c)
 *     UnInitEnergyCountersOnCurrentProcessor @ 0x1400233B0 (UnInitEnergyCountersOnCurrentProcessor.c)
 *     ValidateCoordinatedLpiDependenciesProcessor @ 0x14003111C (ValidateCoordinatedLpiDependenciesProcessor.c)
 *     DeregisterKernelIdleDomains @ 0x140032DE8 (DeregisterKernelIdleDomains.c)
 *     PepNotifyCoordinatedLpiStates @ 0x140038B74 (PepNotifyCoordinatedLpiStates.c)
 *     LpiEnumerateDependencies @ 0x14003D6A0 (LpiEnumerateDependencies.c)
 *     RegisterKernelIdleDomains @ 0x140041670 (RegisterKernelIdleDomains.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetDevExtFromIndex(unsigned int a1)
{
  return *((_QWORD *)&WPP_MAIN_CB.Queue.ListEntry.Blink->Flink + a1);
}
