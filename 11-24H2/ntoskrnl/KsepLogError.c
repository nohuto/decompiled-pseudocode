/*
 * XREFs of KsepLogError @ 0x140488B28
 * Callers:
 *     KseKPSOHookDriverTargeted @ 0x1405C9730 (KseKPSOHookDriverTargeted.c)
 *     KseRegisterShimEx @ 0x14073CB20 (KseRegisterShimEx.c)
 *     KseUnregisterShim @ 0x14073CE50 (KseUnregisterShim.c)
 *     KsepApplyShimsToDriver @ 0x14073D2D4 (KsepApplyShimsToDriver.c)
 *     KsepResolveApplicableShimsForDriver @ 0x14073D7B8 (KsepResolveApplicableShimsForDriver.c)
 *     KsepDeletePatchSdb @ 0x14073DD88 (KsepDeletePatchSdb.c)
 *     KsepSdbBootInitialize @ 0x14073DE3C (KsepSdbBootInitialize.c)
 *     KsepGetShimCallbacksForDriver @ 0x140941E20 (KsepGetShimCallbacksForDriver.c)
 *     KsepEngineGetShimsFromRegistry @ 0x140942038 (KsepEngineGetShimsFromRegistry.c)
 *     KseAddHardwareId @ 0x140942360 (KseAddHardwareId.c)
 *     KsepSdbMapToMemory @ 0x14094498C (KsepSdbMapToMemory.c)
 *     KsepShimDatabaseTime @ 0x140A5A4EC (KsepShimDatabaseTime.c)
 *     KseInitialize @ 0x140C2D51C (KseInitialize.c)
 *     KsepMatchInitMachineInfo @ 0x140C2DF2C (KsepMatchInitMachineInfo.c)
 *     KseShimDatabaseBootInitialize @ 0x140C2E094 (KseShimDatabaseBootInitialize.c)
 *     KsepEngineReadFlags @ 0x140C2E280 (KsepEngineReadFlags.c)
 *     KseVersionLieInitialize @ 0x140C2E5BC (KseVersionLieInitialize.c)
 * Callees:
 *     KsepLogEtwMessage @ 0x140488B58 (KsepLogEtwMessage.c)
 */

__int64 KsepLogError(__int64 a1, __int64 a2, ...)
{
  va_list va; // [rsp+50h] [rbp+18h] BYREF

  va_start(va, a2);
  return KsepLogEtwMessage(a1, 0LL, a2, (__int64 *)va);
}
