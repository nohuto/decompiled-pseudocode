/*
 * XREFs of CKeyboardSensor_CreateInstance @ 0x140210AC0
 * Callers:
 *     <none>
 * Callees:
 *     ?Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z @ 0x1400185D0 (-Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z.c)
 *     ??0CBaseInput@@IEAA@KKW4_InputSensorName@@@Z @ 0x14014DF74 (--0CBaseInput@@IEAA@KKW4_InputSensorName@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019C14C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall CKeyboardSensor_CreateInstance(__int64 a1)
{
  __int64 v1; // rcx
  __int64 v2; // rbx
  __int64 UserSessionState; // rsi
  __int64 v4; // rax
  __int64 v5; // rdi
  __int64 v6; // rcx

  v2 = 0LL;
  if ( *(_QWORD *)(W32GetUserSessionState(a1) + 12928) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 375);
  UserSessionState = W32GetUserSessionState(v1);
  *(_QWORD *)(UserSessionState + 12928) = 0LL;
  v4 = Win32AllocPoolZInitImpl(256LL, 0x540uLL, 0x43486970u);
  v5 = v4;
  if ( v4 )
  {
    CBaseInput::CBaseInput(v4, 2, 1u, 1);
    *(_QWORD *)(v5 + 1328) = 0LL;
    *(_QWORD *)v5 = &CKeyboardSensor::`vftable';
    *(_DWORD *)(v5 + 1336) = 0;
    *(_QWORD *)(UserSessionState + 12928) = v5;
    return *(_QWORD *)(W32GetUserSessionState(v6) + 12928);
  }
  return v2;
}
