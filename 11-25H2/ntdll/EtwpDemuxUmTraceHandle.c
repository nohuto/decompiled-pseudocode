/*
 * XREFs of EtwpDemuxUmTraceHandle @ 0x180090EC0
 * Callers:
 *     EtwpWriteToPrivateBuffers @ 0x18008EE70 (EtwpWriteToPrivateBuffers.c)
 *     EtwpTraceUmEvent @ 0x180090890 (EtwpTraceUmEvent.c)
 *     EtwpGetUmProcessImageInfo @ 0x1800922DC (EtwpGetUmProcessImageInfo.c)
 *     EtwpGetPrivateLoggerContextByName @ 0x1800B5E04 (EtwpGetPrivateLoggerContextByName.c)
 *     EtwpGetPrivateLoggerContext @ 0x1800B69A0 (EtwpGetPrivateLoggerContext.c)
 *     EtwpTraceUmMessage @ 0x1800D4EFC (EtwpTraceUmMessage.c)
 *     EtwpShutdownPrivateLoggers @ 0x1800FCA50 (EtwpShutdownPrivateLoggers.c)
 *     EtwpIsPrivateLoggerOn @ 0x18010B890 (EtwpIsPrivateLoggerOn.c)
 * Callees:
 *     NtTraceControl @ 0x180166CD0 (NtTraceControl.c)
 */

__int64 __fastcall EtwpDemuxUmTraceHandle(int a1, _DWORD *a2)
{
  unsigned __int16 i; // di
  __int64 v6; // rsi
  int v7; // eax
  unsigned __int16 OutputBuffer; // [rsp+80h] [rbp+18h] BYREF
  ULONG ReturnLength; // [rsp+88h] [rbp+20h] BYREF

  for ( i = 0; ; ++i )
  {
    if ( i >= 8u )
      return 4201LL;
    _InterlockedAdd((volatile signed __int32 *)(EtwpLoggerArray + 16LL * i + 8), 1u);
    v6 = *(_QWORD *)(EtwpLoggerArray + 16LL * i);
    if ( (v6 & 1) == 0 )
    {
      if ( *(_QWORD *)(v6 + 544) )
      {
        v7 = *(unsigned __int16 *)(v6 + 552);
        if ( (_WORD)v7 )
          goto LABEL_10;
        OutputBuffer = 0;
        ReturnLength = 0;
        if ( !NtTraceControl(EtwQuerySessionDemuxObject, (PVOID)(v6 + 544), 8u, &OutputBuffer, 2u, &ReturnLength)
          && ReturnLength == 2 )
        {
          break;
        }
      }
    }
LABEL_11:
    _InterlockedDecrement((volatile signed __int32 *)(EtwpLoggerArray + 16LL * i + 8));
  }
  v7 = OutputBuffer;
  *(_WORD *)(v6 + 552) = OutputBuffer;
LABEL_10:
  if ( v7 != a1 )
    goto LABEL_11;
  *a2 = i;
  _InterlockedDecrement((volatile signed __int32 *)(EtwpLoggerArray + 16LL * i + 8));
  return 0LL;
}
