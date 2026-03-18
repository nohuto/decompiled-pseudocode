/*
 * XREFs of ?OnDeviceRemoval@DelayZonePalmRejection@@QEAAXPEAX@Z @ 0x14012B0E4
 * Callers:
 *     ?OnRimDeviceClosed@CTouchProcessor@@QEAAXPEAX@Z @ 0x14012AEF0 (-OnRimDeviceClosed@CTouchProcessor@@QEAAXPEAX@Z.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x14005DCC0 (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     ?HandleDelayZonePalmRejectionTimer@CHidInput@@QEAAX_NK@Z @ 0x14020F1F8 (-HandleDelayZonePalmRejectionTimer@CHidInput@@QEAAX_NK@Z.c)
 *     ?HandleFlushDelayZonePalmRejectInputTimer@CHidInput@@QEAAX_NK@Z @ 0x14020F274 (-HandleFlushDelayZonePalmRejectInputTimer@CHidInput@@QEAAX_NK@Z.c)
 *     ?ClearSession@DelayZoneTelemetry@@QEAAXXZ @ 0x14021F69C (-ClearSession@DelayZoneTelemetry@@QEAAXXZ.c)
 *     ?UpdateDelayZoneStateInfo@DelayZoneTelemetry@@QEAAXW4CPalmRejectState@@W4CDelayZoneTelemetryFrame@@W4CDelayZoneTelemetryUpdateState@@UtagRECT@@@Z @ 0x14021F7B0 (-UpdateDelayZoneStateInfo@DelayZoneTelemetry@@QEAAXW4CPalmRejectState@@W4CDelayZoneTelemetryFram.c)
 */

void __fastcall DelayZonePalmRejection::OnDeviceRemoval(DelayZonePalmRejection *this, void *a2)
{
  void *v2; // rsi
  bool v5; // di
  bool v6; // bp
  __int64 UserSessionState; // rax
  int v8; // r8d
  int v9; // edx
  void *v10; // rbp
  CTouchProcessor *v11; // rcx
  bool v12; // di
  bool v13; // si
  __int64 v14; // rax
  int v15; // r8d
  int v16; // edx
  __int64 v17; // rax
  __int64 v18; // r8
  __int64 v19; // rcx
  __int64 v20; // rdx
  __int64 v21; // rax
  bool v22; // dl
  unsigned int v23; // r8d
  DelayZoneTelemetry *v24; // rcx
  __int128 v25; // [rsp+50h] [rbp-28h] BYREF

  v2 = (void *)*((_QWORD *)this + 4);
  if ( v2 && v2 == a2 )
  {
    v5 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
    v6 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v5 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control);
      LOBYTE(v8) = v6;
      LOBYTE(v9) = v5;
      WPP_RECORDER_AND_TRACE_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v9,
        v8,
        *(_QWORD *)(UserSessionState + 69400),
        4,
        4,
        20,
        (__int64)&WPP_75a6a4f1645a3c8ead19a08cf6b1534d_Traceguids,
        (char)v2);
    }
    *((_DWORD *)this + 11) = 0;
    *((_QWORD *)this + 4) = 0LL;
    if ( !*((_DWORD *)this + 10) )
    {
      *((_QWORD *)this + 2) = 0LL;
      *((_DWORD *)this + 1) = 0;
    }
  }
  v10 = (void *)*((_QWORD *)this + 2);
  if ( v10 && v10 == a2 )
  {
    v11 = WPP_GLOBAL_Control;
    v12 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
       && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) != 0
       && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
    v13 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v12 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v14 = W32GetUserSessionState(WPP_GLOBAL_Control);
      LOBYTE(v15) = v13;
      LOBYTE(v16) = v12;
      WPP_RECORDER_AND_TRACE_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v16,
        v15,
        *(_QWORD *)(v14 + 69400),
        4,
        4,
        21,
        (__int64)&WPP_75a6a4f1645a3c8ead19a08cf6b1534d_Traceguids,
        (char)v10);
    }
    *((_DWORD *)this + 10) = 0;
    *((_QWORD *)this + 2) = 0LL;
    if ( *((_DWORD *)this + 1) == 1 )
    {
      v17 = W32GetUserSessionState(v11);
      CHidInput::HandleDelayZonePalmRejectionTimer(*(CHidInput **)(v17 + 16840), 1, 0);
      v19 = *((_QWORD *)this + 15);
      *((_BYTE *)this + 8) = 0;
      if ( v19 )
      {
        v20 = *((unsigned int *)this + 1);
        v25 = 0LL;
        DelayZoneTelemetry::UpdateDelayZoneStateInfo(v19, v20, v18, 2LL, &v25);
      }
      v21 = W32GetUserSessionState(v19);
      CHidInput::HandleFlushDelayZonePalmRejectInputTimer(*(CHidInput **)(v21 + 16840), v22, v23);
      *((_BYTE *)this + 9) = 1;
    }
    if ( *((_DWORD *)this + 1) == 2 && !*((_DWORD *)this + 11) )
    {
      *((_QWORD *)this + 4) = 0LL;
      *((_DWORD *)this + 1) = 0;
    }
  }
  v24 = (DelayZoneTelemetry *)*((_QWORD *)this + 15);
  if ( v24 )
    DelayZoneTelemetry::ClearSession(v24);
}
