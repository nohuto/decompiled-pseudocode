/*
 * XREFs of KsepLogError @ 0x14048E6F8
 * Callers:
 *     KseKPSOHookDriverTargeted @ 0x1405CC010 (KseKPSOHookDriverTargeted.c)
 *     KseRegisterShimEx @ 0x14073EBF0 (KseRegisterShimEx.c)
 *     KseUnregisterShim @ 0x14073EF20 (KseUnregisterShim.c)
 *     KsepApplyShimsToDriver @ 0x14073F3A4 (KsepApplyShimsToDriver.c)
 *     KsepResolveApplicableShimsForDriver @ 0x14073F888 (KsepResolveApplicableShimsForDriver.c)
 *     KsepDeletePatchSdb @ 0x14073FE58 (KsepDeletePatchSdb.c)
 *     KsepSdbBootInitialize @ 0x14073FF0C (KsepSdbBootInitialize.c)
 *     KsepGetShimCallbacksForDriver @ 0x14095A360 (KsepGetShimCallbacksForDriver.c)
 *     KsepEngineGetShimsFromRegistry @ 0x14095A578 (KsepEngineGetShimsFromRegistry.c)
 *     KseAddHardwareId @ 0x14095A8A0 (KseAddHardwareId.c)
 *     KsepSdbMapToMemory @ 0x14095CECC (KsepSdbMapToMemory.c)
 *     KsepShimDatabaseTime @ 0x140A61BF8 (KsepShimDatabaseTime.c)
 *     KseInitialize @ 0x140C2B3FC (KseInitialize.c)
 *     KsepMatchInitMachineInfo @ 0x140C2BE0C (KsepMatchInitMachineInfo.c)
 *     KseShimDatabaseBootInitialize @ 0x140C2BF74 (KseShimDatabaseBootInitialize.c)
 *     KsepEngineReadFlags @ 0x140C2C160 (KsepEngineReadFlags.c)
 *     KseVersionLieInitialize @ 0x140C2C49C (KseVersionLieInitialize.c)
 * Callees:
 *     KsepLogEtwMessage @ 0x14048E728 (KsepLogEtwMessage.c)
 */

__int64 KsepLogError(__int64 a1, __int64 a2, ...)
{
  va_list va; // [rsp+50h] [rbp+18h] BYREF

  va_start(va, a2);
  return KsepLogEtwMessage(a1, 0LL, a2, (__int64 *)va);
}
