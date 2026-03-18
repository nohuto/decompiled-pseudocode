/*
 * XREFs of ?s_OnWindowUncloak@CRecalcProp@@SAXPEAUtagWND@@@Z @ 0x1401BF3DC
 * Callers:
 *     ?zzzUpdateWindowCloak@@YAXPEAUtagWND@@W4CloakState@@1@Z @ 0x1400943FC (-zzzUpdateWindowCloak@@YAXPEAUtagWND@@W4CloakState@@1@Z.c)
 * Callees:
 *     ?ShouldDeferRecalc@CRecalcState@@QEBA_NPEBUtagWND@@W4ShouldDeferRecalcOption@1@@Z @ 0x140068228 (-ShouldDeferRecalc@CRecalcState@@QEBA_NPEBUtagWND@@W4ShouldDeferRecalcOption@1@@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x1400A5B9C (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     ?GetRecalcProperty@CRecalcProp@@SAPEAV1@PEBUtagWND@@@Z @ 0x1401BF74C (-GetRecalcProperty@CRecalcProp@@SAPEAV1@PEBUtagWND@@@Z.c)
 *     ?SignalRecalcWork@CRecalcProp@@QEAAXW4SignalReason@DesktopRecalc@@@Z @ 0x1402C46CC (-SignalRecalcWork@CRecalcProp@@QEAAXW4SignalReason@DesktopRecalc@@@Z.c)
 */

void __fastcall CRecalcProp::s_OnWindowUncloak(struct tagWND *a1)
{
  struct CRecalcProp *RecalcProperty; // rax
  __int64 v3; // rdx
  struct CRecalcProp *v4; // rsi
  char v5; // di
  bool v6; // bp
  bool v7; // r15
  __int64 v8; // rbx
  __int64 UserSessionState; // rax
  int v10; // r8d
  int v11; // edx
  __int64 v12; // rdx
  bool v13; // bp
  __int64 v14; // rbx
  __int64 v15; // rax
  int v16; // r8d
  int v17; // edx

  RecalcProperty = CRecalcProp::GetRecalcProperty(a1);
  v4 = RecalcProperty;
  if ( RecalcProperty )
  {
    v5 = 1;
    if ( *((_DWORD *)RecalcProperty + 6) == 1 )
    {
      v6 = *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
        && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x40) != 0
        && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 4u;
      v7 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( v6 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        v8 = *(_QWORD *)a1;
        UserSessionState = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v3);
        LOBYTE(v10) = v7;
        LOBYTE(v11) = v6;
        WPP_RECORDER_AND_TRACE_SF_q(
          *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
          v11,
          v10,
          *(_QWORD *)(UserSessionState + 69416),
          4,
          7,
          84,
          (__int64)&WPP_78206adbc0fc3667085fdf33c34682f8_Traceguids,
          v8);
      }
      if ( !CRecalcState::ShouldDeferRecalc(*((_QWORD *)v4 + 4), (__int64)a1) )
      {
        if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
          || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x40) == 0
          || *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 4u )
        {
          v5 = 0;
        }
        v13 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
        if ( v5 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        {
          v14 = *(_QWORD *)a1;
          v15 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v12);
          LOBYTE(v16) = v13;
          LOBYTE(v17) = v5;
          WPP_RECORDER_AND_TRACE_SF_q(
            *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
            v17,
            v16,
            *(_QWORD *)(v15 + 69416),
            4,
            7,
            85,
            (__int64)&WPP_78206adbc0fc3667085fdf33c34682f8_Traceguids,
            v14);
        }
        CRecalcProp::SignalRecalcWork(v4, 0LL);
      }
    }
  }
}
