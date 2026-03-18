/*
 * XREFs of McTemplateK0d_EtwWriteTransfer @ 0x140090DE4
 * Callers:
 *     EtwTracePowerOnMonitorEnd @ 0x140090D94 (EtwTracePowerOnMonitorEnd.c)
 *     EtwTracPowerOnMonitoreBegin @ 0x140090DBC (EtwTracPowerOnMonitoreBegin.c)
 *     EtwTracePointerDeviceTransformationStop @ 0x1400AEFF0 (EtwTracePointerDeviceTransformationStop.c)
 *     EtwTracePointerDeviceTransformationStart @ 0x1400AF020 (EtwTracePointerDeviceTransformationStart.c)
 *     EtwTraceContactVisualizationInfo @ 0x140144D50 (EtwTraceContactVisualizationInfo.c)
 *     EtwTraceWinlogonSleepStartEvent @ 0x14014C7F0 (EtwTraceWinlogonSleepStartEvent.c)
 *     EtwTraceFlipManagerCreate @ 0x140150F60 (EtwTraceFlipManagerCreate.c)
 *     EtwTraceFlipManagerDestroy @ 0x1401526A0 (EtwTraceFlipManagerDestroy.c)
 *     EtwTracePowerOnGdiBegin @ 0x1401539B0 (EtwTracePowerOnGdiBegin.c)
 *     EtwTraceWinlogonSleepEndEvent @ 0x140154D30 (EtwTraceWinlogonSleepEndEvent.c)
 *     EtwTraceDwmSyncFlushForceRenderAndWaitForBatchEnd @ 0x1401556B0 (EtwTraceDwmSyncFlushForceRenderAndWaitForBatchEnd.c)
 *     EtwTracexxxUserResetDisplayDeviceBegin @ 0x140155920 (EtwTracexxxUserResetDisplayDeviceBegin.c)
 *     EtwTracexxxUserResetDisplayDeviceEnd @ 0x140155950 (EtwTracexxxUserResetDisplayDeviceEnd.c)
 *     EtwTracePowerOnGdiEnd @ 0x140158E50 (EtwTracePowerOnGdiEnd.c)
 *     EtwTraceSPIBlockedByFiltering @ 0x14019F500 (EtwTraceSPIBlockedByFiltering.c)
 *     EtwTraceConvertibleState @ 0x1401B4290 (EtwTraceConvertibleState.c)
 *     EtwTraceDockState @ 0x1401B4420 (EtwTraceDockState.c)
 *     EtwTraceDwmSyncFlushForceRenderAndWaitForBatchBegin @ 0x1401B4450 (EtwTraceDwmSyncFlushForceRenderAndWaitForBatchBegin.c)
 *     EtwTraceEdgyDetectionStop @ 0x1401B44B0 (EtwTraceEdgyDetectionStop.c)
 *     EtwTraceFlipManagerLost @ 0x1401B4670 (EtwTraceFlipManagerLost.c)
 *     EtwTracePointerPredictionStart @ 0x1401B4C90 (EtwTracePointerPredictionStart.c)
 *     EtwTracePointerPredictionStop @ 0x1401B4CC0 (EtwTracePointerPredictionStop.c)
 *     EtwTraceScreenSaverProcessEvent @ 0x1401B4D6C (EtwTraceScreenSaverProcessEvent.c)
 *     EtwTraceTouchPadConfidenceUpped @ 0x1401B4EE0 (EtwTraceTouchPadConfidenceUpped.c)
 *     EtwTraceTouchPadTypeDiscovered @ 0x1401B50D0 (EtwTraceTouchPadTypeDiscovered.c)
 * Callees:
 *     McGenEventWrite_EtwWriteTransfer @ 0x140033530 (McGenEventWrite_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x14023F3B0 (__security_check_cookie.c)
 */

NTSTATUS __fastcall McTemplateK0d_EtwWriteTransfer(__int64 a1, const EVENT_DESCRIPTOR *a2, __int64 a3, int a4)
{
  struct _EVENT_DATA_DESCRIPTOR v5; // [rsp+30h] [rbp-38h] BYREF
  int *v6; // [rsp+40h] [rbp-28h]
  int v7; // [rsp+48h] [rbp-20h]
  int v8; // [rsp+4Ch] [rbp-1Ch]
  int v9; // [rsp+88h] [rbp+20h] BYREF

  v9 = a4;
  v6 = &v9;
  v8 = 0;
  v7 = 4;
  return McGenEventWrite_EtwWriteTransfer(a1, a2, &W32kControlGuid, 2u, &v5);
}
