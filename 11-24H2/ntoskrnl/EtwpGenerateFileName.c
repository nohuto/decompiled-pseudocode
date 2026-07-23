/*
 * XREFs of EtwpGenerateFileName @ 0x1409D6D84
 * Callers:
 *     EtwpStartLogger @ 0x1409D017C (EtwpStartLogger.c)
 *     EtwpFlushBufferToLogfile @ 0x1409D4C28 (EtwpFlushBufferToLogfile.c)
 *     NtTraceControl @ 0x140A82250 (NtTraceControl.c)
 * Callees:
 *     RtlStringCbPrintfW @ 0x140404170 (RtlStringCbPrintfW.c)
 *     RtlInitUnicodeString @ 0x140418050 (RtlInitUnicodeString.c)
 *     wcschr @ 0x1404FD650 (wcschr.c)
 *     wcsrchr @ 0x1404FDA40 (wcsrchr.c)
 *     wcsstr @ 0x1404FDB70 (wcsstr.c)
 *     memcmp @ 0x1406C0E10 (memcmp.c)
 *     RtlFreeAnsiString @ 0x1408B69C0 (RtlFreeAnsiString.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall EtwpGenerateFileName(unsigned __int16 *a1, volatile signed __int32 *a2, UNICODE_STRING *a3)
{
  const wchar_t *v5; // rcx
  wchar_t *v7; // rdi
  signed __int32 v8; // ebp
  __int64 v9; // r14
  wchar_t *Pool2; // rax
  wchar_t *v11; // rdi

  v5 = (const wchar_t *)*((_QWORD *)a1 + 1);
  if ( !v5 )
    return 3221225520LL;
  v7 = wcschr(v5, 0x25u);
  if ( !v7 || v7 != wcsrchr(*((const wchar_t **)a1 + 1), 0x25u) || !wcsstr(*((const wchar_t **)a1 + 1), L"%d") )
    return 3221225523LL;
  v8 = _InterlockedExchangeAdd(a2, 1u);
  v9 = a1[1];
  Pool2 = (wchar_t *)ExAllocatePool2(0x100uLL, v9 + 64, 0x50777445u);
  v11 = Pool2;
  if ( !Pool2 )
    return 3221225495LL;
  if ( RtlStringCbPrintfW(Pool2, v9 + 64, *((NTSTRSAFE_PCWSTR *)a1 + 1), (unsigned int)(v8 + 1))
    || !memcmp(*((const void **)a1 + 1), v11, *a1) )
  {
    ExFreePoolWithTag(v11, 0);
    return 3221225520LL;
  }
  RtlFreeAnsiString(a3);
  RtlInitUnicodeString(a3, v11);
  return 0LL;
}
