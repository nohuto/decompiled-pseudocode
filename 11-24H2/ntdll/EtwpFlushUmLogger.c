/*
 * XREFs of EtwpFlushUmLogger @ 0x18008E070
 * Callers:
 *     EtwProcessPrivateLoggerRequest @ 0x18008C670 (EtwProcessPrivateLoggerRequest.c)
 * Callees:
 *     EtwpQueryUmLogger @ 0x18008C894 (EtwpQueryUmLogger.c)
 *     EtwpAddInstanceIdToLogFileName @ 0x18008D82C (EtwpAddInstanceIdToLogFileName.c)
 *     EtwpGetPrivateLoggerContext @ 0x18008DAF4 (EtwpGetPrivateLoggerContext.c)
 *     EtwpSynchronizeWithLogger @ 0x18008DBE4 (EtwpSynchronizeWithLogger.c)
 *     RtlFreeAnsiString @ 0x1800B4B90 (RtlFreeAnsiString.c)
 *     EtwpBufferingModeFlush @ 0x18015C218 (EtwpBufferingModeFlush.c)
 */

__int64 __fastcall EtwpFlushUmLogger(unsigned int a1, _DWORD *a2, _DWORD *a3, __int64 a4)
{
  __int64 v8; // rcx
  __int64 result; // rax
  __int64 v10; // rsi
  unsigned int v11; // ebx
  __int64 v12; // [rsp+58h] [rbp+10h] BYREF

  *a2 = 0;
  *a3 = 176;
  v12 = 0LL;
  if ( a1 < 0xB0 )
    return 234LL;
  v8 = *(unsigned __int16 *)(a4 + 146) + 176LL;
  *(_QWORD *)(a4 + 152) = a4 + 176;
  *(_QWORD *)(a4 + 136) = a4 + v8;
  result = EtwpGetPrivateLoggerContext(a4, &v12);
  if ( !(_DWORD)result )
  {
    v10 = v12;
    if ( (*(_DWORD *)(v12 + 308) & 0x400) != 0 )
    {
      if ( !*(_WORD *)(a4 + 128) )
      {
        v11 = 2;
        goto LABEL_6;
      }
      v11 = (unsigned int)EtwpAddInstanceIdToLogFileName(a4, *(_DWORD *)(a4 + 96), (_QWORD *)(v12 + 152));
      if ( v11 )
        goto LABEL_6;
      v11 = EtwpBufferingModeFlush(v10);
      RtlFreeAnsiString((PUNICODE_STRING)(v10 + 152));
    }
    else
    {
      v11 = EtwpSynchronizeWithLogger(v12, 2);
    }
    EtwpQueryUmLogger(a1, a2, a3, a4);
LABEL_6:
    _InterlockedDecrement((volatile signed __int32 *)(EtwpLoggerArray + 16LL * *(unsigned int *)(v10 + 20) + 8));
    return v11;
  }
  return result;
}
