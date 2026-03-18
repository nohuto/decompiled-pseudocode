/*
 * XREFs of McTemplateK0pqtq_EtwWriteTransfer @ 0x140013524
 * Callers:
 *     ADAPTER_DISPLAY_DdiSetVidPnSourceAddressWithMultiPlaneOverlay3 @ 0x1400167B0 (ADAPTER_DISPLAY_DdiSetVidPnSourceAddressWithMultiPlaneOverlay3.c)
 *     ?CompletePStateTransitionCB@DXGADAPTER@@QEAAXII@Z @ 0x140065384 (-CompletePStateTransitionCB@DXGADAPTER@@QEAAXII@Z.c)
 *     ?ProcessPStateTransitionRequest@DXGADAPTER@@QEAAXXZ @ 0x140066004 (-ProcessPStateTransitionRequest@DXGADAPTER@@QEAAXXZ.c)
 *     DpiDxgkDdiDisplayMuxPostSwitchToPhase2 @ 0x14008C5D8 (DpiDxgkDdiDisplayMuxPostSwitchToPhase2.c)
 *     DpiDxgkDdiDisplayMuxPreSwitchAway @ 0x14008C684 (DpiDxgkDdiDisplayMuxPreSwitchAway.c)
 *     DpiDxgkDdiDisplayMuxPreSwitchTo @ 0x14008C7F0 (DpiDxgkDdiDisplayMuxPreSwitchTo.c)
 *     DpiDxgkDdiDisplayMuxSetInternalPanelInfo @ 0x14008C928 (DpiDxgkDdiDisplayMuxSetInternalPanelInfo.c)
 *     DpiDxgkDdiDisplayMuxSwitchCanceled @ 0x14008C9D8 (DpiDxgkDdiDisplayMuxSwitchCanceled.c)
 *     ?VmBusOpenAdapter@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1402250C0 (-VmBusOpenAdapter@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 *     DpiMiracastDdiMiracastQueryCaps @ 0x14024B540 (DpiMiracastDdiMiracastQueryCaps.c)
 *     DpiCallDrvSetBrightness @ 0x1402CB5B0 (DpiCallDrvSetBrightness.c)
 *     ?DpiBrightness3SetBacklightOptimization@@YAJPEAXKW4DXGK_BACKLIGHT_OPTIMIZATION_LEVEL@@@Z @ 0x1402CB690 (-DpiBrightness3SetBacklightOptimization@@YAJPEAXKW4DXGK_BACKLIGHT_OPTIMIZATION_LEVEL@@@Z.c)
 *     DpiCallDrvSetBacklightOptimizationLevel @ 0x1402CC6A0 (DpiCallDrvSetBacklightOptimizationLevel.c)
 *     ?ReportState@DXGADAPTER@@QEAAXXZ @ 0x1403A3D80 (-ReportState@DXGADAPTER@@QEAAXXZ.c)
 *     ?DpiBrightnessReportState@@YAXPEAU_DEVICE_OBJECT@@@Z @ 0x1403A4530 (-DpiBrightnessReportState@@YAXPEAU_DEVICE_OBJECT@@@Z.c)
 *     DpiDxgkDdiStartDevice @ 0x140404868 (DpiDxgkDdiStartDevice.c)
 *     ?DpiBrightness3Set@@YAJPEAXKPEAU_DXGK_BRIGHTNESS_SET_IN@@@Z @ 0x140428440 (-DpiBrightness3Set@@YAJPEAXKPEAU_DXGK_BRIGHTNESS_SET_IN@@@Z.c)
 * Callees:
 *     McGenEventWrite_EtwWriteTransfer @ 0x1400124A8 (McGenEventWrite_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 */

NTSTATUS McTemplateK0pqtq_EtwWriteTransfer(__int64 a1, const EVENT_DESCRIPTOR *a2, __int64 a3, ...)
{
  struct _EVENT_DATA_DESCRIPTOR v4; // [rsp+30h] [rbp-21h] BYREF
  va_list v5; // [rsp+40h] [rbp-11h]
  __int64 v6; // [rsp+48h] [rbp-9h]
  va_list v7; // [rsp+50h] [rbp-1h]
  __int64 v8; // [rsp+58h] [rbp+7h]
  va_list v9; // [rsp+60h] [rbp+Fh]
  __int64 v10; // [rsp+68h] [rbp+17h]
  va_list v11; // [rsp+70h] [rbp+1Fh]
  __int64 v12; // [rsp+78h] [rbp+27h]
  __int64 v13; // [rsp+B8h] [rbp+67h] BYREF
  va_list va; // [rsp+B8h] [rbp+67h]
  __int64 v15; // [rsp+C0h] [rbp+6Fh] BYREF
  va_list va1; // [rsp+C0h] [rbp+6Fh]
  __int64 v17; // [rsp+C8h] [rbp+77h] BYREF
  va_list va2; // [rsp+C8h] [rbp+77h]
  va_list va3; // [rsp+D0h] [rbp+7Fh] BYREF

  va_start(va3, a3);
  va_start(va2, a3);
  va_start(va1, a3);
  va_start(va, a3);
  v13 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v15 = va_arg(va2, _QWORD);
  va_copy(va3, va2);
  v17 = va_arg(va3, _QWORD);
  v6 = 8LL;
  va_copy(v5, va);
  v8 = 4LL;
  va_copy(v7, va1);
  v10 = 4LL;
  va_copy(v9, va2);
  va_copy(v11, va3);
  v12 = 4LL;
  return McGenEventWrite_EtwWriteTransfer((REGHANDLE *)&DxgkControlGuid_Context, a2, a3, 5u, &v4);
}
