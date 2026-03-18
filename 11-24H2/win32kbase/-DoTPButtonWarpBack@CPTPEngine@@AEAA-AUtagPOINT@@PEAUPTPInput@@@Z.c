/*
 * XREFs of ?DoTPButtonWarpBack@CPTPEngine@@AEAA?AUtagPOINT@@PEAUPTPInput@@@Z @ 0x140155D90
 * Callers:
 *     ?DoTPButtonAndDragProcessing@CPTPEngine@@AEAAXPEAUPTPInput@@@Z @ 0x1400CC728 (-DoTPButtonAndDragProcessing@CPTPEngine@@AEAAXPEAUPTPInput@@@Z.c)
 *     ?SendLeftDownFromPhysical@CPTPEngine@@AEAAXPEAUPTPInput@@PEAUtagPOINT@@W4tagPTP_ACTION@@@Z @ 0x1400CDE34 (-SendLeftDownFromPhysical@CPTPEngine@@AEAAXPEAUPTPInput@@PEAUtagPOINT@@W4tagPTP_ACTION@@@Z.c)
 * Callees:
 *     ?SendMouseOutput@CBasePTPEngine@@IEAAXW4Action@Mouse@Payload@PTPEngineOutput@@UtagPOINT@@@Z @ 0x1400CDD08 (-SendMouseOutput@CBasePTPEngine@@IEAAXW4Action@Mouse@Payload@PTPEngineOutput@@UtagPOINT@@@Z.c)
 *     ?CrossedTPButtonWarpBackThreshold@CPTPEngine@@AEAAHPEAUCContactState@@UtagPOINT@@@Z @ 0x140221850 (-CrossedTPButtonWarpBackThreshold@CPTPEngine@@AEAAHPEAUCContactState@@UtagPOINT@@@Z.c)
 *     ?SendWarpbackTelemetry@CBasePTPEngine@@IEAAXW4tagPTP_ACTION@@UtagPOINT@@1K@Z @ 0x140221A98 (-SendWarpbackTelemetry@CBasePTPEngine@@IEAAXW4tagPTP_ACTION@@UtagPOINT@@1K@Z.c)
 */

struct tagPOINT __fastcall CPTPEngine::DoTPButtonWarpBack(CPTPEngine *this, struct PTPInput *a2, _QWORD *a3)
{
  bool v3; // zf
  unsigned __int64 v6; // r14
  char *v7; // rbx
  unsigned __int64 v8; // rbp
  __int64 v9; // r10
  __int64 v10; // r11

  v3 = *((_DWORD *)this + 706) == 2;
  *(_QWORD *)a2 = *(_QWORD *)((char *)a3 + 28);
  if ( v3 )
  {
    v6 = *((_QWORD *)this + 12);
    v7 = (char *)this + 328 * *((unsigned int *)this + 696) + 816;
    v8 = *a3 - *((_QWORD *)v7 + 15);
    if ( v8 < v6 * *((unsigned int *)this + 803) / 0x3E8
      && !(unsigned int)CPTPEngine::CrossedTPButtonWarpBackThreshold(
                          this,
                          (struct CContactState *)v7,
                          *(struct tagPOINT *)(v7 + 8))
      && (*(_DWORD *)(v10 + 28) != *((_DWORD *)v7 + 14) || *(_DWORD *)(v10 + 32) != *((_DWORD *)v7 + 15)) )
    {
      CBasePTPEngine::SendWarpbackTelemetry(this, 13LL, v9, *((_QWORD *)v7 + 7), 1000 * v8 / v6);
      CBasePTPEngine::SendMouseOutput((__int64)this, 5, *((_QWORD *)v7 + 7));
      *(_QWORD *)a2 = *((_QWORD *)v7 + 7);
    }
  }
  return (struct tagPOINT)a2;
}
