/*
 * XREFs of SynthesizeMouseInput @ 0x140213510
 * Callers:
 *     ?OnPTPMarshalNotification@CHidInput@@EEAAJXZ @ 0x14020F470 (-OnPTPMarshalNotification@CHidInput@@EEAAJXZ.c)
 * Callees:
 *     ??0MouseInputDataEx@CMouseProcessor@@QEAA@PEBU_MOUSE_INPUT_DATA@@UEventTime@1@W4MouseInputDataProcessingOptions@@U_InputDeviceHandle@@PEBU_SYNTHESIZE_MOUSE_EXTRA_PAYLOAD@@@Z @ 0x1400501A8 (--0MouseInputDataEx@CMouseProcessor@@QEAA@PEBU_MOUSE_INPUT_DATA@@UEventTime@1@W4MouseInputDataPr.c)
 *     ?SynthesizeMouse@CMouseProcessor@@QEAAXPEAVMouseInputDataEx@1@PEAUPTPMouseInputData@@@Z @ 0x140050448 (-SynthesizeMouse@CMouseProcessor@@QEAAXPEAVMouseInputDataEx@1@PEAUPTPMouseInputData@@@Z.c)
 *     _anonymous_namespace_::GetMouseProcessor @ 0x140060F70 (_anonymous_namespace_--GetMouseProcessor.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019C14C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     __security_check_cookie @ 0x14023F3B0 (__security_check_cookie.c)
 */

void __fastcall SynthesizeMouseInput(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5)
{
  CMouseProcessor *MouseProcessor; // rbx
  __int128 v10; // [rsp+40h] [rbp-81h] BYREF
  __int64 v11; // [rsp+50h] [rbp-71h]
  __int128 v12; // [rsp+60h] [rbp-61h] BYREF
  __int64 v13; // [rsp+70h] [rbp-51h]
  _BYTE v14[96]; // [rsp+80h] [rbp-41h] BYREF

  if ( !a3 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 1388);
  if ( !a4 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 1389);
  MouseProcessor = (CMouseProcessor *)anonymous_namespace_::GetMouseProcessor(a1);
  if ( MouseProcessor )
  {
    *((_QWORD *)&v10 + 1) = a1;
    *(_QWORD *)&v10 = a1 != 0 ? 3uLL : 0;
    v12 = v10;
    v13 = 0LL;
    *(_QWORD *)&v10 = a3;
    *((_QWORD *)&v10 + 1) = a4;
    v11 = a4;
    CMouseProcessor::MouseInputDataEx::MouseInputDataEx((__int64)v14, a2, &v10, a5, (__int64)&v12, 0LL);
    CMouseProcessor::SynthesizeMouse(MouseProcessor, (struct CMouseProcessor::MouseInputDataEx *)v14, 0LL);
  }
}
