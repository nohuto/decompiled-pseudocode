/*
 * XREFs of EtwpGenerateFileName @ 0x140A7C3A0
 * Callers:
 *     EtwpIncrementTraceFile @ 0x14079B570 (EtwpIncrementTraceFile.c)
 *     EtwpFlushBufferToLogfile @ 0x1409912C0 (EtwpFlushBufferToLogfile.c)
 *     EtwpStartLogger @ 0x140A374DC (EtwpStartLogger.c)
 * Callees:
 *     RtlStringCbPrintfW @ 0x140404520 (RtlStringCbPrintfW.c)
 *     RtlInitUnicodeString @ 0x14043FFA0 (RtlInitUnicodeString.c)
 *     wcschr @ 0x1404FD610 (wcschr.c)
 *     wcsrchr @ 0x1404FDA00 (wcsrchr.c)
 *     wcsstr @ 0x1404FDB30 (wcsstr.c)
 *     memcmp @ 0x1406B4C10 (memcmp.c)
 *     RtlFreeAnsiString @ 0x1408F1D50 (RtlFreeAnsiString.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
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
  Pool2 = (wchar_t *)ExAllocatePool2(0x100uLL);
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
