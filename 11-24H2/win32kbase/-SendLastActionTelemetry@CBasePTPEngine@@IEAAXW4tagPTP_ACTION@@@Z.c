/*
 * XREFs of ?SendLastActionTelemetry@CBasePTPEngine@@IEAAXW4tagPTP_ACTION@@@Z @ 0x1400CD3C0
 * Callers:
 *     ?DoTPGestureProcessing@CPTPEngine@@AEAAXPEAUPTPInput@@@Z @ 0x1400CB368 (-DoTPGestureProcessing@CPTPEngine@@AEAAXPEAUPTPInput@@@Z.c)
 *     ?DoTPDiscreteButtonProcessing@CPTPEngine@@AEAAXPEAUPTPInput@@@Z @ 0x1400CBE50 (-DoTPDiscreteButtonProcessing@CPTPEngine@@AEAAXPEAUPTPInput@@@Z.c)
 *     ?DoTPButtonAndDragProcessing@CPTPEngine@@AEAAXPEAUPTPInput@@@Z @ 0x1400CC728 (-DoTPButtonAndDragProcessing@CPTPEngine@@AEAAXPEAUPTPInput@@@Z.c)
 *     ?HandleDrag@CPTPEngine@@AEAAXPEAUPTPInput@@@Z @ 0x1400CD408 (-HandleDrag@CPTPEngine@@AEAAXPEAUPTPInput@@@Z.c)
 *     ?SendLeftDownFromPhysical@CPTPEngine@@AEAAXPEAUPTPInput@@PEAUtagPOINT@@W4tagPTP_ACTION@@@Z @ 0x1400CDE34 (-SendLeftDownFromPhysical@CPTPEngine@@AEAAXPEAUPTPInput@@PEAUtagPOINT@@W4tagPTP_ACTION@@@Z.c)
 *     ?HandleMove@CPTPEngine@@AEAAXPEAUPTPInput@@PEAUPTPEnginePointerNode@@@Z @ 0x140190450 (-HandleMove@CPTPEngine@@AEAAXPEAUPTPInput@@PEAUPTPEnginePointerNode@@@Z.c)
 *     ?HandleTap@CPTPEngine@@AEAAXPEAUPTPInput@@PEAUPTPEnginePointerNode@@@Z @ 0x14019078C (-HandleTap@CPTPEngine@@AEAAXPEAUPTPInput@@PEAUPTPEnginePointerNode@@@Z.c)
 *     ?SendWarpbackTelemetry@CBasePTPEngine@@IEAAXW4tagPTP_ACTION@@UtagPOINT@@1K@Z @ 0x140221A98 (-SendWarpbackTelemetry@CBasePTPEngine@@IEAAXW4tagPTP_ACTION@@UtagPOINT@@1K@Z.c)
 * Callees:
 *     ?SendTelemetryOutput@CBasePTPEngine@@IEAAXW4Action@Telemetry@Payload@PTPTelemetryOutput@@TParameters@345@@Z @ 0x1400CDB34 (-SendTelemetryOutput@CBasePTPEngine@@IEAAXW4Action@Telemetry@Payload@PTPTelemetryOutput@@TParame.c)
 */

__int64 __fastcall CBasePTPEngine::SendLastActionTelemetry(__int64 a1, int a2)
{
  __int128 v3; // [rsp+20h] [rbp-48h]
  __int128 v4; // [rsp+40h] [rbp-28h] BYREF
  __int64 v5; // [rsp+50h] [rbp-18h]

  v3 = 0LL;
  LODWORD(v3) = a2;
  v4 = v3;
  v5 = 0LL;
  return CBasePTPEngine::SendTelemetryOutput(a1, 4LL, &v4);
}
