/*
 * XREFs of ?EndKeyboardEventProcessingByInputService@KeyboardInputTelemetry@@SAXPEAUtagQMSG@@_N@Z @ 0x1400C0BC0
 * Callers:
 *     HandleDeferredInput @ 0x1400C06B0 (HandleDeferredInput.c)
 * Callees:
 *     ?GetKeyboardInputLatency@KeyboardInputTelemetry@@CAK_K@Z @ 0x1400C0CA8 (-GetKeyboardInputLatency@KeyboardInputTelemetry@@CAK_K@Z.c)
 *     ?_UpdateTelemetryBuffer@KeyboardInputTelemetry@@AEAAX_NK@Z @ 0x1400C0CE0 (-_UpdateTelemetryBuffer@KeyboardInputTelemetry@@AEAAX_NK@Z.c)
 *     ?LogHanging@KeyboardInputTelemetry@@CAXPEAUtagTHREADINFO@@_K@Z @ 0x1401BFAC8 (-LogHanging@KeyboardInputTelemetry@@CAXPEAUtagTHREADINFO@@_K@Z.c)
 */

void __fastcall KeyboardInputTelemetry::EndKeyboardEventProcessingByInputService(struct tagQMSG *a1, char a2)
{
  __int64 UserSessionState; // rax
  struct tagTHREADINFO *v5; // rcx
  KeyboardInputTelemetry *v6; // rsi
  unsigned int ThreadId; // eax
  unsigned __int64 v8; // rcx
  bool v9; // bl
  unsigned int KeyboardInputLatency; // eax

  UserSessionState = W32GetUserSessionState(a1);
  v5 = (struct tagTHREADINFO *)*((_QWORD *)a1 + 13);
  v6 = (KeyboardInputTelemetry *)(UserSessionState + 14512);
  if ( a2 )
  {
    KeyboardInputTelemetry::LogHanging(v5, *((_QWORD *)a1 + 17));
  }
  else
  {
    ThreadId = (unsigned int)PsGetThreadId(*(PETHREAD *)v5);
    v8 = *((_QWORD *)a1 + 18);
    if ( v8 )
    {
      if ( *((_DWORD *)v6 + 47) == ThreadId )
      {
        v9 = ((*((_DWORD *)a1 + 6) - 257) & 0xFFFFFFFB) == 0;
        KeyboardInputLatency = KeyboardInputTelemetry::GetKeyboardInputLatency(v8);
        KeyboardInputTelemetry::_UpdateTelemetryBuffer(v6, v9, KeyboardInputLatency);
      }
    }
  }
}
