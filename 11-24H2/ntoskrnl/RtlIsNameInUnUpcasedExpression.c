/*
 * XREFs of RtlIsNameInUnUpcasedExpression @ 0x140325FB0
 * Callers:
 *     <none>
 * Callees:
 *     RtlRaiseStatus @ 0x1402360C0 (RtlRaiseStatus.c)
 *     RtlpIsNameInExpressionPrivate @ 0x140326070 (RtlpIsNameInExpressionPrivate.c)
 *     RtlpUpcaseUnicodeStringPrivate @ 0x1403265D0 (RtlpUpcaseUnicodeStringPrivate.c)
 *     RtlFreeAnsiString @ 0x1408B69C0 (RtlFreeAnsiString.c)
 */

BOOLEAN __cdecl RtlIsNameInUnUpcasedExpression(
        PUNICODE_STRING Expression,
        PUNICODE_STRING Name,
        BOOLEAN IgnoreCase,
        PWCH UpcaseTable)
{
  PWCH v4; // rbx
  NTSTATUS v6; // eax
  NTSTATUS v7; // eax
  BOOLEAN IsNameInExpressionPrivate; // bl
  UNICODE_STRING v10; // [rsp+30h] [rbp-28h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+40h] [rbp-18h] BYREF

  v4 = UpcaseTable;
  *(_QWORD *)&v10.Length = 0LL;
  *(_QWORD *)&UnicodeString.Length = 0LL;
  v10.Buffer = 0LL;
  UnicodeString.Buffer = 0LL;
  if ( IgnoreCase && !UpcaseTable )
  {
    v6 = RtlpUpcaseUnicodeStringPrivate(&v10, Name);
    if ( v6 < 0 )
      RtlRaiseStatus(v6);
    v7 = RtlpUpcaseUnicodeStringPrivate(&UnicodeString, Expression);
    if ( v7 < 0 )
      RtlRaiseStatus(v7);
    Name = &v10;
    Expression = &UnicodeString;
    IgnoreCase = 0;
  }
  LOBYTE(UpcaseTable) = 1;
  IsNameInExpressionPrivate = RtlpIsNameInExpressionPrivate(
                                (_DWORD)Expression,
                                (_DWORD)Name,
                                IgnoreCase,
                                (_DWORD)UpcaseTable,
                                (__int64)v4);
  if ( v10.Buffer )
    RtlFreeAnsiString(&v10);
  if ( UnicodeString.Buffer )
    RtlFreeAnsiString(&UnicodeString);
  return IsNameInExpressionPrivate;
}
