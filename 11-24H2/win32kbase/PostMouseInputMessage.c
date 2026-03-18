/*
 * XREFs of PostMouseInputMessage @ 0x140213164
 * Callers:
 *     NtMITPostMouseInputMessage @ 0x1401B8660 (NtMITPostMouseInputMessage.c)
 * Callees:
 *     _anonymous_namespace_::GetMouseProcessor @ 0x140060F70 (_anonymous_namespace_--GetMouseProcessor.c)
 *     IsInputThread @ 0x1400BB380 (IsInputThread.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019C14C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?PostMouseInputMessage@CMouseProcessor@@QEAA_N_KW4_POST_MOUSE_INPUT_MESSAGE_OPTIONS@@PEAXPEAU_mouseCursorEvent@@@Z @ 0x14021DCCC (-PostMouseInputMessage@CMouseProcessor@@QEAA_N_KW4_POST_MOUSE_INPUT_MESSAGE_OPTIONS@@PEAXPEAU_mo.c)
 */

bool __fastcall PostMouseInputMessage(__int64 a1, unsigned int a2, __int64 a3, __int64 a4)
{
  __int64 v8; // rcx
  __int64 MouseProcessor; // rax
  bool v10; // zf
  int v11; // eax

  if ( !IsInputThread(a1) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 1592);
  MouseProcessor = anonymous_namespace_::GetMouseProcessor(v8);
  if ( !MouseProcessor
    || (v10 = (unsigned __int8)CMouseProcessor::PostMouseInputMessage(MouseProcessor, a1, a2, a3, a4) == 0, v11 = 0, v10) )
  {
    v11 = -1073741823;
  }
  return v11 != 0;
}
