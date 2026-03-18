/*
 * XREFs of KsepLogError @ 0x14048E750
 * Callers:
 *     KseKPSOHookDriverTargeted @ 0x1405C79F0 (KseKPSOHookDriverTargeted.c)
 *     KseRegisterShimEx @ 0x140732BD0 (KseRegisterShimEx.c)
 *     KseUnregisterShim @ 0x140732F00 (KseUnregisterShim.c)
 *     KsepApplyShimsToDriver @ 0x140733384 (KsepApplyShimsToDriver.c)
 *     KsepResolveApplicableShimsForDriver @ 0x140733868 (KsepResolveApplicableShimsForDriver.c)
 *     KsepDeletePatchSdb @ 0x140733E38 (KsepDeletePatchSdb.c)
 *     KsepSdbBootInitialize @ 0x140733EEC (KsepSdbBootInitialize.c)
 *     KsepSdbMapToMemory @ 0x14082B4A8 (KsepSdbMapToMemory.c)
 *     KseAddHardwareId @ 0x14082C174 (KseAddHardwareId.c)
 *     KsepGetShimCallbacksForDriver @ 0x140A50334 (KsepGetShimCallbacksForDriver.c)
 *     KsepEngineGetShimsFromRegistry @ 0x140A5054C (KsepEngineGetShimsFromRegistry.c)
 *     KsepShimDatabaseTime @ 0x140A6049C (KsepShimDatabaseTime.c)
 *     KseInitialize @ 0x140C1A2FC (KseInitialize.c)
 *     KsepMatchInitMachineInfo @ 0x140C1AD0C (KsepMatchInitMachineInfo.c)
 *     KseShimDatabaseBootInitialize @ 0x140C1AE74 (KseShimDatabaseBootInitialize.c)
 *     KsepEngineReadFlags @ 0x140C1B060 (KsepEngineReadFlags.c)
 *     KseVersionLieInitialize @ 0x140C1B39C (KseVersionLieInitialize.c)
 * Callees:
 *     KsepLogEtwMessage @ 0x14048E780 (KsepLogEtwMessage.c)
 */

__int64 KsepLogError(__int64 a1, __int64 a2, ...)
{
  va_list va; // [rsp+50h] [rbp+18h] BYREF

  va_start(va, a2);
  return KsepLogEtwMessage(a1, 0LL, a2, (__int64 *)va);
}
