/*
 * XREFs of ?IsLastMsgData@CTouchProcessor@@AEAAH_K@Z @ 0x140201360
 * Callers:
 *     ?UpdateThreadPointerList@CTouchProcessor@@QEAAXPEAUtagTHREADINPUTPOINTERLIST@@G@Z @ 0x140186C30 (-UpdateThreadPointerList@CTouchProcessor@@QEAAXPEAUtagTHREADINPUTPOINTERLIST@@G@Z.c)
 * Callees:
 *     ?IsLockedShared@tagDomLock@@QEBA_NXZ @ 0x1400D8564 (-IsLockedShared@tagDomLock@@QEBA_NXZ.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019C14C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?GetNonConstMsgData@CTouchProcessor@@AEAAPEAUCPointerMsgData@@_K@Z @ 0x1401FEFCC (-GetNonConstMsgData@CTouchProcessor@@AEAAPEAUCPointerMsgData@@_K@Z.c)
 */

__int64 __fastcall CTouchProcessor::IsLastMsgData(PERESOURCE *this, __int64 a2)
{
  struct CPointerMsgData *NonConstMsgData; // rsi
  unsigned int v4; // edi
  _QWORD *v5; // rbx

  NonConstMsgData = CTouchProcessor::GetNonConstMsgData((CTouchProcessor *)this, a2);
  v4 = 0;
  if ( !tagDomLock::IsLockedShared(this + 4) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 12740);
  v5 = *(_QWORD **)NonConstMsgData;
  if ( *(_QWORD *)NonConstMsgData != *((_QWORD *)NonConstMsgData + 1) )
    return 0LL;
  if ( (struct CPointerMsgData *)*v5 != NonConstMsgData )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 12760);
  if ( (struct CPointerMsgData *)v5[1] != NonConstMsgData )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 12761);
  if ( *((_WORD *)v5 - 112) != *((_WORD *)NonConstMsgData + 8) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 12767);
  if ( *((_DWORD *)v5 - 50) == 3 && !*((_DWORD *)v5 - 55) )
    return 1;
  return v4;
}
