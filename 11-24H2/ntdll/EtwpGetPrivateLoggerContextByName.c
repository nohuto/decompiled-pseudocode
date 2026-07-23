/*
 * XREFs of EtwpGetPrivateLoggerContextByName @ 0x1800A8C14
 * Callers:
 *     EtwpStartUmLogger @ 0x1800A879C (EtwpStartUmLogger.c)
 *     EtwpGetPrivateLoggerContext @ 0x1800A95B4 (EtwpGetPrivateLoggerContext.c)
 * Callees:
 *     EtwpDemuxUmTraceHandle @ 0x18001D750 (EtwpDemuxUmTraceHandle.c)
 *     RtlEqualUnicodeString @ 0x1800A7500 (RtlEqualUnicodeString.c)
 */

__int64 __fastcall EtwpGetPrivateLoggerContextByName(PUNICODE_STRING String2, _QWORD *a2)
{
  unsigned int i; // ebx
  unsigned int v5; // eax
  __int64 v6; // rsi
  __int64 v8; // rcx
  unsigned int v9; // [rsp+30h] [rbp+8h] BYREF

  *a2 = 0LL;
  if ( String2 )
  {
    for ( i = 0; ; ++i )
    {
      if ( i >= 0x40 )
        return 4201LL;
      v5 = i & 0xFFFF7FFF;
      v9 = i & 0xFFFF7FFF;
      if ( EtwpLoggerArray )
      {
        if ( v5 >= 0x40 )
        {
          if ( (unsigned int)EtwpDemuxUmTraceHandle(i, &v9) )
            continue;
          v5 = v9;
        }
        _InterlockedIncrement((volatile signed __int32 *)(EtwpLoggerArray + 16LL * v5 + 8));
        v6 = *(_QWORD *)(EtwpLoggerArray + 16LL * v5);
        if ( (v6 & 1) != 0 )
        {
          v8 = v9;
        }
        else
        {
          if ( RtlEqualUnicodeString((PUNICODE_STRING)(v6 + 136), String2, 1u) )
          {
            *a2 = v6;
            return 0LL;
          }
          v8 = i;
        }
        _InterlockedDecrement((volatile signed __int32 *)(EtwpLoggerArray + 16 * v8 + 8));
      }
    }
  }
  return 4201LL;
}
