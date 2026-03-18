/*
 * XREFs of ?DoTPGestureProcessing@CPTPEngine@@AEAAXPEAUPTPInput@@@Z @ 0x1400CB368
 * Callers:
 *     ?ProcessInput@CPTPEngine@@MEAAJPEAUPTPInput@@@Z @ 0x1400CAF50 (-ProcessInput@CPTPEngine@@MEAAJPEAUPTPInput@@@Z.c)
 * Callees:
 *     ?CancelMouseUpTimer@CPTPEngine@@AEAAXH@Z @ 0x1400CD1FC (-CancelMouseUpTimer@CPTPEngine@@AEAAXH@Z.c)
 *     ?SendMouseUpIfPending@CPTPEngine@@AEAAXPEAI@Z @ 0x1400CD2B0 (-SendMouseUpIfPending@CPTPEngine@@AEAAXPEAI@Z.c)
 *     ?SendLastActionTelemetry@CBasePTPEngine@@IEAAXW4tagPTP_ACTION@@@Z @ 0x1400CD3C0 (-SendLastActionTelemetry@CBasePTPEngine@@IEAAXW4tagPTP_ACTION@@@Z.c)
 *     ?SendTelemetryOutput@CBasePTPEngine@@IEAAXW4Action@Telemetry@Payload@PTPTelemetryOutput@@TParameters@345@@Z @ 0x1400CDB34 (-SendTelemetryOutput@CBasePTPEngine@@IEAAXW4Action@Telemetry@Payload@PTPTelemetryOutput@@TParame.c)
 *     ?ResetDragThresholds@CPTPEngine@@AEAAXPEAUPTPInput@@@Z @ 0x1400E8790 (-ResetDragThresholds@CPTPEngine@@AEAAXPEAUPTPInput@@@Z.c)
 *     ?SendInitialGestureFrame@CPTPEngine@@AEAAHPEAUPTPInput@@PEAUCContactState@@H@Z @ 0x1400F179C (-SendInitialGestureFrame@CPTPEngine@@AEAAHPEAUPTPInput@@PEAUCContactState@@H@Z.c)
 *     ?ProcessGestureFrame@CPTPEngine@@AEAAXPEAUPTPInput@@HPEAH@Z @ 0x1400F19E4 (-ProcessGestureFrame@CPTPEngine@@AEAAXPEAUPTPInput@@HPEAH@Z.c)
 *     ?SendInertiaOutput@CBasePTPEngine@@IEAAXW4Action@Inertia@Payload@PTPEngineOutput@@@Z @ 0x140126A24 (-SendInertiaOutput@CBasePTPEngine@@IEAAXW4Action@Inertia@Payload@PTPEngineOutput@@@Z.c)
 *     ?FindOrAssignPrimary@CPTPEngine@@AEAAPEAUCContactState@@PEAUPTPInput@@@Z @ 0x14013BFE4 (-FindOrAssignPrimary@CPTPEngine@@AEAAPEAUCContactState@@PEAUPTPInput@@@Z.c)
 *     ?MarkRecentlyTrackedContactsAsNonResting@CPTPEngine@@AEAAXPEAUPTPInput@@PEBUCContactState@@@Z @ 0x14014482C (-MarkRecentlyTrackedContactsAsNonResting@CPTPEngine@@AEAAXPEAUPTPInput@@PEBUCContactState@@@Z.c)
 */

void __fastcall CPTPEngine::DoTPGestureProcessing(CPTPEngine *this, struct PTPInput *a2)
{
  int v2; // eax
  bool v5; // si
  const struct CContactState *v6; // r11
  int v7; // r10d
  unsigned int v8; // r15d
  _DWORD *v9; // r9
  __int64 v10; // r14
  int v11; // ecx
  int v12; // eax
  bool v13; // dl
  int v14; // ecx
  int v15; // eax
  BOOL v16; // r15d
  unsigned int v17; // esi
  unsigned int v18; // r9d
  _DWORD *v19; // r8
  __int64 v20; // rdx
  int v21; // ecx
  int v22; // eax
  unsigned int v23; // ecx
  int v24; // r14d
  CPTPEngine *v25; // rcx
  struct CContactState *v26; // r12
  __int64 v27; // rdx
  __int64 v28; // rdx
  __int128 v29; // [rsp+20h] [rbp-40h]
  __int128 v30; // [rsp+40h] [rbp-20h] BYREF
  __int64 v31; // [rsp+50h] [rbp-10h]
  int v32; // [rsp+90h] [rbp+30h] BYREF

  v2 = *((_DWORD *)this + 706);
  v5 = v2 == 3 || v2 == 6;
  if ( v2 != 1 || *((_DWORD *)this + 702) < 2u || *((_DWORD *)this + 705) )
  {
    if ( !v5 )
      return;
  }
  else
  {
    v6 = 0LL;
    v7 = 0;
    if ( *((_DWORD *)a2 + 12) )
    {
      v8 = *((_DWORD *)this + 4);
      v9 = (_DWORD *)((char *)a2 + 68);
      while ( 1 )
      {
        v10 = 328LL * (*(v9 - 2) % v8);
        v11 = *((_DWORD *)this + 768);
        v12 = v11;
        if ( (v11 & 0x800000) == 0 && (v11 & 0x200000) != 0 )
        {
          *((_QWORD *)this + 372) = *(_QWORD *)a2;
          v12 = v11 | 0x800000;
          *((_DWORD *)this + 768) = v11 | 0x800000;
        }
        v13 = (v12 & 0x200000) == 0
           || *(_QWORD *)a2 - *((_QWORD *)this + 372) >= *((_QWORD *)this + 12)
                                                       * (unsigned __int64)*((unsigned int *)this + 812)
                                                       / 0x3E8;
        v14 = *(_DWORD *)((char *)this + v10 + 816);
        if ( (v14 & 1) != 0
          && (*v9 & 0x40000) == 0
          && (v14 & 0x100) == 0
          && (v14 & 0x100000) != 0
          && v13
          && (*((_DWORD *)a2 + 10) || (v14 & 4) != 0 || (v14 & 0x10) != 0) )
        {
          break;
        }
        v9 += 24;
        if ( (unsigned int)++v7 >= *((_DWORD *)a2 + 12) )
          goto LABEL_26;
      }
      v6 = (CPTPEngine *)((char *)this + v10 + 816);
    }
    else
    {
LABEL_26:
      if ( !v5 )
        return;
    }
    CPTPEngine::MarkRecentlyTrackedContactsAsNonResting(this, a2, v6);
  }
  v15 = *((_DWORD *)this + 768);
  v16 = *((_DWORD *)this + 706) == 6;
  v32 = 0;
  if ( (v15 & 0x800000) != 0 )
    *((_DWORD *)this + 768) = v15 & 0xFF5FFFFF;
  if ( v5 )
    goto LABEL_58;
  v17 = 0;
  v18 = 0;
  if ( !*((_DWORD *)a2 + 12) )
    goto LABEL_45;
  v19 = (_DWORD *)((char *)a2 + 68);
  do
  {
    v20 = 328LL * (unsigned int)(*(v19 - 2) % *((_DWORD *)this + 4));
    v21 = *(_DWORD *)((char *)this + v20 + 816);
    if ( (v21 & 1) != 0 )
    {
      if ( (v21 & 0x100) != 0 || (*v19 & 0x40000) != 0 )
        v22 = 2048;
      else
        v22 = 0;
      v23 = v22 | v21 & 0xFFFFF7FF;
      *(_DWORD *)((char *)this + v20 + 816) = v23;
      if ( (v23 & 0x800) != 0 )
        *(_DWORD *)((char *)this + v20 + 820) &= 0xFFFFFFFC;
      else
        ++v17;
    }
    ++v18;
    v19 += 24;
  }
  while ( v18 < *((_DWORD *)a2 + 12) );
  v24 = 3;
  if ( v17 != 2 )
LABEL_45:
    v24 = 6;
  v25 = this;
  v16 = v24 == 6;
  if ( v17 < 2 )
  {
    v29 = 0LL;
    LODWORD(v29) = 1;
LABEL_48:
    v30 = v29;
    v31 = 0LL;
    CBasePTPEngine::SendTelemetryOutput(v25, 11LL, &v30);
    return;
  }
  v26 = CPTPEngine::FindOrAssignPrimary(this, a2);
  v25 = this;
  if ( !v26 )
  {
    v29 = 0LL;
    LODWORD(v29) = 1;
    goto LABEL_48;
  }
  CPTPEngine::SendMouseUpIfPending(this, (unsigned int *)this + 697);
  CPTPEngine::CancelMouseUpTimer(this, 1);
  *((_QWORD *)this + 373) = *(_QWORD *)a2;
  *((_DWORD *)this + 706) = v24;
  if ( *((_DWORD *)a2 + 10) )
  {
    v27 = 3LL;
    if ( v24 != 6 )
      v27 = 1LL;
    CBasePTPEngine::SendInertiaOutput(this, v27);
  }
  v28 = v24 == 6 ? (unsigned int)(v17 != 3) + 11 : 9LL;
  CBasePTPEngine::SendLastActionTelemetry(this, v28);
  if ( !(unsigned int)CPTPEngine::SendInitialGestureFrame(this, a2, v26, v24 == 6) )
  {
LABEL_58:
    CPTPEngine::ProcessGestureFrame(this, a2, v16, &v32);
    if ( v32 )
    {
      *((_DWORD *)this + 706) = 1;
      CPTPEngine::ResetDragThresholds(this, a2);
      *((_DWORD *)this + 768) &= 0xFFF9FFFF;
      *((_QWORD *)this + 374) = *(_QWORD *)a2;
    }
  }
}
