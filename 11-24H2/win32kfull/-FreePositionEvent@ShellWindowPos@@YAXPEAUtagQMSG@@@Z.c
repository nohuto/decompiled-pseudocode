/*
 * XREFs of ?FreePositionEvent@ShellWindowPos@@YAXPEAUtagQMSG@@@Z @ 0x1402BFF58
 * Callers:
 *     ?CleanEventMessage@@YAXPEAUtagQMSG@@@Z @ 0x14008EC50 (-CleanEventMessage@@YAXPEAUtagQMSG@@@Z.c)
 *     ?xxxProcessPositionEvent@ShellWindowPos@@YAXPEAUtagQMSG@@@Z @ 0x1402C1474 (-xxxProcessPositionEvent@ShellWindowPos@@YAXPEAUtagQMSG@@@Z.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14026C310 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ??3SHELLPOSREQUEST@ShellWindowPos@@SAXPEAX@Z @ 0x14026CDE0 (--3SHELLPOSREQUEST@ShellWindowPos@@SAXPEAX@Z.c)
 */

void __fastcall ShellWindowPos::FreePositionEvent(void **this, struct tagQMSG *a2)
{
  if ( *((_DWORD *)this + 8) < 2u )
    ShellWindowPos::SHELLPOSREQUEST::operator delete(this[5]);
  else
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 1272);
}
