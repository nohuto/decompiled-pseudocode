/*
 * XREFs of ?FreePositionEvent@ShellWindowPos@@YAXPEAUtagQMSG@@@Z @ 0x1C021C828
 * Callers:
 *     ?CleanEventMessage@@YAXPEAUtagQMSG@@@Z @ 0x1C00794C0 (-CleanEventMessage@@YAXPEAUtagQMSG@@@Z.c)
 *     ?xxxProcessPositionEvent@ShellWindowPos@@YAXPEAUtagQMSG@@@Z @ 0x1C021E33C (-xxxProcessPositionEvent@ShellWindowPos@@YAXPEAUtagQMSG@@@Z.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C014083C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

void __fastcall ShellWindowPos::FreePositionEvent(ShellWindowPos *this, struct tagQMSG *a2)
{
  void *v2; // rcx

  if ( *((_DWORD *)this + 8) < 2u )
  {
    v2 = (void *)*((_QWORD *)this + 5);
    if ( v2 )
      Win32FreePool(v2);
  }
  else
  {
    MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 1008);
  }
}
