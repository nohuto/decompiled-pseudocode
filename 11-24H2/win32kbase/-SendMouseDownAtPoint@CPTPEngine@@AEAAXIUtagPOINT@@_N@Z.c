/*
 * XREFs of ?SendMouseDownAtPoint@CPTPEngine@@AEAAXIUtagPOINT@@_N@Z @ 0x1400CD04C
 * Callers:
 *     ?DoTPDiscreteButtonProcessing@CPTPEngine@@AEAAXPEAUPTPInput@@@Z @ 0x1400CBE50 (-DoTPDiscreteButtonProcessing@CPTPEngine@@AEAAXPEAUPTPInput@@@Z.c)
 *     ?DoTPButtonAndDragProcessing@CPTPEngine@@AEAAXPEAUPTPInput@@@Z @ 0x1400CC728 (-DoTPButtonAndDragProcessing@CPTPEngine@@AEAAXPEAUPTPInput@@@Z.c)
 *     ?HandleMove@CPTPEngine@@AEAAXPEAUPTPInput@@PEAUPTPEnginePointerNode@@@Z @ 0x140190450 (-HandleMove@CPTPEngine@@AEAAXPEAUPTPInput@@PEAUPTPEnginePointerNode@@@Z.c)
 *     ?SendTimedMouseClick@CPTPEngine@@AEAAXIUtagPOINT@@H@Z @ 0x140199758 (-SendTimedMouseClick@CPTPEngine@@AEAAXIUtagPOINT@@H@Z.c)
 * Callees:
 *     ?SendMouseUpIfPending@CPTPEngine@@AEAAXPEAI@Z @ 0x1400CD2B0 (-SendMouseUpIfPending@CPTPEngine@@AEAAXPEAI@Z.c)
 *     ?SendTelemetryOutput@CBasePTPEngine@@IEAAXW4Action@Telemetry@Payload@PTPTelemetryOutput@@TParameters@345@@Z @ 0x1400CDB34 (-SendTelemetryOutput@CBasePTPEngine@@IEAAXW4Action@Telemetry@Payload@PTPTelemetryOutput@@TParame.c)
 *     ?SendMouseOutput@CBasePTPEngine@@IEAAXW4Action@Mouse@Payload@PTPEngineOutput@@UtagPOINT@@@Z @ 0x1400CDD08 (-SendMouseOutput@CBasePTPEngine@@IEAAXW4Action@Mouse@Payload@PTPEngineOutput@@UtagPOINT@@@Z.c)
 */

void __fastcall CPTPEngine::SendMouseDownAtPoint(CPTPEngine *this, int a2, struct tagPOINT a3, char a4)
{
  int v4; // esi
  int v9; // eax
  CPTPEngine *v10; // rcx
  int v11; // eax
  __int64 v12; // rdx
  int v13; // eax
  __int128 v14; // [rsp+20h] [rbp-40h]
  __int128 v15; // [rsp+40h] [rbp-20h] BYREF
  __int64 v16; // [rsp+50h] [rbp-10h]

  v4 = 0;
  if ( a4 )
    CPTPEngine::SendMouseUpIfPending(this, (unsigned int *)this + 697);
  if ( a2 == 2 )
  {
    v9 = *((_DWORD *)this + 768);
    v10 = this;
    if ( (v9 & 8) == 0 )
    {
      v4 = 4;
      v11 = v9 | 8;
      v12 = 1LL;
LABEL_6:
      *((_DWORD *)this + 768) = v11;
      ((void (__fastcall *)(_QWORD, _QWORD, _QWORD))CBasePTPEngine::SendMouseOutput)(v10, v12, a3);
      goto LABEL_7;
    }
  }
  else
  {
    if ( a2 != 8 )
      goto LABEL_7;
    v13 = *((_DWORD *)this + 768);
    v10 = this;
    if ( (v13 & 0x10) == 0 )
    {
      v4 = 16;
      v11 = v13 | 0x10;
      v12 = 3LL;
      goto LABEL_6;
    }
  }
  v14 = 0LL;
  LODWORD(v14) = 3;
  v15 = v14;
  v16 = 0LL;
  CBasePTPEngine::SendTelemetryOutput(v10, 11LL, &v15);
LABEL_7:
  if ( a4 )
  {
    if ( v4 )
      *((_DWORD *)this + 697) = v4;
  }
}
