/*
 * XREFs of ?StartRecalcForDesktop@DesktopRecalc@@YAXPEAUtagDESKTOP@@PEAVCMonitorTopology@@W4StartRecalcReason@@@Z @ 0x1401CC140
 * Callers:
 *     ?StartRecalc@DesktopRecalc@@YAXPEAUtagWINDOWSTATION@@PEAVCMonitorTopology@@PEBU_GUID@@@Z @ 0x1401CB20C (-StartRecalc@DesktopRecalc@@YAXPEAUtagWINDOWSTATION@@PEAVCMonitorTopology@@PEBU_GUID@@@Z.c)
 * Callees:
 *     BuildHwndList @ 0x140047FC0 (BuildHwndList.c)
 *     FreeHwndList @ 0x140048500 (FreeHwndList.c)
 *     HMValidateHandleNoSecure @ 0x14008CDA0 (HMValidateHandleNoSecure.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1400A5B18 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x1400A5B9C (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     ?GetRecalcProperty@CRecalcProp@@SAPEAV1@PEBUtagWND@@@Z @ 0x1401BF74C (-GetRecalcProperty@CRecalcProp@@SAPEAV1@PEBUtagWND@@@Z.c)
 *     ?CreateForTopologyChange@CRecalcProp@@SA_NPEAUHWND__@@PEAVCMonitorTopology@@W4StartRecalcReason@@@Z @ 0x1401CC36C (-CreateForTopologyChange@CRecalcProp@@SA_NPEAUHWND__@@PEAVCMonitorTopology@@W4StartRecalcReason@.c)
 *     DesktopWindowFromDesktop @ 0x1401CC84C (DesktopWindowFromDesktop.c)
 *     ?SignalRecalcWork@CRecalcProp@@QEAAXW4SignalReason@DesktopRecalc@@@Z @ 0x1402C46CC (-SignalRecalcWork@CRecalcProp@@QEAAXW4SignalReason@DesktopRecalc@@@Z.c)
 */

void __fastcall DesktopRecalc::StartRecalcForDesktop(__int64 a1, __int64 a2, unsigned int a3)
{
  char v6; // bl
  bool v7; // di
  bool v8; // si
  __int64 v9; // rax
  struct tagBWL *v10; // rax
  __int64 v11; // rdx
  struct tagBWL *v12; // rbp
  __int64 *v13; // r14
  __int64 v14; // rdi
  __int64 v15; // rsi
  _QWORD *v16; // r15
  __int64 UserSessionState; // rax
  int v18; // r8d
  int v19; // edx
  bool v20; // di
  __int64 v21; // rax
  int v22; // r8d
  int v23; // edx
  const struct tagWND *v24; // rax
  __int64 v25; // rdx
  struct CRecalcProp *RecalcProperty; // rax

  v6 = 1;
  v7 = *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
    && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x40) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 4u;
  v8 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
  if ( v7 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    UserSessionState = W32GetUserSessionState(a1, a2);
    LOBYTE(v18) = v8;
    LOBYTE(v19) = v7;
    WPP_RECORDER_AND_TRACE_SF_q(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
      v19,
      v18,
      *(_QWORD *)(UserSessionState + 69416),
      4,
      7,
      142,
      (__int64)&WPP_78206adbc0fc3667085fdf33c34682f8_Traceguids,
      a1);
  }
  v9 = DesktopWindowFromDesktop(a1, a2);
  v10 = BuildHwndList(*(struct tagWND **)(v9 + 112), *(_DWORD *)(a1 + 336) & 0x20 | 2u, 0LL, 1);
  v12 = v10;
  if ( v10 )
  {
    v13 = (__int64 *)((char *)v10 + 32);
    v14 = 0LL;
    v15 = *((_QWORD *)v10 + 4);
    v16 = (_QWORD *)((char *)v10 + 32);
    if ( v15 != 1 )
    {
      do
      {
        if ( (unsigned __int8)CRecalcProp::CreateForTopologyChange(v15, a2, a3) )
        {
          *((_QWORD *)v12 + v14 + 4) = v15;
          v14 = (unsigned int)(v14 + 1);
        }
        v15 = *++v16;
      }
      while ( *v16 != 1LL );
      if ( (_DWORD)v14 )
      {
        do
        {
          if ( *v13 )
          {
            LOBYTE(v11) = 1;
            v24 = (const struct tagWND *)HMValidateHandleNoSecure(*v13, v11);
            RecalcProperty = CRecalcProp::GetRecalcProperty(v24, v25);
            CRecalcProp::SignalRecalcWork(RecalcProperty, 1LL);
          }
          ++v13;
          --v14;
        }
        while ( v14 );
      }
    }
    FreeHwndList(v12, v11);
  }
  else
  {
    if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
      || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x40) == 0
      || *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 2u )
    {
      v6 = 0;
    }
    v20 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v6 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      v21 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v11);
      LOBYTE(v22) = v20;
      LOBYTE(v23) = v6;
      WPP_RECORDER_AND_TRACE_SF_(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
        v23,
        v22,
        *(_QWORD *)(v21 + 69416),
        2,
        7,
        143,
        (__int64)&WPP_78206adbc0fc3667085fdf33c34682f8_Traceguids);
    }
  }
}
