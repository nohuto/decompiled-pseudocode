/*
 * XREFs of ?RemoveRecalcProperty@CRecalcProp@@CAXPEAUtagWND@@@Z @ 0x1402C3C60
 * Callers:
 *     ?s_OnWindowBecomingChild@CRecalcProp@@SAXPEAUtagWND@@@Z @ 0x1401BF258 (-s_OnWindowBecomingChild@CRecalcProp@@SAXPEAUtagWND@@@Z.c)
 *     ?s_xxxProcessTopologyChange@CRecalcProp@@SAXPEAUHWND__@@PEAVCRecalcContext@@@Z @ 0x1402C55A8 (-s_xxxProcessTopologyChange@CRecalcProp@@SAXPEAUHWND__@@PEAVCRecalcContext@@@Z.c)
 * Callees:
 *     InternalRemoveProp @ 0x140031360 (InternalRemoveProp.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x1400A5B9C (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     ??_GCRecalcProp@@AEAAPEAXI@Z @ 0x1401E072C (--_GCRecalcProp@@AEAAPEAXI@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14026C310 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

void __fastcall CRecalcProp::RemoveRecalcProperty(struct tagWND *a1)
{
  __int64 v2; // rdx
  char v3; // bp
  char v4; // si
  __int64 v5; // rbx
  __int64 UserSessionState; // rax
  int v7; // r8d
  int v8; // edx
  __int64 v9; // rax
  __int64 v10; // rax
  CRecalcProp *v11; // rbx

  v2 = *(_QWORD *)&WPP_GLOBAL_Control;
  if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
    || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x40) == 0
    || (v3 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 5u) )
  {
    v3 = 0;
  }
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
    || (v4 = 1, !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL)) )
  {
    v4 = 0;
  }
  if ( v3 || v4 )
  {
    v5 = *(_QWORD *)a1;
    UserSessionState = W32GetUserSessionState(a1, *(_QWORD *)&WPP_GLOBAL_Control);
    LOBYTE(v7) = v4;
    LOBYTE(v8) = v3;
    WPP_RECORDER_AND_TRACE_SF_q(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
      v8,
      v7,
      *(_QWORD *)(UserSessionState + 69416),
      5,
      7,
      63,
      (__int64)&WPP_78206adbc0fc3667085fdf33c34682f8_Traceguids,
      v5);
  }
  v9 = W32GetUserSessionState(a1, v2);
  v10 = InternalRemoveProp((__int64)a1, *(unsigned __int16 *)(v9 + 42314), 1u);
  v11 = (CRecalcProp *)v10;
  if ( v10 )
    *(_QWORD *)(v10 + 16) = 0LL;
  if ( *(_DWORD *)(v10 + 24) == 2 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 2243);
  *((_DWORD *)a1 + 95) &= ~0x80u;
  CRecalcProp::`scalar deleting destructor'(v11);
}
