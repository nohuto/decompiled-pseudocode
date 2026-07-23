/*
 * XREFs of EtwpQueryUmLogger @ 0x1800A8354
 * Callers:
 *     EtwProcessPrivateLoggerRequest @ 0x1800A8130 (EtwProcessPrivateLoggerRequest.c)
 *     EtwpIncrementUmLoggerFile @ 0x1800A84B0 (EtwpIncrementUmLoggerFile.c)
 *     EtwpUpdateUmLogger @ 0x1800A8584 (EtwpUpdateUmLogger.c)
 *     EtwpFlushUmLogger @ 0x1800A9B30 (EtwpFlushUmLogger.c)
 * Callees:
 *     EtwpGetPrivateLoggerContext @ 0x1800A95B4 (EtwpGetPrivateLoggerContext.c)
 *     EtwpGetUmLoggerInfoFromContext @ 0x1800A9C5C (EtwpGetUmLoggerInfoFromContext.c)
 *     RtlCopyUnicodeString @ 0x1800D7160 (RtlCopyUnicodeString.c)
 */

__int64 __fastcall EtwpQueryUmLogger(unsigned int a1, _DWORD *a2, _DWORD *a3, __int64 a4)
{
  __int64 result; // rax
  __int64 v9; // rdi
  unsigned int v10; // ecx
  _QWORD v11[5]; // [rsp+20h] [rbp-28h] BYREF

  v11[0] = 0LL;
  result = EtwpGetPrivateLoggerContext(a4, v11);
  if ( !(_DWORD)result )
  {
    *a2 = 0;
    *a3 = 176;
    if ( a1 < 0xB0 )
    {
      _InterlockedDecrement((volatile signed __int32 *)(EtwpLoggerArray + 16LL * *(unsigned int *)(v11[0] + 20LL) + 8));
      return 234LL;
    }
    else
    {
      v9 = v11[0];
      if ( (unsigned int)*(unsigned __int16 *)(v11[0] + 138LL) + 176 < a1 )
      {
        *(_QWORD *)(a4 + 152) = a4 + 176;
        *(_WORD *)(a4 + 146) = *(_WORD *)(v9 + 138);
        RtlCopyUnicodeString((PUNICODE_STRING)(a4 + 144), (PCUNICODE_STRING)(v9 + 136));
        *a3 += *(unsigned __int16 *)(v9 + 138);
      }
      EtwpGetUmLoggerInfoFromContext(a4, v9, 0LL);
      v10 = *(unsigned __int16 *)(a4 + 146) + 176;
      if ( v10 + *(unsigned __int16 *)(v9 + 154) < a1 )
      {
        *(_QWORD *)(a4 + 136) = a4 + v10;
        *(_WORD *)(a4 + 130) = *(_WORD *)(v9 + 154);
        RtlCopyUnicodeString((PUNICODE_STRING)(a4 + 128), (PCUNICODE_STRING)(v9 + 152));
        *a3 += *(unsigned __int16 *)(v9 + 154);
      }
      *a2 = *a3;
      if ( *a3 < *(_DWORD *)a4 )
        *(_DWORD *)a4 = *a3;
      _InterlockedDecrement((volatile signed __int32 *)(EtwpLoggerArray + 16LL * *(unsigned int *)(v9 + 20) + 8));
      return 0LL;
    }
  }
  return result;
}
