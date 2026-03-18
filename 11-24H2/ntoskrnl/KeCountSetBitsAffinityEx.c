/*
 * XREFs of KeCountSetBitsAffinityEx @ 0x1403AFC80
 * Callers:
 *     PPmHeteroHgsUpdateOrderValue @ 0x140203D90 (PPmHeteroHgsUpdateOrderValue.c)
 *     KiForwardTick @ 0x14029D53C (KiForwardTick.c)
 *     KiIntSteerLogMask @ 0x140353958 (KiIntSteerLogMask.c)
 *     PpmParkReportUnparkedCores @ 0x1403546E0 (PpmParkReportUnparkedCores.c)
 *     KeFlushProcessWriteBuffers @ 0x1403AFA9C (KeFlushProcessWriteBuffers.c)
 *     KeChangeMemoryAttributes @ 0x1403CA178 (KeChangeMemoryAttributes.c)
 *     ?KiForceIdleUpdateSchedulerParkState@@YAXE@Z @ 0x1403CAED4 (-KiForceIdleUpdateSchedulerParkState@@YAXE@Z.c)
 *     HalSendNMI @ 0x1405441C0 (HalSendNMI.c)
 *     KeUpdateProcessorRestrictionsEx @ 0x1405B5474 (KeUpdateProcessorRestrictionsEx.c)
 *     KeQueryProcessAvailableCpus @ 0x1405B82AC (KeQueryProcessAvailableCpus.c)
 *     KeQuerySystemAvailableCpus @ 0x1405B836C (KeQuerySystemAvailableCpus.c)
 *     PpmEventTraceMultiClassHeteroResponseEx @ 0x1405DEFC0 (PpmEventTraceMultiClassHeteroResponseEx.c)
 *     PpmParkCalculateCoreParkingMaskEx @ 0x1405E1B9C (PpmParkCalculateCoreParkingMaskEx.c)
 *     PpmParkComputeUnparkMaskEx @ 0x1405E2544 (PpmParkComputeUnparkMaskEx.c)
 *     PpmIdleInitializeConcurrency @ 0x14074A0E0 (PpmIdleInitializeConcurrency.c)
 *     KiInitializeTopologyStructures @ 0x140B59298 (KiInitializeTopologyStructures.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KeCountSetBitsAffinityEx(unsigned __int16 *a1)
{
  unsigned int v1; // edx
  __int64 result; // rax
  unsigned __int64 *v3; // rcx
  __int64 v4; // r8

  v1 = *a1;
  result = 0LL;
  if ( (_WORD)v1 )
  {
    v3 = (unsigned __int64 *)(a1 + 4);
    v4 = v1;
    do
    {
      result = (unsigned int)__popcnt(*v3++) + (unsigned int)result;
      --v4;
    }
    while ( v4 );
  }
  return result;
}
