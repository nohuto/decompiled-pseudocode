/*
 * XREFs of ?ConvertToInterceptWindow@WindowActions@@YAXPEAUtagWND@@@Z @ 0x1402C93D4
 * Callers:
 *     NtUserConvertToInterceptWindow @ 0x1402934C0 (NtUserConvertToInterceptWindow.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x1400A5B9C (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     ?GetRecalcProperty@CRecalcProp@@SAPEAV1@PEBUtagWND@@@Z @ 0x1401BF74C (-GetRecalcProperty@CRecalcProp@@SAPEAV1@PEBUtagWND@@@Z.c)
 *     ?SignalRecalcWork@CRecalcProp@@QEAAXW4SignalReason@DesktopRecalc@@@Z @ 0x1402C46CC (-SignalRecalcWork@CRecalcProp@@QEAAXW4SignalReason@DesktopRecalc@@@Z.c)
 */

void __fastcall WindowActions::ConvertToInterceptWindow(WindowActions *this, struct tagWND *a2)
{
  __int64 v3; // rdx
  bool v4; // si
  bool v5; // bp
  __int64 v6; // rbx
  __int64 UserSessionState; // rax
  int v8; // r8d
  int v9; // edx
  struct CRecalcProp *RecalcProperty; // rax

  *((_DWORD *)this + 96) |= 0x10u;
  v3 = *(_QWORD *)&WPP_GLOBAL_Control;
  v4 = *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
    && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 4u;
  v5 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
  if ( v4 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    v6 = *(_QWORD *)this;
    UserSessionState = W32GetUserSessionState(this, *(_QWORD *)&WPP_GLOBAL_Control);
    LOBYTE(v8) = v5;
    LOBYTE(v9) = v4;
    WPP_RECORDER_AND_TRACE_SF_q(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
      v9,
      v8,
      *(_QWORD *)(UserSessionState + 69416),
      4,
      4,
      10,
      (__int64)&WPP_9fb880626b093ada35a87c290f7fa346_Traceguids,
      v6);
  }
  RecalcProperty = CRecalcProp::GetRecalcProperty(this, v3);
  if ( RecalcProperty )
  {
    if ( *((_DWORD *)RecalcProperty + 6) == 1 )
      CRecalcProp::SignalRecalcWork((__int64)RecalcProperty, 0);
  }
}
