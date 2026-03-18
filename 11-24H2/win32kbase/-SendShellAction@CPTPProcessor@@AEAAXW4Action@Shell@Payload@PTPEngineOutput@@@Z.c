/*
 * XREFs of ?SendShellAction@CPTPProcessor@@AEAAXW4Action@Shell@Payload@PTPEngineOutput@@@Z @ 0x14020E260
 * Callers:
 *     ?OnEngineOutput@CPTPProcessor@@UEAAXPEBUPTPEngineOutput@@@Z @ 0x140187B70 (-OnEngineOutput@CPTPProcessor@@UEAAXPEBUPTPEngineOutput@@@Z.c)
 * Callees:
 *     SendMessageTo @ 0x140048F20 (SendMessageTo.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019C14C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     Feature_TouchpadPublicApis3__private_IsEnabledDeviceUsageNoInline @ 0x1401A67CC (Feature_TouchpadPublicApis3__private_IsEnabledDeviceUsageNoInline.c)
 */

__int64 __fastcall CPTPProcessor::SendShellAction(__int64 a1, int a2)
{
  __int128 v5; // [rsp+20h] [rbp-18h] BYREF

  v5 = 0LL;
  if ( (unsigned int)Feature_TouchpadPublicApis3__private_IsEnabledDeviceUsageNoInline() )
  {
    if ( !*(_QWORD *)(a1 + 528) )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 131074, 1415);
    *(_QWORD *)&v5 = *(_QWORD *)(a1 + 528);
  }
  DWORD2(v5) = a2;
  return SendMessageTo(21LL, &v5, 16LL);
}
