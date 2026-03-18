/*
 * XREFs of ?reset@?$unique_struct@U_UNICODE_STRING@@$$A6AXPEAU1@@Z$1?RtlFreeUnicodeString@@YAX0@Z$$T$0A@@wil@@QEAAXXZ @ 0x140063F5C
 * Callers:
 *     ?Cleanup@DISPLAY_MUX_DEVICE@@AEAAXXZ @ 0x140083A1C (-Cleanup@DISPLAY_MUX_DEVICE@@AEAAXXZ.c)
 *     ?UnregisterPnPTargetDeviceNotification@MonitorPnpState@DxgMonitor@@QEAAJXZ @ 0x140187948 (-UnregisterPnPTargetDeviceNotification@MonitorPnpState@DxgMonitor@@QEAAJXZ.c)
 *     ?RegisterPnPTargetDeviceNotification@MonitorPnpState@DxgMonitor@@QEAAJPEBU_UNICODE_STRING@@P6AJPEAX1@Z@Z @ 0x14028A158 (-RegisterPnPTargetDeviceNotification@MonitorPnpState@DxgMonitor@@QEAAJPEBU_UNICODE_STRING@@P6AJP.c)
 * Callees:
 *     <none>
 */

void __fastcall wil::unique_struct<_UNICODE_STRING,void (_UNICODE_STRING *),&void RtlFreeUnicodeString(_UNICODE_STRING *),std::nullptr_t,0>::reset(
        struct _UNICODE_STRING *a1)
{
  RtlFreeUnicodeString(a1);
  *a1 = 0LL;
}
