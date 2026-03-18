/*
 * XREFs of KeCountSetBitsAffinityEx @ 0x140271370
 * Callers:
 *     PPmHeteroHgsUpdateOrderValue @ 0x140268694 (PPmHeteroHgsUpdateOrderValue.c)
 *     KeChangeMemoryAttributes @ 0x14026A684 (KeChangeMemoryAttributes.c)
 *     KeFlushProcessWriteBuffers @ 0x14027118C (KeFlushProcessWriteBuffers.c)
 *     KiForwardTick @ 0x140274A70 (KiForwardTick.c)
 *     ?KiForceIdleUpdateSchedulerParkState@@YAXE@Z @ 0x140355570 (-KiForceIdleUpdateSchedulerParkState@@YAXE@Z.c)
 *     PpmParkReportUnparkedCores @ 0x1403AD800 (PpmParkReportUnparkedCores.c)
 *     KiIntSteerLogMask @ 0x1403AF598 (KiIntSteerLogMask.c)
 *     HalSendNMI @ 0x140541990 (HalSendNMI.c)
 *     KeQueryProcessAvailableCpus @ 0x1405B43BC (KeQueryProcessAvailableCpus.c)
 *     KeQuerySystemAvailableCpus @ 0x1405B447C (KeQuerySystemAvailableCpus.c)
 *     PpmIdleInitializeConcurrency @ 0x14073E060 (PpmIdleInitializeConcurrency.c)
 *     KiInitializeTopologyStructures @ 0x140B49318 (KiInitializeTopologyStructures.c)
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
