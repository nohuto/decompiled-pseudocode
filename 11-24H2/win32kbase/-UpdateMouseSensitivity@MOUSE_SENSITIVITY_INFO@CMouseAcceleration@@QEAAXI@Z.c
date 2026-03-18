/*
 * XREFs of ?UpdateMouseSensitivity@MOUSE_SENSITIVITY_INFO@CMouseAcceleration@@QEAAXI@Z @ 0x14022055C
 * Callers:
 *     UpdateMouseSensitivity @ 0x14013B630 (UpdateMouseSensitivity.c)
 *     ??0CMouseAcceleration@@IEAA@I@Z @ 0x140220480 (--0CMouseAcceleration@@IEAA@I@Z.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019C14C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

void __fastcall CMouseAcceleration::MOUSE_SENSITIVITY_INFO::UpdateMouseSensitivity(
        CMouseAcceleration::MOUSE_SENSITIVITY_INFO *this,
        unsigned int a2)
{
  unsigned int v4; // ebx
  unsigned int v5; // eax

  if ( a2 - 1 > 0x13 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 525);
  *(_DWORD *)this = a2;
  if ( a2 > 2 )
  {
    v5 = a2 << 8;
    if ( a2 > 0xA )
      v4 = (v5 - 1536) >> 2;
    else
      v4 = (v5 - 512) >> 3;
  }
  else
  {
    v4 = (8 * a2) & 0x7FFFFFF;
  }
  *((_DWORD *)this + 1) = v4;
}
