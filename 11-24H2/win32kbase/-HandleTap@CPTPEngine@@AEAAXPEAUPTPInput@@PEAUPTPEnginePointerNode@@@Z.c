/*
 * XREFs of ?HandleTap@CPTPEngine@@AEAAXPEAUPTPInput@@PEAUPTPEnginePointerNode@@@Z @ 0x14019078C
 * Callers:
 *     ?DoTPMouseProcessing@CPTPEngine@@AEAAXPEAUPTPInput@@@Z @ 0x1400CC0FC (-DoTPMouseProcessing@CPTPEngine@@AEAAXPEAUPTPInput@@@Z.c)
 * Callees:
 *     ?CancelMouseUpTimer@CPTPEngine@@AEAAXH@Z @ 0x1400CD1FC (-CancelMouseUpTimer@CPTPEngine@@AEAAXH@Z.c)
 *     ?SendMouseUpIfPending@CPTPEngine@@AEAAXPEAI@Z @ 0x1400CD2B0 (-SendMouseUpIfPending@CPTPEngine@@AEAAXPEAI@Z.c)
 *     ?SendTotalTimeTelemetry@CBasePTPEngine@@IEAAXW4tagPTP_TELEM_TOTALTIME@@_K@Z @ 0x1400CD37C (-SendTotalTimeTelemetry@CBasePTPEngine@@IEAAXW4tagPTP_TELEM_TOTALTIME@@_K@Z.c)
 *     ?SendLastActionTelemetry@CBasePTPEngine@@IEAAXW4tagPTP_ACTION@@@Z @ 0x1400CD3C0 (-SendLastActionTelemetry@CBasePTPEngine@@IEAAXW4tagPTP_ACTION@@@Z.c)
 *     ?ResetDragThresholds@CPTPEngine@@AEAAXPEAUPTPInput@@@Z @ 0x1400E8790 (-ResetDragThresholds@CPTPEngine@@AEAAXPEAUPTPInput@@@Z.c)
 *     ?TPAAPShouldAllowNow@CPTPEngine@@AEAAHPEAUPTPInput@@KH@Z @ 0x1400EF2C8 (-TPAAPShouldAllowNow@CPTPEngine@@AEAAHPEAUPTPInput@@KH@Z.c)
 *     ?SendInertiaOutput@CBasePTPEngine@@IEAAXW4Action@Inertia@Payload@PTPEngineOutput@@@Z @ 0x140126A24 (-SendInertiaOutput@CBasePTPEngine@@IEAAXW4Action@Inertia@Payload@PTPEngineOutput@@@Z.c)
 *     ?IsNearbyContactPresent@CPTPEngine@@AEAA_NPEAUPTPInput@@PEAUCContactState@@UtagPOINT@@K@Z @ 0x14014D5D8 (-IsNearbyContactPresent@CPTPEngine@@AEAA_NPEAUPTPInput@@PEAUCContactState@@UtagPOINT@@K@Z.c)
 *     ?GetButtonForSimulatedPresses@CPTPEngine@@AEAAIPEAUPTPEnginePointerNode@@@Z @ 0x140151BF4 (-GetButtonForSimulatedPresses@CPTPEngine@@AEAAIPEAUPTPEnginePointerNode@@@Z.c)
 *     ?SendTimedMouseClick@CPTPEngine@@AEAAXIUtagPOINT@@H@Z @ 0x140199758 (-SendTimedMouseClick@CPTPEngine@@AEAAXIUtagPOINT@@H@Z.c)
 *     ?SendShellOutput@CBasePTPEngine@@IEAAXW4Action@Shell@Payload@PTPEngineOutput@@@Z @ 0x140221A50 (-SendShellOutput@CBasePTPEngine@@IEAAXW4Action@Shell@Payload@PTPEngineOutput@@@Z.c)
 */

void __fastcall CPTPEngine::HandleTap(CPTPEngine *this, struct PTPInput *a2, struct tagPOINT *a3)
{
  char *v6; // rbp
  int v7; // edx
  unsigned __int64 v8; // r8
  unsigned __int64 v9; // r9
  unsigned int ButtonForSimulatedPresses; // edx
  BOOL v11; // r9d
  bool v12; // zf

  v6 = (char *)this + 328 * (unsigned int)(a3->y % *((_DWORD *)this + 4));
  if ( *((_DWORD *)this + 700) != *((_DWORD *)this + 699) )
    return;
  if ( *((_DWORD *)a2 + 10) || *((_DWORD *)a2 + 13) )
  {
    CBasePTPEngine::SendInertiaOutput((__int64)this, 3);
    if ( *((_DWORD *)a2 + 10) )
    {
      *((_DWORD *)a2 + 10) = 0;
      return;
    }
  }
  CPTPEngine::SendMouseUpIfPending((struct tagPOINT *)this, (unsigned int *)this + 697);
  CPTPEngine::CancelMouseUpTimer(this, 1);
  CPTPEngine::ResetDragThresholds(this, a2);
  if ( *((_DWORD *)this + 699) == 1 )
  {
    if ( !(unsigned int)CPTPEngine::TPAAPShouldAllowNow(this, a2) )
      return;
    if ( CPTPEngine::IsNearbyContactPresent(
           this,
           a2,
           (struct CContactState *)(v6 + 816),
           a3[5],
           *((_DWORD *)this + 819)) )
    {
      return;
    }
    v8 = *((_QWORD *)v6 + 110);
    v9 = *((_QWORD *)this + 374);
    if ( v8 > v9 && v8 - v9 < *((_QWORD *)this + 12) * (unsigned __int64)*((unsigned int *)this + 818) / 0x3E8 )
      return;
    ButtonForSimulatedPresses = CPTPEngine::GetButtonForSimulatedPresses(this, (struct PTPEnginePointerNode *)a3);
    v11 = 1;
    if ( !ButtonForSimulatedPresses )
    {
      ButtonForSimulatedPresses = 2;
      v11 = *((_DWORD *)this + 41) != 0;
      if ( !*((_DWORD *)this + 39) )
        return;
    }
    if ( ButtonForSimulatedPresses == 2 )
    {
      v12 = (*((_DWORD *)this + 768) & 8) == 0;
    }
    else
    {
      if ( ButtonForSimulatedPresses != 8 )
      {
LABEL_31:
        *((_QWORD *)this + 380) = *(_QWORD *)a2;
        *(_QWORD *)((char *)this + 2836) = *((_QWORD *)v6 + 104);
        CPTPEngine::SendTimedMouseClick(this, ButtonForSimulatedPresses, *(struct tagPOINT *)((char *)a2 + 28), v11);
        CBasePTPEngine::SendLastActionTelemetry((__int64)this, 1);
        CBasePTPEngine::SendTotalTimeTelemetry((__int64)this, 0, *(_QWORD *)a2 - *((_QWORD *)v6 + 111));
        return;
      }
      v12 = (*((_DWORD *)this + 768) & 0x10) == 0;
    }
    if ( !v12 )
      return;
    goto LABEL_31;
  }
  if ( *((_DWORD *)this + 699) != 2 )
  {
    switch ( *((_DWORD *)this + 699) )
    {
      case 3:
        CBasePTPEngine::SendShellOutput(this, 0LL);
        v7 = 3;
        break;
      case 4:
        CBasePTPEngine::SendShellOutput(this, 1LL);
        v7 = 4;
        break;
      case 5:
        CBasePTPEngine::SendShellOutput(this, 2LL);
        v7 = 27;
        break;
      default:
        return;
    }
    goto LABEL_19;
  }
  if ( *((_DWORD *)this + 40)
    && (unsigned int)CPTPEngine::TPAAPShouldAllowNow(this, a2)
    && (*((_DWORD *)this + 768) & 0x10) == 0
    && (int)((HIDWORD(*((_QWORD *)v6 + 103)) - HIDWORD(*(_QWORD *)((char *)this + 2876)))
           * (HIDWORD(*((_QWORD *)v6 + 103)) - HIDWORD(*(_QWORD *)((char *)this + 2876)))
           + (*((_QWORD *)v6 + 103) - *(_QWORD *)((char *)this + 2876))
           * (*((_QWORD *)v6 + 103) - *(_QWORD *)((char *)this + 2876))) <= (unsigned __int64)*((unsigned int *)this
                                                                                              + 802) )
  {
    *((_QWORD *)this + 380) = *(_QWORD *)a2;
    CPTPEngine::SendTimedMouseClick(this, 8u, *(struct tagPOINT *)((char *)a2 + 28), 0);
    v7 = 2;
LABEL_19:
    CBasePTPEngine::SendLastActionTelemetry((__int64)this, v7);
  }
}
