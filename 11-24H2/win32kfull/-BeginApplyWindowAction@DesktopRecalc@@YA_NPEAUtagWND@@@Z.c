/*
 * XREFs of ?BeginApplyWindowAction@DesktopRecalc@@YA_NPEAUtagWND@@@Z @ 0x1402C2260
 * Callers:
 *     ?xxxApplyWindowAction@AdvancedWindowPos@@YAXPEAUtagWND@@PEAUWindowAction@1@W4ApplyReason@1@@Z @ 0x1402D5DB4 (-xxxApplyWindowAction@AdvancedWindowPos@@YAXPEAUtagWND@@PEAUWindowAction@1@W4ApplyReason@1@@Z.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1400A5B18 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ?GetRecalcProperty@CRecalcProp@@SAPEAV1@PEBUtagWND@@@Z @ 0x1401BF74C (-GetRecalcProperty@CRecalcProp@@SAPEAV1@PEBUtagWND@@@Z.c)
 *     ?BeginApplyWindowAction@CRecalcProp@@QEAA_NPEAUtagWND@@@Z @ 0x1402C20DC (-BeginApplyWindowAction@CRecalcProp@@QEAA_NPEAUtagWND@@@Z.c)
 */

bool __fastcall DesktopRecalc::BeginApplyWindowAction(DesktopRecalc *this, struct tagWND *a2)
{
  CRecalcProp *RecalcProperty; // rax
  __int64 v4; // rdx
  bool v5; // bl
  bool v6; // di
  __int64 UserSessionState; // rax
  int v8; // r8d
  int v9; // edx

  RecalcProperty = CRecalcProp::GetRecalcProperty(this, (__int64)a2);
  if ( RecalcProperty )
    return CRecalcProp::BeginApplyWindowAction(RecalcProperty, this);
  v5 = *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
    && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x40) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 3u;
  v6 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
  if ( v5 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    UserSessionState = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v4);
    LOBYTE(v8) = v6;
    LOBYTE(v9) = v5;
    WPP_RECORDER_AND_TRACE_SF_(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
      v9,
      v8,
      *(_QWORD *)(UserSessionState + 69416),
      3,
      7,
      153,
      (__int64)&WPP_78206adbc0fc3667085fdf33c34682f8_Traceguids);
  }
  return 0;
}
