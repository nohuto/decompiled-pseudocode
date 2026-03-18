/*
 * XREFs of ?SendTimedMouseClick@CPTPEngine@@AEAAXIUtagPOINT@@H@Z @ 0x140199758
 * Callers:
 *     ?DoTPButtonAndDragProcessing@CPTPEngine@@AEAAXPEAUPTPInput@@@Z @ 0x1400CC728 (-DoTPButtonAndDragProcessing@CPTPEngine@@AEAAXPEAUPTPInput@@@Z.c)
 *     ?HandleTap@CPTPEngine@@AEAAXPEAUPTPInput@@PEAUPTPEnginePointerNode@@@Z @ 0x14019078C (-HandleTap@CPTPEngine@@AEAAXPEAUPTPInput@@PEAUPTPEnginePointerNode@@@Z.c)
 * Callees:
 *     ?SendMouseDownAtPoint@CPTPEngine@@AEAAXIUtagPOINT@@_N@Z @ 0x1400CD04C (-SendMouseDownAtPoint@CPTPEngine@@AEAAXIUtagPOINT@@_N@Z.c)
 *     ?CancelMouseUpTimer@CPTPEngine@@AEAAXH@Z @ 0x1400CD1FC (-CancelMouseUpTimer@CPTPEngine@@AEAAXH@Z.c)
 *     ?SendTimerOutput@CBasePTPEngine@@IEAAXW4Action@Timer@Payload@PTPEngineOutput@@I@Z @ 0x1400CD260 (-SendTimerOutput@CBasePTPEngine@@IEAAXW4Action@Timer@Payload@PTPEngineOutput@@I@Z.c)
 *     ?SendTelemetryOutput@CBasePTPEngine@@IEAAXW4Action@Telemetry@Payload@PTPTelemetryOutput@@TParameters@345@@Z @ 0x1400CDB34 (-SendTelemetryOutput@CBasePTPEngine@@IEAAXW4Action@Telemetry@Payload@PTPTelemetryOutput@@TParame.c)
 */

void __fastcall CPTPEngine::SendTimedMouseClick(CPTPEngine *this, int a2, struct tagPOINT a3, int a4)
{
  int v8; // r8d
  int v9; // eax
  __int128 v10; // [rsp+20h] [rbp-48h]
  __int128 v11; // [rsp+40h] [rbp-28h] BYREF
  __int64 v12; // [rsp+50h] [rbp-18h]

  if ( *((_DWORD *)this + 762) )
  {
    v10 = 0LL;
    LODWORD(v10) = 2;
    v12 = 0LL;
    v11 = v10;
    CBasePTPEngine::SendTelemetryOutput((__int64)this, 11, (__int64)&v11);
    CPTPEngine::CancelMouseUpTimer(this, 1);
  }
  CPTPEngine::SendMouseDownAtPoint(this, a2, a3, 1);
  if ( a4 )
    v8 = *((_DWORD *)this + 786);
  else
    v8 = *((_DWORD *)this + 820);
  v9 = *((_DWORD *)this + 697);
  *((_DWORD *)this + 697) = 0;
  *((_DWORD *)this + 762) = 1;
  *((_DWORD *)this + 763) = a4;
  *((_DWORD *)this + 764) = v9;
  *((struct tagPOINT *)this + 383) = a3;
  *((_DWORD *)this + 765) = v8;
  CBasePTPEngine::SendTimerOutput((__int64)this, 0, v8);
}
