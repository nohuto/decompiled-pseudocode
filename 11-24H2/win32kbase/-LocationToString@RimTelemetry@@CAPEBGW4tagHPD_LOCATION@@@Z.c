/*
 * XREFs of ?LocationToString@RimTelemetry@@CAPEBGW4tagHPD_LOCATION@@@Z @ 0x1401D14A8
 * Callers:
 *     ?LogBlockingIoControlRequest@RimTelemetry@@SAXPEBDQEAURIMDEV@@_KJK@Z @ 0x1400B14B8 (-LogBlockingIoControlRequest@RimTelemetry@@SAXPEBDQEAURIMDEV@@_KJK@Z.c)
 *     ?ReportRimDevice@RimTelemetry@@SAXHHQEAURIMDEV@@@Z @ 0x140114A14 (-ReportRimDevice@RimTelemetry@@SAXHHQEAURIMDEV@@@Z.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019C14C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

const wchar_t *__fastcall RimTelemetry::LocationToString(int a1)
{
  switch ( a1 )
  {
    case 0:
      return L"Integrated";
    case 1:
      return L"External";
    case 2:
      return L"Unknown";
  }
  return L"Unexpected Value";
}
