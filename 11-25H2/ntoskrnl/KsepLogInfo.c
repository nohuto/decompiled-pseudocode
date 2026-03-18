/*
 * XREFs of KsepLogInfo @ 0x14048E720
 * Callers:
 *     KseRegisterShimEx @ 0x140732BD0 (KseRegisterShimEx.c)
 *     KseUnregisterShim @ 0x140732F00 (KseUnregisterShim.c)
 *     KsepApplyShimsToDriver @ 0x140733384 (KsepApplyShimsToDriver.c)
 *     KsepResolveApplicableShimsForDriver @ 0x140733868 (KsepResolveApplicableShimsForDriver.c)
 *     KseQueryDeviceData @ 0x14082A670 (KseQueryDeviceData.c)
 *     KseDriverUnloadImage @ 0x140A4FCB0 (KseDriverUnloadImage.c)
 *     KseDriverLoadImage @ 0x140A4FD90 (KseDriverLoadImage.c)
 *     KsepGetShimsForDriver @ 0x140A4FF48 (KsepGetShimsForDriver.c)
 *     KseShimDriverIoCallbacks @ 0x140A500CC (KseShimDriverIoCallbacks.c)
 *     KsepGetShimCallbacksForDriver @ 0x140A50334 (KsepGetShimCallbacksForDriver.c)
 *     KseInitialize @ 0x140C1A2FC (KseInitialize.c)
 *     KsepMatchInitBiosInfo @ 0x140C1AA00 (KsepMatchInitBiosInfo.c)
 *     KsepEngineReadFlags @ 0x140C1B060 (KsepEngineReadFlags.c)
 * Callees:
 *     KsepLogEtwMessage @ 0x14048E780 (KsepLogEtwMessage.c)
 */

__int64 KsepLogInfo(__int64 a1, __int64 a2, ...)
{
  va_list va; // [rsp+50h] [rbp+18h] BYREF

  va_start(va, a2);
  return KsepLogEtwMessage(a1, 2LL, a2, (__int64 *)va);
}
