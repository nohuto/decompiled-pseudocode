/*
 * XREFs of DpiFdoIsPostDevice @ 0x14004DB50
 * Callers:
 *     DpiGetDbgInfoAdapters @ 0x140064774 (DpiGetDbgInfoAdapters.c)
 *     DpiGetAdapterInfo @ 0x14022F500 (DpiGetAdapterInfo.c)
 *     DpiAcquirePostDisplayOwnership @ 0x1402327EC (DpiAcquirePostDisplayOwnership.c)
 *     DpiFdoDispatchIoctl @ 0x140237020 (DpiFdoDispatchIoctl.c)
 *     DpiFdoHandleRemoveDevice @ 0x14023A950 (DpiFdoHandleRemoveDevice.c)
 *     DpiFdoHandleStartDevice @ 0x14023ADA0 (DpiFdoHandleStartDevice.c)
 *     DpiFdoHandleStopDevice @ 0x14023B6E0 (DpiFdoHandleStopDevice.c)
 *     DpiFdoHandleSurpriseRemoval @ 0x14023BA80 (DpiFdoHandleSurpriseRemoval.c)
 *     DpiFdoStartAdapter @ 0x14023E8A8 (DpiFdoStartAdapter.c)
 *     DpiFdoStopAdapter @ 0x1402412FC (DpiFdoStopAdapter.c)
 *     DpiFdoStopDeviceAndReleasePostDisplayOwnership @ 0x1402419C8 (DpiFdoStopDeviceAndReleasePostDisplayOwnership.c)
 *     DpiPnpNotifyGdi @ 0x140243BC0 (DpiPnpNotifyGdi.c)
 *     DpiLdaLinkDeviceToChain @ 0x14024C96C (DpiLdaLinkDeviceToChain.c)
 *     DpiLdaUnLinkDeviceFromChain @ 0x14024CE84 (DpiLdaUnLinkDeviceFromChain.c)
 *     DpiFdoHandleDevicePower @ 0x1403C4AF0 (DpiFdoHandleDevicePower.c)
 *     DpiFdoSetAdapterPowerState @ 0x14040AB28 (DpiFdoSetAdapterPowerState.c)
 *     DpiGdoDispatchInternalIoctl @ 0x14042A600 (DpiGdoDispatchInternalIoctl.c)
 * Callees:
 *     <none>
 */

bool __fastcall DpiFdoIsPostDevice(__int64 a1)
{
  bool result; // al

  result = 0;
  if ( a1 )
    return qword_14015E000 == a1;
  return result;
}
