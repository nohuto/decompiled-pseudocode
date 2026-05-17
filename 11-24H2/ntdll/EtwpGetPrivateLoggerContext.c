/*
 * XREFs of EtwpGetPrivateLoggerContext @ 0x18008DAF4
 * Callers:
 *     EtwpStopUmLogger @ 0x18008C4B4 (EtwpStopUmLogger.c)
 *     EtwpQueryUmLogger @ 0x18008C894 (EtwpQueryUmLogger.c)
 *     EtwpIncrementUmLoggerFile @ 0x18008C9F0 (EtwpIncrementUmLoggerFile.c)
 *     EtwpUpdateUmLogger @ 0x18008CAC4 (EtwpUpdateUmLogger.c)
 *     EtwpFlushUmLogger @ 0x18008E070 (EtwpFlushUmLogger.c)
 * Callees:
 *     EtwpDemuxUmTraceHandle @ 0x18003D4D0 (EtwpDemuxUmTraceHandle.c)
 *     EtwpGetPrivateLoggerContextByName @ 0x18008D154 (EtwpGetPrivateLoggerContextByName.c)
 *     wcslen @ 0x1801277D0 (wcslen.c)
 */

__int64 __fastcall EtwpGetPrivateLoggerContext(__int64 a1, _QWORD *a2)
{
  int v3; // ecx
  __int64 v4; // rdx
  unsigned int v5; // eax
  __int64 v6; // rdx
  __int64 result; // rax
  bool v8; // zf
  const wchar_t *v9; // rcx
  size_t v10; // rax
  _QWORD v11[3]; // [rsp+20h] [rbp-18h] BYREF
  unsigned int v12; // [rsp+40h] [rbp+8h] BYREF

  if ( *(_WORD *)(a1 + 144) )
  {
    v8 = a1 == -176;
    v9 = (const wchar_t *)(a1 + 176);
    v11[0] = 0LL;
    v11[1] = v9;
    if ( !v8 )
    {
      v10 = 2 * wcslen(v9);
      if ( v10 >= 0xFFFE )
        LOWORD(v10) = -4;
      LOWORD(v11[0]) = v10;
      WORD1(v11[0]) = v10 + 2;
    }
    return EtwpGetPrivateLoggerContextByName((__int64)v11, a2);
  }
  else
  {
    v3 = *(unsigned __int16 *)(a1 + 8);
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
