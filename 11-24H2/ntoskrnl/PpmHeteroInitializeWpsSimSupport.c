/*
 * XREFs of PpmHeteroInitializeWpsSimSupport @ 0x140C35CD0
 * Callers:
 *     PoInitHeteroDetection @ 0x140C2F1BC (PoInitHeteroDetection.c)
 * Callees:
 *     <none>
 */

__int64 PpmHeteroInitializeWpsSimSupport()
{
  __int64 result; // rax

  PpmHeteroHgsUpdateWorkItem.Parameter = 0LL;
  PpmHeteroHgsUpdateWorkItem.List.Flink = 0LL;
  PpmHeteroHgsUpdateWorkItem.WorkerRoutine = (void (__fastcall *)(void *))PpmHeteroHgsUpdateWorker;
  PpmHeteroHgsVendor = 15;
  PpmHeteroHgsEnabled = PpmWpsSimulationOverride & 1;
  PpmHeteroRegisterWpsUpdates = (__int64)PpmHeteroRegisterWpsUpdatesSim;
  PpmHeteroHgsDynamicUpdateEnabled = (PpmWpsSimulationOverride & 8) != 0;
  PpmHeteroWorkloadClasses = ((unsigned __int64)PpmWpsSimulationOverride >> 52) & 0xF;
  if ( (unsigned int)PpmHeteroWorkloadClasses >= 8 )
    PpmHeteroWorkloadClasses = 8;
  result = 0LL;
  PpmHeteroHgsCapabilityBits = HIBYTE(PpmWpsSimulationOverride) & 0xF;
  return result;
}
