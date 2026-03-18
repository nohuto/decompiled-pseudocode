/*
 * XREFs of ?ResolveIdToMessage@BufferedMouseInputList@CMouseProcessor@@QEAAPEAUMouseInputMessage@2@_K@Z @ 0x14021E78C
 * Callers:
 *     ?PostMouseInputMessage@CMouseProcessor@@QEAA_N_KW4_POST_MOUSE_INPUT_MESSAGE_OPTIONS@@PEAXPEAU_mouseCursorEvent@@@Z @ 0x14021DCCC (-PostMouseInputMessage@CMouseProcessor@@QEAA_N_KW4_POST_MOUSE_INPUT_MESSAGE_OPTIONS@@PEAXPEAU_mo.c)
 * Callees:
 *     IsInputThread @ 0x1400BB380 (IsInputThread.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019C14C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?DropAllMouseInput@BufferedMouseInputList@CMouseProcessor@@QEAAXXZ @ 0x14019CE14 (-DropAllMouseInput@BufferedMouseInputList@CMouseProcessor@@QEAAXXZ.c)
 *     ??_GMouseInputMessage@CMouseProcessor@@QEAAPEAXI@Z @ 0x14021B950 (--_GMouseInputMessage@CMouseProcessor@@QEAAPEAXI@Z.c)
 *     ?DequeueUserModeInput@Mouse@InputTraceLogging@@SAX_KPEBVCInputDest@@@Z @ 0x14021C77C (-DequeueUserModeInput@Mouse@InputTraceLogging@@SAX_KPEBVCInputDest@@@Z.c)
 */

struct CMouseProcessor::MouseInputMessage *__fastcall CMouseProcessor::BufferedMouseInputList::ResolveIdToMessage(
        CMouseProcessor::BufferedMouseInputList *this,
        __int64 a2)
{
  _QWORD *v4; // rax
  char *v5; // rbx
  __int64 v7; // rcx

  if ( !IsInputThread((__int64)this) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 7492);
  v4 = (_QWORD *)((char *)this + 8);
  v5 = (char *)*((_QWORD *)this + 1);
  if ( v5 == (char *)this + 8 )
  {
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 7496);
    return 0LL;
  }
  else
  {
    if ( *((_QWORD **)v5 + 1) != v4 || (v7 = *(_QWORD *)v5, *(char **)(*(_QWORD *)v5 + 8LL) != v5) )
      __fastfail(3u);
    *v4 = v7;
    *(_QWORD *)(v7 + 8) = v4;
    if ( *((_QWORD *)v5 + 2) != a2 )
    {
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 7521);
      CMouseProcessor::MouseInputMessage::`scalar deleting destructor'(v5);
      CMouseProcessor::BufferedMouseInputList::DropAllMouseInput(this);
      v5 = 0LL;
    }
    InputTraceLogging::Mouse::DequeueUserModeInput(
      a2,
      (const struct CInputDest *)((unsigned __int64)(v5 + 24) & -(__int64)(v5 != 0LL)));
    return (struct CMouseProcessor::MouseInputMessage *)v5;
  }
}
