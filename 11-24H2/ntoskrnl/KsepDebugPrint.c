/*
 * XREFs of KsepDebugPrint @ 0x1404CC7D8
 * Callers:
 *     KseKPSOHookDriverTargeted @ 0x1405C9730 (KseKPSOHookDriverTargeted.c)
 *     KseRegisterShimEx @ 0x14073CB20 (KseRegisterShimEx.c)
 *     KseUnregisterShim @ 0x14073CE50 (KseUnregisterShim.c)
 *     KsepApplyShimsToDriver @ 0x14073D2D4 (KsepApplyShimsToDriver.c)
 *     KsepResolveApplicableShimsForDriver @ 0x14073D7B8 (KsepResolveApplicableShimsForDriver.c)
 *     KsepDeletePatchSdb @ 0x14073DD88 (KsepDeletePatchSdb.c)
 *     KsepSdbBootInitialize @ 0x14073DE3C (KsepSdbBootInitialize.c)
 *     KseDriverUnloadImage @ 0x14094179C (KseDriverUnloadImage.c)
 *     KseDriverLoadImage @ 0x14094187C (KseDriverLoadImage.c)
 *     KsepGetShimsForDriver @ 0x140941A34 (KsepGetShimsForDriver.c)
 *     KseShimDriverIoCallbacks @ 0x140941BB8 (KseShimDriverIoCallbacks.c)
 *     KsepGetShimCallbacksForDriver @ 0x140941E20 (KsepGetShimCallbacksForDriver.c)
 *     KsepEngineGetShimsFromRegistry @ 0x140942038 (KsepEngineGetShimsFromRegistry.c)
 *     KseAddHardwareId @ 0x140942360 (KseAddHardwareId.c)
 *     KseQueryDeviceData @ 0x140944120 (KseQueryDeviceData.c)
 *     KsepSdbMapToMemory @ 0x14094498C (KsepSdbMapToMemory.c)
 *     KsepShimDatabaseTime @ 0x140A5A4EC (KsepShimDatabaseTime.c)
 *     KseInitialize @ 0x140C2D51C (KseInitialize.c)
 *     KsepMatchInitBiosInfo @ 0x140C2DC20 (KsepMatchInitBiosInfo.c)
 *     KsepMatchInitMachineInfo @ 0x140C2DF2C (KsepMatchInitMachineInfo.c)
 *     KseShimDatabaseBootInitialize @ 0x140C2E094 (KseShimDatabaseBootInitialize.c)
 *     KsepEngineReadFlags @ 0x140C2E280 (KsepEngineReadFlags.c)
 *     KseVersionLieInitialize @ 0x140C2E5BC (KseVersionLieInitialize.c)
 * Callees:
 *     vDbgPrintExWithPrefixInternal @ 0x140275BC4 (vDbgPrintExWithPrefixInternal.c)
 */

__int64 KsepDebugPrint(__int64 a1, int a2, ...)
{
  va_list va; // [rsp+60h] [rbp+18h] BYREF

  va_start(va, a2);
  return vDbgPrintExWithPrefixInternal((int)&File, 101, 0, a2, va, 1);
}
