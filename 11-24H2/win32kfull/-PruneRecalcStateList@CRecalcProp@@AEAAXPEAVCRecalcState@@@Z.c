/*
 * XREFs of ?PruneRecalcStateList@CRecalcProp@@AEAAXPEAVCRecalcState@@@Z @ 0x14014BE40
 * Callers:
 *     ?CreateForTopologyChange@CRecalcProp@@SA_NPEAUHWND__@@PEAVCMonitorTopology@@W4StartRecalcReason@@@Z @ 0x1401CC36C (-CreateForTopologyChange@CRecalcProp@@SA_NPEAUHWND__@@PEAVCMonitorTopology@@W4StartRecalcReason@.c)
 *     ?EndApplyWindowAction@CRecalcProp@@QEAAXPEAUtagWND@@PEBVCMonitorTopology@@_N@Z @ 0x1402C2740 (-EndApplyWindowAction@CRecalcProp@@QEAAXPEAUtagWND@@PEBVCMonitorTopology@@_N@Z.c)
 *     ?SetPendingStateToProcessed@CRecalcProp@@AEAAXXZ @ 0x1402C40F0 (-SetPendingStateToProcessed@CRecalcProp@@AEAAXXZ.c)
 *     ?s_xxxProcessTopologyChange@CRecalcProp@@SAXPEAUHWND__@@PEAVCRecalcContext@@@Z @ 0x1402C55A8 (-s_xxxProcessTopologyChange@CRecalcProp@@SAXPEAUHWND__@@PEAVCRecalcContext@@@Z.c)
 *     ?xxxEndApplyWindowActionOld@CRecalcProp@@QEAAXPEAUtagWND@@PEAVCMonitorTopology@@@Z @ 0x1402C5934 (-xxxEndApplyWindowActionOld@CRecalcProp@@QEAAXPEAUtagWND@@PEAVCMonitorTopology@@@Z.c)
 * Callees:
 *     ?ShouldStoreAfterProcessing@CRecalcState@@QEBA_NPEBUtagWND@@@Z @ 0x14014D0F4 (-ShouldStoreAfterProcessing@CRecalcState@@QEBA_NPEBUtagWND@@@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x140189210 (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     _guard_dispatch_icall @ 0x140340330 (_guard_dispatch_icall.c)
 */

void __fastcall CRecalcProp::PruneRecalcStateList(const struct tagWND **this, struct CRecalcState *a2)
{
  CRecalcState **v2; // rdi
  unsigned int v3; // r14d
  unsigned int *v6; // r8
  char v7; // bp
  char v8; // si
  CRecalcState *v9; // rcx
  void (__fastcall **v10)(CRecalcState *, __int64, unsigned int *); // rax
  CRecalcState *v11; // rdx
  __int64 v12; // rcx
  int v13; // ebx
  __int64 UserSessionState; // rax
  int v15; // r8d
  int v16; // edx
  char v17; // bp
  char v18; // si
  int v19; // ebx
  __int64 v20; // rax
  int v21; // r8d
  int v22; // edx

  v2 = this + 5;
  v3 = 0;
  while ( 1 )
  {
    v6 = &WPP_RECORDER_INITIALIZED;
    if ( !*v2 || v3 >= 3 )
      break;
    if ( *v2 == a2 )
    {
LABEL_6:
      if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
        || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x40) == 0
        || (v7 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 5u) )
      {
        v7 = 0;
      }
      if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
        || (v8 = 1, !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL)) )
      {
        v8 = 0;
      }
      if ( v7 || v8 )
      {
        v12 = *((_QWORD *)*v2 + 2);
        v13 = *(_DWORD *)(v12 + 12);
        UserSessionState = W32GetUserSessionState(v12, a2);
        LOBYTE(v15) = v8;
        LOBYTE(v16) = v7;
        WPP_RECORDER_AND_TRACE_SF_d(
          *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
          v16,
          v15,
          *(_QWORD *)(UserSessionState + 69416),
          5,
          7,
          126,
          (__int64)&WPP_78206adbc0fc3667085fdf33c34682f8_Traceguids,
          v13);
      }
      v9 = *v2;
      *v2 = (CRecalcState *)*((_QWORD *)*v2 + 1);
      v10 = *(void (__fastcall ***)(CRecalcState *, __int64, unsigned int *))v9;
      *((_QWORD *)v9 + 1) = 0LL;
      (*v10)(v9, 1LL, v6);
    }
    else
    {
      if ( !CRecalcState::ShouldStoreAfterProcessing(*v2, this[2]) )
      {
        v6 = &WPP_RECORDER_INITIALIZED;
        goto LABEL_6;
      }
      ++v3;
      v2 = (CRecalcState **)((char *)*v2 + 8);
    }
  }
  v11 = *v2;
  if ( *v2 )
  {
    if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
      || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x40) == 0
      || (v17 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 5u) )
    {
      v17 = 0;
    }
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
      || (v18 = 1, !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL)) )
    {
      v18 = 0;
    }
    if ( v17 || v18 )
    {
      v19 = *(_DWORD *)(*((_QWORD *)v11 + 2) + 12LL);
      v20 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v11);
      LOBYTE(v21) = v18;
      LOBYTE(v22) = v17;
      WPP_RECORDER_AND_TRACE_SF_d(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
        v22,
        v21,
        *(_QWORD *)(v20 + 69416),
        5,
        7,
        127,
        (__int64)&WPP_78206adbc0fc3667085fdf33c34682f8_Traceguids,
        v19);
    }
    if ( *v2 )
      (**(void (__fastcall ***)(CRecalcState *, __int64, unsigned int *))*v2)(*v2, 1LL, v6);
    *v2 = 0LL;
  }
}
