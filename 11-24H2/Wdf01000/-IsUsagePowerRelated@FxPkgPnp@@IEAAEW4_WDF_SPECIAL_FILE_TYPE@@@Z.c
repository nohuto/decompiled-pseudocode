/*
 * XREFs of ?IsUsagePowerRelated@FxPkgPnp@@IEAAEW4_WDF_SPECIAL_FILE_TYPE@@@Z @ 0x1400A63D0
 * Callers:
 *     ?PnpDeviceUsageNotification@FxPkgPnp@@IEAAJPEAVFxIrp@@@Z @ 0x1400775E8 (-PnpDeviceUsageNotification@FxPkgPnp@@IEAAJPEAVFxIrp@@@Z.c)
 *     ?SetUsageNotificationFlags@FxPkgPnp@@IEAAKW4_DEVICE_USAGE_NOTIFICATION_TYPE@@E@Z @ 0x140077FDC (-SetUsageNotificationFlags@FxPkgPnp@@IEAAKW4_DEVICE_USAGE_NOTIFICATION_TYPE@@E@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall FxPkgPnp::IsUsagePowerRelated(FxPkgPnp *this, _WDF_SPECIAL_FILE_TYPE Type)
{
  int v2; // edx

  v2 = Type - 1;
  return !v2 || (unsigned int)(v2 - 1) < 2;
}
