/*
 * XREFs of ?xxxProcessPendingRecalcState@CRecalcProp@@AEAAXPEAUtagWND@@PEAVCRecalcState@@PEAVCRecalcContext@@@Z @ 0x1C005CDD8
 * Callers:
 *     ?s_xxxProcessTopologyChange@CRecalcProp@@SAXPEAUHWND__@@PEAVCRecalcContext@@@Z @ 0x1C005D750 (-s_xxxProcessTopologyChange@CRecalcProp@@SAXPEAUHWND__@@PEAVCRecalcContext@@@Z.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x1C0044D3C (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     ?SetStateAfterProcessing@CRecalcProp@@AEAAXPEAVCMonitorTopology@@@Z @ 0x1C005C18C (-SetStateAfterProcessing@CRecalcProp@@AEAAXPEAVCMonitorTopology@@@Z.c)
 *     ?xxxMigrate@CRecalcState@@QEAAXPEAUtagWND@@PEAVCRecalcContext@@@Z @ 0x1C005C250 (-xxxMigrate@CRecalcState@@QEAAXPEAUtagWND@@PEAVCRecalcContext@@@Z.c)
 *     ?IsWindowEligibleForRecalc@CRecalcProp@@CA_NPEBUtagWND@@@Z @ 0x1C005D45C (-IsWindowEligibleForRecalc@CRecalcProp@@CA_NPEBUtagWND@@@Z.c)
 *     ?HasWindowMovedUnexpectedly@CRecalcState@@QEBA_NPEBUtagWND@@@Z @ 0x1C00600DC (-HasWindowMovedUnexpectedly@CRecalcState@@QEBA_NPEBUtagWND@@@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_qdd @ 0x1C006017C (WPP_RECORDER_AND_TRACE_SF_qdd.c)
 *     WPP_RECORDER_AND_TRACE_SF_qs @ 0x1C00A623C (WPP_RECORDER_AND_TRACE_SF_qs.c)
 *     IsNonImmersiveBand @ 0x1C00AD39C (IsNonImmersiveBand.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C014083C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?ReattachRecalcState@CRecalcProp@@AEAAXPEAVCRecalcState@@@Z @ 0x1C02258B0 (-ReattachRecalcState@CRecalcProp@@AEAAXPEAVCRecalcState@@@Z.c)
 *     ?xxxFullscreenRestore@CRecalcState@@QEAAXPEAUtagWND@@AEBVCMonitorTopology@@PEAVCRecalcContext@@@Z @ 0x1C0225EB0 (-xxxFullscreenRestore@CRecalcState@@QEAAXPEAUtagWND@@AEBVCMonitorTopology@@PEAVCRecalcContext@@@.c)
 *     ?xxxImmersiveZBandDpiChange@CRecalcState@@QEAAXPEAUtagWND@@@Z @ 0x1C02262B8 (-xxxImmersiveZBandDpiChange@CRecalcState@@QEAAXPEAUtagWND@@@Z.c)
 *     ?xxxRestore@CRecalcState@@QEAAXPEAUtagWND@@PEAVCRecalcContext@@@Z @ 0x1C02265CC (-xxxRestore@CRecalcState@@QEAAXPEAUtagWND@@PEAVCRecalcContext@@@Z.c)
 */

void __fastcall CRecalcProp::xxxProcessPendingRecalcState(
        CRecalcProp *this,
        struct tagWND *a2,
        struct CRecalcState *a3,
        struct CRecalcContext *a4)
{
  struct CRecalcState *v5; // r12
  const struct tagWND *v6; // rsi
  char v8; // di
  __int64 v9; // rbp
  volatile signed __int32 *v10; // rax
  CMonitorTopology *v11; // r15
  __int64 v12; // r8
  bool IsWindowEligibleForRecalc; // r13
  __int64 v14; // rdx
  CRecalcState *v15; // rcx
  __int64 v16; // r9
  char v17; // dl
  const char *v18; // rax
  int v19; // edx

  v5 = a3;
  v6 = a2;
  v8 = 1;
  if ( *((_DWORD *)this + 6) != 1 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 2534LL);
  v9 = *((_QWORD *)this + 4);
  *(_QWORD *)(v9 + 8) = *((_QWORD *)this + 5);
  v10 = (volatile signed __int32 *)qword_1C035E320;
  *((_QWORD *)this + 5) = v9;
  *((_QWORD *)this + 4) = 0LL;
  *((_DWORD *)this + 6) = 2;
  _InterlockedAdd(v10, 1u);
  v11 = qword_1C035E320;
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) == 0
    || (LOBYTE(a2) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
  {
    LOBYTE(a2) = 0;
  }
  if ( (_BYTE)a2 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a3) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    WPP_RECORDER_AND_TRACE_SF_qdd(
      WPP_GLOBAL_Control->AttachedDevice,
      (_DWORD)a2,
      (_DWORD)a3,
      (_DWORD)gFullLog,
      4,
      7,
      76,
      (__int64)&WPP_be08460427f83b68b58b8518e40b91a4_Traceguids,
      **((_QWORD **)this + 2),
      *(_DWORD *)(*(_QWORD *)(v9 + 16) + 4LL),
      *((_DWORD *)qword_1C035E320 + 1));
  }
  *((_DWORD *)a4 + 8) = *((_DWORD *)v11 + 1);
  *((_DWORD *)a4 + 9) = *(_DWORD *)(*(_QWORD *)(v9 + 16) + 4LL);
  IsWindowEligibleForRecalc = CRecalcProp::IsWindowEligibleForRecalc(v6);
  if ( !IsWindowEligibleForRecalc || CRecalcState::HasWindowMovedUnexpectedly((CRecalcState *)v9, v6) )
  {
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) == 0
      || BYTE1(WPP_GLOBAL_Control->Timer) < 3u )
    {
      v8 = 0;
    }
    if ( v8 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v18 = "moved unexpectedly";
      if ( !IsWindowEligibleForRecalc )
        v18 = "no longer eligible";
      v19 = 77;
      LOBYTE(v19) = v8;
      LOBYTE(v12) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_qs(
        WPP_GLOBAL_Control->AttachedDevice,
        v19,
        v12,
        (_DWORD)gFullLog,
        3,
        7,
        77,
        (__int64)&WPP_be08460427f83b68b58b8518e40b91a4_Traceguids,
        *(_QWORD *)v6,
        (__int64)v18);
    }
    *((_DWORD *)a4 + 1) = 2;
  }
  else if ( (unsigned int)IsNonImmersiveBand(v6, v14, v12) )
  {
    if ( v5 )
    {
      if ( *((_BYTE *)v5 + 61) == (_BYTE)v16 )
        CRecalcState::xxxRestore(v5, v6, a4);
      else
        CRecalcState::xxxFullscreenRestore(v5, v6, *(const struct CMonitorTopology **)(v9 + 16), a4);
      v16 = 0LL;
    }
    if ( *((_DWORD *)a4 + 1) != 5 )
    {
      if ( *(_QWORD *)(v9 + 72) == v16 )
      {
        *((_DWORD *)a4 + 1) = 2;
        if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) == 0
          || (v17 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
        {
          v17 = v16;
        }
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
          || LOWORD(WPP_GLOBAL_Control->DeviceType) == (_WORD)v16 )
        {
          v8 = v16;
        }
        if ( v17 || v8 )
          WPP_RECORDER_AND_TRACE_SF_q(
            (__int64)WPP_GLOBAL_Control->AttachedDevice,
            v17,
            v8,
            v16,
            5u,
            7u,
            0x4Eu,
            (__int64)&WPP_be08460427f83b68b58b8518e40b91a4_Traceguids,
            *(_QWORD *)v6);
      }
      else
      {
        CRecalcState::xxxMigrate((CRecalcState *)v9, v6, a4);
      }
    }
    if ( *((_DWORD *)a4 + 1) == 3 )
      CRecalcProp::ReattachRecalcState(this, (struct CRecalcState *)v9);
  }
  else
  {
    CRecalcState::xxxImmersiveZBandDpiChange(v15, v6);
    *((_DWORD *)a4 + 1) = 6;
  }
  CRecalcProp::SetStateAfterProcessing(this, v11);
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)v11, 0xFFFFFFFF) == 1 )
    Win32FreePool(v11);
}
