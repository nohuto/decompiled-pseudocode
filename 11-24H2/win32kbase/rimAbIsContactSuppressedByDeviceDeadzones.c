/*
 * XREFs of rimAbIsContactSuppressedByDeviceDeadzones @ 0x14017C014
 * Callers:
 *     rimAbSuppressLowerRankActivityInFrame @ 0x140058578 (rimAbSuppressLowerRankActivityInFrame.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019C14C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?IsInDeadzone@RIMDeadzone@@QEAAHPEAUtagHPD_CONTACT@@@Z @ 0x1401EA84C (-IsInDeadzone@RIMDeadzone@@QEAAHPEAUtagHPD_CONTACT@@@Z.c)
 */

__int64 __fastcall rimAbIsContactSuppressedByDeviceDeadzones(__int64 a1, struct tagHPD_CONTACT *a2)
{
  unsigned int v4; // ebx
  __int64 v5; // rsi
  int v6; // edi
  RIMDeadzone **i; // rsi

  v4 = 0;
  if ( !*(_DWORD *)(W32GetUserSessionState(a1) + 244) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 456LL);
  v5 = *(_QWORD *)(a1 + 16);
  if ( *(_DWORD *)(v5 + 432) )
  {
    v6 = 0;
    for ( i = (RIMDeadzone **)(v5 + 392); !*i || !(unsigned int)RIMDeadzone::IsInDeadzone(*i, a2); ++i )
    {
      if ( (unsigned int)++v6 >= 5 )
        return v4;
    }
    return 1;
  }
  return v4;
}
