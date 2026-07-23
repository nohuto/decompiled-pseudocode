/*
 * XREFs of EtwpGetPrivateLoggerContext @ 0x1800B69A0
 * Callers:
 *     EtwpStopUmLogger @ 0x1800B5164 (EtwpStopUmLogger.c)
 *     EtwpQueryUmLogger @ 0x1800B5544 (EtwpQueryUmLogger.c)
 *     EtwpIncrementUmLoggerFile @ 0x1800B56A0 (EtwpIncrementUmLoggerFile.c)
 *     EtwpUpdateUmLogger @ 0x1800B5774 (EtwpUpdateUmLogger.c)
 *     EtwpFlushUmLogger @ 0x1800B6F10 (EtwpFlushUmLogger.c)
 * Callees:
 *     EtwpDemuxUmTraceHandle @ 0x180090EC0 (EtwpDemuxUmTraceHandle.c)
 *     EtwpGetPrivateLoggerContextByName @ 0x1800B5E04 (EtwpGetPrivateLoggerContextByName.c)
 *     wcslen @ 0x1801292B0 (wcslen.c)
 */

__int64 __fastcall EtwpGetPrivateLoggerContext(unsigned __int16 *a1, _QWORD *a2)
{
  int v3; // ecx
  __int64 v4; // rdx
  unsigned int v5; // eax
  __int64 v6; // rdx
  __int64 result; // rax
  bool v8; // zf
  wchar_t *v9; // rcx
  size_t v10; // rax
  _UNICODE_STRING String2; // [rsp+20h] [rbp-18h] BYREF
  unsigned int v12; // [rsp+40h] [rbp+8h] BYREF

  if ( a1[72] )
  {
    v8 = a1 + 88 == 0LL;
    v9 = a1 + 88;
    *(_QWORD *)&String2.Length = 0LL;
    String2.Buffer = v9;
    if ( !v8 )
    {
      v10 = 2 * wcslen(v9);
      if ( v10 >= 0xFFFE )
        LOWORD(v10) = -4;
      String2.Length = v10;
      String2.MaximumLength = v10 + 2;
    }
    return EtwpGetPrivateLoggerContextByName(&String2, a2);
  }
  else
  {
    v3 = a1[4];
    v4 = EtwpLoggerArray;
    v5 = v3 & 0xFFFF7FFF;
    v12 = v3 & 0xFFFF7FFF;
    if ( !EtwpLoggerArray )
      return 4201LL;
    if ( v5 < 0x40 )
    {
LABEL_4:
      _InterlockedIncrement((volatile signed __int32 *)(v4 + 16LL * v5 + 8));
      v6 = *(_QWORD *)(EtwpLoggerArray + 16LL * v5);
      if ( (v6 & 1) == 0 )
      {
        *a2 = v6;
        return 0LL;
      }
      _InterlockedDecrement((volatile signed __int32 *)(EtwpLoggerArray + 16LL * v12 + 8));
      return 4201LL;
    }
    result = EtwpDemuxUmTraceHandle(v3, &v12);
    if ( !(_DWORD)result )
    {
      v5 = v12;
      v4 = EtwpLoggerArray;
      goto LABEL_4;
    }
  }
  return result;
}
