/*
 * XREFs of PopSafeCopyUnicodeString @ 0x140420038
 * Callers:
 *     PopCaptureReasonContext @ 0x14041FD98 (PopCaptureReasonContext.c)
 * Callees:
 *     RtlStringCbCopyUnicodeString @ 0x1404200F0 (RtlStringCbCopyUnicodeString.c)
 *     ExRaiseDatatypeMisalignment @ 0x14085AF60 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall PopSafeCopyUnicodeString(PCUNICODE_STRING SourceString, wchar_t **a2, __int64 a3, char a4)
{
  wchar_t *v4; // rsi
  __int64 Length; // rcx
  __int64 v8; // rax

  v4 = *a2;
  Length = SourceString->Length;
  if ( Length + 2 > (unsigned __int64)(a3 - (_QWORD)*a2) )
    return 3221225485LL;
  if ( a4 && (_WORD)Length && ((__int64)SourceString->Buffer & 1) != 0 )
    ExRaiseDatatypeMisalignment();
  if ( RtlStringCbCopyUnicodeString(v4, Length + 2, SourceString) < 0 )
    return 3221225485LL;
  v8 = -1LL;
  do
    ++v8;
  while ( v4[v8] );
  if ( SourceString->Length != 2 * v8 )
    return 3221225485LL;
  *a2 += v8 + 1;
  return 0LL;
}
