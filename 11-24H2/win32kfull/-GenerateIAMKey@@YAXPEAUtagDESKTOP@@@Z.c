/*
 * XREFs of ?GenerateIAMKey@@YAXPEAUtagDESKTOP@@@Z @ 0x1402BFFA8
 * Callers:
 *     ?RegisterShell@@YA_NPEAUtagWND@@@Z @ 0x1402C06AC (-RegisterShell@@YA_NPEAUtagWND@@@Z.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1400A5B18 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14026C310 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

void __fastcall GenerateIAMKey(struct tagDESKTOP *a1)
{
  __int64 v2; // rdx
  bool v3; // bl
  bool v4; // di
  __int64 UserSessionState; // rax
  int v6; // r8d
  int v7; // edx

  if ( (unsigned int)SystemPrng((char *)a1 + 280, 8LL) )
  {
    *((_DWORD *)a1 + 68) = 1;
  }
  else
  {
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTellMeIf", 0x20000, 2565);
    v3 = *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
      && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 2) != 0
      && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 2u;
    v4 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v3 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      UserSessionState = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v2);
      LOBYTE(v6) = v4;
      LOBYTE(v7) = v3;
      WPP_RECORDER_AND_TRACE_SF_(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
        v7,
        v6,
        *(_QWORD *)(UserSessionState + 69416),
        2,
        2,
        44,
        (__int64)&WPP_6b95c0fab1563d858a8149a35fde60c5_Traceguids);
    }
  }
}
