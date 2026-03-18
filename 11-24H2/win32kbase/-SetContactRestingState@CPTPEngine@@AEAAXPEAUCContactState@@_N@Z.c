/*
 * XREFs of ?SetContactRestingState@CPTPEngine@@AEAAXPEAUCContactState@@_N@Z @ 0x1400E8604
 * Callers:
 *     ?ProcessInputFrame@CPTPEngine@@AEAAXPEAUPTPInput@@@Z @ 0x1400CB6F0 (-ProcessInputFrame@CPTPEngine@@AEAAXPEAUPTPInput@@@Z.c)
 *     ?DoTPButtonAndDragProcessing@CPTPEngine@@AEAAXPEAUPTPInput@@@Z @ 0x1400CC728 (-DoTPButtonAndDragProcessing@CPTPEngine@@AEAAXPEAUPTPInput@@@Z.c)
 *     ?ApplyHeuristics@CPTPEngine@@AEAAXPEAUPTPInput@@_N1@Z @ 0x1400E7B6C (-ApplyHeuristics@CPTPEngine@@AEAAXPEAUPTPInput@@_N1@Z.c)
 *     ?FindGestureAndMarkGesturingContactsAsNonResting@CPTPEngine@@AEAAXPEBUPTPInput@@@Z @ 0x1400E8228 (-FindGestureAndMarkGesturingContactsAsNonResting@CPTPEngine@@AEAAXPEBUPTPInput@@@Z.c)
 *     ?UpdateContactRestingState@CPTPEngine@@AEAAXUtagPOINT@@_KPEAUCContactState@@@Z @ 0x1400E83B8 (-UpdateContactRestingState@CPTPEngine@@AEAAXUtagPOINT@@_KPEAUCContactState@@@Z.c)
 *     ?MarkRecentlyTrackedContactsAsNonResting@CPTPEngine@@AEAAXPEAUPTPInput@@PEBUCContactState@@@Z @ 0x14014482C (-MarkRecentlyTrackedContactsAsNonResting@CPTPEngine@@AEAAXPEAUPTPInput@@PEBUCContactState@@@Z.c)
 * Callees:
 *     ?SendTelemetryOutput@CBasePTPEngine@@IEAAXW4Action@Telemetry@Payload@PTPTelemetryOutput@@TParameters@345@@Z @ 0x1400CDB34 (-SendTelemetryOutput@CBasePTPEngine@@IEAAXW4Action@Telemetry@Payload@PTPTelemetryOutput@@TParame.c)
 */

void __fastcall CPTPEngine::SetContactRestingState(CPTPEngine *this, struct CContactState *a2, unsigned __int8 a3)
{
  unsigned int v5; // ecx
  __int128 v6; // [rsp+20h] [rbp-48h]
  __int128 v7; // [rsp+40h] [rbp-28h] BYREF
  __int64 v8; // [rsp+50h] [rbp-18h]

  if ( a3 && *((_DWORD *)this + 6) )
  {
    v6 = 0LL;
    LODWORD(v6) = 5;
    v7 = v6;
    v8 = 0LL;
    CBasePTPEngine::SendTelemetryOutput((__int64)this, 11, (__int64)&v7);
    a3 = 0;
  }
  if ( (*(_DWORD *)a2 & 1) != 0 && (*(_DWORD *)a2 & 0x100u) >> 8 != a3 )
  {
    v5 = (a3 << 8) ^ *(_DWORD *)a2 & 0xFFFFFEFF;
    *(_DWORD *)a2 = v5;
    if ( (v5 & 0x100) != 0 )
    {
      ++*((_DWORD *)this + 701);
      --*((_DWORD *)this + 702);
    }
    else
    {
      *((_DWORD *)a2 + 1) |= 3u;
      ++*((_DWORD *)this + 702);
      --*((_DWORD *)this + 701);
    }
  }
}
