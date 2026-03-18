/*
 * XREFs of ?ComputeAndDeliverMouseWheel@CMouseProcessor@@AEAAXAEBVCMouseEvent@1@@Z @ 0x14021C120
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x14005DD80 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ?HittestWheelRoutingRequested@CMouseProcessor@@AEBA_NXZ @ 0x1401097F8 (-HittestWheelRoutingRequested@CMouseProcessor@@AEBA_NXZ.c)
 *     ?ProcessMouseWheel@CMouseProcessor@@AEAAXAEBVCWheelEvent@1@@Z @ 0x14018E920 (-ProcessMouseWheel@CMouseProcessor@@AEAAXAEBVCWheelEvent@1@@Z.c)
 *     APISetEditionGetMouseWheelRoutingMode @ 0x140191140 (APISetEditionGetMouseWheelRoutingMode.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019C14C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?AppCompatWheelRoutingRequested@CMouseProcessor@@AEBA_NXZ @ 0x14021BE4C (-AppCompatWheelRoutingRequested@CMouseProcessor@@AEBA_NXZ.c)
 *     ?ComputeWheelData@CWheelEvent@CMouseProcessor@@AEBAGXZ @ 0x14021C3A4 (-ComputeWheelData@CWheelEvent@CMouseProcessor@@AEBAGXZ.c)
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 */

void __fastcall CMouseProcessor::ComputeAndDeliverMouseWheel(
        CMouseProcessor *this,
        const struct CMouseProcessor::CMouseEvent *a2)
{
  __int64 v3; // rdx
  int MouseWheelRoutingMode; // ebx
  __int64 v6; // rdx
  __int64 v7; // rcx
  bool v8; // di
  bool v9; // bl
  __int64 UserSessionState; // rax
  int v11; // r8d
  int v12; // edx
  int v13; // eax
  _QWORD v14[2]; // [rsp+40h] [rbp-48h] BYREF
  int v15; // [rsp+50h] [rbp-38h]
  int v16; // [rsp+58h] [rbp-30h]
  unsigned int v17; // [rsp+5Ch] [rbp-2Ch]
  unsigned __int16 v18; // [rsp+60h] [rbp-28h]

  v3 = *((_QWORD *)a2 + 1);
  MouseWheelRoutingMode = 2;
  if ( (*(_DWORD *)(v3 + 120) & 8) != 0 )
    goto LABEL_16;
  if ( *(_DWORD *)(v3 + 112) == 34 || CMouseProcessor::AppCompatWheelRoutingRequested(this) )
  {
    MouseWheelRoutingMode = 0;
  }
  else
  {
    if ( CMouseProcessor::HittestWheelRoutingRequested(this) )
      goto LABEL_16;
    MouseWheelRoutingMode = APISetEditionGetMouseWheelRoutingMode(v7, v6);
    if ( MouseWheelRoutingMode )
      goto LABEL_16;
  }
  if ( !*(_QWORD *)(W32GetUserSessionState(this) + 18944) )
  {
    v8 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x20) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 3u;
    v9 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v8 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control);
      LOBYTE(v11) = v9;
      LOBYTE(v12) = v8;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v12,
        v11,
        *(_QWORD *)(UserSessionState + 69400),
        3,
        6,
        43,
        (__int64)&WPP_f61ee55f31d8345b2339769354926a3f_Traceguids);
    }
    return;
  }
LABEL_16:
  if ( ((**(__int64 (__fastcall ***)(const struct CMouseProcessor::CMouseEvent *))a2)(a2) & 0xC00) == 0 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 4738);
  v13 = (**(__int64 (__fastcall ***)(const struct CMouseProcessor::CMouseEvent *))a2)(a2);
  v14[1] = *((_QWORD *)a2 + 1);
  v14[0] = &CMouseProcessor::CWheelEvent::`vftable';
  v15 = 0;
  v16 = MouseWheelRoutingMode;
  v17 = ((unsigned int)~v13 >> 10) & 1;
  v18 = CMouseProcessor::CWheelEvent::ComputeWheelData((CMouseProcessor::CWheelEvent *)v14);
  v15 = 3;
  CMouseProcessor::ProcessMouseWheel(this, (const struct CMouseProcessor::CWheelEvent *)v14);
}
