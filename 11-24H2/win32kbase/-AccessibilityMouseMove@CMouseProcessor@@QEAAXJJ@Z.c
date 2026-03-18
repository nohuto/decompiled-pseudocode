/*
 * XREFs of ?AccessibilityMouseMove@CMouseProcessor@@QEAAXJJ@Z @ 0x14021BB04
 * Callers:
 *     MouseMove @ 0x140213080 (MouseMove.c)
 * Callees:
 *     ??0MouseInputDataEx@CMouseProcessor@@QEAA@PEBU_MOUSE_INPUT_DATA@@W4MouseInputDataProcessingPrivate@@W4MouseInputDataProcessingOptions@@@Z @ 0x140050308 (--0MouseInputDataEx@CMouseProcessor@@QEAA@PEBU_MOUSE_INPUT_DATA@@W4MouseInputDataProcessingPriva.c)
 *     ?SynthesizeMouse@CMouseProcessor@@QEAAXPEAVMouseInputDataEx@1@PEAUPTPMouseInputData@@@Z @ 0x140050448 (-SynthesizeMouse@CMouseProcessor@@QEAAXPEAVMouseInputDataEx@1@PEAUPTPMouseInputData@@@Z.c)
 *     ?GetExecutionEnvironment@CBaseProcessor@@SA?AW4_ProcessorExecutionEnvironment@@XZ @ 0x140104354 (-GetExecutionEnvironment@CBaseProcessor@@SA-AW4_ProcessorExecutionEnvironment@@XZ.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019C14C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     __security_check_cookie @ 0x14023F3B0 (__security_check_cookie.c)
 */

void __fastcall CMouseProcessor::AccessibilityMouseMove(CMouseProcessor *this, int a2, unsigned int a3)
{
  __int128 v6; // [rsp+28h] [rbp-90h] BYREF
  __int64 v7; // [rsp+38h] [rbp-80h]
  _BYTE v8[96]; // [rsp+40h] [rbp-78h] BYREF

  if ( (unsigned int)CBaseProcessor::GetExecutionEnvironment((__int64)this) != 1 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 1863);
  v6 = 0LL;
  HIDWORD(v6) = a2;
  v7 = a3;
  CMouseProcessor::MouseInputDataEx::MouseInputDataEx((__int64)v8, (__int64)&v6, 1, 256);
  CMouseProcessor::SynthesizeMouse(this, (struct CMouseProcessor::MouseInputDataEx *)v8, 0LL);
}
