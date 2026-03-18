/*
 * XREFs of Feature_UMPERS__private_IsEnabledDeviceUsageNoInline @ 0x14003F574
 * Callers:
 *     XilCoreCommonBuffer_AcquireBuffer @ 0x140004284 (XilCoreCommonBuffer_AcquireBuffer.c)
 *     CommonBuffer_AllocateCommonBufferPage @ 0x1400205B8 (CommonBuffer_AllocateCommonBufferPage.c)
 *     Interrupter_DeferredWorkProcessor @ 0x140025E20 (Interrupter_DeferredWorkProcessor.c)
 *     XilCoreCommonBuffer_ReleaseBufferInternal @ 0x14003075C (XilCoreCommonBuffer_ReleaseBufferInternal.c)
 *     DmaEnabler_AllocateCommonBufferPage @ 0x14003BD24 (DmaEnabler_AllocateCommonBufferPage.c)
 *     SecureDmaEnabler_FreeCommonBufferPage @ 0x14003C8A8 (SecureDmaEnabler_FreeCommonBufferPage.c)
 *     CommonBuffer_AcquireSecureBuffer @ 0x14003F2E8 (CommonBuffer_AcquireSecureBuffer.c)
 *     Interrupter_DeferredWorkProcessorWithVelocityFor48657796Disabled @ 0x140048624 (Interrupter_DeferredWorkProcessorWithVelocityFor48657796Disabled.c)
 *     XilCoreCommonBuffer_AllocateBuffer @ 0x140056E34 (XilCoreCommonBuffer_AllocateBuffer.c)
 *     Controller_PopulateDeviceFlags @ 0x140076CC0 (Controller_PopulateDeviceFlags.c)
 *     Interrupter_DetermineSegmentSizeAndCount @ 0x14007BFC0 (Interrupter_DetermineSegmentSizeAndCount.c)
 *     Interrupter_PrepareInterrupter @ 0x140082C5C (Interrupter_PrepareInterrupter.c)
 * Callees:
 *     Feature_UMPERS__private_IsEnabledFallback @ 0x14003F5AC (Feature_UMPERS__private_IsEnabledFallback.c)
 */

__int64 Feature_UMPERS__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_UMPERS__private_featureState & 0x10) != 0 )
    return Feature_UMPERS__private_featureState & 1;
  else
    return Feature_UMPERS__private_IsEnabledFallback((unsigned int)Feature_UMPERS__private_featureState, 3LL);
}
