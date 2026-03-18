/*
 * XREFs of KsepDebugPrint @ 0x1404D3784
 * Callers:
 *     KseKPSOHookDriverTargeted @ 0x1405C79F0 (KseKPSOHookDriverTargeted.c)
 *     KseRegisterShimEx @ 0x140732BD0 (KseRegisterShimEx.c)
 *     KseUnregisterShim @ 0x140732F00 (KseUnregisterShim.c)
 *     KsepApplyShimsToDriver @ 0x140733384 (KsepApplyShimsToDriver.c)
 *     KsepResolveApplicableShimsForDriver @ 0x140733868 (KsepResolveApplicableShimsForDriver.c)
 *     KsepDeletePatchSdb @ 0x140733E38 (KsepDeletePatchSdb.c)
 *     KsepSdbBootInitialize @ 0x140733EEC (KsepSdbBootInitialize.c)
 *     KseQueryDeviceData @ 0x14082A670 (KseQueryDeviceData.c)
 *     KsepSdbMapToMemory @ 0x14082B4A8 (KsepSdbMapToMemory.c)
 *     KseAddHardwareId @ 0x14082C174 (KseAddHardwareId.c)
 *     KseDriverUnloadImage @ 0x140A4FCB0 (KseDriverUnloadImage.c)
 *     KseDriverLoadImage @ 0x140A4FD90 (KseDriverLoadImage.c)
 *     KsepGetShimsForDriver @ 0x140A4FF48 (KsepGetShimsForDriver.c)
 *     KseShimDriverIoCallbacks @ 0x140A500CC (KseShimDriverIoCallbacks.c)
 *     KsepGetShimCallbacksForDriver @ 0x140A50334 (KsepGetShimCallbacksForDriver.c)
 *     KsepEngineGetShimsFromRegistry @ 0x140A5054C (KsepEngineGetShimsFromRegistry.c)
 *     KsepShimDatabaseTime @ 0x140A6049C (KsepShimDatabaseTime.c)
 *     KseInitialize @ 0x140C1A2FC (KseInitialize.c)
 *     KsepMatchInitBiosInfo @ 0x140C1AA00 (KsepMatchInitBiosInfo.c)
 *     KsepMatchInitMachineInfo @ 0x140C1AD0C (KsepMatchInitMachineInfo.c)
 *     KseShimDatabaseBootInitialize @ 0x140C1AE74 (KseShimDatabaseBootInitialize.c)
 *     KsepEngineReadFlags @ 0x140C1B060 (KsepEngineReadFlags.c)
 *     KseVersionLieInitialize @ 0x140C1B39C (KseVersionLieInitialize.c)
 * Callees:
 *     vDbgPrintExWithPrefixInternal @ 0x1403A9714 (vDbgPrintExWithPrefixInternal.c)
 */

__int64 KsepDebugPrint(__int64 a1, int a2, ...)
{
  va_list va; // [rsp+60h] [rbp+18h] BYREF

  va_start(va, a2);
  return vDbgPrintExWithPrefixInternal((int)&File, 101, 0, a2, va, 1);
}
