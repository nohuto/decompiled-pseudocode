/*
 * XREFs of RtlIsNameInExpression @ 0x1403474C0
 * Callers:
 *     AuthzBasepCompareUnicodeStringOperands @ 0x1403468F4 (AuthzBasepCompareUnicodeStringOperands.c)
 *     AuthzBasepCompareFQBNOperands @ 0x14045728C (AuthzBasepCompareFQBNOperands.c)
 * Callees:
 *     RtlRaiseStatus @ 0x140280B30 (RtlRaiseStatus.c)
 *     RtlpIsNameInExpressionPrivate @ 0x140347600 (RtlpIsNameInExpressionPrivate.c)
 *     RtlpUpcaseUnicodeStringPrivate @ 0x140347BD0 (RtlpUpcaseUnicodeStringPrivate.c)
 *     RtlFreeAnsiString @ 0x1408A4990 (RtlFreeAnsiString.c)
 */

BOOLEAN __stdcall RtlIsNameInExpression(
        PUNICODE_STRING Expression,
        PUNICODE_STRING Name,
        BOOLEAN IgnoreCase,
        PWCH UpcaseTable)
{
  int v5; // edi
  int v6; // eax
  BOOLEAN IsNameInExpressionPrivate; // bl
  UNICODE_STRING UnicodeString; // [rsp+30h] [rbp-18h] BYREF

  v5 = (int)Expression;
  UnicodeString = 0LL;
  if ( IgnoreCase && !UpcaseTable )
  {
    v6 = RtlpUpcaseUnicodeStringPrivate(&UnicodeString, Name);
    if ( v6 < 0 )
      RtlRaiseStatus(v6);
    Name = &UnicodeString;
    IgnoreCase = 0;
  }
  IsNameInExpressionPrivate = RtlpIsNameInExpressionPrivate(v5, (_DWORD)Name, IgnoreCase, 0, (__int64)UpcaseTable);
  if ( UnicodeString.Buffer )
    RtlFreeAnsiString(&UnicodeString);
  return IsNameInExpressionPrivate;
}
