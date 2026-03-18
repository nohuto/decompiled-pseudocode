/*
 * XREFs of SynthesizeMouseInput @ 0x1C01E9030
 * Callers:
 *     ?OnPTPMarshalNotification@CHidInput@@EEAAJXZ @ 0x1C01E28B0 (-OnPTPMarshalNotification@CHidInput@@EEAAJXZ.c)
 * Callees:
 *     _anonymous_namespace_::GetMouseProcessor @ 0x1C005304C (_anonymous_namespace_--GetMouseProcessor.c)
 *     ?SynthesizeMouse@CMouseProcessor@@QEAAXPEAVMouseInputDataEx@1@PEAUPTPMouseInputData@@@Z @ 0x1C00545FC (-SynthesizeMouse@CMouseProcessor@@QEAAXPEAVMouseInputDataEx@1@PEAUPTPMouseInputData@@@Z.c)
 *     ??0MouseInputDataEx@CMouseProcessor@@QEAA@PEBU_MOUSE_INPUT_DATA@@UEventTime@1@W4MouseInputDataProcessingOptions@@U_InputDeviceHandle@@PEBU_SYNTHESIZE_MOUSE_EXTRA_PAYLOAD@@@Z @ 0x1C0054794 (--0MouseInputDataEx@CMouseProcessor@@QEAA@PEBU_MOUSE_INPUT_DATA@@UEventTime@1@W4MouseInputDataPr.c)
 *     __security_check_cookie @ 0x1C00CDBD0 (__security_check_cookie.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00D6660 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

void __fastcall SynthesizeMouseInput(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5)
{
  CMouseProcessor *MouseProcessor; // rbx
  __int128 v10; // [rsp+40h] [rbp-81h] BYREF
  __int64 v11; // [rsp+50h] [rbp-71h]
  __int128 v12; // [rsp+60h] [rbp-61h] BYREF
  __int64 v13; // [rsp+70h] [rbp-51h]
  struct tagPOINT v14; // [rsp+80h] [rbp-41h] BYREF

  if ( !a3 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 1308);
  if ( !a4 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 1309);
  MouseProcessor = (CMouseProcessor *)anonymous_namespace_::GetMouseProcessor(a1, a2, a3, a4);
  if ( MouseProcessor )
  {
    *((_QWORD *)&v10 + 1) = a1;
    *(_QWORD *)&v10 = a1 != 0 ? 3uLL : 0;
    v12 = v10;
    v13 = 0LL;
    *(_QWORD *)&v10 = a3;
    *((_QWORD *)&v10 + 1) = a4;
    v11 = a4;
    CMouseProcessor::MouseInputDataEx::MouseInputDataEx((__int64)&v14, a2, &v10, a5, (__int64)&v12, 0LL);
    CMouseProcessor::SynthesizeMouse(MouseProcessor, (struct tagPOINT)&v14, 0LL);
  }
}
