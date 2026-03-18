/*
 * XREFs of KsepDebugPrint @ 0x1402CA2D8
 * Callers:
 *     KseKPSOHookDriverTargeted @ 0x1405CC010 (KseKPSOHookDriverTargeted.c)
 *     KseRegisterShimEx @ 0x14073EBF0 (KseRegisterShimEx.c)
 *     KseUnregisterShim @ 0x14073EF20 (KseUnregisterShim.c)
 *     KsepApplyShimsToDriver @ 0x14073F3A4 (KsepApplyShimsToDriver.c)
 *     KsepResolveApplicableShimsForDriver @ 0x14073F888 (KsepResolveApplicableShimsForDriver.c)
 *     KsepDeletePatchSdb @ 0x14073FE58 (KsepDeletePatchSdb.c)
 *     KsepSdbBootInitialize @ 0x14073FF0C (KsepSdbBootInitialize.c)
 *     KseDriverUnloadImage @ 0x140959CDC (KseDriverUnloadImage.c)
 *     KseDriverLoadImage @ 0x140959DBC (KseDriverLoadImage.c)
 *     KsepGetShimsForDriver @ 0x140959F74 (KsepGetShimsForDriver.c)
 *     KseShimDriverIoCallbacks @ 0x14095A0F8 (KseShimDriverIoCallbacks.c)
 *     KsepGetShimCallbacksForDriver @ 0x14095A360 (KsepGetShimCallbacksForDriver.c)
 *     KsepEngineGetShimsFromRegistry @ 0x14095A578 (KsepEngineGetShimsFromRegistry.c)
 *     KseAddHardwareId @ 0x14095A8A0 (KseAddHardwareId.c)
 *     KseQueryDeviceData @ 0x14095C660 (KseQueryDeviceData.c)
 *     KsepSdbMapToMemory @ 0x14095CECC (KsepSdbMapToMemory.c)
 *     KsepShimDatabaseTime @ 0x140A61BF8 (KsepShimDatabaseTime.c)
 *     KseInitialize @ 0x140C2B3FC (KseInitialize.c)
 *     KsepMatchInitBiosInfo @ 0x140C2BB00 (KsepMatchInitBiosInfo.c)
 *     KsepMatchInitMachineInfo @ 0x140C2BE0C (KsepMatchInitMachineInfo.c)
 *     KseShimDatabaseBootInitialize @ 0x140C2BF74 (KseShimDatabaseBootInitialize.c)
 *     KsepEngineReadFlags @ 0x140C2C160 (KsepEngineReadFlags.c)
 *     KseVersionLieInitialize @ 0x140C2C49C (KseVersionLieInitialize.c)
 * Callees:
 *     vDbgPrintExWithPrefixInternal @ 0x1402CB374 (vDbgPrintExWithPrefixInternal.c)
 */

__int64 KsepDebugPrint(__int64 a1, int a2, ...)
{
  va_list va; // [rsp+60h] [rbp+18h] BYREF

  va_start(va, a2);
  return vDbgPrintExWithPrefixInternal((unsigned int)&File, 101, 0, a2, va, 1);
}
