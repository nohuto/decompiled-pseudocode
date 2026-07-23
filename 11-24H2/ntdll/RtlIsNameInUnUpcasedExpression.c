/*
 * XREFs of RtlIsNameInUnUpcasedExpression @ 0x18010F900
 * Callers:
 *     <none>
 * Callees:
 *     RtlRaiseStatus @ 0x1800417E0 (RtlRaiseStatus.c)
 *     RtlpIsNameInExpressionPrivate @ 0x18007B878 (RtlpIsNameInExpressionPrivate.c)
 *     RtlpUpcaseUnicodeStringPrivate @ 0x18007BEB4 (RtlpUpcaseUnicodeStringPrivate.c)
 *     RtlFreeAnsiString @ 0x180081430 (RtlFreeAnsiString.c)
 */

// local variable allocation has failed, the output may be wrong!
BOOLEAN __cdecl RtlIsNameInUnUpcasedExpression(
        PUNICODE_STRING Expression,
        PUNICODE_STRING Name,
        BOOLEAN IgnoreCase,
        PWCH UpcaseTable)
{
  NTSTATUS v6; // eax
  __int64 v7; // r8
  NTSTATUS v8; // eax
  BOOLEAN IsNameInExpressionPrivate; // bl
  _UNICODE_STRING UnicodeString; // [rsp+30h] [rbp-28h] BYREF
  _UNICODE_STRING v12; // [rsp+40h] [rbp-18h] BYREF

  *(_QWORD *)&UnicodeString.Length = 0LL;
  *(_QWORD *)&v12.Length = 0LL;
  UnicodeString.Buffer = 0LL;
  v12.Buffer = 0LL;
  if ( IgnoreCase && !UpcaseTable )
  {
    v6 = RtlpUpcaseUnicodeStringPrivate((__int64)&UnicodeString, &Name->Length, IgnoreCase);
    if ( v6 < 0 )
      RtlRaiseStatus(v6);
    v8 = RtlpUpcaseUnicodeStringPrivate((__int64)&v12, &Expression->Length, v7);
    if ( v8 < 0 )
      RtlRaiseStatus(v8);
    Name = &UnicodeString;
    Expression = &v12;
    IgnoreCase = 0;
  }
  IsNameInExpressionPrivate = RtlpIsNameInExpressionPrivate(
                                &Expression->Length,
                                &Name->Length,
                                IgnoreCase,
                                1,
                                (__int64)UpcaseTable);
  if ( UnicodeString.Buffer )
    RtlFreeAnsiString(&UnicodeString);
  if ( v12.Buffer )
    RtlFreeAnsiString(&v12);
  return IsNameInExpressionPrivate;
}
