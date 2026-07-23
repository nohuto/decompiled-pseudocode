/*
 * XREFs of RtlIsNameInUnUpcasedExpression @ 0x180067110
 * Callers:
 *     <none>
 * Callees:
 *     RtlpIsNameInExpressionPrivate @ 0x180068918 (RtlpIsNameInExpressionPrivate.c)
 *     RtlpUpcaseUnicodeStringPrivate @ 0x180068FD4 (RtlpUpcaseUnicodeStringPrivate.c)
 *     RtlRaiseStatus @ 0x18007C3F0 (RtlRaiseStatus.c)
 *     RtlFreeAnsiString @ 0x1800832E0 (RtlFreeAnsiString.c)
 */

BOOLEAN __cdecl RtlIsNameInUnUpcasedExpression(
        PUNICODE_STRING Expression,
        PUNICODE_STRING Name,
        BOOLEAN IgnoreCase,
        PWCH UpcaseTable)
{
  PWCH v4; // rdi
  NTSTATUS v6; // eax
  NTSTATUS v7; // eax
  BOOLEAN IsNameInExpressionPrivate; // bl
  _UNICODE_STRING UnicodeString; // [rsp+30h] [rbp-28h] BYREF
  _UNICODE_STRING v11; // [rsp+40h] [rbp-18h] BYREF

  v4 = UpcaseTable;
  *(_QWORD *)&UnicodeString.Length = 0LL;
  *(_QWORD *)&v11.Length = 0LL;
  UnicodeString.Buffer = 0LL;
  v11.Buffer = 0LL;
  if ( IgnoreCase && !UpcaseTable )
  {
    v6 = RtlpUpcaseUnicodeStringPrivate(&UnicodeString, Name);
    if ( v6 < 0 )
      RtlRaiseStatus(v6);
    v7 = RtlpUpcaseUnicodeStringPrivate(&v11, Expression);
    if ( v7 < 0 )
      RtlRaiseStatus(v7);
    Name = &UnicodeString;
    Expression = &v11;
    IgnoreCase = 0;
  }
  LOBYTE(UpcaseTable) = 1;
  IsNameInExpressionPrivate = RtlpIsNameInExpressionPrivate(
                                (_DWORD)Expression,
                                (_DWORD)Name,
                                IgnoreCase,
                                (_DWORD)UpcaseTable,
                                (__int64)v4);
  if ( UnicodeString.Buffer )
    RtlFreeAnsiString(&UnicodeString);
  if ( v11.Buffer )
    RtlFreeAnsiString(&v11);
  return IsNameInExpressionPrivate;
}
