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
        if ( !(_WORD)v7 )
        {
          NtTraceControl(40LL, v6 + 544, 8LL);
          goto LABEL_9;
        }
        if ( v7 == a1 )
          break;
      }
    }
LABEL_9:
    _InterlockedDecrement((volatile signed __int32 *)(EtwpLoggerArray + 16LL * i + 8));
  }
  *a2 = i;
  _InterlockedDecrement((volatile signed __int32 *)(EtwpLoggerArray + 16LL * i + 8));
  return 0LL;
}
