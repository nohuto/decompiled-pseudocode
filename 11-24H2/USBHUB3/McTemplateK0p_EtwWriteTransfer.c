/*
 * XREFs of McTemplateK0p_EtwWriteTransfer @ 0x1400087B4
 * Callers:
 *     HUBPARENT_ResetHub @ 0x140007B10 (HUBPARENT_ResetHub.c)
 *     HUBHSM_CheckingIfResetRecoveryHasBeenInvokedTooManyTimes @ 0x140008B40 (HUBHSM_CheckingIfResetRecoveryHasBeenInvokedTooManyTimes.c)
 *     HUBHSM_NotifyingHubResumeWithResetToDevicesOnFailure @ 0x140009950 (HUBHSM_NotifyingHubResumeWithResetToDevicesOnFailure.c)
 *     HUBHSM_WaitingForPortsToAcquireReferenceOnResumeWithReset @ 0x14000A610 (HUBHSM_WaitingForPortsToAcquireReferenceOnResumeWithReset.c)
 *     HUBFDO_EvtDeviceCleanupCallback @ 0x14000D1D0 (HUBFDO_EvtDeviceCleanupCallback.c)
 *     HUBPDO_EvtDeviceCleanup @ 0x1400154D0 (HUBPDO_EvtDeviceCleanup.c)
 *     HUBPDO_EvtDeviceWdmIrpPreprocess @ 0x140016B10 (HUBPDO_EvtDeviceWdmIrpPreprocess.c)
 *     HUBDSM_ValidatingAndLoggingAlternateModeStringDescriptor @ 0x140025180 (HUBDSM_ValidatingAndLoggingAlternateModeStringDescriptor.c)
 *     HUBDSM_ValidatingAndLoggingBillboardStringDescriptor @ 0x140025310 (HUBDSM_ValidatingAndLoggingBillboardStringDescriptor.c)
 *     HUBDSM_ValidatingDeviceQualifierDescriptor @ 0x1400254B0 (HUBDSM_ValidatingDeviceQualifierDescriptor.c)
 *     HUBDSM_ValidatingMSOSContainerIdDescriptor @ 0x1400255F0 (HUBDSM_ValidatingMSOSContainerIdDescriptor.c)
 *     HUBDSM_ValidatingMSOSContainerIdHeaderDescriptor @ 0x140025780 (HUBDSM_ValidatingMSOSContainerIdHeaderDescriptor.c)
 *     HUBDSM_ValidatingMSOSDescriptor @ 0x1400258D0 (HUBDSM_ValidatingMSOSDescriptor.c)
 *     HUBDSM_ValidatingMSOSExtendedConfigDescriptorHeader @ 0x1400259E0 (HUBDSM_ValidatingMSOSExtendedConfigDescriptorHeader.c)
 *     HUBDSM_ValidatingMSOSExtendedPropertyDescriptorHeader @ 0x140025B60 (HUBDSM_ValidatingMSOSExtendedPropertyDescriptorHeader.c)
 *     HUBDSM_ValidatingMsOs20DescriptorSetIfPresent @ 0x140025C90 (HUBDSM_ValidatingMsOs20DescriptorSetIfPresent.c)
 *     HUBDTX_ValidateAndCacheBOSDescriptor @ 0x14002C490 (HUBDTX_ValidateAndCacheBOSDescriptor.c)
 *     HUBDTX_ValidateAndCacheBOSDescriptorHeader @ 0x14002C940 (HUBDTX_ValidateAndCacheBOSDescriptorHeader.c)
 *     HUBDTX_ValidateAndCacheConfigDescriptor @ 0x14002CB50 (HUBDTX_ValidateAndCacheConfigDescriptor.c)
 *     HUBDTX_ValidateAndCacheDeviceDescriptor @ 0x14002D190 (HUBDTX_ValidateAndCacheDeviceDescriptor.c)
 *     HUBDTX_ValidateAndCacheLanguageIdStringDescriptor @ 0x14002D49C (HUBDTX_ValidateAndCacheLanguageIdStringDescriptor.c)
 *     HUBDTX_ValidateAndCacheMSOSExtendedConfigDescriptor @ 0x14002D674 (HUBDTX_ValidateAndCacheMSOSExtendedConfigDescriptor.c)
 *     HUBDTX_ValidateAndCacheProductIdStringDescriptor @ 0x14002D820 (HUBDTX_ValidateAndCacheProductIdStringDescriptor.c)
 *     HUBDTX_ValidateAndCacheSerialNumberStringDescriptor @ 0x14002D9F8 (HUBDTX_ValidateAndCacheSerialNumberStringDescriptor.c)
 *     HUBDTX_ValidateFirstDeviceDescriptorFor20 @ 0x14002DD24 (HUBDTX_ValidateFirstDeviceDescriptorFor20.c)
 *     HUBMISC_IncrementEnumRetryCountAndCheckIfReachedMax @ 0x1400305C4 (HUBMISC_IncrementEnumRetryCountAndCheckIfReachedMax.c)
 *     HUBMISC_LogDeviceReEnumeration @ 0x140031034 (HUBMISC_LogDeviceReEnumeration.c)
 *     HUBMISC_LogResetTimeout @ 0x1400310CC (HUBMISC_LogResetTimeout.c)
 *     HUBMISC_LogTelemetryIfSuperSpeedDeviceWorkingInHighSpeedMode @ 0x140031174 (HUBMISC_LogTelemetryIfSuperSpeedDeviceWorkingInHighSpeedMode.c)
 *     HUBMISC_ValidateAndCacheMSOSExtendedPropertyDescriptor @ 0x140033D44 (HUBMISC_ValidateAndCacheMSOSExtendedPropertyDescriptor.c)
 *     HUBIDLE_AddEvent @ 0x140040318 (HUBIDLE_AddEvent.c)
 *     HUBFDO_EvtDevicePrepareHardware @ 0x14007A970 (HUBFDO_EvtDevicePrepareHardware.c)
 *     HUBFDO_EvtDeviceReleaseHardware @ 0x14007B4E0 (HUBFDO_EvtDeviceReleaseHardware.c)
 *     HUBFDO_EvtDeviceSurpriseRemoval @ 0x14007B790 (HUBFDO_EvtDeviceSurpriseRemoval.c)
 *     HUBPDO_EvtDevicePrepareHardware @ 0x1400815B0 (HUBPDO_EvtDevicePrepareHardware.c)
 *     HUBPDO_EvtDeviceReleaseHardware @ 0x140082700 (HUBPDO_EvtDeviceReleaseHardware.c)
 *     HUBPDO_EvtDeviceSurpriseRemoval @ 0x140082C50 (HUBPDO_EvtDeviceSurpriseRemoval.c)
 * Callees:
 *     McGenEventWrite_EtwWriteTransfer @ 0x140001A30 (McGenEventWrite_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x140046500 (__security_check_cookie.c)
 */

NTSTATUS McTemplateK0p_EtwWriteTransfer(__int64 a1, const EVENT_DESCRIPTOR *a2, const GUID *a3, ...)
{
  struct _EVENT_DATA_DESCRIPTOR v4; // [rsp+30h] [rbp-38h] BYREF
  va_list v5; // [rsp+40h] [rbp-28h]
  int v6; // [rsp+48h] [rbp-20h]
  int v7; // [rsp+4Ch] [rbp-1Ch]
  va_list va; // [rsp+88h] [rbp+20h] BYREF

  va_start(va, a3);
  va_copy(v5, va);
  v7 = 0;
  v6 = 8;
  return McGenEventWrite_EtwWriteTransfer(a1, a2, a3, 2u, &v4);
}
