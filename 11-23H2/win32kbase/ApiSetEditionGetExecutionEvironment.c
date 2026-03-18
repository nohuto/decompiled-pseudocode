/*
 * XREFs of ApiSetEditionGetExecutionEvironment @ 0x1C0081F54
 * Callers:
 *     ?MoveMouseWindowManagement@CMouseProcessor@@QEAAXW4_GenerateMoveOptions@@@Z @ 0x1C0053088 (-MoveMouseWindowManagement@CMouseProcessor@@QEAAXW4_GenerateMoveOptions@@@Z.c)
 *     ?InitializeKeyboardGlobals@@YAJXZ @ 0x1C0081E70 (-InitializeKeyboardGlobals@@YAJXZ.c)
 *     ?GetExecutionEnvironment@CBaseProcessor@@KA?AW4_ProcessorExecutionEnvironment@@XZ @ 0x1C01F2A80 (-GetExecutionEnvironment@CBaseProcessor@@KA-AW4_ProcessorExecutionEnvironment@@XZ.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00D6660 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D6930 (_guard_dispatch_icall_nop.c)
 */

__int64 ApiSetEditionGetExecutionEvironment()
{
  unsigned int v0; // ebx

  if ( !qword_1C02965D0 || (int)qword_1C02965D0() < 0 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1367LL);
  if ( !qword_1C02965D8 )
  {
    v0 = 0;
LABEL_8:
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1369LL);
    return v0;
  }
  v0 = qword_1C02965D8();
  if ( !v0 )
    goto LABEL_8;
  return v0;
}
