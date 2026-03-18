/*
 * XREFs of ?SendLeftDownFromPhysical@CPTPEngine@@AEAAXPEAUPTPInput@@PEAUtagPOINT@@W4tagPTP_ACTION@@@Z @ 0x1400CDE34
 * Callers:
 *     ?DoTPButtonAndDragProcessing@CPTPEngine@@AEAAXPEAUPTPInput@@@Z @ 0x1400CC728 (-DoTPButtonAndDragProcessing@CPTPEngine@@AEAAXPEAUPTPInput@@@Z.c)
 * Callees:
 *     ?SendLastActionTelemetry@CBasePTPEngine@@IEAAXW4tagPTP_ACTION@@@Z @ 0x1400CD3C0 (-SendLastActionTelemetry@CBasePTPEngine@@IEAAXW4tagPTP_ACTION@@@Z.c)
 *     ?SendTelemetryOutput@CBasePTPEngine@@IEAAXW4Action@Telemetry@Payload@PTPTelemetryOutput@@TParameters@345@@Z @ 0x1400CDB34 (-SendTelemetryOutput@CBasePTPEngine@@IEAAXW4Action@Telemetry@Payload@PTPTelemetryOutput@@TParame.c)
 *     ?SendMouseOutput@CBasePTPEngine@@IEAAXW4Action@Mouse@Payload@PTPEngineOutput@@UtagPOINT@@@Z @ 0x1400CDD08 (-SendMouseOutput@CBasePTPEngine@@IEAAXW4Action@Mouse@Payload@PTPEngineOutput@@UtagPOINT@@@Z.c)
 *     ?SendPositionTelemetry@CBasePTPEngine@@IEAAXW4tagPTP_TELEM_POSITION@@UtagPOINT@@@Z @ 0x1400CDF1C (-SendPositionTelemetry@CBasePTPEngine@@IEAAXW4tagPTP_TELEM_POSITION@@UtagPOINT@@@Z.c)
 *     ?DoTPButtonWarpBack@CPTPEngine@@AEAA?AUtagPOINT@@PEAUPTPInput@@@Z @ 0x140155D90 (-DoTPButtonWarpBack@CPTPEngine@@AEAA-AUtagPOINT@@PEAUPTPInput@@@Z.c)
 */

int __fastcall CPTPEngine::SendLeftDownFromPhysical(CPTPEngine *a1, __int64 a2, _QWORD *a3, int a4)
{
  int result; // eax
  __int64 v8; // r8
  int v9; // eax
  __int128 v10; // [rsp+20h] [rbp-48h]
  __int128 v11; // [rsp+40h] [rbp-28h] BYREF
  __int64 v12; // [rsp+50h] [rbp-18h]
  char v13; // [rsp+70h] [rbp+8h] BYREF

  result = *((_DWORD *)a1 + 768) | 0x80;
  *((_DWORD *)a1 + 768) = result;
  if ( (result & 8) == 0 )
  {
    CBasePTPEngine::SendLastActionTelemetry((__int64)a1, a4);
    if ( a3 )
      CBasePTPEngine::SendPositionTelemetry(a1, 0LL, *a3);
    v8 = *(_QWORD *)(a2 + 28);
    if ( (*((_DWORD *)a1 + 821) & 0x200) != 0 )
      v8 = **(_QWORD **)&CPTPEngine::DoTPButtonWarpBack(a1, (struct PTPInput *)&v13);
    v9 = *((_DWORD *)a1 + 768);
    if ( (v9 & 8) != 0 )
    {
      v10 = 0LL;
      LODWORD(v10) = 3;
      v11 = v10;
      v12 = 0LL;
      return CBasePTPEngine::SendTelemetryOutput((__int64)a1, 11, (__int64)&v11);
    }
    else
    {
      *((_DWORD *)a1 + 768) = v9 | 8;
      return (unsigned int)CBasePTPEngine::SendMouseOutput((__int64)a1, 1, v8);
    }
  }
  return result;
}
