/*
 * XREFs of KeCountSetBitsAffinityEx @ 0x14039E490
 * Callers:
 *     KiForwardTick @ 0x1402AC02C (KiForwardTick.c)
 *     KiIntSteerLogMask @ 0x1402B1728 (KiIntSteerLogMask.c)
 *     PpmParkReportUnparkedCores @ 0x1402B2410 (PpmParkReportUnparkedCores.c)
 *     KeFlushProcessWriteBuffers @ 0x14039E2AC (KeFlushProcessWriteBuffers.c)
 *     KeChangeMemoryAttributes @ 0x1403A4D48 (KeChangeMemoryAttributes.c)
 *     PPmHeteroHgsUpdateOrderValue @ 0x14047BAB4 (PPmHeteroHgsUpdateOrderValue.c)
 *     ?KiForceIdleUpdateSchedulerParkState@@YAXE@Z @ 0x140484B24 (-KiForceIdleUpdateSchedulerParkState@@YAXE@Z.c)
 *     HalSendNMI @ 0x140541B10 (HalSendNMI.c)
 *     KeUpdateProcessorRestrictionsEx @ 0x1405B273C (KeUpdateProcessorRestrictionsEx.c)
 *     KeQueryProcessAvailableCpus @ 0x1405B588C (KeQueryProcessAvailableCpus.c)
 *     KeQuerySystemAvailableCpus @ 0x1405B594C (KeQuerySystemAvailableCpus.c)
 *     PpmEventTraceMultiClassHeteroResponseEx @ 0x1405DC0EC (PpmEventTraceMultiClassHeteroResponseEx.c)
 *     PpmParkCalculateCoreParkingMaskEx @ 0x1405DF1A8 (PpmParkCalculateCoreParkingMaskEx.c)
 *     PpmParkComputeUnparkMaskEx @ 0x1405DFACC (PpmParkComputeUnparkMaskEx.c)
 *     PpmIdleInitializeConcurrency @ 0x140748410 (PpmIdleInitializeConcurrency.c)
 *     KiInitializeTopologyStructures @ 0x140B5B318 (KiInitializeTopologyStructures.c)
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
