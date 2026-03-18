/*
 * XREFs of KsepLogInfo @ 0x14048E6C8
 * Callers:
 *     KseRegisterShimEx @ 0x14073EBF0 (KseRegisterShimEx.c)
 *     KseUnregisterShim @ 0x14073EF20 (KseUnregisterShim.c)
 *     KsepApplyShimsToDriver @ 0x14073F3A4 (KsepApplyShimsToDriver.c)
 *     KsepResolveApplicableShimsForDriver @ 0x14073F888 (KsepResolveApplicableShimsForDriver.c)
 *     KseDriverUnloadImage @ 0x140959CDC (KseDriverUnloadImage.c)
 *     KseDriverLoadImage @ 0x140959DBC (KseDriverLoadImage.c)
 *     KsepGetShimsForDriver @ 0x140959F74 (KsepGetShimsForDriver.c)
 *     KseShimDriverIoCallbacks @ 0x14095A0F8 (KseShimDriverIoCallbacks.c)
 *     KsepGetShimCallbacksForDriver @ 0x14095A360 (KsepGetShimCallbacksForDriver.c)
 *     KseQueryDeviceData @ 0x14095C660 (KseQueryDeviceData.c)
 *     KseInitialize @ 0x140C2B3FC (KseInitialize.c)
 *     KsepMatchInitBiosInfo @ 0x140C2BB00 (KsepMatchInitBiosInfo.c)
 *     KsepEngineReadFlags @ 0x140C2C160 (KsepEngineReadFlags.c)
 * Callees:
 *     KsepLogEtwMessage @ 0x14048E728 (KsepLogEtwMessage.c)
 */

__int64 KsepLogInfo(__int64 a1, __int64 a2, ...)
{
  va_list va; // [rsp+50h] [rbp+18h] BYREF

  va_start(va, a2);
  return KsepLogEtwMessage(a1, 2LL, a2, (__int64 *)va);
}
