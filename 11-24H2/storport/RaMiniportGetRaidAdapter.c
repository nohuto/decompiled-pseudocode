/*
 * XREFs of RaMiniportGetRaidAdapter @ 0x140036868
 * Callers:
 *     StorReset @ 0x140040430 (StorReset.c)
 *     StorpAllocateHostMemoryBuffer @ 0x140040D6C (StorpAllocateHostMemoryBuffer.c)
 *     StorpFreeHostMemoryBuffer @ 0x1400538E8 (StorpFreeHostMemoryBuffer.c)
 *     StorpUnitInitializePoFxPower @ 0x14005456C (StorpUnitInitializePoFxPower.c)
 *     RaidAdapterUpdateDynamicRegistrySettings @ 0x140064F60 (RaidAdapterUpdateDynamicRegistrySettings.c)
 *     StorExtBuildScatterGatherList @ 0x140073100 (StorExtBuildScatterGatherList.c)
 *     StorExtPutScatterGatherList @ 0x140073610 (StorExtPutScatterGatherList.c)
 *     StorPortCompleteRequest @ 0x140073760 (StorPortCompleteRequest.c)
 *     StorPortGetDeviceBase @ 0x140073BD0 (StorPortGetDeviceBase.c)
 *     StorPortGetUncachedExtension @ 0x140073D40 (StorPortGetUncachedExtension.c)
 *     StorpAdapterInitializePoFxPower @ 0x140074E94 (StorpAdapterInitializePoFxPower.c)
 *     StorPortGetScatterGatherListVrfy @ 0x1401C12D0 (StorPortGetScatterGatherListVrfy.c)
 *     StorPortGetUncachedExtensionVrfy @ 0x1401C13A0 (StorPortGetUncachedExtensionVrfy.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RaMiniportGetRaidAdapter(_BYTE *a1)
{
  if ( !a1 || (a1[248] & 1) != 0 )
    return 0LL;
  else
    return *(_QWORD *)a1;
}
