/*
 * XREFs of KsepLogInfo @ 0x140488AF8
 * Callers:
 *     KseRegisterShimEx @ 0x14073CB20 (KseRegisterShimEx.c)
 *     KseUnregisterShim @ 0x14073CE50 (KseUnregisterShim.c)
 *     KsepApplyShimsToDriver @ 0x14073D2D4 (KsepApplyShimsToDriver.c)
 *     KsepResolveApplicableShimsForDriver @ 0x14073D7B8 (KsepResolveApplicableShimsForDriver.c)
 *     KseDriverUnloadImage @ 0x14094179C (KseDriverUnloadImage.c)
 *     KseDriverLoadImage @ 0x14094187C (KseDriverLoadImage.c)
 *     KsepGetShimsForDriver @ 0x140941A34 (KsepGetShimsForDriver.c)
 *     KseShimDriverIoCallbacks @ 0x140941BB8 (KseShimDriverIoCallbacks.c)
 *     KsepGetShimCallbacksForDriver @ 0x140941E20 (KsepGetShimCallbacksForDriver.c)
 *     KseQueryDeviceData @ 0x140944120 (KseQueryDeviceData.c)
 *     KseInitialize @ 0x140C2D51C (KseInitialize.c)
 *     KsepMatchInitBiosInfo @ 0x140C2DC20 (KsepMatchInitBiosInfo.c)
 *     KsepEngineReadFlags @ 0x140C2E280 (KsepEngineReadFlags.c)
 * Callees:
 *     KsepLogEtwMessage @ 0x140488B58 (KsepLogEtwMessage.c)
 */

__int64 KsepLogInfo(__int64 a1, __int64 a2, ...)
{
  va_list va; // [rsp+50h] [rbp+18h] BYREF

  va_start(va, a2);
  return KsepLogEtwMessage(a1, 2LL, a2, (__int64 *)va);
}
