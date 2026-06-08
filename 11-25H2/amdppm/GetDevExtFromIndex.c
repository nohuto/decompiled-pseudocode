/*
 * XREFs of GetDevExtFromIndex @ 0x1400019B0
 * Callers:
 *     InitCoreProcessorSetAffinity @ 0x1400220D4 (InitCoreProcessorSetAffinity.c)
 *     InitEnergyCountersOnCurrentProcessor @ 0x140022170 (InitEnergyCountersOnCurrentProcessor.c)
 *     UnInitEnergyCountersOnCurrentProcessor @ 0x1400223B0 (UnInitEnergyCountersOnCurrentProcessor.c)
 *     ValidateCoordinatedLpiDependenciesProcessor @ 0x14002FF1C (ValidateCoordinatedLpiDependenciesProcessor.c)
 *     DeregisterKernelIdleDomains @ 0x140031BE8 (DeregisterKernelIdleDomains.c)
 *     PepNotifyCoordinatedLpiStates @ 0x140037930 (PepNotifyCoordinatedLpiStates.c)
 *     LpiEnumerateDependencies @ 0x14003C450 (LpiEnumerateDependencies.c)
 *     RegisterKernelIdleDomains @ 0x140040420 (RegisterKernelIdleDomains.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetDevExtFromIndex(unsigned int a1)
{
  return *((_QWORD *)&WPP_MAIN_CB.Queue.ListEntry.Blink->Flink + a1);
}
