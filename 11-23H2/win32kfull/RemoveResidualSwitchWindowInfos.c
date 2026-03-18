/*
 * XREFs of RemoveResidualSwitchWindowInfos @ 0x1C013B620
 * Callers:
 *     <none>
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C014083C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?SwitchWndCleanup@@YAXPEAPEAUtagSwitchWndInfo@@@Z @ 0x1C01C8B78 (-SwitchWndCleanup@@YAXPEAPEAUtagSwitchWndInfo@@@Z.c)
 */

struct tagSwitchWndInfo *RemoveResidualSwitchWindowInfos()
{
  struct tagSwitchWndInfo *result; // rax
  struct tagSwitchWndInfo *v1; // [rsp+30h] [rbp+8h] BYREF

  if ( gpswiFirst )
  {
    LODWORD(v1) = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTellMeIf", 0x20000LL, 1222LL);
    while ( 1 )
    {
      result = gpswiFirst;
      if ( !gpswiFirst )
        break;
      v1 = gpswiFirst;
      gpswiFirst = *(struct tagSwitchWndInfo **)gpswiFirst;
      SwitchWndCleanup(&v1);
    }
  }
  return result;
}
