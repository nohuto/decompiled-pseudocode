/*
 * XREFs of EtwpDemuxUmTraceHandle @ 0x18003D4D0
 * Callers:
 *     EtwpShutdownPrivateLoggers @ 0x180003118 (EtwpShutdownPrivateLoggers.c)
 *     EtwpWriteToPrivateBuffers @ 0x18003B480 (EtwpWriteToPrivateBuffers.c)
 *     EtwpTraceUmEvent @ 0x18003CEA0 (EtwpTraceUmEvent.c)
 *     EtwpGetUmProcessImageInfo @ 0x18003E8EC (EtwpGetUmProcessImageInfo.c)
 *     EtwpGetPrivateLoggerContextByName @ 0x18008D154 (EtwpGetPrivateLoggerContextByName.c)
 *     EtwpGetPrivateLoggerContext @ 0x18008DAF4 (EtwpGetPrivateLoggerContext.c)
 *     EtwpTraceUmMessage @ 0x1800D723C (EtwpTraceUmMessage.c)
 *     EtwpIsPrivateLoggerOn @ 0x180108E7C (EtwpIsPrivateLoggerOn.c)
 * Callees:
 *     NtTraceControl @ 0x180165740 (NtTraceControl.c)
 */

__int64 __fastcall EtwpDemuxUmTraceHandle(int a1, _DWORD *a2)
{
  unsigned __int16 i; // di
  __int64 v6; // rsi
  int v7; // eax
  unsigned __int16 v8; // [rsp+80h] [rbp+18h] BYREF
  int v9; // [rsp+88h] [rbp+20h] BYREF

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
        v8 = 0;
        v9 = 0;
        if ( !(unsigned int)NtTraceControl(40LL, v6 + 544, 8LL, &v8, 2, &v9) && v9 == 2 )
          break;
      }
    }
LABEL_11:
    _InterlockedDecrement((volatile signed __int32 *)(EtwpLoggerArray + 16LL * i + 8));
  }
  v7 = v8;
  *(_WORD *)(v6 + 552) = v8;
LABEL_10:
  if ( v7 != a1 )
    goto LABEL_11;
  *a2 = i;
  _InterlockedDecrement((volatile signed __int32 *)(EtwpLoggerArray + 16LL * i + 8));
  return 0LL;
}
