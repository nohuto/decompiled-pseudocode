/*
 * XREFs of _lambda_8102d3965b5d38067ca2d55e8bb485aa_::_lambda_invoker_cdecl_ @ 0x1C00D4940
 * Callers:
 *     <none>
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00D6660 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?GetProcessor@CPTPProcessorFactory@@SAPEAVCPTPProcessor@@PEAUDEVICEINFO@@@Z @ 0x1C01DF340 (-GetProcessor@CPTPProcessorFactory@@SAPEAVCPTPProcessor@@PEAUDEVICEINFO@@@Z.c)
 *     ?UpdateEnvironment@CPTPProcessor@@AEAAXW4EnvironmentUpdateOptions@@PEAUtagHID_POINTER_DEVICE_INFO@@@Z @ 0x1C01E1018 (-UpdateEnvironment@CPTPProcessor@@AEAAXW4EnvironmentUpdateOptions@@PEAUtagHID_POINTER_DEVICE_INF.c)
 */

char __fastcall lambda_8102d3965b5d38067ca2d55e8bb485aa_::_lambda_invoker_cdecl_(struct DEVICEINFO *const a1, void *a2)
{
  struct CPTPProcessor *Processor; // rdi

  if ( (*((_DWORD *)a1 + 50) & 0x80u) != 0 && *(_DWORD *)(*((_QWORD *)a1 + 59) + 24LL) == 7 )
  {
    Processor = CPTPProcessorFactory::GetProcessor(a1);
    if ( !Processor )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 400LL);
    CPTPProcessor::UpdateEnvironment(Processor, 1LL, *((_QWORD *)a1 + 59));
  }
  return 1;
}
