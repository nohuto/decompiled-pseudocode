/*
 * XREFs of EtwpAcquireLoggerContext @ 0x140926CDC
 * Callers:
 *     EtwpTransitionToRealtime @ 0x14064F408 (EtwpTransitionToRealtime.c)
 *     EtwpIncrementTraceFile @ 0x1407AA940 (EtwpIncrementTraceFile.c)
 *     EtwpStopTrace @ 0x1408325A4 (EtwpStopTrace.c)
 *     EtwpUpdateTrace @ 0x14083311C (EtwpUpdateTrace.c)
 *     EtwpFlushTrace @ 0x140833B94 (EtwpFlushTrace.c)
 *     EtwpQueryTrace @ 0x1408347C0 (EtwpQueryTrace.c)
 * Callees:
 *     ExReleaseRundownProtectionCacheAwareEx @ 0x140259600 (ExReleaseRundownProtectionCacheAwareEx.c)
 *     KeReleaseMutex @ 0x1403379B0 (KeReleaseMutex.c)
 *     KeWaitForSingleObject @ 0x14033E960 (KeWaitForSingleObject.c)
 *     EtwpCaptureString @ 0x140832F00 (EtwpCaptureString.c)
 *     EtwpAcquireLoggerContextByLoggerId @ 0x140926F50 (EtwpAcquireLoggerContextByLoggerId.c)
 *     RtlEqualUnicodeString @ 0x140927050 (RtlEqualUnicodeString.c)
 *     ExFreePool @ 0x140B72CB0 (ExFreePool.c)
 */

__int64 __fastcall EtwpAcquireLoggerContext(__int64 a1, __int64 a2, __int64 *a3)
{
  unsigned __int8 *v4; // r9
  __int64 v6; // r8
  __int64 v8; // rdx
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 result; // rax
  unsigned int i; // edi
  __int64 v13; // rax
  unsigned int *v14; // rbx
  wchar_t *Buffer; // rcx
  UNICODE_STRING String2; // [rsp+30h] [rbp-28h] BYREF

  v4 = (unsigned __int8 *)(a1 + 4504);
  v6 = 0xFFFFFFFFLL;
  v8 = 0xFFFFFFFFLL;
  v9 = *(_QWORD *)(a2 + 24) - SystemTraceControlGuid;
  *a3 = 0LL;
  if ( !v9 )
    v9 = *(_QWORD *)(a2 + 32) - 0x3969A8086000829ALL;
  if ( !v9 )
    v8 = *v4;
  if ( (_DWORD)v8 == *v4 || !*(_WORD *)(a2 + 144) )
  {
    if ( (_DWORD)v8 == -1 )
    {
      v8 = *(unsigned __int16 *)(a2 + 8);
      if ( (_DWORD)v8 == 0xFFFF )
        v8 = *v4;
      if ( (unsigned int)v8 >= *(_DWORD *)(a1 + 16) )
        return 3221225480LL;
    }
    LOBYTE(v6) = 1;
    v10 = EtwpAcquireLoggerContextByLoggerId(a1, v8, v6);
    *a3 = v10;
    return v10 == 0 ? 0xC0000296 : 0;
  }
  String2 = 0LL;
  result = EtwpCaptureString((unsigned __int16 *)(a2 + 144), &String2);
  if ( (int)result >= 0 )
  {
    for ( i = 0; i < *(_DWORD *)(a1 + 16); ++i )
    {
      v13 = EtwpAcquireLoggerContextByLoggerId(a1, i, 0LL);
      v14 = (unsigned int *)v13;
      if ( v13 )
      {
        if ( RtlEqualUnicodeString((PCUNICODE_STRING)(v13 + 136), &String2, 1u) )
        {
          KeWaitForSingleObject(v14 + 158, Executive, 0, 0, 0LL);
          if ( v14[80] )
            goto LABEL_22;
          KeReleaseMutex((PRKMUTEX)(v14 + 158), 0);
        }
        ExReleaseRundownProtectionCacheAwareEx(
          *(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(*((_QWORD *)v14 + 170) + 704LL) + 8LL * *v14),
          1u);
      }
    }
    v14 = 0LL;
LABEL_22:
    Buffer = String2.Buffer;
    *a3 = (__int64)v14;
    if ( Buffer )
      ExFreePool(Buffer);
    v10 = *a3;
    return v10 == 0 ? 0xC0000296 : 0;
  }
  return result;
}
