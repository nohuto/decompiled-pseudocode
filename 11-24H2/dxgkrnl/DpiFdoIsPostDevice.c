/*
 * XREFs of DpiFdoIsPostDevice @ 0x14004D4F0
 * Callers:
 *     DpiGetDbgInfoAdapters @ 0x140064394 (DpiGetDbgInfoAdapters.c)
 *     DpiGetAdapterInfo @ 0x140235D60 (DpiGetAdapterInfo.c)
 *     DpiPollAllDisplayChildren @ 0x140237764 (DpiPollAllDisplayChildren.c)
 *     DpiAcquirePostDisplayOwnership @ 0x1402391CC (DpiAcquirePostDisplayOwnership.c)
 *     DpiFdoDispatchIoctl @ 0x14023DB30 (DpiFdoDispatchIoctl.c)
 *     DpiFdoHandleRemoveDevice @ 0x140241460 (DpiFdoHandleRemoveDevice.c)
 *     DpiFdoHandleStartDevice @ 0x1402418B0 (DpiFdoHandleStartDevice.c)
 *     DpiFdoHandleStopDevice @ 0x1402421F0 (DpiFdoHandleStopDevice.c)
 *     DpiFdoHandleSurpriseRemoval @ 0x1402425A0 (DpiFdoHandleSurpriseRemoval.c)
 *     DpiFdoStartAdapter @ 0x140245688 (DpiFdoStartAdapter.c)
 *     DpiFdoStopAdapter @ 0x140248100 (DpiFdoStopAdapter.c)
 *     DpiFdoStopDeviceAndReleasePostDisplayOwnership @ 0x1402487C8 (DpiFdoStopDeviceAndReleasePostDisplayOwnership.c)
 *     DpiPnpNotifyGdi @ 0x14024A9D0 (DpiPnpNotifyGdi.c)
 *     DpiLdaLinkDeviceToChain @ 0x14025379C (DpiLdaLinkDeviceToChain.c)
 *     DpiLdaUnLinkDeviceFromChain @ 0x140253CB4 (DpiLdaUnLinkDeviceFromChain.c)
 *     DpiFdoHandleDevicePower @ 0x1403B9530 (DpiFdoHandleDevicePower.c)
 *     DpiFdoSetAdapterPowerState @ 0x1404032B8 (DpiFdoSetAdapterPowerState.c)
 *     DpiGdoDispatchInternalIoctl @ 0x14042BEA0 (DpiGdoDispatchInternalIoctl.c)
 * Callees:
 *     <none>
 */

bool __fastcall DpiFdoIsPostDevice(__int64 a1)
{
  bool result; // al

  result = 0;
  if ( a1 )
    return qword_140160FC0 == a1;
  return result;
}
