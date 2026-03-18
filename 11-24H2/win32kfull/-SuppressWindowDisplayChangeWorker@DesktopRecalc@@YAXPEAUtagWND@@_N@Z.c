/*
 * XREFs of ?SuppressWindowDisplayChangeWorker@DesktopRecalc@@YAXPEAUtagWND@@_N@Z @ 0x1402C4A7C
 * Callers:
 *     NtUserSuppressWindowDisplayChange @ 0x1402A1030 (NtUserSuppressWindowDisplayChange.c)
 * Callees:
 *     ?s_OnRecalcReenabled@CRecalcProp@@SAXPEAUtagWND@@@Z @ 0x1402C4FA8 (-s_OnRecalcReenabled@CRecalcProp@@SAXPEAUtagWND@@@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_sqs @ 0x1402C7F14 (WPP_RECORDER_AND_TRACE_SF_sqs.c)
 */

void __fastcall DesktopRecalc::SuppressWindowDisplayChangeWorker(DesktopRecalc *this, struct tagWND *a2)
{
  char v2; // r15
  int v3; // esi
  bool v5; // bp
  bool v6; // r14
  __int64 UserSessionState; // rax
  const char *v8; // rdx
  int v9; // r8d

  v2 = (char)a2;
  v3 = *((_DWORD *)this + 95) & 0x10;
  v5 = *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
    && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x40) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 4u;
  v6 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
  if ( v5 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    UserSessionState = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, a2);
    v8 = "Enabling";
    LOBYTE(v9) = v6;
    LOBYTE(v8) = v5;
    WPP_RECORDER_AND_TRACE_SF_sqs(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
      (_DWORD)v8,
      v9,
      *(_QWORD *)(UserSessionState + 69416));
  }
  if ( v2 )
  {
    *((_DWORD *)this + 95) |= 0x10u;
  }
  else
  {
    *((_DWORD *)this + 95) &= ~0x10u;
    if ( v3 )
      CRecalcProp::s_OnRecalcReenabled(this);
  }
}
