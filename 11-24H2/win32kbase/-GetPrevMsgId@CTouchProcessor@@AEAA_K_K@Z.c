/*
 * XREFs of ?GetPrevMsgId@CTouchProcessor@@AEAA_K_K@Z @ 0x140200878
 * Callers:
 *     ?CancelActivePointer@CTouchProcessor@@AEAAXPEAUCInputPointerNode@@PEAH@Z @ 0x1401F71B0 (-CancelActivePointer@CTouchProcessor@@AEAAXPEAUCInputPointerNode@@PEAH@Z.c)
 *     ?GenerateMessagesCore@CTouchProcessor@@QEAAHHHHPEBUCPointerInputFrame@@@Z @ 0x1401FCB24 (-GenerateMessagesCore@CTouchProcessor@@QEAAHHHHPEBUCPointerInputFrame@@@Z.c)
 *     ?UnreferenceFrameAndMessageData@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@@Z @ 0x140208BB8 (-UnreferenceFrameAndMessageData@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@@Z.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019C14C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?GetNonConstMsgData@CTouchProcessor@@AEAAPEAUCPointerMsgData@@_K@Z @ 0x1401FEFCC (-GetNonConstMsgData@CTouchProcessor@@AEAAPEAUCPointerMsgData@@_K@Z.c)
 */

struct CPointerMsgData *__fastcall CTouchProcessor::GetPrevMsgId(CTouchProcessor *this, __int64 a2)
{
  struct CPointerMsgData *NonConstMsgData; // rbx

  NonConstMsgData = CTouchProcessor::GetNonConstMsgData(this, a2);
  while ( 1 )
  {
    NonConstMsgData = *(struct CPointerMsgData **)NonConstMsgData;
    if ( !*((_WORD *)NonConstMsgData + 8) )
      break;
    if ( (*((_DWORD *)NonConstMsgData + 9) & 0x80u) != 0 )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 10774);
    if ( (*((_DWORD *)NonConstMsgData + 9) & 0x20) == 0 )
      return NonConstMsgData;
  }
  return 0LL;
}
